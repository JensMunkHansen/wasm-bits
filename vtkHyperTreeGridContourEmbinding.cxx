// JavaScript wrapper for vtkHyperTreeGridContour with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkFiltersHyperTree.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkHyperTreeGridContourEmbinding.cxx \
 /home/jmh/github/vtk/Filters/HyperTree/vtkHyperTreeGridContour.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkHyperTreeGridContour.h"

EMSCRIPTEN_BINDINGS(vtkFiltersHyperTree_vtkHyperTreeGridContour_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridContour>(vtkHyperTreeGridContour * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridContour_class) {
  using CellStrategy3D=vtkHyperTreeGridContour::CellStrategy3D;
  emscripten::class_<vtkHyperTreeGridContour, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkHyperTreeGridContour")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridContour>>("vtkSmartPointer<vtkHyperTreeGridContour>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHyperTreeGridContour>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridContour::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridContour& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridContour::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridContour::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridContour::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridContour& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLocator", &vtkHyperTreeGridContour::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkHyperTreeGridContour::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkHyperTreeGridContour::CreateDefaultLocator)
    .function("GetMTime", &vtkHyperTreeGridContour::GetMTime)
    .function("SetValue", &vtkHyperTreeGridContour::SetValue)
    .function("GetValue", &vtkHyperTreeGridContour::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkHyperTreeGridContour&)>([](vtkHyperTreeGridContour& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkHyperTreeGridContour&, std::uintptr_t)>([](vtkHyperTreeGridContour& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkHyperTreeGridContour::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkHyperTreeGridContour::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkHyperTreeGridContour&, int, double, double)>([](vtkHyperTreeGridContour& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("SetStrategy3D", &vtkHyperTreeGridContour::SetStrategy3D)
    .function("GetStrategy3DMinValue", &vtkHyperTreeGridContour::GetStrategy3DMinValue)
    .function("GetStrategy3DMaxValue", &vtkHyperTreeGridContour::GetStrategy3DMaxValue)
    .function("SetUseImplicitArrays", &vtkHyperTreeGridContour::SetUseImplicitArrays)
    .function("GetUseImplicitArrays", &vtkHyperTreeGridContour::GetUseImplicitArrays)
    .function("UseImplicitArraysOn", &vtkHyperTreeGridContour::UseImplicitArraysOn)
    .function("UseImplicitArraysOff", &vtkHyperTreeGridContour::UseImplicitArraysOff);
}
EMSCRIPTEN_BINDINGS(vtkFiltersHyperTree_vtkHyperTreeGridContour_0_2_constants) {
    typedef vtkHyperTreeGridContour::CellStrategy3D cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkHyperTreeGridContour_CellStrategy3D_USE_VOXELS", vtkHyperTreeGridContour::USE_VOXELS },
      { "vtkHyperTreeGridContour_CellStrategy3D_USE_DECOMPOSED_POLYHEDRA", vtkHyperTreeGridContour::USE_DECOMPOSED_POLYHEDRA },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
