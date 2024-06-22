// JavaScript wrapper for vtkConstantIdTypeArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkConstantIdTypeArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkConstantIdTypeArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkConstantIdTypeArray.h"

template<> void emscripten::internal::raw_destructor<vtkConstantIdTypeArray>(vtkConstantIdTypeArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConstantIdTypeArray_class) {
  emscripten::class_<vtkConstantIdTypeArray, emscripten::base<vtkDataArray>>("vtkConstantIdTypeArray")
    .smart_ptr<vtkSmartPointer<vtkConstantIdTypeArray>>("vtkSmartPointer<vtkConstantIdTypeArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkConstantIdTypeArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstantIdTypeArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConstantIdTypeArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConstantIdTypeArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConstantIdTypeArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstantIdTypeArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConstantIdTypeArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataType", &vtkConstantIdTypeArray::GetDataType)
    .function("GetValue", &vtkConstantIdTypeArray::GetValue)
    .class_function("ExtendedNew", &vtkConstantIdTypeArray::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("FastDownCast", &vtkConstantIdTypeArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkConstantIdTypeArray::ConstructBackend);
}
