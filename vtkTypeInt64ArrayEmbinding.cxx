// JavaScript wrapper for vtkTypeInt64Array with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkTypeInt64ArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkTypeInt64Array.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkTypeInt64Array.h"

template<> void emscripten::internal::raw_destructor<vtkTypeInt64Array>(vtkTypeInt64Array * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTypeInt64Array_class) {
  emscripten::class_<vtkTypeInt64Array, emscripten::base<vtkLongLongArray>>("vtkTypeInt64Array")
    .smart_ptr<vtkSmartPointer<vtkTypeInt64Array>>("vtkSmartPointer<vtkTypeInt64Array>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTypeInt64Array>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeInt64Array::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTypeInt64Array& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTypeInt64Array::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTypeInt64Array::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeInt64Array::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTypeInt64Array& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("FastDownCast", &vtkTypeInt64Array::FastDownCast, emscripten::allow_raw_pointers());
}
