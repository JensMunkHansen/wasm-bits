// JavaScript wrapper for vtkPNGReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkPNGReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkPNGReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStringArray.h"
#include "vtkPNGReader.h"

template<> void emscripten::internal::raw_destructor<vtkPNGReader>(vtkPNGReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPNGReader_class) {
  emscripten::class_<vtkPNGReader, emscripten::base<vtkImageReader2>>("vtkPNGReader")
    .smart_ptr<vtkSmartPointer<vtkPNGReader>>("vtkSmartPointer<vtkPNGReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPNGReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPNGReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPNGReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPNGReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPNGReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPNGReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPNGReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CanReadFile", emscripten::optional_override([](vtkPNGReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkPNGReader& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkPNGReader& self) -> std::string {  return self.GetDescriptiveName();}))
    .function("GetTextKey", emscripten::optional_override([](vtkPNGReader& self, int arg_0) -> std::string {  return self.GetTextKey( arg_0);}))
    .function("GetTextKeys", &vtkPNGReader::GetTextKeys, emscripten::allow_raw_pointers())
    .function("GetTextValue", emscripten::optional_override([](vtkPNGReader& self, int arg_0) -> std::string {  return self.GetTextValue( arg_0);}))
    .function("GetTextValues", &vtkPNGReader::GetTextValues, emscripten::allow_raw_pointers())
    .function("GetNumberOfTextChunks", &vtkPNGReader::GetNumberOfTextChunks)
    .function("SetReadSpacingFromFile", &vtkPNGReader::SetReadSpacingFromFile)
    .function("GetReadSpacingFromFile", &vtkPNGReader::GetReadSpacingFromFile)
    .function("ReadSpacingFromFileOn", &vtkPNGReader::ReadSpacingFromFileOn)
    .function("ReadSpacingFromFileOff", &vtkPNGReader::ReadSpacingFromFileOff);
}
