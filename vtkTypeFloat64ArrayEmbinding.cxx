// JavaScript wrapper for vtkTypeFloat64Array with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkTypeFloat64ArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkTypeFloat64Array.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkTypeFloat64Array.h"

template<> void emscripten::internal::raw_destructor<vtkTypeFloat64Array>(vtkTypeFloat64Array * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTypeFloat64Array_class) {
  emscripten::class_<vtkTypeFloat64Array, emscripten::base<vtkDoubleArray>>("vtkTypeFloat64Array")
    .smart_ptr<vtkSmartPointer<vtkTypeFloat64Array>>("vtkSmartPointer<vtkTypeFloat64Array>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTypeFloat64Array>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeFloat64Array::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTypeFloat64Array& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTypeFloat64Array::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTypeFloat64Array::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeFloat64Array::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTypeFloat64Array& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("FastDownCast", &vtkTypeFloat64Array::FastDownCast, emscripten::allow_raw_pointers());
}
