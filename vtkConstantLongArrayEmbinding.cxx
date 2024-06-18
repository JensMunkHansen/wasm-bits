// JavaScript wrapper for vtkConstantLongArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkConstantLongArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkConstantLongArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkConstantLongArray.h"

template<> void emscripten::internal::raw_destructor<vtkConstantLongArray>(vtkConstantLongArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConstantLongArray_class) {
  emscripten::class_<vtkConstantLongArray, emscripten::base<vtkDataArray>>("vtkConstantLongArray")
    .smart_ptr<vtkSmartPointer<vtkConstantLongArray>>("vtkSmartPointer<vtkConstantLongArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkConstantLongArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstantLongArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConstantLongArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConstantLongArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConstantLongArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstantLongArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConstantLongArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataType", &vtkConstantLongArray::GetDataType)
    .function("GetValue", &vtkConstantLongArray::GetValue)
    .class_function("ExtendedNew", &vtkConstantLongArray::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("FastDownCast", &vtkConstantLongArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkConstantLongArray::ConstructBackend);
}
