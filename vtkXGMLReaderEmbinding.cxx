// JavaScript wrapper for vtkXGMLReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkIOInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkXGMLReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Infovis/vtkXGMLReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXGMLReader.h"

template<> void emscripten::internal::raw_destructor<vtkXGMLReader>(vtkXGMLReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXGMLReader_class) {
  emscripten::class_<vtkXGMLReader, emscripten::base<vtkUndirectedGraphAlgorithm>>("vtkXGMLReader")
    .smart_ptr<vtkSmartPointer<vtkXGMLReader>>("vtkSmartPointer<vtkXGMLReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXGMLReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXGMLReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXGMLReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXGMLReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXGMLReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXGMLReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXGMLReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkXGMLReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetFileName", emscripten::optional_override([](vtkXGMLReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}));
}
