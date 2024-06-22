// JavaScript wrapper for vtkConstantUnsignedLongArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkConstantUnsignedLongArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkConstantUnsignedLongArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkConstantUnsignedLongArray.h"

template<> void emscripten::internal::raw_destructor<vtkConstantUnsignedLongArray>(vtkConstantUnsignedLongArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConstantUnsignedLongArray_class) {
  emscripten::class_<vtkConstantUnsignedLongArray, emscripten::base<vtkDataArray>>("vtkConstantUnsignedLongArray")
    .smart_ptr<vtkSmartPointer<vtkConstantUnsignedLongArray>>("vtkSmartPointer<vtkConstantUnsignedLongArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkConstantUnsignedLongArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstantUnsignedLongArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConstantUnsignedLongArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConstantUnsignedLongArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConstantUnsignedLongArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstantUnsignedLongArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConstantUnsignedLongArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataType", &vtkConstantUnsignedLongArray::GetDataType)
    .function("GetValue", &vtkConstantUnsignedLongArray::GetValue)
    .class_function("ExtendedNew", &vtkConstantUnsignedLongArray::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("FastDownCast", &vtkConstantUnsignedLongArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkConstantUnsignedLongArray::ConstructBackend);
}
