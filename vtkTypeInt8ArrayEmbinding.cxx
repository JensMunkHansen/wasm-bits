// JavaScript wrapper for vtkTypeInt8Array with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkTypeInt8ArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkTypeInt8Array.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkTypeInt8Array.h"

template<> void emscripten::internal::raw_destructor<vtkTypeInt8Array>(vtkTypeInt8Array * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTypeInt8Array_class) {
  emscripten::class_<vtkTypeInt8Array, emscripten::base<vtkSignedCharArray>>("vtkTypeInt8Array")
    .smart_ptr<vtkSmartPointer<vtkTypeInt8Array>>("vtkSmartPointer<vtkTypeInt8Array>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTypeInt8Array>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeInt8Array::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTypeInt8Array& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTypeInt8Array::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTypeInt8Array::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeInt8Array::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTypeInt8Array& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("FastDownCast", &vtkTypeInt8Array::FastDownCast, emscripten::allow_raw_pointers());
}
