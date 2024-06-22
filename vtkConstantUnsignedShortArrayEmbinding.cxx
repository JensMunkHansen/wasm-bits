// JavaScript wrapper for vtkConstantUnsignedShortArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkConstantUnsignedShortArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkConstantUnsignedShortArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkConstantUnsignedShortArray.h"

template<> void emscripten::internal::raw_destructor<vtkConstantUnsignedShortArray>(vtkConstantUnsignedShortArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConstantUnsignedShortArray_class) {
  emscripten::class_<vtkConstantUnsignedShortArray, emscripten::base<vtkDataArray>>("vtkConstantUnsignedShortArray")
    .smart_ptr<vtkSmartPointer<vtkConstantUnsignedShortArray>>("vtkSmartPointer<vtkConstantUnsignedShortArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkConstantUnsignedShortArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstantUnsignedShortArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConstantUnsignedShortArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConstantUnsignedShortArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConstantUnsignedShortArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstantUnsignedShortArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConstantUnsignedShortArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataType", &vtkConstantUnsignedShortArray::GetDataType)
    .function("GetValue", &vtkConstantUnsignedShortArray::GetValue)
    .class_function("ExtendedNew", &vtkConstantUnsignedShortArray::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("FastDownCast", &vtkConstantUnsignedShortArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkConstantUnsignedShortArray::ConstructBackend);
}