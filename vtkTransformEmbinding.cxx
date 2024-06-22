// JavaScript wrapper for vtkTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkCommonTransforms.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkTransformEmbinding.cxx \
 /home/jmh/github/vtk/Common/Transforms/vtkTransform.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMatrix4x4.h"
#include "vtkLinearTransform.h"
#include "vtkAbstractTransform.h"
#include "vtkTransform.h"

template<> void emscripten::internal::raw_destructor<vtkTransform>(vtkTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransform_class) {
  emscripten::class_<vtkTransform, emscripten::base<vtkLinearTransform>>("vtkTransform")
    .smart_ptr<vtkSmartPointer<vtkTransform>>("vtkSmartPointer<vtkTransform>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTransform>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Identity", &vtkTransform::Identity)
    .function("Inverse", &vtkTransform::Inverse)
    .function("Translate", emscripten::select_overload<void(vtkTransform&, double, double, double)>([](vtkTransform& self, double arg_0, double arg_1, double arg_2) -> void { return self.Translate( arg_0, arg_1, arg_2); }))
    .function("RotateWXYZ", emscripten::select_overload<void(vtkTransform&, double, double, double, double)>([](vtkTransform& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.RotateWXYZ( arg_0, arg_1, arg_2, arg_3); }))
    .function("RotateX", &vtkTransform::RotateX)
    .function("RotateY", &vtkTransform::RotateY)
    .function("RotateZ", &vtkTransform::RotateZ)
    .function("Scale", emscripten::select_overload<void(vtkTransform&, double, double, double)>([](vtkTransform& self, double arg_0, double arg_1, double arg_2) -> void { return self.Scale( arg_0, arg_1, arg_2); }))
    .function("SetMatrix", emscripten::select_overload<void(vtkTransform&, vtkMatrix4x4*)>([](vtkTransform& self, vtkMatrix4x4* arg_0) -> void { return self.SetMatrix( arg_0); }), emscripten::allow_raw_pointers())
    .function("Concatenate", emscripten::select_overload<void(vtkTransform&, vtkMatrix4x4*)>([](vtkTransform& self, vtkMatrix4x4* arg_0) -> void { return self.Concatenate( arg_0); }), emscripten::allow_raw_pointers())
    .function("Concatenate", emscripten::select_overload<void(vtkTransform&, vtkLinearTransform*)>([](vtkTransform& self, vtkLinearTransform* arg_0) -> void { return self.Concatenate( arg_0); }), emscripten::allow_raw_pointers())
    .function("PreMultiply", &vtkTransform::PreMultiply)
    .function("PostMultiply", &vtkTransform::PostMultiply)
    .function("GetNumberOfConcatenatedTransforms", &vtkTransform::GetNumberOfConcatenatedTransforms)
    .function("GetConcatenatedTransform", &vtkTransform::GetConcatenatedTransform, emscripten::allow_raw_pointers())
    .function("GetInverse", emscripten::select_overload<void(vtkTransform&, vtkMatrix4x4*)>([](vtkTransform& self, vtkMatrix4x4* arg_0) -> void { return self.GetInverse( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInverse", emscripten::select_overload<vtkAbstractTransform*(vtkTransform&)>([](vtkTransform& self) -> vtkAbstractTransform* { return self.GetInverse(); }), emscripten::allow_raw_pointers())
    .function("GetTranspose", &vtkTransform::GetTranspose, emscripten::allow_raw_pointers())
    .function("SetInput", &vtkTransform::SetInput, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkTransform::GetInput, emscripten::allow_raw_pointers())
    .function("GetInverseFlag", &vtkTransform::GetInverseFlag)
    .function("Push", &vtkTransform::Push)
    .function("Pop", &vtkTransform::Pop)
    .function("CircuitCheck", &vtkTransform::CircuitCheck, emscripten::allow_raw_pointers())
    .function("MakeTransform", &vtkTransform::MakeTransform, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkTransform::GetMTime);
}
