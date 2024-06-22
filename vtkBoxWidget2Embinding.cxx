// JavaScript wrapper for vtkBoxWidget2 with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkBoxWidget2Embinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkBoxWidget2.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBoxRepresentation.h"
#include "vtkBoxWidget2.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkBoxWidget2_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkBoxWidget2>(vtkBoxWidget2 * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBoxWidget2_class) {
  emscripten::class_<vtkBoxWidget2, emscripten::base<vtkAbstractWidget>>("vtkBoxWidget2")
    .smart_ptr<vtkSmartPointer<vtkBoxWidget2>>("vtkSmartPointer<vtkBoxWidget2>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBoxWidget2>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBoxWidget2::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBoxWidget2& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBoxWidget2::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBoxWidget2::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBoxWidget2::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBoxWidget2& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkBoxWidget2::SetRepresentation, emscripten::allow_raw_pointers())
    .function("SetTranslationEnabled", &vtkBoxWidget2::SetTranslationEnabled)
    .function("GetTranslationEnabled", &vtkBoxWidget2::GetTranslationEnabled)
    .function("TranslationEnabledOn", &vtkBoxWidget2::TranslationEnabledOn)
    .function("TranslationEnabledOff", &vtkBoxWidget2::TranslationEnabledOff)
    .function("SetScalingEnabled", &vtkBoxWidget2::SetScalingEnabled)
    .function("GetScalingEnabled", &vtkBoxWidget2::GetScalingEnabled)
    .function("ScalingEnabledOn", &vtkBoxWidget2::ScalingEnabledOn)
    .function("ScalingEnabledOff", &vtkBoxWidget2::ScalingEnabledOff)
    .function("SetRotationEnabled", &vtkBoxWidget2::SetRotationEnabled)
    .function("GetRotationEnabled", &vtkBoxWidget2::GetRotationEnabled)
    .function("RotationEnabledOn", &vtkBoxWidget2::RotationEnabledOn)
    .function("RotationEnabledOff", &vtkBoxWidget2::RotationEnabledOff)
    .function("SetMoveFacesEnabled", &vtkBoxWidget2::SetMoveFacesEnabled)
    .function("GetMoveFacesEnabled", &vtkBoxWidget2::GetMoveFacesEnabled)
    .function("MoveFacesEnabledOn", &vtkBoxWidget2::MoveFacesEnabledOn)
    .function("MoveFacesEnabledOff", &vtkBoxWidget2::MoveFacesEnabledOff)
    .function("CreateDefaultRepresentation", &vtkBoxWidget2::CreateDefaultRepresentation)
    .function("SetEnabled", &vtkBoxWidget2::SetEnabled);
}
