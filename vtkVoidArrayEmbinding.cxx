// JavaScript wrapper for vtkVoidArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkVoidArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkVoidArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVoidArray.h"

template<> void emscripten::internal::raw_destructor<vtkVoidArray>(vtkVoidArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVoidArray_class) {
  emscripten::class_<vtkVoidArray, emscripten::base<vtkObject>>("vtkVoidArray")
    .smart_ptr<vtkSmartPointer<vtkVoidArray>>("vtkSmartPointer<vtkVoidArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVoidArray>)
    .class_function("ExtendedNew", &vtkVoidArray::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVoidArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVoidArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVoidArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVoidArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVoidArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVoidArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Allocate", &vtkVoidArray::Allocate)
    .function("Initialize", &vtkVoidArray::Initialize)
    .function("GetDataType", &vtkVoidArray::GetDataType)
    .function("GetDataTypeSize", &vtkVoidArray::GetDataTypeSize)
    .function("SetNumberOfPointers", &vtkVoidArray::SetNumberOfPointers)
    .function("GetNumberOfPointers", &vtkVoidArray::GetNumberOfPointers)
    .function("GetVoidPointer", emscripten::optional_override([](vtkVoidArray& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetVoidPointer( arg_0));}))
    .function("SetVoidPointer", emscripten::optional_override([](vtkVoidArray& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.SetVoidPointer( arg_0,reinterpret_cast<void*>(arg_1));}))
    .function("InsertVoidPointer", emscripten::optional_override([](vtkVoidArray& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.InsertVoidPointer( arg_0,reinterpret_cast<void*>(arg_1));}))
    .function("InsertNextVoidPointer", emscripten::optional_override([](vtkVoidArray& self, std::uintptr_t arg_0) -> int {  return self.InsertNextVoidPointer(reinterpret_cast<void*>(arg_0));}))
    .function("Reset", &vtkVoidArray::Reset)
    .function("Squeeze", &vtkVoidArray::Squeeze)
    .function("DeepCopy", &vtkVoidArray::DeepCopy, emscripten::allow_raw_pointers());
}
