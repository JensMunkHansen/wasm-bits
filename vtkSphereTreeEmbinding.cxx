// JavaScript wrapper for vtkSphereTree with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkSphereTreeEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkSphereTree.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkIdList.h"
#include "vtkSphereTree.h"

EMSCRIPTEN_BINDINGS(vtkCommonExecutionModel_vtkSphereTree_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_MAX_SPHERE_TREE_RESOLUTION", 10 },
      { "VTK_MAX_SPHERE_TREE_LEVELS", 20 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkSphereTree>(vtkSphereTree * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSphereTree_class) {
  emscripten::class_<vtkSphereTree, emscripten::base<vtkObject>>("vtkSphereTree")
    .smart_ptr<vtkSmartPointer<vtkSphereTree>>("vtkSmartPointer<vtkSphereTree>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSphereTree>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphereTree::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSphereTree& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSphereTree::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSphereTree::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphereTree::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSphereTree& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDataSet", &vtkSphereTree::SetDataSet, emscripten::allow_raw_pointers())
    .function("GetDataSet", &vtkSphereTree::GetDataSet, emscripten::allow_raw_pointers())
    .function("Build", emscripten::select_overload<void(vtkSphereTree&)>([](vtkSphereTree& self) -> void { return self.Build(); }))
    .function("Build", emscripten::select_overload<void(vtkSphereTree&, vtkDataSet*)>([](vtkSphereTree& self, vtkDataSet* arg_0) -> void { return self.Build( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetBuildHierarchy", &vtkSphereTree::SetBuildHierarchy)
    .function("GetBuildHierarchy", &vtkSphereTree::GetBuildHierarchy)
    .function("BuildHierarchyOn", &vtkSphereTree::BuildHierarchyOn)
    .function("BuildHierarchyOff", &vtkSphereTree::BuildHierarchyOff)
    .function("SetResolution", &vtkSphereTree::SetResolution)
    .function("GetResolutionMinValue", &vtkSphereTree::GetResolutionMinValue)
    .function("GetResolutionMaxValue", &vtkSphereTree::GetResolutionMaxValue)
    .function("GetResolution", &vtkSphereTree::GetResolution)
    .function("SetMaxLevel", &vtkSphereTree::SetMaxLevel)
    .function("GetMaxLevelMinValue", &vtkSphereTree::GetMaxLevelMinValue)
    .function("GetMaxLevelMaxValue", &vtkSphereTree::GetMaxLevelMaxValue)
    .function("GetMaxLevel", &vtkSphereTree::GetMaxLevel)
    .function("GetNumberOfLevels", &vtkSphereTree::GetNumberOfLevels)
    .function("GetCellSpheres", emscripten::optional_override([](vtkSphereTree& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetCellSpheres()) / sizeof(double);}));
}
