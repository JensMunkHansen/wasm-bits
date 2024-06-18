// JavaScript wrapper for vtkProp3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkProp3DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkProp3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProp.h"
#include "vtkLinearTransform.h"
#include "vtkMatrix4x4.h"
#include "vtkRenderer.h"
#include "vtkProp3D.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkProp3D_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkProp3D>(vtkProp3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProp3D_class) {
  using CoordinateSystems=vtkProp3D::CoordinateSystems;
  emscripten::class_<vtkProp3D, emscripten::base<vtkProp>>("vtkProp3D")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProp3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProp3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProp3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProp3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProp3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProp3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ShallowCopy", &vtkProp3D::ShallowCopy, emscripten::allow_raw_pointers())
    .function("SetPosition", emscripten::select_overload<void(vtkProp3D&, double, double, double)>([](vtkProp3D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPosition( arg_0, arg_1, arg_2); }))
    .function("AddPosition", emscripten::select_overload<void(vtkProp3D&, double, double, double)>([](vtkProp3D& self, double arg_0, double arg_1, double arg_2) -> void { return self.AddPosition( arg_0, arg_1, arg_2); }))
    .function("SetOrigin", emscripten::select_overload<void(vtkProp3D&, double, double, double)>([](vtkProp3D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetScale", emscripten::select_overload<void(vtkProp3D&, double, double, double)>([](vtkProp3D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetScale( arg_0, arg_1, arg_2); }))
    .function("SetScale", emscripten::select_overload<void(vtkProp3D&, double)>([](vtkProp3D& self, double arg_0) -> void { return self.SetScale( arg_0); }))
    .function("SetUserTransform", &vtkProp3D::SetUserTransform, emscripten::allow_raw_pointers())
    .function("GetUserTransform", &vtkProp3D::GetUserTransform, emscripten::allow_raw_pointers())
    .function("SetUserMatrix", &vtkProp3D::SetUserMatrix, emscripten::allow_raw_pointers())
    .function("GetUserMatrix", &vtkProp3D::GetUserMatrix, emscripten::allow_raw_pointers())
    .function("GetMatrix", emscripten::select_overload<void(vtkProp3D&, vtkMatrix4x4*)>([](vtkProp3D& self, vtkMatrix4x4* arg_0) -> void { return self.GetMatrix( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetMatrix", emscripten::select_overload<vtkMatrix4x4*(vtkProp3D&)>([](vtkProp3D& self) -> vtkMatrix4x4* { return self.GetMatrix(); }), emscripten::allow_raw_pointers())
    .function("GetModelToWorldMatrix", &vtkProp3D::GetModelToWorldMatrix, emscripten::allow_raw_pointers())
    .function("SetPropertiesFromModelToWorldMatrix", &vtkProp3D::SetPropertiesFromModelToWorldMatrix, emscripten::allow_raw_pointers())
    .function("GetLength", &vtkProp3D::GetLength)
    .function("RotateX", &vtkProp3D::RotateX)
    .function("RotateY", &vtkProp3D::RotateY)
    .function("RotateZ", &vtkProp3D::RotateZ)
    .function("RotateWXYZ", &vtkProp3D::RotateWXYZ)
    .function("SetOrientation", emscripten::select_overload<void(vtkProp3D&, double, double, double)>([](vtkProp3D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrientation( arg_0, arg_1, arg_2); }))
    .function("AddOrientation", emscripten::select_overload<void(vtkProp3D&, double, double, double)>([](vtkProp3D& self, double arg_0, double arg_1, double arg_2) -> void { return self.AddOrientation( arg_0, arg_1, arg_2); }))
    .function("PokeMatrix", &vtkProp3D::PokeMatrix, emscripten::allow_raw_pointers())
    .function("InitPathTraversal", &vtkProp3D::InitPathTraversal)
    .function("GetMTime", &vtkProp3D::GetMTime)
    .function("GetUserTransformMatrixMTime", &vtkProp3D::GetUserTransformMatrixMTime)
    .function("ComputeMatrix", &vtkProp3D::ComputeMatrix)
    .function("GetIsIdentity", &vtkProp3D::GetIsIdentity)
    .function("SetCoordinateSystemToWorld", &vtkProp3D::SetCoordinateSystemToWorld)
    .function("SetCoordinateSystemToPhysical", &vtkProp3D::SetCoordinateSystemToPhysical)
    .function("SetCoordinateSystemToDevice", &vtkProp3D::SetCoordinateSystemToDevice)
    .function("SetCoordinateSystem", &vtkProp3D::SetCoordinateSystem)
    .function("GetCoordinateSystem", &vtkProp3D::GetCoordinateSystem)
    .function("GetCoordinateSystemAsString", emscripten::optional_override([](vtkProp3D& self) -> std::string {  return self.GetCoordinateSystemAsString();}))
    .function("SetCoordinateSystemRenderer", &vtkProp3D::SetCoordinateSystemRenderer, emscripten::allow_raw_pointers())
    .function("GetCoordinateSystemRenderer", &vtkProp3D::GetCoordinateSystemRenderer, emscripten::allow_raw_pointers())
    .function("SetCoordinateSystemDevice", &vtkProp3D::SetCoordinateSystemDevice)
    .function("GetCoordinateSystemDevice", &vtkProp3D::GetCoordinateSystemDevice);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkProp3D_0_2_constants) {
    typedef vtkProp3D::CoordinateSystems cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkProp3D_CoordinateSystems_WORLD", vtkProp3D::WORLD },
      { "vtkProp3D_CoordinateSystems_PHYSICAL", vtkProp3D::PHYSICAL },
      { "vtkProp3D_CoordinateSystems_DEVICE", vtkProp3D::DEVICE },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
