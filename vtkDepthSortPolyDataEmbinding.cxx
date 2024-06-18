// JavaScript wrapper for vtkDepthSortPolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkDepthSortPolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkDepthSortPolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCamera.h"
#include "vtkProp3D.h"
#include "vtkDepthSortPolyData.h"

EMSCRIPTEN_BINDINGS(vtkFiltersHybrid_vtkDepthSortPolyData_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkDepthSortPolyData>(vtkDepthSortPolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDepthSortPolyData_class) {
  using Directions=vtkDepthSortPolyData::Directions;
  using SortMode=vtkDepthSortPolyData::SortMode;
  emscripten::class_<vtkDepthSortPolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkDepthSortPolyData")
    .smart_ptr<vtkSmartPointer<vtkDepthSortPolyData>>("vtkSmartPointer<vtkDepthSortPolyData>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDepthSortPolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDepthSortPolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDepthSortPolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDepthSortPolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDepthSortPolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDepthSortPolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDepthSortPolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDirection", &vtkDepthSortPolyData::SetDirection)
    .function("GetDirection", &vtkDepthSortPolyData::GetDirection)
    .function("SetDirectionToFrontToBack", &vtkDepthSortPolyData::SetDirectionToFrontToBack)
    .function("SetDirectionToBackToFront", &vtkDepthSortPolyData::SetDirectionToBackToFront)
    .function("SetDirectionToSpecifiedVector", &vtkDepthSortPolyData::SetDirectionToSpecifiedVector)
    .function("SetDepthSortMode", &vtkDepthSortPolyData::SetDepthSortMode)
    .function("GetDepthSortMode", &vtkDepthSortPolyData::GetDepthSortMode)
    .function("SetDepthSortModeToFirstPoint", &vtkDepthSortPolyData::SetDepthSortModeToFirstPoint)
    .function("SetDepthSortModeToBoundsCenter", &vtkDepthSortPolyData::SetDepthSortModeToBoundsCenter)
    .function("SetDepthSortModeToParametricCenter", &vtkDepthSortPolyData::SetDepthSortModeToParametricCenter)
    .function("SetCamera", &vtkDepthSortPolyData::SetCamera, emscripten::allow_raw_pointers())
    .function("GetCamera", &vtkDepthSortPolyData::GetCamera, emscripten::allow_raw_pointers())
    .function("SetProp3D", &vtkDepthSortPolyData::SetProp3D, emscripten::allow_raw_pointers())
    .function("GetProp3D", &vtkDepthSortPolyData::GetProp3D, emscripten::allow_raw_pointers())
    .function("SetVector", emscripten::select_overload<void(vtkDepthSortPolyData&, double, double, double)>([](vtkDepthSortPolyData& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetVector( arg_0, arg_1, arg_2); }))
    .function("SetOrigin", emscripten::select_overload<void(vtkDepthSortPolyData&, double, double, double)>([](vtkDepthSortPolyData& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetSortScalars", &vtkDepthSortPolyData::SetSortScalars)
    .function("GetSortScalars", &vtkDepthSortPolyData::GetSortScalars)
    .function("SortScalarsOn", &vtkDepthSortPolyData::SortScalarsOn)
    .function("SortScalarsOff", &vtkDepthSortPolyData::SortScalarsOff)
    .function("GetMTime", &vtkDepthSortPolyData::GetMTime);
}
EMSCRIPTEN_BINDINGS(vtkFiltersHybrid_vtkDepthSortPolyData_0_2_constants) {
    typedef vtkDepthSortPolyData::Directions cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkDepthSortPolyData_Directions_VTK_DIRECTION_BACK_TO_FRONT", vtkDepthSortPolyData::VTK_DIRECTION_BACK_TO_FRONT },
      { "vtkDepthSortPolyData_Directions_VTK_DIRECTION_FRONT_TO_BACK", vtkDepthSortPolyData::VTK_DIRECTION_FRONT_TO_BACK },
      { "vtkDepthSortPolyData_Directions_VTK_DIRECTION_SPECIFIED_VECTOR", vtkDepthSortPolyData::VTK_DIRECTION_SPECIFIED_VECTOR },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersHybrid_vtkDepthSortPolyData_1_2_constants) {
    typedef vtkDepthSortPolyData::SortMode cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkDepthSortPolyData_SortMode_VTK_SORT_FIRST_POINT", vtkDepthSortPolyData::VTK_SORT_FIRST_POINT },
      { "vtkDepthSortPolyData_SortMode_VTK_SORT_BOUNDS_CENTER", vtkDepthSortPolyData::VTK_SORT_BOUNDS_CENTER },
      { "vtkDepthSortPolyData_SortMode_VTK_SORT_PARAMETRIC_CENTER", vtkDepthSortPolyData::VTK_SORT_PARAMETRIC_CENTER },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
