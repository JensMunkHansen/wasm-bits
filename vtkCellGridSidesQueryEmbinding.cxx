// JavaScript wrapper for vtkCellGridSidesQuery with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellGridSidesQueryEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellGridSidesQuery.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStringToken.h"
#include "vtkCellGridSidesQuery.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkCellGridSidesQuery_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCellGridSidesQuery>(vtkCellGridSidesQuery * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellGridSidesQuery_class) {
  using SideFlags=vtkCellGridSidesQuery::SideFlags;
  using PassWork=vtkCellGridSidesQuery::PassWork;
  using SummaryStrategy=vtkCellGridSidesQuery::SummaryStrategy;
  using SelectionMode=vtkCellGridSidesQuery::SelectionMode;
  emscripten::class_<vtkCellGridSidesQuery, emscripten::base<vtkCellGridQuery>>("vtkCellGridSidesQuery")
    .smart_ptr<vtkSmartPointer<vtkCellGridSidesQuery>>("vtkSmartPointer<vtkCellGridSidesQuery>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCellGridSidesQuery>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridSidesQuery::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellGridSidesQuery& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellGridSidesQuery::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellGridSidesQuery::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridSidesQuery::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellGridSidesQuery& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPreserveRenderableInputs", &vtkCellGridSidesQuery::SetPreserveRenderableInputs)
    .function("GetPreserveRenderableInputs", &vtkCellGridSidesQuery::GetPreserveRenderableInputs)
    .function("PreserveRenderableInputsOn", &vtkCellGridSidesQuery::PreserveRenderableInputsOn)
    .function("PreserveRenderableInputsOff", &vtkCellGridSidesQuery::PreserveRenderableInputsOff)
    .function("SetOmitSidesForRenderableInputs", &vtkCellGridSidesQuery::SetOmitSidesForRenderableInputs)
    .function("GetOmitSidesForRenderableInputs", &vtkCellGridSidesQuery::GetOmitSidesForRenderableInputs)
    .function("OmitSidesForRenderableInputsOn", &vtkCellGridSidesQuery::OmitSidesForRenderableInputsOn)
    .function("OmitSidesForRenderableInputsOff", &vtkCellGridSidesQuery::OmitSidesForRenderableInputsOff)
    .function("SetOutputDimensionControl", &vtkCellGridSidesQuery::SetOutputDimensionControl)
    .function("GetOutputDimensionControl", &vtkCellGridSidesQuery::GetOutputDimensionControl)
    .function("OutputDimensionControlOn", &vtkCellGridSidesQuery::OutputDimensionControlOn)
    .function("OutputDimensionControlOff", &vtkCellGridSidesQuery::OutputDimensionControlOff)
    .function("SetStrategy", &vtkCellGridSidesQuery::SetStrategy)
    .function("GetStrategy", &vtkCellGridSidesQuery::GetStrategy)
    .function("SetStrategyToWinding", &vtkCellGridSidesQuery::SetStrategyToWinding)
    .function("SetStrategyToAnyOccurrence", &vtkCellGridSidesQuery::SetStrategyToAnyOccurrence)
    .function("SetStrategyToBoundary", &vtkCellGridSidesQuery::SetStrategyToBoundary)
    .function("SetSelectionType", &vtkCellGridSidesQuery::SetSelectionType)
    .function("GetSelectionType", &vtkCellGridSidesQuery::GetSelectionType)
    .function("Initialize", &vtkCellGridSidesQuery::Initialize)
    .function("StartPass", &vtkCellGridSidesQuery::StartPass)
    .function("IsAnotherPassRequired", &vtkCellGridSidesQuery::IsAnotherPassRequired)
    .function("Finalize", &vtkCellGridSidesQuery::Finalize)
    .class_function("SelectionModeToLabel", &vtkCellGridSidesQuery::SelectionModeToLabel)
    .class_function("SelectionModeFromLabel", &vtkCellGridSidesQuery::SelectionModeFromLabel)
    .class_function("SummaryStrategyToLabel", &vtkCellGridSidesQuery::SummaryStrategyToLabel)
    .class_function("SummaryStrategyFromLabel", &vtkCellGridSidesQuery::SummaryStrategyFromLabel);
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkCellGridSidesQuery_0_2_constants) {
    typedef vtkCellGridSidesQuery::SideFlags cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[11] = {
      { "vtkCellGridSidesQuery_SideFlags_VerticesOfEdges", vtkCellGridSidesQuery::VerticesOfEdges },
      { "vtkCellGridSidesQuery_SideFlags_VerticesOfSurfaces", vtkCellGridSidesQuery::VerticesOfSurfaces },
      { "vtkCellGridSidesQuery_SideFlags_EdgesOfSurfaces", vtkCellGridSidesQuery::EdgesOfSurfaces },
      { "vtkCellGridSidesQuery_SideFlags_VerticesOfVolumes", vtkCellGridSidesQuery::VerticesOfVolumes },
      { "vtkCellGridSidesQuery_SideFlags_EdgesOfVolumes", vtkCellGridSidesQuery::EdgesOfVolumes },
      { "vtkCellGridSidesQuery_SideFlags_SurfacesOfVolumes", vtkCellGridSidesQuery::SurfacesOfVolumes },
      { "vtkCellGridSidesQuery_SideFlags_SurfacesOfInputs", vtkCellGridSidesQuery::SurfacesOfInputs },
      { "vtkCellGridSidesQuery_SideFlags_EdgesOfInputs", vtkCellGridSidesQuery::EdgesOfInputs },
      { "vtkCellGridSidesQuery_SideFlags_VerticesOfInputs", vtkCellGridSidesQuery::VerticesOfInputs },
      { "vtkCellGridSidesQuery_SideFlags_AllSides", vtkCellGridSidesQuery::AllSides },
      { "vtkCellGridSidesQuery_SideFlags_NextLowestDimension", vtkCellGridSidesQuery::NextLowestDimension },
  };
  for (int c = 0; c < 11; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkCellGridSidesQuery_1_2_constants) {
    typedef vtkCellGridSidesQuery::PassWork cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkCellGridSidesQuery_PassWork_HashSides", vtkCellGridSidesQuery::HashSides },
      { "vtkCellGridSidesQuery_PassWork_Summarize", vtkCellGridSidesQuery::Summarize },
      { "vtkCellGridSidesQuery_PassWork_GenerateSideSets", vtkCellGridSidesQuery::GenerateSideSets },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkCellGridSidesQuery_2_2_constants) {
    typedef vtkCellGridSidesQuery::SummaryStrategy cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkCellGridSidesQuery_SummaryStrategy_Winding", vtkCellGridSidesQuery::Winding },
      { "vtkCellGridSidesQuery_SummaryStrategy_AnyOccurrence", vtkCellGridSidesQuery::AnyOccurrence },
      { "vtkCellGridSidesQuery_SummaryStrategy_Boundary", vtkCellGridSidesQuery::Boundary },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkCellGridSidesQuery_3_2_constants) {
    typedef vtkCellGridSidesQuery::SelectionMode cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkCellGridSidesQuery_SelectionMode_Input", vtkCellGridSidesQuery::Input },
      { "vtkCellGridSidesQuery_SelectionMode_Output", vtkCellGridSidesQuery::Output },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
