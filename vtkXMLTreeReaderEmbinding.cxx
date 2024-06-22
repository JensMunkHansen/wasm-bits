// JavaScript wrapper for vtkXMLTreeReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkIOInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkXMLTreeReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Infovis/vtkXMLTreeReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLTreeReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLTreeReader>(vtkXMLTreeReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLTreeReader_class) {
  emscripten::class_<vtkXMLTreeReader, emscripten::base<vtkTreeAlgorithm>>("vtkXMLTreeReader")
    .smart_ptr<vtkSmartPointer<vtkXMLTreeReader>>("vtkSmartPointer<vtkXMLTreeReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLTreeReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLTreeReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLTreeReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLTreeReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLTreeReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLTreeReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLTreeReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkXMLTreeReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetFileName", emscripten::optional_override([](vtkXMLTreeReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetXMLString", emscripten::optional_override([](vtkXMLTreeReader& self) -> std::string {  return self.GetXMLString();}))
    .function("SetXMLString", emscripten::optional_override([](vtkXMLTreeReader& self, const std::string & arg_0) -> void {  return self.SetXMLString( arg_0.c_str());}))
    .function("GetEdgePedigreeIdArrayName", emscripten::optional_override([](vtkXMLTreeReader& self) -> std::string {  return self.GetEdgePedigreeIdArrayName();}))
    .function("SetEdgePedigreeIdArrayName", emscripten::optional_override([](vtkXMLTreeReader& self, const std::string & arg_0) -> void {  return self.SetEdgePedigreeIdArrayName( arg_0.c_str());}))
    .function("GetVertexPedigreeIdArrayName", emscripten::optional_override([](vtkXMLTreeReader& self) -> std::string {  return self.GetVertexPedigreeIdArrayName();}))
    .function("SetVertexPedigreeIdArrayName", emscripten::optional_override([](vtkXMLTreeReader& self, const std::string & arg_0) -> void {  return self.SetVertexPedigreeIdArrayName( arg_0.c_str());}))
    .function("SetGenerateEdgePedigreeIds", &vtkXMLTreeReader::SetGenerateEdgePedigreeIds)
    .function("GetGenerateEdgePedigreeIds", &vtkXMLTreeReader::GetGenerateEdgePedigreeIds)
    .function("GenerateEdgePedigreeIdsOn", &vtkXMLTreeReader::GenerateEdgePedigreeIdsOn)
    .function("GenerateEdgePedigreeIdsOff", &vtkXMLTreeReader::GenerateEdgePedigreeIdsOff)
    .function("SetGenerateVertexPedigreeIds", &vtkXMLTreeReader::SetGenerateVertexPedigreeIds)
    .function("GetGenerateVertexPedigreeIds", &vtkXMLTreeReader::GetGenerateVertexPedigreeIds)
    .function("GenerateVertexPedigreeIdsOn", &vtkXMLTreeReader::GenerateVertexPedigreeIdsOn)
    .function("GenerateVertexPedigreeIdsOff", &vtkXMLTreeReader::GenerateVertexPedigreeIdsOff)
    .function("GetMaskArrays", &vtkXMLTreeReader::GetMaskArrays)
    .function("SetMaskArrays", &vtkXMLTreeReader::SetMaskArrays)
    .function("MaskArraysOn", &vtkXMLTreeReader::MaskArraysOn)
    .function("MaskArraysOff", &vtkXMLTreeReader::MaskArraysOff)
    .function("GetReadCharData", &vtkXMLTreeReader::GetReadCharData)
    .function("SetReadCharData", &vtkXMLTreeReader::SetReadCharData)
    .function("ReadCharDataOn", &vtkXMLTreeReader::ReadCharDataOn)
    .function("ReadCharDataOff", &vtkXMLTreeReader::ReadCharDataOff)
    .function("GetReadTagName", &vtkXMLTreeReader::GetReadTagName)
    .function("SetReadTagName", &vtkXMLTreeReader::SetReadTagName)
    .function("ReadTagNameOn", &vtkXMLTreeReader::ReadTagNameOn)
    .function("ReadTagNameOff", &vtkXMLTreeReader::ReadTagNameOff);
}
