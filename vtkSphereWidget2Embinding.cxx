// JavaScript wrapper for vtkSphereWidget2 with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkSphereWidget2Embinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkSphereWidget2.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSphereRepresentation.h"
#include "vtkSphereWidget2.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkSphereWidget2_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkSphereWidget2>(vtkSphereWidget2 * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSphereWidget2_class) {
  emscripten::class_<vtkSphereWidget2, emscripten::base<vtkAbstractWidget>>("vtkSphereWidget2")
    .smart_ptr<vtkSmartPointer<vtkSphereWidget2>>("vtkSmartPointer<vtkSphereWidget2>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSphereWidget2>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphereWidget2::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSphereWidget2& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSphereWidget2::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSphereWidget2::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphereWidget2::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSphereWidget2& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkSphereWidget2::SetRepresentation, emscripten::allow_raw_pointers())
    .function("SetTranslationEnabled", &vtkSphereWidget2::SetTranslationEnabled)
    .function("GetTranslationEnabled", &vtkSphereWidget2::GetTranslationEnabled)
    .function("TranslationEnabledOn", &vtkSphereWidget2::TranslationEnabledOn)
    .function("TranslationEnabledOff", &vtkSphereWidget2::TranslationEnabledOff)
    .function("SetScalingEnabled", &vtkSphereWidget2::SetScalingEnabled)
    .function("GetScalingEnabled", &vtkSphereWidget2::GetScalingEnabled)
    .function("ScalingEnabledOn", &vtkSphereWidget2::ScalingEnabledOn)
    .function("ScalingEnabledOff", &vtkSphereWidget2::ScalingEnabledOff)
    .function("CreateDefaultRepresentation", &vtkSphereWidget2::CreateDefaultRepresentation)
    .function("SetEnabled", &vtkSphereWidget2::SetEnabled);
}
