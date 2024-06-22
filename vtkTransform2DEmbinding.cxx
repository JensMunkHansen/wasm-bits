// JavaScript wrapper for vtkTransform2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkCommonTransforms.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkTransform2DEmbinding.cxx \
 /home/jmh/github/vtk/Common/Transforms/vtkTransform2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMatrix3x3.h"
#include "vtkPoints2D.h"
#include "vtkTransform2D.h"

template<> void emscripten::internal::raw_destructor<vtkTransform2D>(vtkTransform2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransform2D_class) {
  emscripten::class_<vtkTransform2D, emscripten::base<vtkObject>>("vtkTransform2D")
    .smart_ptr<vtkSmartPointer<vtkTransform2D>>("vtkSmartPointer<vtkTransform2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTransform2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransform2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTransform2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTransform2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTransform2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransform2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTransform2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Identity", &vtkTransform2D::Identity)
    .function("Inverse", &vtkTransform2D::Inverse)
    .function("Translate", emscripten::select_overload<void(vtkTransform2D&, double, double)>([](vtkTransform2D& self, double arg_0, double arg_1) -> void { return self.Translate( arg_0, arg_1); }))
    .function("Rotate", &vtkTransform2D::Rotate)
    .function("Scale", emscripten::select_overload<void(vtkTransform2D&, double, double)>([](vtkTransform2D& self, double arg_0, double arg_1) -> void { return self.Scale( arg_0, arg_1); }))
    .function("SetMatrix", emscripten::select_overload<void(vtkTransform2D&, vtkMatrix3x3*)>([](vtkTransform2D& self, vtkMatrix3x3* arg_0) -> void { return self.SetMatrix( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetMatrix", emscripten::select_overload<vtkMatrix3x3*(vtkTransform2D&)>([](vtkTransform2D& self) -> vtkMatrix3x3* { return self.GetMatrix(); }), emscripten::allow_raw_pointers())
    .function("GetMatrix", emscripten::select_overload<void(vtkTransform2D&, vtkMatrix3x3*)>([](vtkTransform2D& self, vtkMatrix3x3* arg_0) -> void { return self.GetMatrix( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInverse", &vtkTransform2D::GetInverse, emscripten::allow_raw_pointers())
    .function("GetTranspose", &vtkTransform2D::GetTranspose, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkTransform2D::GetMTime)
    .function("TransformPoints", emscripten::select_overload<void(vtkTransform2D&, std::uintptr_t, std::uintptr_t, int)>([](vtkTransform2D& self, std::uintptr_t arg_0, std::uintptr_t arg_1, int arg_2) -> void { return self.TransformPoints(reinterpret_cast<float*>(arg_0 * sizeof(float)),reinterpret_cast<float*>(arg_1 * sizeof(float)), arg_2); }))
    .function("TransformPoints", emscripten::select_overload<void(vtkTransform2D&, std::uintptr_t, std::uintptr_t, int)>([](vtkTransform2D& self, std::uintptr_t arg_0, std::uintptr_t arg_1, int arg_2) -> void { return self.TransformPoints(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)), arg_2); }))
    .function("TransformPoints", emscripten::select_overload<void(vtkTransform2D&, vtkPoints2D*, vtkPoints2D*)>([](vtkTransform2D& self, vtkPoints2D* arg_0, vtkPoints2D* arg_1) -> void { return self.TransformPoints( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("InverseTransformPoints", emscripten::select_overload<void(vtkTransform2D&, std::uintptr_t, std::uintptr_t, int)>([](vtkTransform2D& self, std::uintptr_t arg_0, std::uintptr_t arg_1, int arg_2) -> void { return self.InverseTransformPoints(reinterpret_cast<float*>(arg_0 * sizeof(float)),reinterpret_cast<float*>(arg_1 * sizeof(float)), arg_2); }))
    .function("InverseTransformPoints", emscripten::select_overload<void(vtkTransform2D&, std::uintptr_t, std::uintptr_t, int)>([](vtkTransform2D& self, std::uintptr_t arg_0, std::uintptr_t arg_1, int arg_2) -> void { return self.InverseTransformPoints(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)), arg_2); }))
    .function("InverseTransformPoints", emscripten::select_overload<void(vtkTransform2D&, vtkPoints2D*, vtkPoints2D*)>([](vtkTransform2D& self, vtkPoints2D* arg_0, vtkPoints2D* arg_1) -> void { return self.InverseTransformPoints( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
