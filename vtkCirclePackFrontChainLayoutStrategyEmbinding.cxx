// JavaScript wrapper for vtkCirclePackFrontChainLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkCirclePackFrontChainLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkCirclePackFrontChainLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTree.h"
#include "vtkDataArray.h"
#include "vtkCirclePackFrontChainLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkCirclePackFrontChainLayoutStrategy>(vtkCirclePackFrontChainLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCirclePackFrontChainLayoutStrategy_class) {
  emscripten::class_<vtkCirclePackFrontChainLayoutStrategy, emscripten::base<vtkCirclePackLayoutStrategy>>("vtkCirclePackFrontChainLayoutStrategy")
    .smart_ptr<vtkSmartPointer<vtkCirclePackFrontChainLayoutStrategy>>("vtkSmartPointer<vtkCirclePackFrontChainLayoutStrategy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCirclePackFrontChainLayoutStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCirclePackFrontChainLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCirclePackFrontChainLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCirclePackFrontChainLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCirclePackFrontChainLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCirclePackFrontChainLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCirclePackFrontChainLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Layout", &vtkCirclePackFrontChainLayoutStrategy::Layout, emscripten::allow_raw_pointers())
    .function("GetWidth", &vtkCirclePackFrontChainLayoutStrategy::GetWidth)
    .function("SetWidth", &vtkCirclePackFrontChainLayoutStrategy::SetWidth)
    .function("GetHeight", &vtkCirclePackFrontChainLayoutStrategy::GetHeight)
    .function("SetHeight", &vtkCirclePackFrontChainLayoutStrategy::SetHeight);
}
