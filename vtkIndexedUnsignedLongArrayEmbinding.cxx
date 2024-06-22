// JavaScript wrapper for vtkIndexedUnsignedLongArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkIndexedUnsignedLongArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkIndexedUnsignedLongArray.h
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
#include "vtkIndexedUnsignedLongArray.h"

template<> void emscripten::internal::raw_destructor<vtkIndexedUnsignedLongArray>(vtkIndexedUnsignedLongArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIndexedUnsignedLongArray_class) {
  emscripten::class_<vtkIndexedUnsignedLongArray, emscripten::base<vtkDataArray>>("vtkIndexedUnsignedLongArray")
    .smart_ptr<vtkSmartPointer<vtkIndexedUnsignedLongArray>>("vtkSmartPointer<vtkIndexedUnsignedLongArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkIndexedUnsignedLongArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIndexedUnsignedLongArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIndexedUnsignedLongArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIndexedUnsignedLongArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIndexedUnsignedLongArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIndexedUnsignedLongArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIndexedUnsignedLongArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkIndexedUnsignedLongArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkIndexedUnsignedLongArray::GetDataType)
    .function("GetValue", &vtkIndexedUnsignedLongArray::GetValue)
    .class_function("FastDownCast", &vtkIndexedUnsignedLongArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", emscripten::select_overload<void(vtkIndexedUnsignedLongArray&, vtkIdList*, vtkDataArray*)>([](vtkIndexedUnsignedLongArray& self, vtkIdList* arg_0, vtkDataArray* arg_1) -> void { return self.ConstructBackend( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ConstructBackend", emscripten::select_overload<void(vtkIndexedUnsignedLongArray&, vtkDataArray*, vtkDataArray*)>([](vtkIndexedUnsignedLongArray& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.ConstructBackend( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
