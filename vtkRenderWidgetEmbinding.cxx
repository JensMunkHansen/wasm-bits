// JavaScript wrapper for vtkRenderWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkRenderWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkRenderWidget.h"

template<> void emscripten::internal::raw_destructor<vtkRenderWidget>(vtkRenderWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRenderWidget_class) {
  emscripten::class_<vtkRenderWidget, emscripten::base<vtkObject>>("vtkRenderWidget")
    .smart_ptr<vtkSmartPointer<vtkRenderWidget>>("vtkSmartPointer<vtkRenderWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRenderWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRenderWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRenderWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRenderWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRenderWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPosition", &vtkRenderWidget::SetPosition)
    .function("GetPosition", &vtkRenderWidget::GetPosition)
    .function("SetSize", &vtkRenderWidget::SetSize)
    .function("GetSize", &vtkRenderWidget::GetSize)
    .function("SetName", &vtkRenderWidget::SetName)
    .function("GetName", &vtkRenderWidget::GetName)
    .function("Render", &vtkRenderWidget::Render)
    .function("MakeCurrent", &vtkRenderWidget::MakeCurrent)
    .function("Initialize", &vtkRenderWidget::Initialize)
    .function("Start", &vtkRenderWidget::Start);
}
