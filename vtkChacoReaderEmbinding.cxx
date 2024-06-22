// JavaScript wrapper for vtkChacoReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkChacoReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkChacoReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkChacoReader.h"

template<> void emscripten::internal::raw_destructor<vtkChacoReader>(vtkChacoReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkChacoReader_class) {
  emscripten::class_<vtkChacoReader, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkChacoReader")
    .smart_ptr<vtkSmartPointer<vtkChacoReader>>("vtkSmartPointer<vtkChacoReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkChacoReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChacoReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkChacoReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkChacoReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkChacoReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChacoReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkChacoReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetBaseName", emscripten::optional_override([](vtkChacoReader& self, const std::string & arg_0) -> void {  return self.SetBaseName( arg_0.c_str());}))
    .function("GetBaseName", emscripten::optional_override([](vtkChacoReader& self) -> std::string {  return self.GetBaseName();}))
    .function("SetGenerateGlobalElementIdArray", &vtkChacoReader::SetGenerateGlobalElementIdArray)
    .function("GetGenerateGlobalElementIdArray", &vtkChacoReader::GetGenerateGlobalElementIdArray)
    .function("GenerateGlobalElementIdArrayOn", &vtkChacoReader::GenerateGlobalElementIdArrayOn)
    .function("GenerateGlobalElementIdArrayOff", &vtkChacoReader::GenerateGlobalElementIdArrayOff)
    .class_function("GetGlobalElementIdArrayName", emscripten::optional_override([]() -> std::string {  return vtkChacoReader::GetGlobalElementIdArrayName();}))
    .function("SetGenerateGlobalNodeIdArray", &vtkChacoReader::SetGenerateGlobalNodeIdArray)
    .function("GetGenerateGlobalNodeIdArray", &vtkChacoReader::GetGenerateGlobalNodeIdArray)
    .function("GenerateGlobalNodeIdArrayOn", &vtkChacoReader::GenerateGlobalNodeIdArrayOn)
    .function("GenerateGlobalNodeIdArrayOff", &vtkChacoReader::GenerateGlobalNodeIdArrayOff)
    .class_function("GetGlobalNodeIdArrayName", emscripten::optional_override([]() -> std::string {  return vtkChacoReader::GetGlobalNodeIdArrayName();}))
    .function("SetGenerateVertexWeightArrays", &vtkChacoReader::SetGenerateVertexWeightArrays)
    .function("GetGenerateVertexWeightArrays", &vtkChacoReader::GetGenerateVertexWeightArrays)
    .function("GenerateVertexWeightArraysOn", &vtkChacoReader::GenerateVertexWeightArraysOn)
    .function("GenerateVertexWeightArraysOff", &vtkChacoReader::GenerateVertexWeightArraysOff)
    .function("GetNumberOfVertexWeights", &vtkChacoReader::GetNumberOfVertexWeights)
    .function("GetVertexWeightArrayName", emscripten::optional_override([](vtkChacoReader& self, int arg_0) -> std::string {  return self.GetVertexWeightArrayName( arg_0);}))
    .function("SetGenerateEdgeWeightArrays", &vtkChacoReader::SetGenerateEdgeWeightArrays)
    .function("GetGenerateEdgeWeightArrays", &vtkChacoReader::GetGenerateEdgeWeightArrays)
    .function("GenerateEdgeWeightArraysOn", &vtkChacoReader::GenerateEdgeWeightArraysOn)
    .function("GenerateEdgeWeightArraysOff", &vtkChacoReader::GenerateEdgeWeightArraysOff)
    .function("GetNumberOfEdgeWeights", &vtkChacoReader::GetNumberOfEdgeWeights)
    .function("GetEdgeWeightArrayName", emscripten::optional_override([](vtkChacoReader& self, int arg_0) -> std::string {  return self.GetEdgeWeightArrayName( arg_0);}))
    .function("GetDimensionality", &vtkChacoReader::GetDimensionality)
    .function("GetNumberOfEdges", &vtkChacoReader::GetNumberOfEdges)
    .function("GetNumberOfVertices", &vtkChacoReader::GetNumberOfVertices)
    .function("GetNumberOfCellWeightArrays", &vtkChacoReader::GetNumberOfCellWeightArrays)
    .function("GetNumberOfPointWeightArrays", &vtkChacoReader::GetNumberOfPointWeightArrays);
}
