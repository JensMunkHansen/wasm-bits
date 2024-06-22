// JavaScript wrapper for vtkIndexedUnsignedIntArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkIndexedUnsignedIntArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkIndexedUnsignedIntArray.h
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
#include "vtkIndexedUnsignedIntArray.h"

template<> void emscripten::internal::raw_destructor<vtkIndexedUnsignedIntArray>(vtkIndexedUnsignedIntArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIndexedUnsignedIntArray_class) {
  emscripten::class_<vtkIndexedUnsignedIntArray, emscripten::base<vtkDataArray>>("vtkIndexedUnsignedIntArray")
    .smart_ptr<vtkSmartPointer<vtkIndexedUnsignedIntArray>>("vtkSmartPointer<vtkIndexedUnsignedIntArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkIndexedUnsignedIntArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIndexedUnsignedIntArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIndexedUnsignedIntArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIndexedUnsignedIntArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIndexedUnsignedIntArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIndexedUnsignedIntArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIndexedUnsignedIntArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkIndexedUnsignedIntArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkIndexedUnsignedIntArray::GetDataType)
    .function("GetValue", &vtkIndexedUnsignedIntArray::GetValue)
    .class_function("FastDownCast", &vtkIndexedUnsignedIntArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", emscripten::select_overload<void(vtkIndexedUnsignedIntArray&, vtkIdList*, vtkDataArray*)>([](vtkIndexedUnsignedIntArray& self, vtkIdList* arg_0, vtkDataArray* arg_1) -> void { return self.ConstructBackend( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ConstructBackend", emscripten::select_overload<void(vtkIndexedUnsignedIntArray&, vtkDataArray*, vtkDataArray*)>([](vtkIndexedUnsignedIntArray& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.ConstructBackend( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
