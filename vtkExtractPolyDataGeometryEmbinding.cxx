// JavaScript wrapper for vtkExtractPolyDataGeometry with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractPolyDataGeometryEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractPolyDataGeometry.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitFunction.h"
#include "vtkExtractPolyDataGeometry.h"

template<> void emscripten::internal::raw_destructor<vtkExtractPolyDataGeometry>(vtkExtractPolyDataGeometry * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractPolyDataGeometry_class) {
  emscripten::class_<vtkExtractPolyDataGeometry, emscripten::base<vtkPolyDataAlgorithm>>("vtkExtractPolyDataGeometry")
    .smart_ptr<vtkSmartPointer<vtkExtractPolyDataGeometry>>("vtkSmartPointer<vtkExtractPolyDataGeometry>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtractPolyDataGeometry>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractPolyDataGeometry::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractPolyDataGeometry& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractPolyDataGeometry::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractPolyDataGeometry::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractPolyDataGeometry::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractPolyDataGeometry& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkExtractPolyDataGeometry::GetMTime)
    .function("SetImplicitFunction", &vtkExtractPolyDataGeometry::SetImplicitFunction, emscripten::allow_raw_pointers())
    .function("GetImplicitFunction", &vtkExtractPolyDataGeometry::GetImplicitFunction, emscripten::allow_raw_pointers())
    .function("SetExtractInside", &vtkExtractPolyDataGeometry::SetExtractInside)
    .function("GetExtractInside", &vtkExtractPolyDataGeometry::GetExtractInside)
    .function("ExtractInsideOn", &vtkExtractPolyDataGeometry::ExtractInsideOn)
    .function("ExtractInsideOff", &vtkExtractPolyDataGeometry::ExtractInsideOff)
    .function("SetExtractBoundaryCells", &vtkExtractPolyDataGeometry::SetExtractBoundaryCells)
    .function("GetExtractBoundaryCells", &vtkExtractPolyDataGeometry::GetExtractBoundaryCells)
    .function("ExtractBoundaryCellsOn", &vtkExtractPolyDataGeometry::ExtractBoundaryCellsOn)
    .function("ExtractBoundaryCellsOff", &vtkExtractPolyDataGeometry::ExtractBoundaryCellsOff)
    .function("SetPassPoints", &vtkExtractPolyDataGeometry::SetPassPoints)
    .function("GetPassPoints", &vtkExtractPolyDataGeometry::GetPassPoints)
    .function("PassPointsOn", &vtkExtractPolyDataGeometry::PassPointsOn)
    .function("PassPointsOff", &vtkExtractPolyDataGeometry::PassPointsOff);
}
