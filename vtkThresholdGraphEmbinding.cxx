// JavaScript wrapper for vtkThresholdGraph with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkThresholdGraphEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkThresholdGraph.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkThresholdGraph.h"

template<> void emscripten::internal::raw_destructor<vtkThresholdGraph>(vtkThresholdGraph * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkThresholdGraph_class) {
  emscripten::class_<vtkThresholdGraph, emscripten::base<vtkGraphAlgorithm>>("vtkThresholdGraph")
    .smart_ptr<vtkSmartPointer<vtkThresholdGraph>>("vtkSmartPointer<vtkThresholdGraph>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkThresholdGraph>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkThresholdGraph::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkThresholdGraph& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkThresholdGraph::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkThresholdGraph::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkThresholdGraph::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkThresholdGraph& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetLowerThreshold", &vtkThresholdGraph::GetLowerThreshold)
    .function("SetLowerThreshold", &vtkThresholdGraph::SetLowerThreshold)
    .function("GetUpperThreshold", &vtkThresholdGraph::GetUpperThreshold)
    .function("SetUpperThreshold", &vtkThresholdGraph::SetUpperThreshold);
}
