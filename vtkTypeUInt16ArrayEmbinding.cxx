// JavaScript wrapper for vtkTypeUInt16Array with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkTypeUInt16ArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkTypeUInt16Array.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkTypeUInt16Array.h"

template<> void emscripten::internal::raw_destructor<vtkTypeUInt16Array>(vtkTypeUInt16Array * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTypeUInt16Array_class) {
  emscripten::class_<vtkTypeUInt16Array, emscripten::base<vtkUnsignedShortArray>>("vtkTypeUInt16Array")
    .smart_ptr<vtkSmartPointer<vtkTypeUInt16Array>>("vtkSmartPointer<vtkTypeUInt16Array>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTypeUInt16Array>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeUInt16Array::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTypeUInt16Array& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTypeUInt16Array::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTypeUInt16Array::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeUInt16Array::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTypeUInt16Array& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("FastDownCast", &vtkTypeUInt16Array::FastDownCast, emscripten::allow_raw_pointers());
}
