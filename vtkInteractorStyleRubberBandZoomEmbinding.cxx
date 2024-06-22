// JavaScript wrapper for vtkInteractorStyleRubberBandZoom with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractionStyle.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractorStyleRubberBandZoomEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Style/vtkInteractorStyleRubberBandZoom.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleRubberBandZoom.h"

template<> void emscripten::internal::raw_destructor<vtkInteractorStyleRubberBandZoom>(vtkInteractorStyleRubberBandZoom * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyleRubberBandZoom_class) {
  emscripten::class_<vtkInteractorStyleRubberBandZoom, emscripten::base<vtkInteractorStyle>>("vtkInteractorStyleRubberBandZoom")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyleRubberBandZoom>>("vtkSmartPointer<vtkInteractorStyleRubberBandZoom>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkInteractorStyleRubberBandZoom>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleRubberBandZoom::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyleRubberBandZoom& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyleRubberBandZoom::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyleRubberBandZoom::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleRubberBandZoom::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyleRubberBandZoom& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLockAspectToViewport", &vtkInteractorStyleRubberBandZoom::SetLockAspectToViewport)
    .function("GetLockAspectToViewport", &vtkInteractorStyleRubberBandZoom::GetLockAspectToViewport)
    .function("LockAspectToViewportOn", &vtkInteractorStyleRubberBandZoom::LockAspectToViewportOn)
    .function("LockAspectToViewportOff", &vtkInteractorStyleRubberBandZoom::LockAspectToViewportOff)
    .function("SetCenterAtStartPosition", &vtkInteractorStyleRubberBandZoom::SetCenterAtStartPosition)
    .function("GetCenterAtStartPosition", &vtkInteractorStyleRubberBandZoom::GetCenterAtStartPosition)
    .function("CenterAtStartPositionOn", &vtkInteractorStyleRubberBandZoom::CenterAtStartPositionOn)
    .function("CenterAtStartPositionOff", &vtkInteractorStyleRubberBandZoom::CenterAtStartPositionOff)
    .function("SetUseDollyForPerspectiveProjection", &vtkInteractorStyleRubberBandZoom::SetUseDollyForPerspectiveProjection)
    .function("GetUseDollyForPerspectiveProjection", &vtkInteractorStyleRubberBandZoom::GetUseDollyForPerspectiveProjection)
    .function("UseDollyForPerspectiveProjectionOn", &vtkInteractorStyleRubberBandZoom::UseDollyForPerspectiveProjectionOn)
    .function("UseDollyForPerspectiveProjectionOff", &vtkInteractorStyleRubberBandZoom::UseDollyForPerspectiveProjectionOff)
    .function("OnMouseMove", &vtkInteractorStyleRubberBandZoom::OnMouseMove)
    .function("OnLeftButtonDown", &vtkInteractorStyleRubberBandZoom::OnLeftButtonDown)
    .function("OnLeftButtonUp", &vtkInteractorStyleRubberBandZoom::OnLeftButtonUp);
}
