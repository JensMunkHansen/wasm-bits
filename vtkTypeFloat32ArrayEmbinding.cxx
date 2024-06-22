// JavaScript wrapper for vtkTypeFloat32Array with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkTypeFloat32ArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkTypeFloat32Array.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkTypeFloat32Array.h"

template<> void emscripten::internal::raw_destructor<vtkTypeFloat32Array>(vtkTypeFloat32Array * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTypeFloat32Array_class) {
  emscripten::class_<vtkTypeFloat32Array, emscripten::base<vtkFloatArray>>("vtkTypeFloat32Array")
    .smart_ptr<vtkSmartPointer<vtkTypeFloat32Array>>("vtkSmartPointer<vtkTypeFloat32Array>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTypeFloat32Array>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeFloat32Array::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTypeFloat32Array& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTypeFloat32Array::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTypeFloat32Array::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTypeFloat32Array::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTypeFloat32Array& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("FastDownCast", &vtkTypeFloat32Array::FastDownCast, emscripten::allow_raw_pointers());
}
