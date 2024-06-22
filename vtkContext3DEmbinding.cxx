// JavaScript wrapper for vtkContext3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkContext3DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkContext3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContextDevice3D.h"
#include "vtkVector.h"
#include "vtkDataArray.h"
#include "vtkUnsignedCharArray.h"
#include "vtkPen.h"
#include "vtkBrush.h"
#include "vtkTransform.h"
#include "vtkContext3D.h"

template<> void emscripten::internal::raw_destructor<vtkContext3D>(vtkContext3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContext3D_class) {
  emscripten::class_<vtkContext3D, emscripten::base<vtkObject>>("vtkContext3D")
    .smart_ptr<vtkSmartPointer<vtkContext3D>>("vtkSmartPointer<vtkContext3D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkContext3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContext3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContext3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContext3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContext3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContext3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContext3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Begin", &vtkContext3D::Begin, emscripten::allow_raw_pointers())
    .function("GetDevice", &vtkContext3D::GetDevice, emscripten::allow_raw_pointers())
    .function("End", &vtkContext3D::End)
    .function("DrawLine", &vtkContext3D::DrawLine)
    .function("DrawPoly", emscripten::optional_override([](vtkContext3D& self, std::uintptr_t arg_0, int arg_1) -> void {  return self.DrawPoly(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1);}))
    .function("DrawPoint", &vtkContext3D::DrawPoint)
    .function("DrawPoints", emscripten::select_overload<void(vtkContext3D&, std::uintptr_t, int)>([](vtkContext3D& self, std::uintptr_t arg_0, int arg_1) -> void { return self.DrawPoints(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1); }))
    .function("DrawPoints", emscripten::select_overload<void(vtkContext3D&, std::uintptr_t, int, std::uintptr_t, int)>([](vtkContext3D& self, std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, int arg_3) -> void { return self.DrawPoints(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1,reinterpret_cast<unsigned char*>(arg_2 * sizeof(unsigned char)), arg_3); }))
    .function("DrawTriangleMesh", emscripten::select_overload<void(vtkContext3D&, std::uintptr_t, int, std::uintptr_t, int)>([](vtkContext3D& self, std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, int arg_3) -> void { return self.DrawTriangleMesh(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1,reinterpret_cast<unsigned char*>(arg_2 * sizeof(unsigned char)), arg_3); }))
    .function("ApplyPen", &vtkContext3D::ApplyPen, emscripten::allow_raw_pointers())
    .function("ApplyBrush", &vtkContext3D::ApplyBrush, emscripten::allow_raw_pointers())
    .function("SetTransform", &vtkContext3D::SetTransform, emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkContext3D::GetTransform, emscripten::allow_raw_pointers())
    .function("AppendTransform", &vtkContext3D::AppendTransform, emscripten::allow_raw_pointers())
    .function("PushMatrix", &vtkContext3D::PushMatrix)
    .function("PopMatrix", &vtkContext3D::PopMatrix)
    .function("EnableClippingPlane", emscripten::optional_override([](vtkContext3D& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.EnableClippingPlane( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("DisableClippingPlane", &vtkContext3D::DisableClippingPlane);
}
