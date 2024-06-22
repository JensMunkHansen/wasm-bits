// JavaScript wrapper for vtkSliceAndDiceLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkSliceAndDiceLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkSliceAndDiceLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTree.h"
#include "vtkDataArray.h"
#include "vtkSliceAndDiceLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkSliceAndDiceLayoutStrategy>(vtkSliceAndDiceLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSliceAndDiceLayoutStrategy_class) {
  emscripten::class_<vtkSliceAndDiceLayoutStrategy, emscripten::base<vtkTreeMapLayoutStrategy>>("vtkSliceAndDiceLayoutStrategy")
    .smart_ptr<vtkSmartPointer<vtkSliceAndDiceLayoutStrategy>>("vtkSmartPointer<vtkSliceAndDiceLayoutStrategy>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSliceAndDiceLayoutStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSliceAndDiceLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSliceAndDiceLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSliceAndDiceLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSliceAndDiceLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSliceAndDiceLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSliceAndDiceLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Layout", &vtkSliceAndDiceLayoutStrategy::Layout, emscripten::allow_raw_pointers());
}
