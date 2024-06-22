// JavaScript wrapper for vtkParametricHenneberg with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricHennebergEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricHenneberg.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricHenneberg.h"

template<> void emscripten::internal::raw_destructor<vtkParametricHenneberg>(vtkParametricHenneberg * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricHenneberg_class) {
  emscripten::class_<vtkParametricHenneberg, emscripten::base<vtkParametricFunction>>("vtkParametricHenneberg")
    .smart_ptr<vtkSmartPointer<vtkParametricHenneberg>>("vtkSmartPointer<vtkParametricHenneberg>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkParametricHenneberg>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricHenneberg::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricHenneberg& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricHenneberg::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricHenneberg::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricHenneberg::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricHenneberg& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDimension", &vtkParametricHenneberg::GetDimension);
}
