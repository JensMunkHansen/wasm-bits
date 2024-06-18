// JavaScript wrapper for vtkIndexedCharArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkIndexedCharArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkIndexedCharArray.h
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
#include "vtkIndexedCharArray.h"

template<> void emscripten::internal::raw_destructor<vtkIndexedCharArray>(vtkIndexedCharArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIndexedCharArray_class) {
  emscripten::class_<vtkIndexedCharArray, emscripten::base<vtkDataArray>>("vtkIndexedCharArray")
    .smart_ptr<vtkSmartPointer<vtkIndexedCharArray>>("vtkSmartPointer<vtkIndexedCharArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkIndexedCharArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIndexedCharArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIndexedCharArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIndexedCharArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIndexedCharArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIndexedCharArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIndexedCharArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkIndexedCharArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkIndexedCharArray::GetDataType)
    .function("GetValue", &vtkIndexedCharArray::GetValue)
    .class_function("FastDownCast", &vtkIndexedCharArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", emscripten::select_overload<void(vtkIndexedCharArray&, vtkIdList*, vtkDataArray*)>([](vtkIndexedCharArray& self, vtkIdList* arg_0, vtkDataArray* arg_1) -> void { return self.ConstructBackend( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ConstructBackend", emscripten::select_overload<void(vtkIndexedCharArray&, vtkDataArray*, vtkDataArray*)>([](vtkIndexedCharArray& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.ConstructBackend( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
