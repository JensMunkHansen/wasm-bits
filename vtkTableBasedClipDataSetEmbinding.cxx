// JavaScript wrapper for vtkTableBasedClipDataSet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkTableBasedClipDataSetEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkTableBasedClipDataSet.h
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
#include "vtkTableBasedClipDataSet.h"

template<> void emscripten::internal::raw_destructor<vtkTableBasedClipDataSet>(vtkTableBasedClipDataSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTableBasedClipDataSet_class) {
  emscripten::class_<vtkTableBasedClipDataSet, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkTableBasedClipDataSet")
    .smart_ptr<vtkSmartPointer<vtkTableBasedClipDataSet>>("vtkSmartPointer<vtkTableBasedClipDataSet>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTableBasedClipDataSet>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableBasedClipDataSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTableBasedClipDataSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTableBasedClipDataSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTableBasedClipDataSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableBasedClipDataSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTableBasedClipDataSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkTableBasedClipDataSet::GetMTime)
    .function("SetInsideOut", &vtkTableBasedClipDataSet::SetInsideOut)
    .function("GetInsideOut", &vtkTableBasedClipDataSet::GetInsideOut)
    .function("InsideOutOn", &vtkTableBasedClipDataSet::InsideOutOn)
    .function("InsideOutOff", &vtkTableBasedClipDataSet::InsideOutOff)
    .function("SetValue", &vtkTableBasedClipDataSet::SetValue)
    .function("GetValue", &vtkTableBasedClipDataSet::GetValue)
    .function("SetUseValueAsOffset", &vtkTableBasedClipDataSet::SetUseValueAsOffset)
    .function("GetUseValueAsOffset", &vtkTableBasedClipDataSet::GetUseValueAsOffset)
    .function("UseValueAsOffsetOn", &vtkTableBasedClipDataSet::UseValueAsOffsetOn)
    .function("UseValueAsOffsetOff", &vtkTableBasedClipDataSet::UseValueAsOffsetOff)
    .function("SetClipFunction", &vtkTableBasedClipDataSet::SetClipFunction, emscripten::allow_raw_pointers())
    .function("GetClipFunction", &vtkTableBasedClipDataSet::GetClipFunction, emscripten::allow_raw_pointers())
    .function("SetGenerateClipScalars", &vtkTableBasedClipDataSet::SetGenerateClipScalars)
    .function("GetGenerateClipScalars", &vtkTableBasedClipDataSet::GetGenerateClipScalars)
    .function("GenerateClipScalarsOn", &vtkTableBasedClipDataSet::GenerateClipScalarsOn)
    .function("GenerateClipScalarsOff", &vtkTableBasedClipDataSet::GenerateClipScalarsOff)
    .function("SetMergeTolerance", &vtkTableBasedClipDataSet::SetMergeTolerance)
    .function("GetMergeToleranceMinValue", &vtkTableBasedClipDataSet::GetMergeToleranceMinValue)
    .function("GetMergeToleranceMaxValue", &vtkTableBasedClipDataSet::GetMergeToleranceMaxValue)
    .function("GetMergeTolerance", &vtkTableBasedClipDataSet::GetMergeTolerance)
    .function("SetGenerateClippedOutput", &vtkTableBasedClipDataSet::SetGenerateClippedOutput)
    .function("GetGenerateClippedOutput", &vtkTableBasedClipDataSet::GetGenerateClippedOutput)
    .function("GenerateClippedOutputOn", &vtkTableBasedClipDataSet::GenerateClippedOutputOn)
    .function("GenerateClippedOutputOff", &vtkTableBasedClipDataSet::GenerateClippedOutputOff)
    .function("GetClippedOutput", &vtkTableBasedClipDataSet::GetClippedOutput, emscripten::allow_raw_pointers())
    .function("SetOutputPointsPrecision", &vtkTableBasedClipDataSet::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecisionMinValue", &vtkTableBasedClipDataSet::GetOutputPointsPrecisionMinValue)
    .function("GetOutputPointsPrecisionMaxValue", &vtkTableBasedClipDataSet::GetOutputPointsPrecisionMaxValue)
    .function("GetOutputPointsPrecision", &vtkTableBasedClipDataSet::GetOutputPointsPrecision)
    .function("SetBatchSize", &vtkTableBasedClipDataSet::SetBatchSize)
    .function("GetBatchSizeMinValue", &vtkTableBasedClipDataSet::GetBatchSizeMinValue)
    .function("GetBatchSizeMaxValue", &vtkTableBasedClipDataSet::GetBatchSizeMaxValue)
    .function("GetBatchSize", &vtkTableBasedClipDataSet::GetBatchSize)
    .function("SetLocator", &vtkTableBasedClipDataSet::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkTableBasedClipDataSet::GetLocator, emscripten::allow_raw_pointers());
}
