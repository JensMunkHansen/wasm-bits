// JavaScript wrapper for vtkGeneralTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkCommonTransforms.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkGeneralTransformEmbinding.cxx \
 /home/jmh/github/vtk/Common/Transforms/vtkGeneralTransform.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMatrix4x4.h"
#include "vtkAbstractTransform.h"
#include "vtkGeneralTransform.h"

template<> void emscripten::internal::raw_destructor<vtkGeneralTransform>(vtkGeneralTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGeneralTransform_class) {
  emscripten::class_<vtkGeneralTransform, emscripten::base<vtkAbstractTransform>>("vtkGeneralTransform")
    .smart_ptr<vtkSmartPointer<vtkGeneralTransform>>("vtkSmartPointer<vtkGeneralTransform>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGeneralTransform>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGeneralTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGeneralTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGeneralTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGeneralTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGeneralTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGeneralTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Identity", &vtkGeneralTransform::Identity)
    .function("Inverse", &vtkGeneralTransform::Inverse)
    .function("Translate", emscripten::select_overload<void(vtkGeneralTransform&, double, double, double)>([](vtkGeneralTransform& self, double arg_0, double arg_1, double arg_2) -> void { return self.Translate( arg_0, arg_1, arg_2); }))
    .function("RotateWXYZ", emscripten::select_overload<void(vtkGeneralTransform&, double, double, double, double)>([](vtkGeneralTransform& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.RotateWXYZ( arg_0, arg_1, arg_2, arg_3); }))
    .function("RotateX", &vtkGeneralTransform::RotateX)
    .function("RotateY", &vtkGeneralTransform::RotateY)
    .function("RotateZ", &vtkGeneralTransform::RotateZ)
    .function("Scale", emscripten::select_overload<void(vtkGeneralTransform&, double, double, double)>([](vtkGeneralTransform& self, double arg_0, double arg_1, double arg_2) -> void { return self.Scale( arg_0, arg_1, arg_2); }))
    .function("Concatenate", emscripten::select_overload<void(vtkGeneralTransform&, vtkMatrix4x4*)>([](vtkGeneralTransform& self, vtkMatrix4x4* arg_0) -> void { return self.Concatenate( arg_0); }), emscripten::allow_raw_pointers())
    .function("Concatenate", emscripten::select_overload<void(vtkGeneralTransform&, vtkAbstractTransform*)>([](vtkGeneralTransform& self, vtkAbstractTransform* arg_0) -> void { return self.Concatenate( arg_0); }), emscripten::allow_raw_pointers())
    .function("PreMultiply", &vtkGeneralTransform::PreMultiply)
    .function("PostMultiply", &vtkGeneralTransform::PostMultiply)
    .function("GetNumberOfConcatenatedTransforms", &vtkGeneralTransform::GetNumberOfConcatenatedTransforms)
    .function("GetConcatenatedTransform", &vtkGeneralTransform::GetConcatenatedTransform, emscripten::allow_raw_pointers())
    .function("SetInput", &vtkGeneralTransform::SetInput, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkGeneralTransform::GetInput, emscripten::allow_raw_pointers())
    .function("GetInverseFlag", &vtkGeneralTransform::GetInverseFlag)
    .function("Push", &vtkGeneralTransform::Push)
    .function("Pop", &vtkGeneralTransform::Pop)
    .function("CircuitCheck", &vtkGeneralTransform::CircuitCheck, emscripten::allow_raw_pointers())
    .function("MakeTransform", &vtkGeneralTransform::MakeTransform, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkGeneralTransform::GetMTime);
}
