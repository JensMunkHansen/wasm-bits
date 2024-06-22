// JavaScript wrapper for vtkAnimateModes with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkAnimateModesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkAnimateModes.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAnimateModes.h"

template<> void emscripten::internal::raw_destructor<vtkAnimateModes>(vtkAnimateModes * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAnimateModes_class) {
  emscripten::class_<vtkAnimateModes, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkAnimateModes")
    .smart_ptr<vtkSmartPointer<vtkAnimateModes>>("vtkSmartPointer<vtkAnimateModes>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAnimateModes>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAnimateModes::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAnimateModes& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAnimateModes::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAnimateModes::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAnimateModes::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAnimateModes& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetAnimateVibrations", &vtkAnimateModes::SetAnimateVibrations)
    .function("GetAnimateVibrations", &vtkAnimateModes::GetAnimateVibrations)
    .function("AnimateVibrationsOn", &vtkAnimateModes::AnimateVibrationsOn)
    .function("AnimateVibrationsOff", &vtkAnimateModes::AnimateVibrationsOff)
    .function("SetModeShape", &vtkAnimateModes::SetModeShape)
    .function("GetModeShapeMinValue", &vtkAnimateModes::GetModeShapeMinValue)
    .function("GetModeShapeMaxValue", &vtkAnimateModes::GetModeShapeMaxValue)
    .function("GetModeShape", &vtkAnimateModes::GetModeShape)
    .function("SetDisplacementPreapplied", &vtkAnimateModes::SetDisplacementPreapplied)
    .function("GetDisplacementPreapplied", &vtkAnimateModes::GetDisplacementPreapplied)
    .function("DisplacementPreappliedOn", &vtkAnimateModes::DisplacementPreappliedOn)
    .function("DisplacementPreappliedOff", &vtkAnimateModes::DisplacementPreappliedOff)
    .function("SetDisplacementMagnitude", &vtkAnimateModes::SetDisplacementMagnitude)
    .function("GetDisplacementMagnitude", &vtkAnimateModes::GetDisplacementMagnitude);
}
