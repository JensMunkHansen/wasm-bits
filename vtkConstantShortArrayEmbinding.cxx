// JavaScript wrapper for vtkConstantShortArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkConstantShortArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkConstantShortArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkConstantShortArray.h"

template<> void emscripten::internal::raw_destructor<vtkConstantShortArray>(vtkConstantShortArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConstantShortArray_class) {
  emscripten::class_<vtkConstantShortArray, emscripten::base<vtkDataArray>>("vtkConstantShortArray")
    .smart_ptr<vtkSmartPointer<vtkConstantShortArray>>("vtkSmartPointer<vtkConstantShortArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkConstantShortArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstantShortArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConstantShortArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConstantShortArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConstantShortArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstantShortArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConstantShortArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataType", &vtkConstantShortArray::GetDataType)
    .function("GetValue", &vtkConstantShortArray::GetValue)
    .class_function("ExtendedNew", &vtkConstantShortArray::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("FastDownCast", &vtkConstantShortArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkConstantShortArray::ConstructBackend);
}
