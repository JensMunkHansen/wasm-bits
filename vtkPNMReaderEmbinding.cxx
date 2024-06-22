// JavaScript wrapper for vtkPNMReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkPNMReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkPNMReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPNMReader.h"

template<> void emscripten::internal::raw_destructor<vtkPNMReader>(vtkPNMReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPNMReader_class) {
  emscripten::class_<vtkPNMReader, emscripten::base<vtkImageReader>>("vtkPNMReader")
    .smart_ptr<vtkSmartPointer<vtkPNMReader>>("vtkSmartPointer<vtkPNMReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPNMReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPNMReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPNMReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPNMReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPNMReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPNMReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPNMReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CanReadFile", emscripten::optional_override([](vtkPNMReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkPNMReader& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkPNMReader& self) -> std::string {  return self.GetDescriptiveName();}));
}
