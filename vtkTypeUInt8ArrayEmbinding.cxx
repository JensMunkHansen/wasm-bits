// JavaScript wrapper for vtkTypeUInt8Array with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkTypeUInt8ArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkTypeUInt8Array.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkTypeUInt8Array.h"

template<> void emscripten::internal::raw_destructor<vtkTypeUInt8Array>(vtkTypeUInt8Array * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTypeUInt8Array_class) {
  emscripten::class_<vtkTypeUInt8Array, emscripten::base<vtkUnsignedCharArray>>("vtkTypeUInt8Array")
    .smart_ptr<vtkSmartPointer<vtkTypeUInt8Array>>("vtkSmartPointer<vtkTypeUInt8Array>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTypeUInt8Array>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeUInt8Array::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTypeUInt8Array& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTypeUInt8Array::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTypeUInt8Array::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeUInt8Array::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTypeUInt8Array& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("FastDownCast", &vtkTypeUInt8Array::FastDownCast, emscripten::allow_raw_pointers());
}
