// JavaScript wrapper for vtkConstantIntArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkConstantIntArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkConstantIntArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkConstantIntArray.h"

template<> void emscripten::internal::raw_destructor<vtkConstantIntArray>(vtkConstantIntArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConstantIntArray_class) {
  emscripten::class_<vtkConstantIntArray, emscripten::base<vtkDataArray>>("vtkConstantIntArray")
    .smart_ptr<vtkSmartPointer<vtkConstantIntArray>>("vtkSmartPointer<vtkConstantIntArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkConstantIntArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstantIntArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConstantIntArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConstantIntArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConstantIntArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstantIntArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConstantIntArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataType", &vtkConstantIntArray::GetDataType)
    .function("GetValue", &vtkConstantIntArray::GetValue)
    .class_function("ExtendedNew", &vtkConstantIntArray::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("FastDownCast", &vtkConstantIntArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkConstantIntArray::ConstructBackend);
}
