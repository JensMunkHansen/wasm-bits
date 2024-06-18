// JavaScript wrapper for vtkConstantLongLongArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkConstantLongLongArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkConstantLongLongArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkConstantLongLongArray.h"

template<> void emscripten::internal::raw_destructor<vtkConstantLongLongArray>(vtkConstantLongLongArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConstantLongLongArray_class) {
  emscripten::class_<vtkConstantLongLongArray, emscripten::base<vtkDataArray>>("vtkConstantLongLongArray")
    .smart_ptr<vtkSmartPointer<vtkConstantLongLongArray>>("vtkSmartPointer<vtkConstantLongLongArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkConstantLongLongArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstantLongLongArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConstantLongLongArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConstantLongLongArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConstantLongLongArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstantLongLongArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConstantLongLongArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataType", &vtkConstantLongLongArray::GetDataType)
    .function("GetValue", &vtkConstantLongLongArray::GetValue)
    .class_function("ExtendedNew", &vtkConstantLongLongArray::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("FastDownCast", &vtkConstantLongLongArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkConstantLongLongArray::ConstructBackend);
}
