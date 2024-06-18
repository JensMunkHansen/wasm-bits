// JavaScript wrapper for vtkIndexedUnsignedCharArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkIndexedUnsignedCharArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkIndexedUnsignedCharArray.h
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
#include "vtkIndexedUnsignedCharArray.h"

template<> void emscripten::internal::raw_destructor<vtkIndexedUnsignedCharArray>(vtkIndexedUnsignedCharArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIndexedUnsignedCharArray_class) {
  emscripten::class_<vtkIndexedUnsignedCharArray, emscripten::base<vtkDataArray>>("vtkIndexedUnsignedCharArray")
    .smart_ptr<vtkSmartPointer<vtkIndexedUnsignedCharArray>>("vtkSmartPointer<vtkIndexedUnsignedCharArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkIndexedUnsignedCharArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIndexedUnsignedCharArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIndexedUnsignedCharArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIndexedUnsignedCharArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIndexedUnsignedCharArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIndexedUnsignedCharArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIndexedUnsignedCharArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkIndexedUnsignedCharArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkIndexedUnsignedCharArray::GetDataType)
    .function("GetValue", &vtkIndexedUnsignedCharArray::GetValue)
    .class_function("FastDownCast", &vtkIndexedUnsignedCharArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", emscripten::select_overload<void(vtkIndexedUnsignedCharArray&, vtkIdList*, vtkDataArray*)>([](vtkIndexedUnsignedCharArray& self, vtkIdList* arg_0, vtkDataArray* arg_1) -> void { return self.ConstructBackend( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ConstructBackend", emscripten::select_overload<void(vtkIndexedUnsignedCharArray&, vtkDataArray*, vtkDataArray*)>([](vtkIndexedUnsignedCharArray& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.ConstructBackend( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
