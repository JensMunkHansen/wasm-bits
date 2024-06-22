// JavaScript wrapper for vtkMatrix3x3 with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkCommonMath.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkMatrix3x3Embinding.cxx \
 /home/jmh/github/vtk/Common/Math/vtkMatrix3x3.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMatrix3x3.h"

template<> void emscripten::internal::raw_destructor<vtkMatrix3x3>(vtkMatrix3x3 * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMatrix3x3_class) {
  emscripten::class_<vtkMatrix3x3, emscripten::base<vtkObject>>("vtkMatrix3x3")
    .smart_ptr<vtkSmartPointer<vtkMatrix3x3>>("vtkSmartPointer<vtkMatrix3x3>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMatrix3x3>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMatrix3x3::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMatrix3x3& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMatrix3x3::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMatrix3x3::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMatrix3x3::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMatrix3x3& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("DeepCopy", emscripten::select_overload<void(vtkMatrix3x3&, vtkMatrix3x3*)>([](vtkMatrix3x3& self, vtkMatrix3x3* arg_0) -> void { return self.DeepCopy( arg_0); }), emscripten::allow_raw_pointers())
    .function("Zero", emscripten::select_overload<void(vtkMatrix3x3&)>([](vtkMatrix3x3& self) -> void { return self.Zero(); }))
    .function("Identity", emscripten::select_overload<void(vtkMatrix3x3&)>([](vtkMatrix3x3& self) -> void { return self.Identity(); }))
    .class_function("Invert", emscripten::select_overload<void( vtkMatrix3x3*, vtkMatrix3x3*)>([]( vtkMatrix3x3* arg_0, vtkMatrix3x3* arg_1) -> void { return vtkMatrix3x3::Invert( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Invert", emscripten::select_overload<void(vtkMatrix3x3&)>([](vtkMatrix3x3& self) -> void { return self.Invert(); }))
    .class_function("Transpose", emscripten::select_overload<void( vtkMatrix3x3*, vtkMatrix3x3*)>([]( vtkMatrix3x3* arg_0, vtkMatrix3x3* arg_1) -> void { return vtkMatrix3x3::Transpose( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Transpose", emscripten::select_overload<void(vtkMatrix3x3&)>([](vtkMatrix3x3& self) -> void { return self.Transpose(); }))
    .class_function("Multiply3x3", emscripten::select_overload<void( vtkMatrix3x3*, vtkMatrix3x3*, vtkMatrix3x3*)>([]( vtkMatrix3x3* arg_0, vtkMatrix3x3* arg_1, vtkMatrix3x3* arg_2) -> void { return vtkMatrix3x3::Multiply3x3( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("Adjoint", emscripten::select_overload<void(vtkMatrix3x3&, vtkMatrix3x3*, vtkMatrix3x3*)>([](vtkMatrix3x3& self, vtkMatrix3x3* arg_0, vtkMatrix3x3* arg_1) -> void { return self.Adjoint( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Determinant", emscripten::select_overload<double(vtkMatrix3x3&)>([](vtkMatrix3x3& self) -> double { return self.Determinant(); }))
    .function("SetElement", &vtkMatrix3x3::SetElement)
    .function("GetElement", &vtkMatrix3x3::GetElement)
    .function("IsIdentity", &vtkMatrix3x3::IsIdentity)
    .function("GetData", emscripten::select_overload<std::uintptr_t(vtkMatrix3x3&)>([](vtkMatrix3x3& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetData()); }));
}
