// JavaScript wrapper for vtkArcParallelEdgeStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkArcParallelEdgeStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkArcParallelEdgeStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkArcParallelEdgeStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkArcParallelEdgeStrategy>(vtkArcParallelEdgeStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkArcParallelEdgeStrategy_class) {
  emscripten::class_<vtkArcParallelEdgeStrategy, emscripten::base<vtkEdgeLayoutStrategy>>("vtkArcParallelEdgeStrategy")
    .smart_ptr<vtkSmartPointer<vtkArcParallelEdgeStrategy>>("vtkSmartPointer<vtkArcParallelEdgeStrategy>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkArcParallelEdgeStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArcParallelEdgeStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkArcParallelEdgeStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkArcParallelEdgeStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkArcParallelEdgeStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArcParallelEdgeStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkArcParallelEdgeStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Layout", &vtkArcParallelEdgeStrategy::Layout)
    .function("GetNumberOfSubdivisions", &vtkArcParallelEdgeStrategy::GetNumberOfSubdivisions)
    .function("SetNumberOfSubdivisions", &vtkArcParallelEdgeStrategy::SetNumberOfSubdivisions);
}
