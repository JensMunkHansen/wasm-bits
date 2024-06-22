// JavaScript wrapper for vtkTypeInt32Array with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkTypeInt32ArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkTypeInt32Array.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkTypeInt32Array.h"

template<> void emscripten::internal::raw_destructor<vtkTypeInt32Array>(vtkTypeInt32Array * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTypeInt32Array_class) {
  emscripten::class_<vtkTypeInt32Array, emscripten::base<vtkIntArray>>("vtkTypeInt32Array")
    .smart_ptr<vtkSmartPointer<vtkTypeInt32Array>>("vtkSmartPointer<vtkTypeInt32Array>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTypeInt32Array>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeInt32Array::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTypeInt32Array& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTypeInt32Array::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTypeInt32Array::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeInt32Array::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTypeInt32Array& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("FastDownCast", &vtkTypeInt32Array::FastDownCast, emscripten::allow_raw_pointers());
}
