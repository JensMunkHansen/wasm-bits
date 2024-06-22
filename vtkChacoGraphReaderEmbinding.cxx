// JavaScript wrapper for vtkChacoGraphReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkIOInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkChacoGraphReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Infovis/vtkChacoGraphReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkChacoGraphReader.h"

template<> void emscripten::internal::raw_destructor<vtkChacoGraphReader>(vtkChacoGraphReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkChacoGraphReader_class) {
  emscripten::class_<vtkChacoGraphReader, emscripten::base<vtkUndirectedGraphAlgorithm>>("vtkChacoGraphReader")
    .smart_ptr<vtkSmartPointer<vtkChacoGraphReader>>("vtkSmartPointer<vtkChacoGraphReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkChacoGraphReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChacoGraphReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkChacoGraphReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkChacoGraphReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkChacoGraphReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChacoGraphReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkChacoGraphReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkChacoGraphReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetFileName", emscripten::optional_override([](vtkChacoGraphReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}));
}
