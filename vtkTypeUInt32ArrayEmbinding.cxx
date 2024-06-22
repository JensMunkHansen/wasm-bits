// JavaScript wrapper for vtkTypeUInt32Array with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkTypeUInt32ArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkTypeUInt32Array.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkTypeUInt32Array.h"

template<> void emscripten::internal::raw_destructor<vtkTypeUInt32Array>(vtkTypeUInt32Array * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTypeUInt32Array_class) {
  emscripten::class_<vtkTypeUInt32Array, emscripten::base<vtkUnsignedIntArray>>("vtkTypeUInt32Array")
    .smart_ptr<vtkSmartPointer<vtkTypeUInt32Array>>("vtkSmartPointer<vtkTypeUInt32Array>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTypeUInt32Array>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeUInt32Array::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTypeUInt32Array& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTypeUInt32Array::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTypeUInt32Array::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeUInt32Array::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTypeUInt32Array& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("FastDownCast", &vtkTypeUInt32Array::FastDownCast, emscripten::allow_raw_pointers());
}
