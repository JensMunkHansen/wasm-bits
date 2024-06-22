// JavaScript wrapper for vtkHyperTreeGridPreConfiguredSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkHyperTreeGridPreConfiguredSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkHyperTreeGridPreConfiguredSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkHyperTreeGrid.h"
#include "vtkHyperTreeGridPreConfiguredSource.h"

EMSCRIPTEN_BINDINGS(vtkFiltersSources_vtkHyperTreeGridPreConfiguredSource_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridPreConfiguredSource>(vtkHyperTreeGridPreConfiguredSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridPreConfiguredSource_class) {
  using HTGType=vtkHyperTreeGridPreConfiguredSource::HTGType;
  using HTGArchitecture=vtkHyperTreeGridPreConfiguredSource::HTGArchitecture;
  emscripten::class_<vtkHyperTreeGridPreConfiguredSource, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkHyperTreeGridPreConfiguredSource")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridPreConfiguredSource>>("vtkSmartPointer<vtkHyperTreeGridPreConfiguredSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHyperTreeGridPreConfiguredSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridPreConfiguredSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridPreConfiguredSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridPreConfiguredSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridPreConfiguredSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridPreConfiguredSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridPreConfiguredSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GenerateUnbalanced", &vtkHyperTreeGridPreConfiguredSource::GenerateUnbalanced, emscripten::allow_raw_pointers())
    .function("GenerateBalanced", &vtkHyperTreeGridPreConfiguredSource::GenerateBalanced, emscripten::allow_raw_pointers())
    .function("GetHTGMode", &vtkHyperTreeGridPreConfiguredSource::GetHTGMode)
    .function("SetHTGMode", &vtkHyperTreeGridPreConfiguredSource::SetHTGMode)
    .function("GetCustomArchitecture", &vtkHyperTreeGridPreConfiguredSource::GetCustomArchitecture)
    .function("SetCustomArchitecture", &vtkHyperTreeGridPreConfiguredSource::SetCustomArchitecture)
    .function("GetCustomDim", &vtkHyperTreeGridPreConfiguredSource::GetCustomDim)
    .function("SetCustomDim", &vtkHyperTreeGridPreConfiguredSource::SetCustomDim)
    .function("GetCustomFactor", &vtkHyperTreeGridPreConfiguredSource::GetCustomFactor)
    .function("SetCustomFactor", &vtkHyperTreeGridPreConfiguredSource::SetCustomFactor)
    .function("GetCustomDepth", &vtkHyperTreeGridPreConfiguredSource::GetCustomDepth)
    .function("SetCustomDepth", &vtkHyperTreeGridPreConfiguredSource::SetCustomDepth)
    .function("SetCustomExtent", emscripten::select_overload<void(vtkHyperTreeGridPreConfiguredSource&, double, double, double, double, double, double)>([](vtkHyperTreeGridPreConfiguredSource& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetCustomExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetCustomSubdivisions", emscripten::select_overload<void(vtkHyperTreeGridPreConfiguredSource&, unsigned int, unsigned int, unsigned int)>([](vtkHyperTreeGridPreConfiguredSource& self, unsigned int arg_0, unsigned int arg_1, unsigned int arg_2) -> void { return self.SetCustomSubdivisions( arg_0, arg_1, arg_2); }))
    .function("GenerateUnbalanced3DepthQuadTree2x3", &vtkHyperTreeGridPreConfiguredSource::GenerateUnbalanced3DepthQuadTree2x3, emscripten::allow_raw_pointers())
    .function("GenerateBalanced3DepthQuadTree2x3", &vtkHyperTreeGridPreConfiguredSource::GenerateBalanced3DepthQuadTree2x3, emscripten::allow_raw_pointers())
    .function("GenerateUnbalanced2Depth3BranchTree3x3", &vtkHyperTreeGridPreConfiguredSource::GenerateUnbalanced2Depth3BranchTree3x3, emscripten::allow_raw_pointers())
    .function("GenerateBalanced4Depth3BranchTree2x2", &vtkHyperTreeGridPreConfiguredSource::GenerateBalanced4Depth3BranchTree2x2, emscripten::allow_raw_pointers())
    .function("GenerateUnbalanced3DepthOctTree3x2x3", &vtkHyperTreeGridPreConfiguredSource::GenerateUnbalanced3DepthOctTree3x2x3, emscripten::allow_raw_pointers())
    .function("GenerateBalanced2Depth3BranchTree3x3x2", &vtkHyperTreeGridPreConfiguredSource::GenerateBalanced2Depth3BranchTree3x3x2, emscripten::allow_raw_pointers())
    .function("GenerateCustom", &vtkHyperTreeGridPreConfiguredSource::GenerateCustom, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersSources_vtkHyperTreeGridPreConfiguredSource_0_2_constants) {
    typedef vtkHyperTreeGridPreConfiguredSource::HTGType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[7] = {
      { "vtkHyperTreeGridPreConfiguredSource_HTGType_UNBALANCED_3DEPTH_2BRANCH_2X3", vtkHyperTreeGridPreConfiguredSource::UNBALANCED_3DEPTH_2BRANCH_2X3 },
      { "vtkHyperTreeGridPreConfiguredSource_HTGType_BALANCED_3DEPTH_2BRANCH_2X3", vtkHyperTreeGridPreConfiguredSource::BALANCED_3DEPTH_2BRANCH_2X3 },
      { "vtkHyperTreeGridPreConfiguredSource_HTGType_UNBALANCED_2DEPTH_3BRANCH_3X3", vtkHyperTreeGridPreConfiguredSource::UNBALANCED_2DEPTH_3BRANCH_3X3 },
      { "vtkHyperTreeGridPreConfiguredSource_HTGType_BALANCED_4DEPTH_3BRANCH_2X2", vtkHyperTreeGridPreConfiguredSource::BALANCED_4DEPTH_3BRANCH_2X2 },
      { "vtkHyperTreeGridPreConfiguredSource_HTGType_UNBALANCED_3DEPTH_2BRANCH_3X2X3", vtkHyperTreeGridPreConfiguredSource::UNBALANCED_3DEPTH_2BRANCH_3X2X3 },
      { "vtkHyperTreeGridPreConfiguredSource_HTGType_BALANCED_2DEPTH_3BRANCH_3X3X2", vtkHyperTreeGridPreConfiguredSource::BALANCED_2DEPTH_3BRANCH_3X3X2 },
      { "vtkHyperTreeGridPreConfiguredSource_HTGType_CUSTOM", vtkHyperTreeGridPreConfiguredSource::CUSTOM },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersSources_vtkHyperTreeGridPreConfiguredSource_1_2_constants) {
    typedef vtkHyperTreeGridPreConfiguredSource::HTGArchitecture cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkHyperTreeGridPreConfiguredSource_HTGArchitecture_UNBALANCED", vtkHyperTreeGridPreConfiguredSource::UNBALANCED },
      { "vtkHyperTreeGridPreConfiguredSource_HTGArchitecture_BALANCED", vtkHyperTreeGridPreConfiguredSource::BALANCED },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
