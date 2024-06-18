// JavaScript wrapper for vtkDIMACSGraphReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkIOInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkDIMACSGraphReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Infovis/vtkDIMACSGraphReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDIMACSGraphReader.h"

template<> void emscripten::internal::raw_destructor<vtkDIMACSGraphReader>(vtkDIMACSGraphReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDIMACSGraphReader_class) {
  emscripten::class_<vtkDIMACSGraphReader, emscripten::base<vtkGraphAlgorithm>>("vtkDIMACSGraphReader")
    .smart_ptr<vtkSmartPointer<vtkDIMACSGraphReader>>("vtkSmartPointer<vtkDIMACSGraphReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDIMACSGraphReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDIMACSGraphReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDIMACSGraphReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDIMACSGraphReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDIMACSGraphReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDIMACSGraphReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDIMACSGraphReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkDIMACSGraphReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetFileName", emscripten::optional_override([](vtkDIMACSGraphReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetVertexAttributeArrayName", emscripten::optional_override([](vtkDIMACSGraphReader& self) -> std::string {  return self.GetVertexAttributeArrayName();}))
    .function("SetVertexAttributeArrayName", emscripten::optional_override([](vtkDIMACSGraphReader& self, const std::string & arg_0) -> void {  return self.SetVertexAttributeArrayName( arg_0.c_str());}))
    .function("GetEdgeAttributeArrayName", emscripten::optional_override([](vtkDIMACSGraphReader& self) -> std::string {  return self.GetEdgeAttributeArrayName();}))
    .function("SetEdgeAttributeArrayName", emscripten::optional_override([](vtkDIMACSGraphReader& self, const std::string & arg_0) -> void {  return self.SetEdgeAttributeArrayName( arg_0.c_str());}));
}
