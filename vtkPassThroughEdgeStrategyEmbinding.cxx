// JavaScript wrapper for vtkPassThroughEdgeStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkPassThroughEdgeStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkPassThroughEdgeStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPassThroughEdgeStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkPassThroughEdgeStrategy>(vtkPassThroughEdgeStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPassThroughEdgeStrategy_class) {
  emscripten::class_<vtkPassThroughEdgeStrategy, emscripten::base<vtkEdgeLayoutStrategy>>("vtkPassThroughEdgeStrategy")
    .smart_ptr<vtkSmartPointer<vtkPassThroughEdgeStrategy>>("vtkSmartPointer<vtkPassThroughEdgeStrategy>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPassThroughEdgeStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPassThroughEdgeStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPassThroughEdgeStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPassThroughEdgeStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPassThroughEdgeStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPassThroughEdgeStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPassThroughEdgeStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Layout", &vtkPassThroughEdgeStrategy::Layout);
}
