// JavaScript wrapper for vtkJPEGReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkJPEGReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkJPEGReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkJPEGReader.h"

template<> void emscripten::internal::raw_destructor<vtkJPEGReader>(vtkJPEGReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkJPEGReader_class) {
  emscripten::class_<vtkJPEGReader, emscripten::base<vtkImageReader2>>("vtkJPEGReader")
    .smart_ptr<vtkSmartPointer<vtkJPEGReader>>("vtkSmartPointer<vtkJPEGReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkJPEGReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkJPEGReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkJPEGReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkJPEGReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkJPEGReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkJPEGReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkJPEGReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CanReadFile", emscripten::optional_override([](vtkJPEGReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkJPEGReader& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkJPEGReader& self) -> std::string {  return self.GetDescriptiveName();}));
}
