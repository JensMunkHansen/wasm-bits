// JavaScript wrapper for vtkIndexedUnsignedLongLongArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkIndexedUnsignedLongLongArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkIndexedUnsignedLongLongArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkIdList.h"
#include "vtkDataArray.h"
#include "vtkIndexedUnsignedLongLongArray.h"

template<> void emscripten::internal::raw_destructor<vtkIndexedUnsignedLongLongArray>(vtkIndexedUnsignedLongLongArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIndexedUnsignedLongLongArray_class) {
  emscripten::class_<vtkIndexedUnsignedLongLongArray, emscripten::base<vtkDataArray>>("vtkIndexedUnsignedLongLongArray")
    .smart_ptr<vtkSmartPointer<vtkIndexedUnsignedLongLongArray>>("vtkSmartPointer<vtkIndexedUnsignedLongLongArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkIndexedUnsignedLongLongArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIndexedUnsignedLongLongArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIndexedUnsignedLongLongArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIndexedUnsignedLongLongArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIndexedUnsignedLongLongArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIndexedUnsignedLongLongArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIndexedUnsignedLongLongArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkIndexedUnsignedLongLongArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkIndexedUnsignedLongLongArray::GetDataType)
    .function("GetValue", &vtkIndexedUnsignedLongLongArray::GetValue)
    .class_function("FastDownCast", &vtkIndexedUnsignedLongLongArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", emscripten::select_overload<void(vtkIndexedUnsignedLongLongArray&, vtkIdList*, vtkDataArray*)>([](vtkIndexedUnsignedLongLongArray& self, vtkIdList* arg_0, vtkDataArray* arg_1) -> void { return self.ConstructBackend( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ConstructBackend", emscripten::select_overload<void(vtkIndexedUnsignedLongLongArray&, vtkDataArray*, vtkDataArray*)>([](vtkIndexedUnsignedLongLongArray& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.ConstructBackend( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
