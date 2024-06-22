// JavaScript wrapper for vtkSpanTreeLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkSpanTreeLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkSpanTreeLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSpanTreeLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkSpanTreeLayoutStrategy>(vtkSpanTreeLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSpanTreeLayoutStrategy_class) {
  emscripten::class_<vtkSpanTreeLayoutStrategy, emscripten::base<vtkGraphLayoutStrategy>>("vtkSpanTreeLayoutStrategy")
    .smart_ptr<vtkSmartPointer<vtkSpanTreeLayoutStrategy>>("vtkSmartPointer<vtkSpanTreeLayoutStrategy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSpanTreeLayoutStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpanTreeLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSpanTreeLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSpanTreeLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSpanTreeLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpanTreeLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSpanTreeLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDepthFirstSpanningTree", &vtkSpanTreeLayoutStrategy::SetDepthFirstSpanningTree)
    .function("GetDepthFirstSpanningTree", &vtkSpanTreeLayoutStrategy::GetDepthFirstSpanningTree)
    .function("DepthFirstSpanningTreeOn", &vtkSpanTreeLayoutStrategy::DepthFirstSpanningTreeOn)
    .function("DepthFirstSpanningTreeOff", &vtkSpanTreeLayoutStrategy::DepthFirstSpanningTreeOff)
    .function("Layout", &vtkSpanTreeLayoutStrategy::Layout);
}
