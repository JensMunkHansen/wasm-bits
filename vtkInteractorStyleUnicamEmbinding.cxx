// JavaScript wrapper for vtkInteractorStyleUnicam with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractionStyle.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractorStyleUnicamEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Style/vtkInteractorStyleUnicam.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleUnicam.h"

template<> void emscripten::internal::raw_destructor<vtkInteractorStyleUnicam>(vtkInteractorStyleUnicam * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyleUnicam_class) {
  emscripten::class_<vtkInteractorStyleUnicam, emscripten::base<vtkInteractorStyle>>("vtkInteractorStyleUnicam")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyleUnicam>>("vtkSmartPointer<vtkInteractorStyleUnicam>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkInteractorStyleUnicam>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleUnicam::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyleUnicam& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyleUnicam::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyleUnicam::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleUnicam::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyleUnicam& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWorldUpVector", emscripten::select_overload<void(vtkInteractorStyleUnicam&, double, double, double)>([](vtkInteractorStyleUnicam& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetWorldUpVector( arg_0, arg_1, arg_2); }))
    .function("OnMouseMove", &vtkInteractorStyleUnicam::OnMouseMove)
    .function("OnLeftButtonDown", &vtkInteractorStyleUnicam::OnLeftButtonDown)
    .function("OnLeftButtonUp", &vtkInteractorStyleUnicam::OnLeftButtonUp)
    .function("OnLeftButtonMove", &vtkInteractorStyleUnicam::OnLeftButtonMove)
    .function("OnTimer", &vtkInteractorStyleUnicam::OnTimer);
}
EMSCRIPTEN_BINDINGS(vtkInteractionStyle_vtkInteractorStyleUnicam_0_2_constants) {
  const struct { const char *name; int value; }
    constants[8] = {
      { "vtkInteractorStyleUnicam_NONE", vtkInteractorStyleUnicam::NONE },
      { "vtkInteractorStyleUnicam_BUTTON_LEFT", vtkInteractorStyleUnicam::BUTTON_LEFT },
      { "vtkInteractorStyleUnicam_BUTTON_MIDDLE", vtkInteractorStyleUnicam::BUTTON_MIDDLE },
      { "vtkInteractorStyleUnicam_BUTTON_RIGHT", vtkInteractorStyleUnicam::BUTTON_RIGHT },
      { "vtkInteractorStyleUnicam_CAM_INT_ROT", vtkInteractorStyleUnicam::CAM_INT_ROT },
      { "vtkInteractorStyleUnicam_CAM_INT_CHOOSE", vtkInteractorStyleUnicam::CAM_INT_CHOOSE },
      { "vtkInteractorStyleUnicam_CAM_INT_PAN", vtkInteractorStyleUnicam::CAM_INT_PAN },
      { "vtkInteractorStyleUnicam_CAM_INT_DOLLY", vtkInteractorStyleUnicam::CAM_INT_DOLLY },
  };
  for (int c = 0; c < 8; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
