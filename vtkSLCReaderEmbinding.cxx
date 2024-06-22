// JavaScript wrapper for vtkSLCReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkSLCReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkSLCReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSLCReader.h"

template<> void emscripten::internal::raw_destructor<vtkSLCReader>(vtkSLCReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSLCReader_class) {
  emscripten::class_<vtkSLCReader, emscripten::base<vtkImageReader2>>("vtkSLCReader")
    .smart_ptr<vtkSmartPointer<vtkSLCReader>>("vtkSmartPointer<vtkSLCReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSLCReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSLCReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSLCReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSLCReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSLCReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSLCReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSLCReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetError", &vtkSLCReader::GetError)
    .function("CanReadFile", emscripten::optional_override([](vtkSLCReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkSLCReader& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkSLCReader& self) -> std::string {  return self.GetDescriptiveName();}));
}
