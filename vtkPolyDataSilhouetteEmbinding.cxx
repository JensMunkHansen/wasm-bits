// JavaScript wrapper for vtkPolyDataSilhouette with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkPolyDataSilhouetteEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkPolyDataSilhouette.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCamera.h"
#include "vtkProp3D.h"
#include "vtkPolyDataSilhouette.h"

EMSCRIPTEN_BINDINGS(vtkFiltersHybrid_vtkPolyDataSilhouette_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPolyDataSilhouette>(vtkPolyDataSilhouette * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataSilhouette_class) {
  using Directions=vtkPolyDataSilhouette::Directions;
  emscripten::class_<vtkPolyDataSilhouette, emscripten::base<vtkPolyDataAlgorithm>>("vtkPolyDataSilhouette")
    .smart_ptr<vtkSmartPointer<vtkPolyDataSilhouette>>("vtkSmartPointer<vtkPolyDataSilhouette>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPolyDataSilhouette>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataSilhouette::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataSilhouette& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataSilhouette::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataSilhouette::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataSilhouette::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataSilhouette& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnableFeatureAngle", &vtkPolyDataSilhouette::SetEnableFeatureAngle)
    .function("GetEnableFeatureAngle", &vtkPolyDataSilhouette::GetEnableFeatureAngle)
    .function("SetFeatureAngle", &vtkPolyDataSilhouette::SetFeatureAngle)
    .function("GetFeatureAngle", &vtkPolyDataSilhouette::GetFeatureAngle)
    .function("SetBorderEdges", &vtkPolyDataSilhouette::SetBorderEdges)
    .function("GetBorderEdges", &vtkPolyDataSilhouette::GetBorderEdges)
    .function("BorderEdgesOn", &vtkPolyDataSilhouette::BorderEdgesOn)
    .function("BorderEdgesOff", &vtkPolyDataSilhouette::BorderEdgesOff)
    .function("SetPieceInvariant", &vtkPolyDataSilhouette::SetPieceInvariant)
    .function("GetPieceInvariant", &vtkPolyDataSilhouette::GetPieceInvariant)
    .function("PieceInvariantOn", &vtkPolyDataSilhouette::PieceInvariantOn)
    .function("PieceInvariantOff", &vtkPolyDataSilhouette::PieceInvariantOff)
    .function("SetDirection", &vtkPolyDataSilhouette::SetDirection)
    .function("GetDirection", &vtkPolyDataSilhouette::GetDirection)
    .function("SetDirectionToSpecifiedVector", &vtkPolyDataSilhouette::SetDirectionToSpecifiedVector)
    .function("SetDirectionToSpecifiedOrigin", &vtkPolyDataSilhouette::SetDirectionToSpecifiedOrigin)
    .function("SetDirectionToCameraVector", &vtkPolyDataSilhouette::SetDirectionToCameraVector)
    .function("SetDirectionToCameraOrigin", &vtkPolyDataSilhouette::SetDirectionToCameraOrigin)
    .function("SetCamera", &vtkPolyDataSilhouette::SetCamera, emscripten::allow_raw_pointers())
    .function("GetCamera", &vtkPolyDataSilhouette::GetCamera, emscripten::allow_raw_pointers())
    .function("SetProp3D", &vtkPolyDataSilhouette::SetProp3D, emscripten::allow_raw_pointers())
    .function("GetProp3D", &vtkPolyDataSilhouette::GetProp3D, emscripten::allow_raw_pointers())
    .function("SetVector", emscripten::select_overload<void(vtkPolyDataSilhouette&, double, double, double)>([](vtkPolyDataSilhouette& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetVector( arg_0, arg_1, arg_2); }))
    .function("SetOrigin", emscripten::select_overload<void(vtkPolyDataSilhouette&, double, double, double)>([](vtkPolyDataSilhouette& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("GetMTime", &vtkPolyDataSilhouette::GetMTime);
}
EMSCRIPTEN_BINDINGS(vtkFiltersHybrid_vtkPolyDataSilhouette_0_2_constants) {
    typedef vtkPolyDataSilhouette::Directions cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkPolyDataSilhouette_Directions_VTK_DIRECTION_SPECIFIED_VECTOR", vtkPolyDataSilhouette::VTK_DIRECTION_SPECIFIED_VECTOR },
      { "vtkPolyDataSilhouette_Directions_VTK_DIRECTION_SPECIFIED_ORIGIN", vtkPolyDataSilhouette::VTK_DIRECTION_SPECIFIED_ORIGIN },
      { "vtkPolyDataSilhouette_Directions_VTK_DIRECTION_CAMERA_ORIGIN", vtkPolyDataSilhouette::VTK_DIRECTION_CAMERA_ORIGIN },
      { "vtkPolyDataSilhouette_Directions_VTK_DIRECTION_CAMERA_VECTOR", vtkPolyDataSilhouette::VTK_DIRECTION_CAMERA_VECTOR },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
