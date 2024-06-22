// JavaScript wrapper for vtkPoints2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkPoints2DEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkPoints2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkIdList.h"
#include "vtkPoints2D.h"

template<> void emscripten::internal::raw_destructor<vtkPoints2D>(vtkPoints2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPoints2D_class) {
  emscripten::class_<vtkPoints2D, emscripten::base<vtkObject>>("vtkPoints2D")
    .smart_ptr<vtkSmartPointer<vtkPoints2D>>("vtkSmartPointer<vtkPoints2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPoints2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPoints2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPoints2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPoints2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPoints2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPoints2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPoints2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Allocate", &vtkPoints2D::Allocate)
    .function("Initialize", &vtkPoints2D::Initialize)
    .function("SetData", &vtkPoints2D::SetData, emscripten::allow_raw_pointers())
    .function("GetData", &vtkPoints2D::GetData, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkPoints2D::GetDataType)
    .function("SetDataType", &vtkPoints2D::SetDataType)
    .function("SetDataTypeToBit", &vtkPoints2D::SetDataTypeToBit)
    .function("SetDataTypeToChar", &vtkPoints2D::SetDataTypeToChar)
    .function("SetDataTypeToUnsignedChar", &vtkPoints2D::SetDataTypeToUnsignedChar)
    .function("SetDataTypeToShort", &vtkPoints2D::SetDataTypeToShort)
    .function("SetDataTypeToUnsignedShort", &vtkPoints2D::SetDataTypeToUnsignedShort)
    .function("SetDataTypeToInt", &vtkPoints2D::SetDataTypeToInt)
    .function("SetDataTypeToUnsignedInt", &vtkPoints2D::SetDataTypeToUnsignedInt)
    .function("SetDataTypeToLong", &vtkPoints2D::SetDataTypeToLong)
    .function("SetDataTypeToUnsignedLong", &vtkPoints2D::SetDataTypeToUnsignedLong)
    .function("SetDataTypeToFloat", &vtkPoints2D::SetDataTypeToFloat)
    .function("SetDataTypeToDouble", &vtkPoints2D::SetDataTypeToDouble)
    .function("GetVoidPointer", emscripten::optional_override([](vtkPoints2D& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetVoidPointer( arg_0));}))
    .function("Squeeze", &vtkPoints2D::Squeeze)
    .function("Reset", &vtkPoints2D::Reset)
    .function("DeepCopy", &vtkPoints2D::DeepCopy, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkPoints2D::ShallowCopy, emscripten::allow_raw_pointers())
    .function("GetActualMemorySize", &vtkPoints2D::GetActualMemorySize)
    .function("GetNumberOfPoints", &vtkPoints2D::GetNumberOfPoints)
    .function("SetPoint", emscripten::select_overload<void(vtkPoints2D&, int, double, double)>([](vtkPoints2D& self, int arg_0, double arg_1, double arg_2) -> void { return self.SetPoint( arg_0, arg_1, arg_2); }))
    .function("InsertPoint", emscripten::select_overload<void(vtkPoints2D&, int, double, double)>([](vtkPoints2D& self, int arg_0, double arg_1, double arg_2) -> void { return self.InsertPoint( arg_0, arg_1, arg_2); }))
    .function("InsertNextPoint", emscripten::select_overload<int(vtkPoints2D&, double, double)>([](vtkPoints2D& self, double arg_0, double arg_1) -> int { return self.InsertNextPoint( arg_0, arg_1); }))
    .function("RemovePoint", &vtkPoints2D::RemovePoint)
    .function("SetNumberOfPoints", &vtkPoints2D::SetNumberOfPoints)
    .function("Resize", &vtkPoints2D::Resize)
    .function("GetPoints", &vtkPoints2D::GetPoints, emscripten::allow_raw_pointers())
    .function("ComputeBounds", &vtkPoints2D::ComputeBounds);
}
