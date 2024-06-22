// JavaScript wrapper for vtkSphereTreeFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkSphereTreeFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkSphereTreeFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSphereTree.h"
#include "vtkSphereTreeFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkSphereTreeFilter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "VTK_SPHERE_TREE_LEVELS", 0 },
      { "VTK_SPHERE_TREE_POINT", 1 },
      { "VTK_SPHERE_TREE_LINE", 2 },
      { "VTK_SPHERE_TREE_PLANE", 3 },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkSphereTreeFilter>(vtkSphereTreeFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSphereTreeFilter_class) {
  emscripten::class_<vtkSphereTreeFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkSphereTreeFilter")
    .smart_ptr<vtkSmartPointer<vtkSphereTreeFilter>>("vtkSmartPointer<vtkSphereTreeFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSphereTreeFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphereTreeFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSphereTreeFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSphereTreeFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSphereTreeFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphereTreeFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSphereTreeFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSphereTree", &vtkSphereTreeFilter::SetSphereTree, emscripten::allow_raw_pointers())
    .function("GetSphereTree", &vtkSphereTreeFilter::GetSphereTree, emscripten::allow_raw_pointers())
    .function("SetExtractionMode", &vtkSphereTreeFilter::SetExtractionMode)
    .function("GetExtractionMode", &vtkSphereTreeFilter::GetExtractionMode)
    .function("SetExtractionModeToLevels", &vtkSphereTreeFilter::SetExtractionModeToLevels)
    .function("SetExtractionModeToPoint", &vtkSphereTreeFilter::SetExtractionModeToPoint)
    .function("SetExtractionModeToLine", &vtkSphereTreeFilter::SetExtractionModeToLine)
    .function("SetExtractionModeToPlane", &vtkSphereTreeFilter::SetExtractionModeToPlane)
    .function("GetExtractionModeAsString", emscripten::optional_override([](vtkSphereTreeFilter& self) -> std::string {  return self.GetExtractionModeAsString();}))
    .function("SetTreeHierarchy", &vtkSphereTreeFilter::SetTreeHierarchy)
    .function("GetTreeHierarchy", &vtkSphereTreeFilter::GetTreeHierarchy)
    .function("TreeHierarchyOn", &vtkSphereTreeFilter::TreeHierarchyOn)
    .function("TreeHierarchyOff", &vtkSphereTreeFilter::TreeHierarchyOff)
    .function("SetLevel", &vtkSphereTreeFilter::SetLevel)
    .function("GetLevelMinValue", &vtkSphereTreeFilter::GetLevelMinValue)
    .function("GetLevelMaxValue", &vtkSphereTreeFilter::GetLevelMaxValue)
    .function("GetLevel", &vtkSphereTreeFilter::GetLevel)
    .function("SetPoint", emscripten::select_overload<void(vtkSphereTreeFilter&, double, double, double)>([](vtkSphereTreeFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPoint( arg_0, arg_1, arg_2); }))
    .function("SetRay", emscripten::select_overload<void(vtkSphereTreeFilter&, double, double, double)>([](vtkSphereTreeFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetRay( arg_0, arg_1, arg_2); }))
    .function("SetNormal", emscripten::select_overload<void(vtkSphereTreeFilter&, double, double, double)>([](vtkSphereTreeFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormal( arg_0, arg_1, arg_2); }))
    .function("GetMTime", &vtkSphereTreeFilter::GetMTime);
}
