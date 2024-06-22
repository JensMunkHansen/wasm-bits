// JavaScript wrapper for vtkExtractGeometry with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractGeometryEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractGeometry.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitFunction.h"
#include "vtkExtractGeometry.h"

template<> void emscripten::internal::raw_destructor<vtkExtractGeometry>(vtkExtractGeometry * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractGeometry_class) {
  emscripten::class_<vtkExtractGeometry, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkExtractGeometry")
    .smart_ptr<vtkSmartPointer<vtkExtractGeometry>>("vtkSmartPointer<vtkExtractGeometry>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractGeometry>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractGeometry::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractGeometry& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractGeometry::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractGeometry::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractGeometry::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractGeometry& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkExtractGeometry::GetMTime)
    .function("SetImplicitFunction", &vtkExtractGeometry::SetImplicitFunction, emscripten::allow_raw_pointers())
    .function("GetImplicitFunction", &vtkExtractGeometry::GetImplicitFunction, emscripten::allow_raw_pointers())
    .function("SetExtractInside", &vtkExtractGeometry::SetExtractInside)
    .function("GetExtractInside", &vtkExtractGeometry::GetExtractInside)
    .function("ExtractInsideOn", &vtkExtractGeometry::ExtractInsideOn)
    .function("ExtractInsideOff", &vtkExtractGeometry::ExtractInsideOff)
    .function("SetExtractBoundaryCells", &vtkExtractGeometry::SetExtractBoundaryCells)
    .function("GetExtractBoundaryCells", &vtkExtractGeometry::GetExtractBoundaryCells)
    .function("ExtractBoundaryCellsOn", &vtkExtractGeometry::ExtractBoundaryCellsOn)
    .function("ExtractBoundaryCellsOff", &vtkExtractGeometry::ExtractBoundaryCellsOff)
    .function("SetExtractOnlyBoundaryCells", &vtkExtractGeometry::SetExtractOnlyBoundaryCells)
    .function("GetExtractOnlyBoundaryCells", &vtkExtractGeometry::GetExtractOnlyBoundaryCells)
    .function("ExtractOnlyBoundaryCellsOn", &vtkExtractGeometry::ExtractOnlyBoundaryCellsOn)
    .function("ExtractOnlyBoundaryCellsOff", &vtkExtractGeometry::ExtractOnlyBoundaryCellsOff);
}
