// JavaScript wrapper for vtkTGAReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkTGAReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkTGAReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTGAReader.h"

template<> void emscripten::internal::raw_destructor<vtkTGAReader>(vtkTGAReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTGAReader_class) {
  emscripten::class_<vtkTGAReader, emscripten::base<vtkImageReader2>>("vtkTGAReader")
    .smart_ptr<vtkSmartPointer<vtkTGAReader>>("vtkSmartPointer<vtkTGAReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTGAReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTGAReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTGAReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTGAReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTGAReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTGAReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTGAReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CanReadFile", emscripten::optional_override([](vtkTGAReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkTGAReader& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkTGAReader& self) -> std::string {  return self.GetDescriptiveName();}));
}
