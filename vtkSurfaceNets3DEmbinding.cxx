// JavaScript wrapper for vtkSurfaceNets3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkSurfaceNets3DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkSurfaceNets3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkConstrainedSmoothingFilter.h"
#include "vtkSurfaceNets3D.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkSurfaceNets3D_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkSurfaceNets3D>(vtkSurfaceNets3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSurfaceNets3D_class) {
  using MeshType=vtkSurfaceNets3D::MeshType;
  using OutputType=vtkSurfaceNets3D::OutputType;
  using TriangulationType=vtkSurfaceNets3D::TriangulationType;
  emscripten::class_<vtkSurfaceNets3D, emscripten::base<vtkPolyDataAlgorithm>>("vtkSurfaceNets3D")
    .smart_ptr<vtkSmartPointer<vtkSurfaceNets3D>>("vtkSmartPointer<vtkSurfaceNets3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSurfaceNets3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSurfaceNets3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSurfaceNets3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSurfaceNets3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSurfaceNets3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSurfaceNets3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSurfaceNets3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkSurfaceNets3D::GetMTime)
    .function("SetValue", &vtkSurfaceNets3D::SetValue)
    .function("SetLabel", &vtkSurfaceNets3D::SetLabel)
    .function("GetValue", &vtkSurfaceNets3D::GetValue)
    .function("GetLabel", &vtkSurfaceNets3D::GetLabel)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkSurfaceNets3D&)>([](vtkSurfaceNets3D& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkSurfaceNets3D&, std::uintptr_t)>([](vtkSurfaceNets3D& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("GetLabels", emscripten::select_overload<std::uintptr_t(vtkSurfaceNets3D&)>([](vtkSurfaceNets3D& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetLabels()); }))
    .function("GetLabels", emscripten::select_overload<void(vtkSurfaceNets3D&, std::uintptr_t)>([](vtkSurfaceNets3D& self, std::uintptr_t arg_0) -> void { return self.GetLabels(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfLabels", &vtkSurfaceNets3D::SetNumberOfLabels)
    .function("SetNumberOfContours", &vtkSurfaceNets3D::SetNumberOfContours)
    .function("GetNumberOfLabels", &vtkSurfaceNets3D::GetNumberOfLabels)
    .function("GetNumberOfContours", &vtkSurfaceNets3D::GetNumberOfContours)
    .function("GenerateLabels", emscripten::select_overload<void(vtkSurfaceNets3D&, int, double, double)>([](vtkSurfaceNets3D& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateLabels( arg_0, arg_1, arg_2); }))
    .function("GenerateValues", emscripten::select_overload<void(vtkSurfaceNets3D&, int, double, double)>([](vtkSurfaceNets3D& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("SetBackgroundLabel", &vtkSurfaceNets3D::SetBackgroundLabel)
    .function("GetBackgroundLabel", &vtkSurfaceNets3D::GetBackgroundLabel)
    .function("SetArrayComponent", &vtkSurfaceNets3D::SetArrayComponent)
    .function("GetArrayComponent", &vtkSurfaceNets3D::GetArrayComponent)
    .function("SetOutputMeshType", &vtkSurfaceNets3D::SetOutputMeshType)
    .function("GetOutputMeshTypeMinValue", &vtkSurfaceNets3D::GetOutputMeshTypeMinValue)
    .function("GetOutputMeshTypeMaxValue", &vtkSurfaceNets3D::GetOutputMeshTypeMaxValue)
    .function("GetOutputMeshType", &vtkSurfaceNets3D::GetOutputMeshType)
    .function("SetOutputMeshTypeToDefault", &vtkSurfaceNets3D::SetOutputMeshTypeToDefault)
    .function("SetOutputMeshTypeToTriangles", &vtkSurfaceNets3D::SetOutputMeshTypeToTriangles)
    .function("SetOutputMeshTypeToQuads", &vtkSurfaceNets3D::SetOutputMeshTypeToQuads)
    .function("SetSmoothing", &vtkSurfaceNets3D::SetSmoothing)
    .function("GetSmoothing", &vtkSurfaceNets3D::GetSmoothing)
    .function("SmoothingOn", &vtkSurfaceNets3D::SmoothingOn)
    .function("SmoothingOff", &vtkSurfaceNets3D::SmoothingOff)
    .function("SetNumberOfIterations", &vtkSurfaceNets3D::SetNumberOfIterations)
    .function("GetNumberOfIterations", &vtkSurfaceNets3D::GetNumberOfIterations)
    .function("SetRelaxationFactor", &vtkSurfaceNets3D::SetRelaxationFactor)
    .function("GetRelaxationFactor", &vtkSurfaceNets3D::GetRelaxationFactor)
    .function("SetConstraintDistance", &vtkSurfaceNets3D::SetConstraintDistance)
    .function("GetConstraintDistance", &vtkSurfaceNets3D::GetConstraintDistance)
    .function("SetConstraintBox", emscripten::select_overload<void(vtkSurfaceNets3D&, double, double, double)>([](vtkSurfaceNets3D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetConstraintBox( arg_0, arg_1, arg_2); }))
    .function("SetConstraintStrategyToConstraintDistance", &vtkSurfaceNets3D::SetConstraintStrategyToConstraintDistance)
    .function("SetConstraintStrategyToConstraintBox", &vtkSurfaceNets3D::SetConstraintStrategyToConstraintBox)
    .function("GetConstraintStrategy", &vtkSurfaceNets3D::GetConstraintStrategy)
    .function("SetAutomaticSmoothingConstraints", &vtkSurfaceNets3D::SetAutomaticSmoothingConstraints)
    .function("GetAutomaticSmoothingConstraints", &vtkSurfaceNets3D::GetAutomaticSmoothingConstraints)
    .function("AutomaticSmoothingConstraintsOn", &vtkSurfaceNets3D::AutomaticSmoothingConstraintsOn)
    .function("AutomaticSmoothingConstraintsOff", &vtkSurfaceNets3D::AutomaticSmoothingConstraintsOff)
    .function("SetConstraintScale", &vtkSurfaceNets3D::SetConstraintScale)
    .function("GetConstraintScaleMinValue", &vtkSurfaceNets3D::GetConstraintScaleMinValue)
    .function("GetConstraintScaleMaxValue", &vtkSurfaceNets3D::GetConstraintScaleMaxValue)
    .function("GetConstraintScale", &vtkSurfaceNets3D::GetConstraintScale)
    .function("SetOptimizedSmoothingStencils", &vtkSurfaceNets3D::SetOptimizedSmoothingStencils)
    .function("GetOptimizedSmoothingStencils", &vtkSurfaceNets3D::GetOptimizedSmoothingStencils)
    .function("OptimizedSmoothingStencilsOn", &vtkSurfaceNets3D::OptimizedSmoothingStencilsOn)
    .function("OptimizedSmoothingStencilsOff", &vtkSurfaceNets3D::OptimizedSmoothingStencilsOff)
    .function("GetSmoother", &vtkSurfaceNets3D::GetSmoother, emscripten::allow_raw_pointers())
    .function("SetOutputStyle", &vtkSurfaceNets3D::SetOutputStyle)
    .function("GetOutputStyleMinValue", &vtkSurfaceNets3D::GetOutputStyleMinValue)
    .function("GetOutputStyleMaxValue", &vtkSurfaceNets3D::GetOutputStyleMaxValue)
    .function("GetOutputStyle", &vtkSurfaceNets3D::GetOutputStyle)
    .function("SetOutputStyleToDefault", &vtkSurfaceNets3D::SetOutputStyleToDefault)
    .function("SetOutputStyleToBoundary", &vtkSurfaceNets3D::SetOutputStyleToBoundary)
    .function("SetOutputStyleToSelected", &vtkSurfaceNets3D::SetOutputStyleToSelected)
    .function("InitializeSelectedLabelsList", &vtkSurfaceNets3D::InitializeSelectedLabelsList)
    .function("AddSelectedLabel", &vtkSurfaceNets3D::AddSelectedLabel)
    .function("DeleteSelectedLabel", &vtkSurfaceNets3D::DeleteSelectedLabel)
    .function("GetNumberOfSelectedLabels", &vtkSurfaceNets3D::GetNumberOfSelectedLabels)
    .function("GetSelectedLabel", &vtkSurfaceNets3D::GetSelectedLabel)
    .function("SetTriangulationStrategy", &vtkSurfaceNets3D::SetTriangulationStrategy)
    .function("GetTriangulationStrategyMinValue", &vtkSurfaceNets3D::GetTriangulationStrategyMinValue)
    .function("GetTriangulationStrategyMaxValue", &vtkSurfaceNets3D::GetTriangulationStrategyMaxValue)
    .function("GetTriangulationStrategy", &vtkSurfaceNets3D::GetTriangulationStrategy)
    .function("SetTriangulationStrategyToGreedy", &vtkSurfaceNets3D::SetTriangulationStrategyToGreedy)
    .function("SetTriangulationStrategyToMinEdge", &vtkSurfaceNets3D::SetTriangulationStrategyToMinEdge)
    .function("SetTriangulationStrategyToMinArea", &vtkSurfaceNets3D::SetTriangulationStrategyToMinArea)
    .function("SetDataCaching", &vtkSurfaceNets3D::SetDataCaching)
    .function("GetDataCaching", &vtkSurfaceNets3D::GetDataCaching)
    .function("DataCachingOn", &vtkSurfaceNets3D::DataCachingOn)
    .function("DataCachingOff", &vtkSurfaceNets3D::DataCachingOff);
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkSurfaceNets3D_0_2_constants) {
    typedef vtkSurfaceNets3D::MeshType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkSurfaceNets3D_MeshType_MESH_TYPE_DEFAULT", vtkSurfaceNets3D::MESH_TYPE_DEFAULT },
      { "vtkSurfaceNets3D_MeshType_MESH_TYPE_TRIANGLES", vtkSurfaceNets3D::MESH_TYPE_TRIANGLES },
      { "vtkSurfaceNets3D_MeshType_MESH_TYPE_QUADS", vtkSurfaceNets3D::MESH_TYPE_QUADS },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkSurfaceNets3D_1_2_constants) {
    typedef vtkSurfaceNets3D::OutputType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkSurfaceNets3D_OutputType_OUTPUT_STYLE_DEFAULT", vtkSurfaceNets3D::OUTPUT_STYLE_DEFAULT },
      { "vtkSurfaceNets3D_OutputType_OUTPUT_STYLE_BOUNDARY", vtkSurfaceNets3D::OUTPUT_STYLE_BOUNDARY },
      { "vtkSurfaceNets3D_OutputType_OUTPUT_STYLE_SELECTED", vtkSurfaceNets3D::OUTPUT_STYLE_SELECTED },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkSurfaceNets3D_2_2_constants) {
    typedef vtkSurfaceNets3D::TriangulationType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkSurfaceNets3D_TriangulationType_TRIANGULATION_GREEDY", vtkSurfaceNets3D::TRIANGULATION_GREEDY },
      { "vtkSurfaceNets3D_TriangulationType_TRIANGULATION_MIN_EDGE", vtkSurfaceNets3D::TRIANGULATION_MIN_EDGE },
      { "vtkSurfaceNets3D_TriangulationType_TRIANGULATION_MIN_AREA", vtkSurfaceNets3D::TRIANGULATION_MIN_AREA },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
