// JavaScript wrapper for vtkImprintFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkImprintFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkImprintFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataObject.h"
#include "vtkPolyData.h"
#include "vtkImprintFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkImprintFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkImprintFilter>(vtkImprintFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImprintFilter_class) {
  using MergeTolType=vtkImprintFilter::MergeTolType;
  using SpecifiedOutput=vtkImprintFilter::SpecifiedOutput;
  using PointInterpolationType=vtkImprintFilter::PointInterpolationType;
  using DebugOutput=vtkImprintFilter::DebugOutput;
  emscripten::class_<vtkImprintFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkImprintFilter")
    .smart_ptr<vtkSmartPointer<vtkImprintFilter>>("vtkSmartPointer<vtkImprintFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImprintFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImprintFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImprintFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImprintFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImprintFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImprintFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImprintFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTargetConnection", &vtkImprintFilter::SetTargetConnection, emscripten::allow_raw_pointers())
    .function("GetTargetConnection", &vtkImprintFilter::GetTargetConnection, emscripten::allow_raw_pointers())
    .function("SetTargetData", &vtkImprintFilter::SetTargetData, emscripten::allow_raw_pointers())
    .function("GetTarget", &vtkImprintFilter::GetTarget, emscripten::allow_raw_pointers())
    .function("SetImprintConnection", &vtkImprintFilter::SetImprintConnection, emscripten::allow_raw_pointers())
    .function("GetImprintConnection", &vtkImprintFilter::GetImprintConnection, emscripten::allow_raw_pointers())
    .function("SetImprintData", &vtkImprintFilter::SetImprintData, emscripten::allow_raw_pointers())
    .function("GetImprint", &vtkImprintFilter::GetImprint, emscripten::allow_raw_pointers())
    .function("SetTolerance", &vtkImprintFilter::SetTolerance)
    .function("GetToleranceMinValue", &vtkImprintFilter::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkImprintFilter::GetToleranceMaxValue)
    .function("GetTolerance", &vtkImprintFilter::GetTolerance)
    .function("SetMergeToleranceType", &vtkImprintFilter::SetMergeToleranceType)
    .function("GetMergeToleranceTypeMinValue", &vtkImprintFilter::GetMergeToleranceTypeMinValue)
    .function("GetMergeToleranceTypeMaxValue", &vtkImprintFilter::GetMergeToleranceTypeMaxValue)
    .function("GetMergeToleranceType", &vtkImprintFilter::GetMergeToleranceType)
    .function("SetMergeToleranceTypeToAbsolute", &vtkImprintFilter::SetMergeToleranceTypeToAbsolute)
    .function("SetMergeToleranceTypeToRelativeToProjection", &vtkImprintFilter::SetMergeToleranceTypeToRelativeToProjection)
    .function("SetMergeToleranceTypeToMinEdge", &vtkImprintFilter::SetMergeToleranceTypeToMinEdge)
    .function("SetMergeToleranceTypeToAverageEdge", &vtkImprintFilter::SetMergeToleranceTypeToAverageEdge)
    .function("SetMergeTolerance", &vtkImprintFilter::SetMergeTolerance)
    .function("GetMergeToleranceMinValue", &vtkImprintFilter::GetMergeToleranceMinValue)
    .function("GetMergeToleranceMaxValue", &vtkImprintFilter::GetMergeToleranceMaxValue)
    .function("GetMergeTolerance", &vtkImprintFilter::GetMergeTolerance)
    .function("SetToleranceStrategy", &vtkImprintFilter::SetToleranceStrategy)
    .function("GetToleranceStrategyMinValue", &vtkImprintFilter::GetToleranceStrategyMinValue)
    .function("GetToleranceStrategyMaxValue", &vtkImprintFilter::GetToleranceStrategyMaxValue)
    .function("GetToleranceStrategy", &vtkImprintFilter::GetToleranceStrategy)
    .function("SetToleranceStrategyToDecoupled", &vtkImprintFilter::SetToleranceStrategyToDecoupled)
    .function("SetToleranceStrategyToLinked", &vtkImprintFilter::SetToleranceStrategyToLinked)
    .function("SetOutputType", &vtkImprintFilter::SetOutputType)
    .function("GetOutputTypeMinValue", &vtkImprintFilter::GetOutputTypeMinValue)
    .function("GetOutputTypeMaxValue", &vtkImprintFilter::GetOutputTypeMaxValue)
    .function("GetOutputType", &vtkImprintFilter::GetOutputType)
    .function("SetOutputTypeToTargetCells", &vtkImprintFilter::SetOutputTypeToTargetCells)
    .function("SetOutputTypeToImprintedCells", &vtkImprintFilter::SetOutputTypeToImprintedCells)
    .function("SetOutputTypeToProjectedImprint", &vtkImprintFilter::SetOutputTypeToProjectedImprint)
    .function("SetOutputTypeToImprintedRegion", &vtkImprintFilter::SetOutputTypeToImprintedRegion)
    .function("SetOutputTypeToMergedImprint", &vtkImprintFilter::SetOutputTypeToMergedImprint)
    .function("SetBoundaryEdgeInsertion", &vtkImprintFilter::SetBoundaryEdgeInsertion)
    .function("GetBoundaryEdgeInsertion", &vtkImprintFilter::GetBoundaryEdgeInsertion)
    .function("BoundaryEdgeInsertionOn", &vtkImprintFilter::BoundaryEdgeInsertionOn)
    .function("BoundaryEdgeInsertionOff", &vtkImprintFilter::BoundaryEdgeInsertionOff)
    .function("SetPassCellData", &vtkImprintFilter::SetPassCellData)
    .function("GetPassCellData", &vtkImprintFilter::GetPassCellData)
    .function("PassCellDataOn", &vtkImprintFilter::PassCellDataOn)
    .function("PassCellDataOff", &vtkImprintFilter::PassCellDataOff)
    .function("SetPassPointData", &vtkImprintFilter::SetPassPointData)
    .function("GetPassPointData", &vtkImprintFilter::GetPassPointData)
    .function("PassPointDataOn", &vtkImprintFilter::PassPointDataOn)
    .function("PassPointDataOff", &vtkImprintFilter::PassPointDataOff)
    .function("SetPointInterpolation", &vtkImprintFilter::SetPointInterpolation)
    .function("GetPointInterpolationMinValue", &vtkImprintFilter::GetPointInterpolationMinValue)
    .function("GetPointInterpolationMaxValue", &vtkImprintFilter::GetPointInterpolationMaxValue)
    .function("GetPointInterpolation", &vtkImprintFilter::GetPointInterpolation)
    .function("SetPointInterpolationToTargetEdges", &vtkImprintFilter::SetPointInterpolationToTargetEdges)
    .function("SetPointInterpolationToImprintEdges", &vtkImprintFilter::SetPointInterpolationToImprintEdges)
    .function("SetTriangulateOutput", &vtkImprintFilter::SetTriangulateOutput)
    .function("GetTriangulateOutput", &vtkImprintFilter::GetTriangulateOutput)
    .function("TriangulateOutputOn", &vtkImprintFilter::TriangulateOutputOn)
    .function("TriangulateOutputOff", &vtkImprintFilter::TriangulateOutputOff)
    .function("SetDebugOutputType", &vtkImprintFilter::SetDebugOutputType)
    .function("GetDebugOutputTypeMinValue", &vtkImprintFilter::GetDebugOutputTypeMinValue)
    .function("GetDebugOutputTypeMaxValue", &vtkImprintFilter::GetDebugOutputTypeMaxValue)
    .function("GetDebugOutputType", &vtkImprintFilter::GetDebugOutputType)
    .function("SetDebugOutputTypeToNoDebugOutput", &vtkImprintFilter::SetDebugOutputTypeToNoDebugOutput)
    .function("SetDebugOutputTypeToTriangulationInput", &vtkImprintFilter::SetDebugOutputTypeToTriangulationInput)
    .function("SetDebugOutputTypeToTriangulationOutput", &vtkImprintFilter::SetDebugOutputTypeToTriangulationOutput)
    .function("SetDebugCellId", &vtkImprintFilter::SetDebugCellId)
    .function("GetDebugCellId", &vtkImprintFilter::GetDebugCellId)
    .function("GetDebugOutput", &vtkImprintFilter::GetDebugOutput, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkImprintFilter_0_2_constants) {
    typedef vtkImprintFilter::MergeTolType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkImprintFilter_MergeTolType_ABSOLUTE_TOLERANCE", vtkImprintFilter::ABSOLUTE_TOLERANCE },
      { "vtkImprintFilter_MergeTolType_RELATIVE_TO_PROJECTION_TOLERANCE", vtkImprintFilter::RELATIVE_TO_PROJECTION_TOLERANCE },
      { "vtkImprintFilter_MergeTolType_RELATIVE_TO_MIN_EDGE_LENGTH", vtkImprintFilter::RELATIVE_TO_MIN_EDGE_LENGTH },
      { "vtkImprintFilter_MergeTolType_RELATIVE_TO_AVERAGE_EDGE_LENGTH", vtkImprintFilter::RELATIVE_TO_AVERAGE_EDGE_LENGTH },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkImprintFilter_1_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkImprintFilter_DECOUPLED_TOLERANCES", vtkImprintFilter::DECOUPLED_TOLERANCES },
      { "vtkImprintFilter_LINKED_TOLERANCES", vtkImprintFilter::LINKED_TOLERANCES },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkImprintFilter_2_2_constants) {
    typedef vtkImprintFilter::SpecifiedOutput cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkImprintFilter_SpecifiedOutput_TARGET_CELLS", vtkImprintFilter::TARGET_CELLS },
      { "vtkImprintFilter_SpecifiedOutput_IMPRINTED_CELLS", vtkImprintFilter::IMPRINTED_CELLS },
      { "vtkImprintFilter_SpecifiedOutput_PROJECTED_IMPRINT", vtkImprintFilter::PROJECTED_IMPRINT },
      { "vtkImprintFilter_SpecifiedOutput_IMPRINTED_REGION", vtkImprintFilter::IMPRINTED_REGION },
      { "vtkImprintFilter_SpecifiedOutput_MERGED_IMPRINT", vtkImprintFilter::MERGED_IMPRINT },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkImprintFilter_3_2_constants) {
    typedef vtkImprintFilter::PointInterpolationType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkImprintFilter_PointInterpolationType_USE_TARGET_EDGES", vtkImprintFilter::USE_TARGET_EDGES },
      { "vtkImprintFilter_PointInterpolationType_USE_IMPRINT_EDGES", vtkImprintFilter::USE_IMPRINT_EDGES },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkImprintFilter_4_2_constants) {
    typedef vtkImprintFilter::DebugOutput cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkImprintFilter_DebugOutput_NO_DEBUG_OUTPUT", vtkImprintFilter::NO_DEBUG_OUTPUT },
      { "vtkImprintFilter_DebugOutput_TRIANGULATION_INPUT", vtkImprintFilter::TRIANGULATION_INPUT },
      { "vtkImprintFilter_DebugOutput_TRIANGULATION_OUTPUT", vtkImprintFilter::TRIANGULATION_OUTPUT },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
