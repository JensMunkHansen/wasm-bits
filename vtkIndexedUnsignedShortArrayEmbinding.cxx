// JavaScript wrapper for vtkIndexedUnsignedShortArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkIndexedUnsignedShortArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkIndexedUnsignedShortArray.h
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
#include "vtkIndexedUnsignedShortArray.h"

template<> void emscripten::internal::raw_destructor<vtkIndexedUnsignedShortArray>(vtkIndexedUnsignedShortArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIndexedUnsignedShortArray_class) {
  emscripten::class_<vtkIndexedUnsignedShortArray, emscripten::base<vtkDataArray>>("vtkIndexedUnsignedShortArray")
    .smart_ptr<vtkSmartPointer<vtkIndexedUnsignedShortArray>>("vtkSmartPointer<vtkIndexedUnsignedShortArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkIndexedUnsignedShortArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIndexedUnsignedShortArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIndexedUnsignedShortArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIndexedUnsignedShortArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIndexedUnsignedShortArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIndexedUnsignedShortArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIndexedUnsignedShortArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkIndexedUnsignedShortArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkIndexedUnsignedShortArray::GetDataType)
    .function("GetValue", &vtkIndexedUnsignedShortArray::GetValue)
    .class_function("FastDownCast", &vtkIndexedUnsignedShortArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", emscripten::select_overload<void(vtkIndexedUnsignedShortArray&, vtkIdList*, vtkDataArray*)>([](vtkIndexedUnsignedShortArray& self, vtkIdList* arg_0, vtkDataArray* arg_1) -> void { return self.ConstructBackend( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ConstructBackend", emscripten::select_overload<void(vtkIndexedUnsignedShortArray&, vtkDataArray*, vtkDataArray*)>([](vtkIndexedUnsignedShortArray& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.ConstructBackend( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
