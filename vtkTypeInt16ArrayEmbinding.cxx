// JavaScript wrapper for vtkTypeInt16Array with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkTypeInt16ArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkTypeInt16Array.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkTypeInt16Array.h"

template<> void emscripten::internal::raw_destructor<vtkTypeInt16Array>(vtkTypeInt16Array * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTypeInt16Array_class) {
  emscripten::class_<vtkTypeInt16Array, emscripten::base<vtkShortArray>>("vtkTypeInt16Array")
    .smart_ptr<vtkSmartPointer<vtkTypeInt16Array>>("vtkSmartPointer<vtkTypeInt16Array>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTypeInt16Array>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeInt16Array::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTypeInt16Array& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTypeInt16Array::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTypeInt16Array::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeInt16Array::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTypeInt16Array& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("FastDownCast", &vtkTypeInt16Array::FastDownCast, emscripten::allow_raw_pointers());
}
