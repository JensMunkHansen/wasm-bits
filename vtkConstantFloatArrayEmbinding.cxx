// JavaScript wrapper for vtkConstantFloatArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkConstantFloatArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkConstantFloatArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkConstantFloatArray.h"

template<> void emscripten::internal::raw_destructor<vtkConstantFloatArray>(vtkConstantFloatArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConstantFloatArray_class) {
  emscripten::class_<vtkConstantFloatArray, emscripten::base<vtkDataArray>>("vtkConstantFloatArray")
    .smart_ptr<vtkSmartPointer<vtkConstantFloatArray>>("vtkSmartPointer<vtkConstantFloatArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkConstantFloatArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstantFloatArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConstantFloatArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConstantFloatArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConstantFloatArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstantFloatArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConstantFloatArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataType", &vtkConstantFloatArray::GetDataType)
    .function("GetValue", &vtkConstantFloatArray::GetValue)
    .class_function("ExtendedNew", &vtkConstantFloatArray::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("FastDownCast", &vtkConstantFloatArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkConstantFloatArray::ConstructBackend);
}
