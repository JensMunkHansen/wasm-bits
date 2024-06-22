// JavaScript wrapper for vtkIndexedLongLongArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkIndexedLongLongArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkIndexedLongLongArray.h
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
#include "vtkIndexedLongLongArray.h"

template<> void emscripten::internal::raw_destructor<vtkIndexedLongLongArray>(vtkIndexedLongLongArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIndexedLongLongArray_class) {
  emscripten::class_<vtkIndexedLongLongArray, emscripten::base<vtkDataArray>>("vtkIndexedLongLongArray")
    .smart_ptr<vtkSmartPointer<vtkIndexedLongLongArray>>("vtkSmartPointer<vtkIndexedLongLongArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkIndexedLongLongArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIndexedLongLongArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIndexedLongLongArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIndexedLongLongArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIndexedLongLongArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIndexedLongLongArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIndexedLongLongArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkIndexedLongLongArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkIndexedLongLongArray::GetDataType)
    .function("GetValue", &vtkIndexedLongLongArray::GetValue)
    .class_function("FastDownCast", &vtkIndexedLongLongArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", emscripten::select_overload<void(vtkIndexedLongLongArray&, vtkIdList*, vtkDataArray*)>([](vtkIndexedLongLongArray& self, vtkIdList* arg_0, vtkDataArray* arg_1) -> void { return self.ConstructBackend( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ConstructBackend", emscripten::select_overload<void(vtkIndexedLongLongArray&, vtkDataArray*, vtkDataArray*)>([](vtkIndexedLongLongArray& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.ConstructBackend( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
