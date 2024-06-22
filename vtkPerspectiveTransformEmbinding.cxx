// JavaScript wrapper for vtkPerspectiveTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkCommonTransforms.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkPerspectiveTransformEmbinding.cxx \
 /home/jmh/github/vtk/Common/Transforms/vtkPerspectiveTransform.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMatrix4x4.h"
#include "vtkHomogeneousTransform.h"
#include "vtkAbstractTransform.h"
#include "vtkPerspectiveTransform.h"

template<> void emscripten::internal::raw_destructor<vtkPerspectiveTransform>(vtkPerspectiveTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPerspectiveTransform_class) {
  emscripten::class_<vtkPerspectiveTransform, emscripten::base<vtkHomogeneousTransform>>("vtkPerspectiveTransform")
    .smart_ptr<vtkSmartPointer<vtkPerspectiveTransform>>("vtkSmartPointer<vtkPerspectiveTransform>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPerspectiveTransform>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPerspectiveTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPerspectiveTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPerspectiveTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPerspectiveTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPerspectiveTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPerspectiveTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Identity", &vtkPerspectiveTransform::Identity)
    .function("Inverse", &vtkPerspectiveTransform::Inverse)
    .function("AdjustViewport", &vtkPerspectiveTransform::AdjustViewport)
    .function("AdjustZBuffer", &vtkPerspectiveTransform::AdjustZBuffer)
    .function("Ortho", &vtkPerspectiveTransform::Ortho)
    .function("Frustum", &vtkPerspectiveTransform::Frustum)
    .function("Perspective", &vtkPerspectiveTransform::Perspective)
    .function("Shear", &vtkPerspectiveTransform::Shear)
    .function("Stereo", &vtkPerspectiveTransform::Stereo)
    .function("SetupCamera", emscripten::select_overload<void(vtkPerspectiveTransform&, double, double, double, double, double, double, double, double, double)>([](vtkPerspectiveTransform& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5, double arg_6, double arg_7, double arg_8) -> void { return self.SetupCamera( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8); }))
    .function("Translate", emscripten::select_overload<void(vtkPerspectiveTransform&, double, double, double)>([](vtkPerspectiveTransform& self, double arg_0, double arg_1, double arg_2) -> void { return self.Translate( arg_0, arg_1, arg_2); }))
    .function("RotateWXYZ", emscripten::select_overload<void(vtkPerspectiveTransform&, double, double, double, double)>([](vtkPerspectiveTransform& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.RotateWXYZ( arg_0, arg_1, arg_2, arg_3); }))
    .function("RotateX", &vtkPerspectiveTransform::RotateX)
    .function("RotateY", &vtkPerspectiveTransform::RotateY)
    .function("RotateZ", &vtkPerspectiveTransform::RotateZ)
    .function("Scale", emscripten::select_overload<void(vtkPerspectiveTransform&, double, double, double)>([](vtkPerspectiveTransform& self, double arg_0, double arg_1, double arg_2) -> void { return self.Scale( arg_0, arg_1, arg_2); }))
    .function("SetMatrix", emscripten::select_overload<void(vtkPerspectiveTransform&, vtkMatrix4x4*)>([](vtkPerspectiveTransform& self, vtkMatrix4x4* arg_0) -> void { return self.SetMatrix( arg_0); }), emscripten::allow_raw_pointers())
    .function("Concatenate", emscripten::select_overload<void(vtkPerspectiveTransform&, vtkMatrix4x4*)>([](vtkPerspectiveTransform& self, vtkMatrix4x4* arg_0) -> void { return self.Concatenate( arg_0); }), emscripten::allow_raw_pointers())
    .function("Concatenate", emscripten::select_overload<void(vtkPerspectiveTransform&, vtkHomogeneousTransform*)>([](vtkPerspectiveTransform& self, vtkHomogeneousTransform* arg_0) -> void { return self.Concatenate( arg_0); }), emscripten::allow_raw_pointers())
    .function("PreMultiply", &vtkPerspectiveTransform::PreMultiply)
    .function("PostMultiply", &vtkPerspectiveTransform::PostMultiply)
    .function("GetNumberOfConcatenatedTransforms", &vtkPerspectiveTransform::GetNumberOfConcatenatedTransforms)
    .function("GetConcatenatedTransform", &vtkPerspectiveTransform::GetConcatenatedTransform, emscripten::allow_raw_pointers())
    .function("SetInput", &vtkPerspectiveTransform::SetInput, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkPerspectiveTransform::GetInput, emscripten::allow_raw_pointers())
    .function("GetInverseFlag", &vtkPerspectiveTransform::GetInverseFlag)
    .function("Push", &vtkPerspectiveTransform::Push)
    .function("Pop", &vtkPerspectiveTransform::Pop)
    .function("MakeTransform", &vtkPerspectiveTransform::MakeTransform, emscripten::allow_raw_pointers())
    .function("CircuitCheck", &vtkPerspectiveTransform::CircuitCheck, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkPerspectiveTransform::GetMTime);
}
