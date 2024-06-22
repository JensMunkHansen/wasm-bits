// JavaScript wrapper for vtkMatrix4x4 with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkCommonMath.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkMatrix4x4Embinding.cxx \
 /home/jmh/github/vtk/Common/Math/vtkMatrix4x4.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMatrix4x4.h"

template<> void emscripten::internal::raw_destructor<vtkMatrix4x4>(vtkMatrix4x4 * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMatrix4x4_class) {
  emscripten::class_<vtkMatrix4x4, emscripten::base<vtkObject>>("vtkMatrix4x4")
    .smart_ptr<vtkSmartPointer<vtkMatrix4x4>>("vtkSmartPointer<vtkMatrix4x4>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMatrix4x4>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMatrix4x4::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMatrix4x4& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMatrix4x4::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMatrix4x4::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMatrix4x4::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMatrix4x4& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("DeepCopy", emscripten::select_overload<void(vtkMatrix4x4&, vtkMatrix4x4*)>([](vtkMatrix4x4& self, vtkMatrix4x4* arg_0) -> void { return self.DeepCopy( arg_0); }), emscripten::allow_raw_pointers())
    .function("Zero", emscripten::select_overload<void(vtkMatrix4x4&)>([](vtkMatrix4x4& self) -> void { return self.Zero(); }))
    .function("Identity", emscripten::select_overload<void(vtkMatrix4x4&)>([](vtkMatrix4x4& self) -> void { return self.Identity(); }))
    .function("IsIdentity", &vtkMatrix4x4::IsIdentity)
    .class_function("Invert", emscripten::select_overload<void( vtkMatrix4x4*, vtkMatrix4x4*)>([]( vtkMatrix4x4* arg_0, vtkMatrix4x4* arg_1) -> void { return vtkMatrix4x4::Invert( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Invert", emscripten::select_overload<void(vtkMatrix4x4&)>([](vtkMatrix4x4& self) -> void { return self.Invert(); }))
    .class_function("Transpose", emscripten::select_overload<void( vtkMatrix4x4*, vtkMatrix4x4*)>([]( vtkMatrix4x4* arg_0, vtkMatrix4x4* arg_1) -> void { return vtkMatrix4x4::Transpose( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Transpose", emscripten::select_overload<void(vtkMatrix4x4&)>([](vtkMatrix4x4& self) -> void { return self.Transpose(); }))
    .class_function("MatrixFromRotation", emscripten::select_overload<void( double, double, double, double, vtkMatrix4x4*)>([]( double arg_0, double arg_1, double arg_2, double arg_3, vtkMatrix4x4* arg_4) -> void { return vtkMatrix4x4::MatrixFromRotation( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .class_function("Multiply4x4", emscripten::select_overload<void( vtkMatrix4x4*, vtkMatrix4x4*, vtkMatrix4x4*)>([]( vtkMatrix4x4* arg_0, vtkMatrix4x4* arg_1, vtkMatrix4x4* arg_2) -> void { return vtkMatrix4x4::Multiply4x4( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("Adjoint", emscripten::select_overload<void(vtkMatrix4x4&, vtkMatrix4x4*, vtkMatrix4x4*)>([](vtkMatrix4x4& self, vtkMatrix4x4* arg_0, vtkMatrix4x4* arg_1) -> void { return self.Adjoint( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Determinant", emscripten::select_overload<double(vtkMatrix4x4&)>([](vtkMatrix4x4& self) -> double { return self.Determinant(); }))
    .function("SetElement", &vtkMatrix4x4::SetElement)
    .function("GetElement", &vtkMatrix4x4::GetElement)
    .function("GetData", emscripten::select_overload<std::uintptr_t(vtkMatrix4x4&)>([](vtkMatrix4x4& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetData()); }));
}
