// JavaScript wrapper for vtkConstantDoubleArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkConstantDoubleArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkConstantDoubleArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkConstantDoubleArray.h"

template<> void emscripten::internal::raw_destructor<vtkConstantDoubleArray>(vtkConstantDoubleArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConstantDoubleArray_class) {
  emscripten::class_<vtkConstantDoubleArray, emscripten::base<vtkDataArray>>("vtkConstantDoubleArray")
    .smart_ptr<vtkSmartPointer<vtkConstantDoubleArray>>("vtkSmartPointer<vtkConstantDoubleArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkConstantDoubleArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstantDoubleArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConstantDoubleArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConstantDoubleArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConstantDoubleArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstantDoubleArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConstantDoubleArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataType", &vtkConstantDoubleArray::GetDataType)
    .function("GetValue", &vtkConstantDoubleArray::GetValue)
    .class_function("ExtendedNew", &vtkConstantDoubleArray::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("FastDownCast", &vtkConstantDoubleArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkConstantDoubleArray::ConstructBackend);
}
