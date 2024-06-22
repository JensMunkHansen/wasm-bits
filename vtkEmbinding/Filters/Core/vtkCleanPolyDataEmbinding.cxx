// JavaScript wrapper for vtkCleanPolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkCleanPolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkCleanPolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkPolyData.h"
#include "vtkCleanPolyData.h"

template<> void emscripten::internal::raw_destructor<vtkCleanPolyData>(vtkCleanPolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCleanPolyData_class) {
  emscripten::class_<vtkCleanPolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkCleanPolyData")
    .smart_ptr<vtkSmartPointer<vtkCleanPolyData>>("vtkSmartPointer<vtkCleanPolyData>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCleanPolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCleanPolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCleanPolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCleanPolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCleanPolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCleanPolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCleanPolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetToleranceIsAbsolute", &vtkCleanPolyData::SetToleranceIsAbsolute)
    .function("ToleranceIsAbsoluteOn", &vtkCleanPolyData::ToleranceIsAbsoluteOn)
    .function("ToleranceIsAbsoluteOff", &vtkCleanPolyData::ToleranceIsAbsoluteOff)
    .function("GetToleranceIsAbsolute", &vtkCleanPolyData::GetToleranceIsAbsolute)
    .function("SetTolerance", &vtkCleanPolyData::SetTolerance)
    .function("GetToleranceMinValue", &vtkCleanPolyData::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkCleanPolyData::GetToleranceMaxValue)
    .function("GetTolerance", &vtkCleanPolyData::GetTolerance)
    .function("SetAbsoluteTolerance", &vtkCleanPolyData::SetAbsoluteTolerance)
    .function("GetAbsoluteToleranceMinValue", &vtkCleanPolyData::GetAbsoluteToleranceMinValue)
    .function("GetAbsoluteToleranceMaxValue", &vtkCleanPolyData::GetAbsoluteToleranceMaxValue)
    .function("GetAbsoluteTolerance", &vtkCleanPolyData::GetAbsoluteTolerance)
    .function("SetConvertLinesToPoints", &vtkCleanPolyData::SetConvertLinesToPoints)
    .function("ConvertLinesToPointsOn", &vtkCleanPolyData::ConvertLinesToPointsOn)
    .function("ConvertLinesToPointsOff", &vtkCleanPolyData::ConvertLinesToPointsOff)
    .function("GetConvertLinesToPoints", &vtkCleanPolyData::GetConvertLinesToPoints)
    .function("SetConvertPolysToLines", &vtkCleanPolyData::SetConvertPolysToLines)
    .function("ConvertPolysToLinesOn", &vtkCleanPolyData::ConvertPolysToLinesOn)
    .function("ConvertPolysToLinesOff", &vtkCleanPolyData::ConvertPolysToLinesOff)
    .function("GetConvertPolysToLines", &vtkCleanPolyData::GetConvertPolysToLines)
    .function("SetConvertStripsToPolys", &vtkCleanPolyData::SetConvertStripsToPolys)
    .function("ConvertStripsToPolysOn", &vtkCleanPolyData::ConvertStripsToPolysOn)
    .function("ConvertStripsToPolysOff", &vtkCleanPolyData::ConvertStripsToPolysOff)
    .function("GetConvertStripsToPolys", &vtkCleanPolyData::GetConvertStripsToPolys)
    .function("SetPointMerging", &vtkCleanPolyData::SetPointMerging)
    .function("GetPointMerging", &vtkCleanPolyData::GetPointMerging)
    .function("PointMergingOn", &vtkCleanPolyData::PointMergingOn)
    .function("PointMergingOff", &vtkCleanPolyData::PointMergingOff)
    .function("SetLocator", &vtkCleanPolyData::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkCleanPolyData::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkCleanPolyData::CreateDefaultLocator, emscripten::allow_raw_pointers())
    .function("ReleaseLocator", &vtkCleanPolyData::ReleaseLocator)
    .function("GetMTime", &vtkCleanPolyData::GetMTime)
    .function("SetPieceInvariant", &vtkCleanPolyData::SetPieceInvariant)
    .function("GetPieceInvariant", &vtkCleanPolyData::GetPieceInvariant)
    .function("PieceInvariantOn", &vtkCleanPolyData::PieceInvariantOn)
    .function("PieceInvariantOff", &vtkCleanPolyData::PieceInvariantOff)
    .function("SetOutputPointsPrecision", &vtkCleanPolyData::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkCleanPolyData::GetOutputPointsPrecision);
}
