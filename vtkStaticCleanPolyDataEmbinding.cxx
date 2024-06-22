// JavaScript wrapper for vtkStaticCleanPolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkStaticCleanPolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkStaticCleanPolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkStaticPointLocator.h"
#include "vtkStaticCleanPolyData.h"

template<> void emscripten::internal::raw_destructor<vtkStaticCleanPolyData>(vtkStaticCleanPolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStaticCleanPolyData_class) {
  emscripten::class_<vtkStaticCleanPolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkStaticCleanPolyData")
    .smart_ptr<vtkSmartPointer<vtkStaticCleanPolyData>>("vtkSmartPointer<vtkStaticCleanPolyData>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStaticCleanPolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStaticCleanPolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStaticCleanPolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStaticCleanPolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStaticCleanPolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStaticCleanPolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStaticCleanPolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetToleranceIsAbsolute", &vtkStaticCleanPolyData::SetToleranceIsAbsolute)
    .function("ToleranceIsAbsoluteOn", &vtkStaticCleanPolyData::ToleranceIsAbsoluteOn)
    .function("ToleranceIsAbsoluteOff", &vtkStaticCleanPolyData::ToleranceIsAbsoluteOff)
    .function("GetToleranceIsAbsolute", &vtkStaticCleanPolyData::GetToleranceIsAbsolute)
    .function("SetTolerance", &vtkStaticCleanPolyData::SetTolerance)
    .function("GetToleranceMinValue", &vtkStaticCleanPolyData::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkStaticCleanPolyData::GetToleranceMaxValue)
    .function("GetTolerance", &vtkStaticCleanPolyData::GetTolerance)
    .function("SetAbsoluteTolerance", &vtkStaticCleanPolyData::SetAbsoluteTolerance)
    .function("GetAbsoluteToleranceMinValue", &vtkStaticCleanPolyData::GetAbsoluteToleranceMinValue)
    .function("GetAbsoluteToleranceMaxValue", &vtkStaticCleanPolyData::GetAbsoluteToleranceMaxValue)
    .function("GetAbsoluteTolerance", &vtkStaticCleanPolyData::GetAbsoluteTolerance)
    .function("SetMergingArray", emscripten::optional_override([](vtkStaticCleanPolyData& self, const std::string & arg_0) -> void {  return self.SetMergingArray( arg_0.c_str());}))
    .function("GetMergingArray", emscripten::optional_override([](vtkStaticCleanPolyData& self) -> std::string {  return self.GetMergingArray();}))
    .function("SetConvertLinesToPoints", &vtkStaticCleanPolyData::SetConvertLinesToPoints)
    .function("ConvertLinesToPointsOn", &vtkStaticCleanPolyData::ConvertLinesToPointsOn)
    .function("ConvertLinesToPointsOff", &vtkStaticCleanPolyData::ConvertLinesToPointsOff)
    .function("GetConvertLinesToPoints", &vtkStaticCleanPolyData::GetConvertLinesToPoints)
    .function("SetConvertPolysToLines", &vtkStaticCleanPolyData::SetConvertPolysToLines)
    .function("ConvertPolysToLinesOn", &vtkStaticCleanPolyData::ConvertPolysToLinesOn)
    .function("ConvertPolysToLinesOff", &vtkStaticCleanPolyData::ConvertPolysToLinesOff)
    .function("GetConvertPolysToLines", &vtkStaticCleanPolyData::GetConvertPolysToLines)
    .function("SetConvertStripsToPolys", &vtkStaticCleanPolyData::SetConvertStripsToPolys)
    .function("ConvertStripsToPolysOn", &vtkStaticCleanPolyData::ConvertStripsToPolysOn)
    .function("ConvertStripsToPolysOff", &vtkStaticCleanPolyData::ConvertStripsToPolysOff)
    .function("GetConvertStripsToPolys", &vtkStaticCleanPolyData::GetConvertStripsToPolys)
    .function("SetRemoveUnusedPoints", &vtkStaticCleanPolyData::SetRemoveUnusedPoints)
    .function("RemoveUnusedPointsOn", &vtkStaticCleanPolyData::RemoveUnusedPointsOn)
    .function("RemoveUnusedPointsOff", &vtkStaticCleanPolyData::RemoveUnusedPointsOff)
    .function("GetRemoveUnusedPoints", &vtkStaticCleanPolyData::GetRemoveUnusedPoints)
    .function("SetProduceMergeMap", &vtkStaticCleanPolyData::SetProduceMergeMap)
    .function("ProduceMergeMapOn", &vtkStaticCleanPolyData::ProduceMergeMapOn)
    .function("ProduceMergeMapOff", &vtkStaticCleanPolyData::ProduceMergeMapOff)
    .function("GetProduceMergeMap", &vtkStaticCleanPolyData::GetProduceMergeMap)
    .function("SetAveragePointData", &vtkStaticCleanPolyData::SetAveragePointData)
    .function("AveragePointDataOn", &vtkStaticCleanPolyData::AveragePointDataOn)
    .function("AveragePointDataOff", &vtkStaticCleanPolyData::AveragePointDataOff)
    .function("GetAveragePointData", &vtkStaticCleanPolyData::GetAveragePointData)
    .function("SetOutputPointsPrecision", &vtkStaticCleanPolyData::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkStaticCleanPolyData::GetOutputPointsPrecision)
    .function("GetLocator", &vtkStaticCleanPolyData::GetLocator, emscripten::allow_raw_pointers())
    .function("SetPieceInvariant", &vtkStaticCleanPolyData::SetPieceInvariant)
    .function("GetPieceInvariant", &vtkStaticCleanPolyData::GetPieceInvariant)
    .function("PieceInvariantOn", &vtkStaticCleanPolyData::PieceInvariantOn)
    .function("PieceInvariantOff", &vtkStaticCleanPolyData::PieceInvariantOff)
    .function("GetMTime", &vtkStaticCleanPolyData::GetMTime);
}
