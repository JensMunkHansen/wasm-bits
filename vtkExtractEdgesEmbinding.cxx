// JavaScript wrapper for vtkExtractEdges with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkExtractEdgesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkExtractEdges.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkExtractEdges.h"

template<> void emscripten::internal::raw_destructor<vtkExtractEdges>(vtkExtractEdges * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractEdges_class) {
  emscripten::class_<vtkExtractEdges, emscripten::base<vtkPolyDataAlgorithm>>("vtkExtractEdges")
    .smart_ptr<vtkSmartPointer<vtkExtractEdges>>("vtkSmartPointer<vtkExtractEdges>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtractEdges>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractEdges::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractEdges& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractEdges::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractEdges::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractEdges::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractEdges& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLocator", &vtkExtractEdges::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkExtractEdges::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkExtractEdges::CreateDefaultLocator)
    .function("SetUseAllPoints", &vtkExtractEdges::SetUseAllPoints)
    .function("GetUseAllPoints", &vtkExtractEdges::GetUseAllPoints)
    .function("UseAllPointsOn", &vtkExtractEdges::UseAllPointsOn)
    .function("UseAllPointsOff", &vtkExtractEdges::UseAllPointsOff)
    .function("GetMTime", &vtkExtractEdges::GetMTime);
}
