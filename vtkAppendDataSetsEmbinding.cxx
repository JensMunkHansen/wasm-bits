// JavaScript wrapper for vtkAppendDataSets with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkAppendDataSetsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkAppendDataSets.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkAppendDataSets.h"

template<> void emscripten::internal::raw_destructor<vtkAppendDataSets>(vtkAppendDataSets * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAppendDataSets_class) {
  emscripten::class_<vtkAppendDataSets, emscripten::base<vtkPointSetAlgorithm>>("vtkAppendDataSets")
    .smart_ptr<vtkSmartPointer<vtkAppendDataSets>>("vtkSmartPointer<vtkAppendDataSets>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAppendDataSets>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAppendDataSets::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAppendDataSets& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAppendDataSets::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAppendDataSets::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAppendDataSets::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAppendDataSets& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMergePoints", &vtkAppendDataSets::GetMergePoints)
    .function("SetMergePoints", &vtkAppendDataSets::SetMergePoints)
    .function("MergePointsOn", &vtkAppendDataSets::MergePointsOn)
    .function("MergePointsOff", &vtkAppendDataSets::MergePointsOff)
    .function("SetTolerance", &vtkAppendDataSets::SetTolerance)
    .function("GetToleranceMinValue", &vtkAppendDataSets::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkAppendDataSets::GetToleranceMaxValue)
    .function("GetTolerance", &vtkAppendDataSets::GetTolerance)
    .function("SetToleranceIsAbsolute", &vtkAppendDataSets::SetToleranceIsAbsolute)
    .function("GetToleranceIsAbsolute", &vtkAppendDataSets::GetToleranceIsAbsolute)
    .function("ToleranceIsAbsoluteOn", &vtkAppendDataSets::ToleranceIsAbsoluteOn)
    .function("ToleranceIsAbsoluteOff", &vtkAppendDataSets::ToleranceIsAbsoluteOff)
    .function("SetOutputDataSetType", &vtkAppendDataSets::SetOutputDataSetType)
    .function("GetOutputDataSetType", &vtkAppendDataSets::GetOutputDataSetType)
    .function("SetOutputPointsPrecision", &vtkAppendDataSets::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecisionMinValue", &vtkAppendDataSets::GetOutputPointsPrecisionMinValue)
    .function("GetOutputPointsPrecisionMaxValue", &vtkAppendDataSets::GetOutputPointsPrecisionMaxValue)
    .function("GetOutputPointsPrecision", &vtkAppendDataSets::GetOutputPointsPrecision);
}
