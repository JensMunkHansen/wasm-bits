// JavaScript wrapper for vtkTypeUInt64Array with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkTypeUInt64ArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkTypeUInt64Array.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkTypeUInt64Array.h"

template<> void emscripten::internal::raw_destructor<vtkTypeUInt64Array>(vtkTypeUInt64Array * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTypeUInt64Array_class) {
  emscripten::class_<vtkTypeUInt64Array, emscripten::base<vtkUnsignedLongLongArray>>("vtkTypeUInt64Array")
    .smart_ptr<vtkSmartPointer<vtkTypeUInt64Array>>("vtkSmartPointer<vtkTypeUInt64Array>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTypeUInt64Array>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeUInt64Array::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTypeUInt64Array& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTypeUInt64Array::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTypeUInt64Array::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeUInt64Array::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTypeUInt64Array& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("FastDownCast", &vtkTypeUInt64Array::FastDownCast, emscripten::allow_raw_pointers());
}
