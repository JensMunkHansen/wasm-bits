// JavaScript wrapper for vtkClipDataSet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkClipDataSetEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkClipDataSet.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitFunction.h"
#include "vtkUnstructuredGrid.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkClipDataSet.h"

template<> void emscripten::internal::raw_destructor<vtkClipDataSet>(vtkClipDataSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkClipDataSet_class) {
  emscripten::class_<vtkClipDataSet, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkClipDataSet")
    .smart_ptr<vtkSmartPointer<vtkClipDataSet>>("vtkSmartPointer<vtkClipDataSet>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkClipDataSet>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClipDataSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkClipDataSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkClipDataSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkClipDataSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClipDataSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkClipDataSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetValue", &vtkClipDataSet::SetValue)
    .function("GetValue", &vtkClipDataSet::GetValue)
    .function("SetUseValueAsOffset", &vtkClipDataSet::SetUseValueAsOffset)
    .function("GetUseValueAsOffset", &vtkClipDataSet::GetUseValueAsOffset)
    .function("UseValueAsOffsetOn", &vtkClipDataSet::UseValueAsOffsetOn)
    .function("UseValueAsOffsetOff", &vtkClipDataSet::UseValueAsOffsetOff)
    .function("SetInsideOut", &vtkClipDataSet::SetInsideOut)
    .function("GetInsideOut", &vtkClipDataSet::GetInsideOut)
    .function("InsideOutOn", &vtkClipDataSet::InsideOutOn)
    .function("InsideOutOff", &vtkClipDataSet::InsideOutOff)
    .function("SetClipFunction", &vtkClipDataSet::SetClipFunction, emscripten::allow_raw_pointers())
    .function("GetClipFunction", &vtkClipDataSet::GetClipFunction, emscripten::allow_raw_pointers())
    .function("SetGenerateClipScalars", &vtkClipDataSet::SetGenerateClipScalars)
    .function("GetGenerateClipScalars", &vtkClipDataSet::GetGenerateClipScalars)
    .function("GenerateClipScalarsOn", &vtkClipDataSet::GenerateClipScalarsOn)
    .function("GenerateClipScalarsOff", &vtkClipDataSet::GenerateClipScalarsOff)
    .function("SetGenerateClippedOutput", &vtkClipDataSet::SetGenerateClippedOutput)
    .function("GetGenerateClippedOutput", &vtkClipDataSet::GetGenerateClippedOutput)
    .function("GenerateClippedOutputOn", &vtkClipDataSet::GenerateClippedOutputOn)
    .function("GenerateClippedOutputOff", &vtkClipDataSet::GenerateClippedOutputOff)
    .function("SetMergeTolerance", &vtkClipDataSet::SetMergeTolerance)
    .function("GetMergeToleranceMinValue", &vtkClipDataSet::GetMergeToleranceMinValue)
    .function("GetMergeToleranceMaxValue", &vtkClipDataSet::GetMergeToleranceMaxValue)
    .function("GetMergeTolerance", &vtkClipDataSet::GetMergeTolerance)
    .function("GetClippedOutput", &vtkClipDataSet::GetClippedOutput, emscripten::allow_raw_pointers())
    .function("SetLocator", &vtkClipDataSet::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkClipDataSet::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkClipDataSet::CreateDefaultLocator)
    .function("GetMTime", &vtkClipDataSet::GetMTime)
    .function("SetOutputPointsPrecision", &vtkClipDataSet::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecisionMinValue", &vtkClipDataSet::GetOutputPointsPrecisionMinValue)
    .function("GetOutputPointsPrecisionMaxValue", &vtkClipDataSet::GetOutputPointsPrecisionMaxValue)
    .function("GetOutputPointsPrecision", &vtkClipDataSet::GetOutputPointsPrecision)
    .function("GetStableClipNonLinear", &vtkClipDataSet::GetStableClipNonLinear)
    .function("SetStableClipNonLinear", &vtkClipDataSet::SetStableClipNonLinear)
    .function("StableClipNonLinearOn", &vtkClipDataSet::StableClipNonLinearOn)
    .function("StableClipNonLinearOff", &vtkClipDataSet::StableClipNonLinearOff);
}
