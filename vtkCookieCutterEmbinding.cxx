// JavaScript wrapper for vtkCookieCutter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkCookieCutterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkCookieCutter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataObject.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkCookieCutter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkCookieCutter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCookieCutter>(vtkCookieCutter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCookieCutter_class) {
  using PointInterpolationType=vtkCookieCutter::PointInterpolationType;
  emscripten::class_<vtkCookieCutter, emscripten::base<vtkPolyDataAlgorithm>>("vtkCookieCutter")
    .smart_ptr<vtkSmartPointer<vtkCookieCutter>>("vtkSmartPointer<vtkCookieCutter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCookieCutter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCookieCutter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCookieCutter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCookieCutter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCookieCutter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCookieCutter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCookieCutter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLoopsConnection", &vtkCookieCutter::SetLoopsConnection, emscripten::allow_raw_pointers())
    .function("GetLoopsConnection", &vtkCookieCutter::GetLoopsConnection, emscripten::allow_raw_pointers())
    .function("SetLoopsData", &vtkCookieCutter::SetLoopsData, emscripten::allow_raw_pointers())
    .function("GetLoops", &vtkCookieCutter::GetLoops, emscripten::allow_raw_pointers())
    .function("SetPassCellData", &vtkCookieCutter::SetPassCellData)
    .function("GetPassCellData", &vtkCookieCutter::GetPassCellData)
    .function("PassCellDataOn", &vtkCookieCutter::PassCellDataOn)
    .function("PassCellDataOff", &vtkCookieCutter::PassCellDataOff)
    .function("SetPassPointData", &vtkCookieCutter::SetPassPointData)
    .function("GetPassPointData", &vtkCookieCutter::GetPassPointData)
    .function("PassPointDataOn", &vtkCookieCutter::PassPointDataOn)
    .function("PassPointDataOff", &vtkCookieCutter::PassPointDataOff)
    .function("SetPointInterpolation", &vtkCookieCutter::SetPointInterpolation)
    .function("GetPointInterpolationMinValue", &vtkCookieCutter::GetPointInterpolationMinValue)
    .function("GetPointInterpolationMaxValue", &vtkCookieCutter::GetPointInterpolationMaxValue)
    .function("GetPointInterpolation", &vtkCookieCutter::GetPointInterpolation)
    .function("SetPointInterpolationToMeshEdges", &vtkCookieCutter::SetPointInterpolationToMeshEdges)
    .function("SetPointInterpolationToLoopEdges", &vtkCookieCutter::SetPointInterpolationToLoopEdges)
    .function("SetLocator", &vtkCookieCutter::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkCookieCutter::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkCookieCutter::CreateDefaultLocator);
}
EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkCookieCutter_0_2_constants) {
    typedef vtkCookieCutter::PointInterpolationType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkCookieCutter_PointInterpolationType_USE_MESH_EDGES", vtkCookieCutter::USE_MESH_EDGES },
      { "vtkCookieCutter_PointInterpolationType_USE_LOOP_EDGES", vtkCookieCutter::USE_LOOP_EDGES },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
