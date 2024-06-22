// JavaScript wrapper for vtkGreedyTerrainDecimation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkGreedyTerrainDecimationEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkGreedyTerrainDecimation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGreedyTerrainDecimation.h"

EMSCRIPTEN_BINDINGS(vtkFiltersHybrid_vtkGreedyTerrainDecimation_0_1_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "VTK_ERROR_NUMBER_OF_TRIANGLES", 0 },
      { "VTK_ERROR_SPECIFIED_REDUCTION", 1 },
      { "VTK_ERROR_ABSOLUTE", 2 },
      { "VTK_ERROR_RELATIVE", 3 },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkGreedyTerrainDecimation>(vtkGreedyTerrainDecimation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGreedyTerrainDecimation_class) {
  emscripten::class_<vtkGreedyTerrainDecimation, emscripten::base<vtkPolyDataAlgorithm>>("vtkGreedyTerrainDecimation")
    .smart_ptr<vtkSmartPointer<vtkGreedyTerrainDecimation>>("vtkSmartPointer<vtkGreedyTerrainDecimation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGreedyTerrainDecimation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGreedyTerrainDecimation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGreedyTerrainDecimation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGreedyTerrainDecimation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGreedyTerrainDecimation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGreedyTerrainDecimation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGreedyTerrainDecimation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetErrorMeasure", &vtkGreedyTerrainDecimation::SetErrorMeasure)
    .function("GetErrorMeasureMinValue", &vtkGreedyTerrainDecimation::GetErrorMeasureMinValue)
    .function("GetErrorMeasureMaxValue", &vtkGreedyTerrainDecimation::GetErrorMeasureMaxValue)
    .function("GetErrorMeasure", &vtkGreedyTerrainDecimation::GetErrorMeasure)
    .function("SetErrorMeasureToNumberOfTriangles", &vtkGreedyTerrainDecimation::SetErrorMeasureToNumberOfTriangles)
    .function("SetErrorMeasureToSpecifiedReduction", &vtkGreedyTerrainDecimation::SetErrorMeasureToSpecifiedReduction)
    .function("SetErrorMeasureToAbsoluteError", &vtkGreedyTerrainDecimation::SetErrorMeasureToAbsoluteError)
    .function("SetErrorMeasureToRelativeError", &vtkGreedyTerrainDecimation::SetErrorMeasureToRelativeError)
    .function("SetNumberOfTriangles", &vtkGreedyTerrainDecimation::SetNumberOfTriangles)
    .function("GetNumberOfTrianglesMinValue", &vtkGreedyTerrainDecimation::GetNumberOfTrianglesMinValue)
    .function("GetNumberOfTrianglesMaxValue", &vtkGreedyTerrainDecimation::GetNumberOfTrianglesMaxValue)
    .function("GetNumberOfTriangles", &vtkGreedyTerrainDecimation::GetNumberOfTriangles)
    .function("SetReduction", &vtkGreedyTerrainDecimation::SetReduction)
    .function("GetReductionMinValue", &vtkGreedyTerrainDecimation::GetReductionMinValue)
    .function("GetReductionMaxValue", &vtkGreedyTerrainDecimation::GetReductionMaxValue)
    .function("GetReduction", &vtkGreedyTerrainDecimation::GetReduction)
    .function("SetAbsoluteError", &vtkGreedyTerrainDecimation::SetAbsoluteError)
    .function("GetAbsoluteErrorMinValue", &vtkGreedyTerrainDecimation::GetAbsoluteErrorMinValue)
    .function("GetAbsoluteErrorMaxValue", &vtkGreedyTerrainDecimation::GetAbsoluteErrorMaxValue)
    .function("GetAbsoluteError", &vtkGreedyTerrainDecimation::GetAbsoluteError)
    .function("SetRelativeError", &vtkGreedyTerrainDecimation::SetRelativeError)
    .function("GetRelativeErrorMinValue", &vtkGreedyTerrainDecimation::GetRelativeErrorMinValue)
    .function("GetRelativeErrorMaxValue", &vtkGreedyTerrainDecimation::GetRelativeErrorMaxValue)
    .function("GetRelativeError", &vtkGreedyTerrainDecimation::GetRelativeError)
    .function("SetBoundaryVertexDeletion", &vtkGreedyTerrainDecimation::SetBoundaryVertexDeletion)
    .function("GetBoundaryVertexDeletion", &vtkGreedyTerrainDecimation::GetBoundaryVertexDeletion)
    .function("BoundaryVertexDeletionOn", &vtkGreedyTerrainDecimation::BoundaryVertexDeletionOn)
    .function("BoundaryVertexDeletionOff", &vtkGreedyTerrainDecimation::BoundaryVertexDeletionOff)
    .function("SetComputeNormals", &vtkGreedyTerrainDecimation::SetComputeNormals)
    .function("GetComputeNormals", &vtkGreedyTerrainDecimation::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkGreedyTerrainDecimation::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkGreedyTerrainDecimation::ComputeNormalsOff);
}
