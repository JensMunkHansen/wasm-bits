// JavaScript wrapper for vtkGESignaReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkGESignaReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkGESignaReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGESignaReader.h"

template<> void emscripten::internal::raw_destructor<vtkGESignaReader>(vtkGESignaReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGESignaReader_class) {
  emscripten::class_<vtkGESignaReader, emscripten::base<vtkMedicalImageReader2>>("vtkGESignaReader")
    .smart_ptr<vtkSmartPointer<vtkGESignaReader>>("vtkSmartPointer<vtkGESignaReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGESignaReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGESignaReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGESignaReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGESignaReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGESignaReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGESignaReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGESignaReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CanReadFile", emscripten::optional_override([](vtkGESignaReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkGESignaReader& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkGESignaReader& self) -> std::string {  return self.GetDescriptiveName();}));
}
