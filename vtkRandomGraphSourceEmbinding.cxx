// JavaScript wrapper for vtkRandomGraphSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkRandomGraphSourceEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkRandomGraphSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRandomGraphSource.h"

template<> void emscripten::internal::raw_destructor<vtkRandomGraphSource>(vtkRandomGraphSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRandomGraphSource_class) {
  emscripten::class_<vtkRandomGraphSource, emscripten::base<vtkGraphAlgorithm>>("vtkRandomGraphSource")
    .smart_ptr<vtkSmartPointer<vtkRandomGraphSource>>("vtkSmartPointer<vtkRandomGraphSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRandomGraphSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRandomGraphSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRandomGraphSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRandomGraphSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRandomGraphSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRandomGraphSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRandomGraphSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfVertices", &vtkRandomGraphSource::GetNumberOfVertices)
    .function("SetNumberOfVertices", &vtkRandomGraphSource::SetNumberOfVertices)
    .function("GetNumberOfVerticesMinValue", &vtkRandomGraphSource::GetNumberOfVerticesMinValue)
    .function("GetNumberOfVerticesMaxValue", &vtkRandomGraphSource::GetNumberOfVerticesMaxValue)
    .function("GetNumberOfEdges", &vtkRandomGraphSource::GetNumberOfEdges)
    .function("SetNumberOfEdges", &vtkRandomGraphSource::SetNumberOfEdges)
    .function("GetNumberOfEdgesMinValue", &vtkRandomGraphSource::GetNumberOfEdgesMinValue)
    .function("GetNumberOfEdgesMaxValue", &vtkRandomGraphSource::GetNumberOfEdgesMaxValue)
    .function("GetEdgeProbability", &vtkRandomGraphSource::GetEdgeProbability)
    .function("SetEdgeProbability", &vtkRandomGraphSource::SetEdgeProbability)
    .function("GetEdgeProbabilityMinValue", &vtkRandomGraphSource::GetEdgeProbabilityMinValue)
    .function("GetEdgeProbabilityMaxValue", &vtkRandomGraphSource::GetEdgeProbabilityMaxValue)
    .function("SetIncludeEdgeWeights", &vtkRandomGraphSource::SetIncludeEdgeWeights)
    .function("GetIncludeEdgeWeights", &vtkRandomGraphSource::GetIncludeEdgeWeights)
    .function("IncludeEdgeWeightsOn", &vtkRandomGraphSource::IncludeEdgeWeightsOn)
    .function("IncludeEdgeWeightsOff", &vtkRandomGraphSource::IncludeEdgeWeightsOff)
    .function("SetEdgeWeightArrayName", emscripten::optional_override([](vtkRandomGraphSource& self, const std::string & arg_0) -> void {  return self.SetEdgeWeightArrayName( arg_0.c_str());}))
    .function("GetEdgeWeightArrayName", emscripten::optional_override([](vtkRandomGraphSource& self) -> std::string {  return self.GetEdgeWeightArrayName();}))
    .function("SetDirected", &vtkRandomGraphSource::SetDirected)
    .function("GetDirected", &vtkRandomGraphSource::GetDirected)
    .function("DirectedOn", &vtkRandomGraphSource::DirectedOn)
    .function("DirectedOff", &vtkRandomGraphSource::DirectedOff)
    .function("SetUseEdgeProbability", &vtkRandomGraphSource::SetUseEdgeProbability)
    .function("GetUseEdgeProbability", &vtkRandomGraphSource::GetUseEdgeProbability)
    .function("UseEdgeProbabilityOn", &vtkRandomGraphSource::UseEdgeProbabilityOn)
    .function("UseEdgeProbabilityOff", &vtkRandomGraphSource::UseEdgeProbabilityOff)
    .function("SetStartWithTree", &vtkRandomGraphSource::SetStartWithTree)
    .function("GetStartWithTree", &vtkRandomGraphSource::GetStartWithTree)
    .function("StartWithTreeOn", &vtkRandomGraphSource::StartWithTreeOn)
    .function("StartWithTreeOff", &vtkRandomGraphSource::StartWithTreeOff)
    .function("SetAllowSelfLoops", &vtkRandomGraphSource::SetAllowSelfLoops)
    .function("GetAllowSelfLoops", &vtkRandomGraphSource::GetAllowSelfLoops)
    .function("AllowSelfLoopsOn", &vtkRandomGraphSource::AllowSelfLoopsOn)
    .function("AllowSelfLoopsOff", &vtkRandomGraphSource::AllowSelfLoopsOff)
    .function("SetAllowParallelEdges", &vtkRandomGraphSource::SetAllowParallelEdges)
    .function("GetAllowParallelEdges", &vtkRandomGraphSource::GetAllowParallelEdges)
    .function("AllowParallelEdgesOn", &vtkRandomGraphSource::AllowParallelEdgesOn)
    .function("AllowParallelEdgesOff", &vtkRandomGraphSource::AllowParallelEdgesOff)
    .function("SetGeneratePedigreeIds", &vtkRandomGraphSource::SetGeneratePedigreeIds)
    .function("GetGeneratePedigreeIds", &vtkRandomGraphSource::GetGeneratePedigreeIds)
    .function("GeneratePedigreeIdsOn", &vtkRandomGraphSource::GeneratePedigreeIdsOn)
    .function("GeneratePedigreeIdsOff", &vtkRandomGraphSource::GeneratePedigreeIdsOff)
    .function("SetVertexPedigreeIdArrayName", emscripten::optional_override([](vtkRandomGraphSource& self, const std::string & arg_0) -> void {  return self.SetVertexPedigreeIdArrayName( arg_0.c_str());}))
    .function("GetVertexPedigreeIdArrayName", emscripten::optional_override([](vtkRandomGraphSource& self) -> std::string {  return self.GetVertexPedigreeIdArrayName();}))
    .function("SetEdgePedigreeIdArrayName", emscripten::optional_override([](vtkRandomGraphSource& self, const std::string & arg_0) -> void {  return self.SetEdgePedigreeIdArrayName( arg_0.c_str());}))
    .function("GetEdgePedigreeIdArrayName", emscripten::optional_override([](vtkRandomGraphSource& self) -> std::string {  return self.GetEdgePedigreeIdArrayName();}))
    .function("SetSeed", &vtkRandomGraphSource::SetSeed)
    .function("GetSeed", &vtkRandomGraphSource::GetSeed);
}
