// JavaScript wrapper for vtkCirclePackLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkCirclePackLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkCirclePackLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTree.h"
#include "vtkDataArray.h"
#include "vtkCirclePackLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkCirclePackLayoutStrategy>(vtkCirclePackLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCirclePackLayoutStrategy_class) {
  emscripten::class_<vtkCirclePackLayoutStrategy, emscripten::base<vtkObject>>("vtkCirclePackLayoutStrategy")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCirclePackLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCirclePackLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCirclePackLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCirclePackLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCirclePackLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCirclePackLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
