#include "Viewer.h"

#include <vtkCamera.h>
#include <vtkRenderWindow.h>
#include <vtkRendererCollection.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkPolyDataMapper.h>
#include <vtkProperty.h>
#include <vtkInteractorStyleSwitch.h>
#include <vtkActor.h>
#include <vtkConeSource.h>
#include <vtkWebAssemblyOpenGLRenderWindow.h>
#include <vtkWebAssemblyRenderWindowInteractor.h>

#include <iostream>

vtkStandardNewMacro(vtkViewer);

int vtkViewer::Count = 0;

vtkViewer::vtkViewer() {
  Initialized = false;

  // When disabling this, JavaScript must have a propert message loop
  //vtkRenderWindowInteractor::InteractorManagesTheEventLoop = false;
  
}

vtkViewer::~vtkViewer() {}

void vtkViewer::Initialize(const std::string& canvasId) {
  if (!Initialized) {
    
    auto* p = vtkWebAssemblyOpenGLRenderWindow::SafeDownCast(this->Window);
    auto _canvasId = "#" + canvasId;
    if (p) {
      p->SetCanvasId(_canvasId.c_str());
    }
    auto* q = vtkWebAssemblyRenderWindowInteractor::SafeDownCast(this->Interactor);
    if (q) {
      q->SetCanvasId(_canvasId.c_str());
    }

    this->Window->AddRenderer(this->Renderer);
    this->Window->SetInteractor(this->Interactor);
    // set the current style to TrackBallCamera. Default is joystick
    if (auto iStyle =
	vtkInteractorStyle::SafeDownCast(this->Interactor->GetInteractorStyle())) {
      if (auto switchStyle = vtkInteractorStyleSwitch::SafeDownCast(iStyle)) {
	switchStyle->SetCurrentStyleToTrackballCamera();
      }
    }
    Initialized = true;
  }
}

void vtkViewer::AddData() {
  // clear previous actors.
  this->Renderer->RemoveAllViewProps();

  vtkNew<vtkConeSource> coneSrc;
  coneSrc->SetResolution(10);
  coneSrc->Update();
  vtkPolyData *cone = coneSrc->GetOutput();

  vtkNew<vtkPolyDataMapper> mapper;
  mapper->SetInputData(cone);

  vtkNew<vtkActor> actor;
  actor->SetMapper(mapper);
  actor->GetProperty()->SetEdgeVisibility(1);
  if (vtkViewer::Count == 0) {
    actor->GetProperty()->SetColor(1,0,0);
    vtkViewer::Count++;
  } else {
    actor->GetProperty()->SetColor(0,1,0);
  }
				 
  mapper->Update();
  this->Renderer->AddActor(actor);
}
  
void vtkViewer::PrintSelf(ostream& os, vtkIndent indent) {
  Superclass::PrintSelf(os, indent);
}

int vtkViewer::Run() {
  this->Interactor->UpdateSize(300, 300);
  this->Renderer->GetActiveCamera()->Elevation(30.0);
  this->Renderer->GetActiveCamera()->Azimuth(-40.0);
  this->Renderer->GetActiveCamera()->Zoom(3.0);
  this->Renderer->GetActiveCamera()->Roll(10.0);
  this->Renderer->SetBackground(1.0, 1.0, 1.0);
  this->Renderer->ResetCamera();
  std::cout << this->Window->GetClassName() << std::endl;
  this->Window->Render();
  this->Interactor->Start();
  return 0;
  
}

void vtkViewer::ResetView() {
  std::cout << __func__ << std::endl;
  auto ren = this->Window->GetRenderers()->GetFirstRenderer();
  if (ren != nullptr) {
    ren->ResetCamera();
  }
}

void vtkViewer::SetSize(int width, int height)
{
  std::cout << __func__ << width << ',' << height << std::endl;
  this->Interactor->UpdateSize(width, height);
}

void vtkViewer::Render() {
  this->Window->Render();
}

#ifdef __EMSCRIPTEN__

#include <emscripten/bind.h>

namespace emscripten {
// Teaches emscripten to work with vtkSmartPointer. All vtkObjects will
// be constructed through vtkSmartPointer<T>::New
template <typename T> struct smart_ptr_trait<vtkSmartPointer<T>> {
  using pointer_type = vtkSmartPointer<T>;
  using element_type = T;

  static sharing_policy get_sharing_policy() {
    // Intrusive because element_type is a vtkObject derived instance which
    // keeps reference count.
    return sharing_policy::INTRUSIVE;
  }

  static element_type *get(const pointer_type &p) { return p.Get(); }

  static pointer_type share(const pointer_type &r, T *ptr) {
    return pointer_type(ptr);
  }

  static pointer_type *construct_null() { return new pointer_type; }
};
} // namespace emscripten

#define vtkAddDestructor(cname)                                                \
  template <> void emscripten::internal::raw_destructor<cname>(cname * ptr) {  \
    ptr->Delete();                                                             \
  }

vtkAddDestructor(vtkObjectBase);
vtkAddDestructor(vtkObject);
vtkAddDestructor(vtkViewer);
// Similar to std::make_shared<T>
template <typename T> vtkSmartPointer<T> MakeVTKSmartPtr() {
  return vtkSmartPointer<T>::New();
}

EMSCRIPTEN_BINDINGS(ViewerJSBindings) {
  emscripten::class_<vtkObjectBase>("vtkObjectBase");
  emscripten::class_<vtkObject, emscripten::base<vtkObjectBase>>("vtkObject")
    .smart_ptr<vtkSmartPointer<vtkObject>>("vtkSmartPointer<vtkObject>")
    .constructor(&MakeVTKSmartPtr<vtkObject>);
  emscripten::class_<vtkViewer, emscripten::base<vtkObject>>("vtkViewer")
    .smart_ptr<vtkSmartPointer<vtkViewer>>("vtkSmartPointer<vtkViewer>")
    .constructor(&MakeVTKSmartPtr<vtkViewer>)
    .function("initialize", &vtkViewer::Initialize)
    .function("addData", &vtkViewer::AddData)
    .function("resetView", &vtkViewer::ResetView)
    .function("setSize", &vtkViewer::SetSize)
    .function("run", &vtkViewer::Run)
    .function("render", &vtkViewer::Render);
}
#endif

