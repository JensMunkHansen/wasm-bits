// JavaScript wrapper for vtkTulipReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkIOInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkTulipReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Infovis/vtkTulipReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTulipReader.h"

template<> void emscripten::internal::raw_destructor<vtkTulipReader>(vtkTulipReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTulipReader_class) {
  emscripten::class_<vtkTulipReader, emscripten::base<vtkUndirectedGraphAlgorithm>>("vtkTulipReader")
    .smart_ptr<vtkSmartPointer<vtkTulipReader>>("vtkSmartPointer<vtkTulipReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTulipReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTulipReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTulipReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTulipReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTulipReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTulipReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTulipReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkTulipReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetFileName", emscripten::optional_override([](vtkTulipReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}));
}
