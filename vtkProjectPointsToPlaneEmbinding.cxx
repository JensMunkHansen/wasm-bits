// JavaScript wrapper for vtkProjectPointsToPlane with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkProjectPointsToPlaneEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkProjectPointsToPlane.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProjectPointsToPlane.h"

EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkProjectPointsToPlane_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkProjectPointsToPlane>(vtkProjectPointsToPlane * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProjectPointsToPlane_class) {
  using PlaneProjectionType=vtkProjectPointsToPlane::PlaneProjectionType;
  emscripten::class_<vtkProjectPointsToPlane, emscripten::base<vtkPointSetAlgorithm>>("vtkProjectPointsToPlane")
    .smart_ptr<vtkSmartPointer<vtkProjectPointsToPlane>>("vtkSmartPointer<vtkProjectPointsToPlane>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkProjectPointsToPlane>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProjectPointsToPlane::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProjectPointsToPlane& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProjectPointsToPlane::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProjectPointsToPlane::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProjectPointsToPlane::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProjectPointsToPlane& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetProjectionType", &vtkProjectPointsToPlane::SetProjectionType)
    .function("GetProjectionTypeMinValue", &vtkProjectPointsToPlane::GetProjectionTypeMinValue)
    .function("GetProjectionTypeMaxValue", &vtkProjectPointsToPlane::GetProjectionTypeMaxValue)
    .function("GetProjectionType", &vtkProjectPointsToPlane::GetProjectionType)
    .function("SetProjectionTypeToXPlane", &vtkProjectPointsToPlane::SetProjectionTypeToXPlane)
    .function("SetProjectionTypeToYPlane", &vtkProjectPointsToPlane::SetProjectionTypeToYPlane)
    .function("SetProjectionTypeToZPlane", &vtkProjectPointsToPlane::SetProjectionTypeToZPlane)
    .function("SetProjectionTypeToSpecifiedPlane", &vtkProjectPointsToPlane::SetProjectionTypeToSpecifiedPlane)
    .function("SetProjectionTypeToBestCoordinatePlane", &vtkProjectPointsToPlane::SetProjectionTypeToBestCoordinatePlane)
    .function("SetProjectionTypeToBestFitPlane", &vtkProjectPointsToPlane::SetProjectionTypeToBestFitPlane)
    .function("SetOrigin", emscripten::select_overload<void(vtkProjectPointsToPlane&, double, double, double)>([](vtkProjectPointsToPlane& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetNormal", emscripten::select_overload<void(vtkProjectPointsToPlane&, double, double, double)>([](vtkProjectPointsToPlane& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormal( arg_0, arg_1, arg_2); }))
    .function("SetOutputPointsPrecision", &vtkProjectPointsToPlane::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkProjectPointsToPlane::GetOutputPointsPrecision);
}
EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkProjectPointsToPlane_0_2_constants) {
    typedef vtkProjectPointsToPlane::PlaneProjectionType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[6] = {
      { "vtkProjectPointsToPlane_PlaneProjectionType_X_PLANE", vtkProjectPointsToPlane::X_PLANE },
      { "vtkProjectPointsToPlane_PlaneProjectionType_Y_PLANE", vtkProjectPointsToPlane::Y_PLANE },
      { "vtkProjectPointsToPlane_PlaneProjectionType_Z_PLANE", vtkProjectPointsToPlane::Z_PLANE },
      { "vtkProjectPointsToPlane_PlaneProjectionType_SPECIFIED_PLANE", vtkProjectPointsToPlane::SPECIFIED_PLANE },
      { "vtkProjectPointsToPlane_PlaneProjectionType_BEST_COORDINATE_PLANE", vtkProjectPointsToPlane::BEST_COORDINATE_PLANE },
      { "vtkProjectPointsToPlane_PlaneProjectionType_BEST_FIT_PLANE", vtkProjectPointsToPlane::BEST_FIT_PLANE },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
