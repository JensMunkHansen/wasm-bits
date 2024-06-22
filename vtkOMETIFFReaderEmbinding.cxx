// JavaScript wrapper for vtkOMETIFFReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkOMETIFFReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkOMETIFFReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOMETIFFReader.h"

template<> void emscripten::internal::raw_destructor<vtkOMETIFFReader>(vtkOMETIFFReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOMETIFFReader_class) {
  emscripten::class_<vtkOMETIFFReader, emscripten::base<vtkTIFFReader>>("vtkOMETIFFReader")
    .smart_ptr<vtkSmartPointer<vtkOMETIFFReader>>("vtkSmartPointer<vtkOMETIFFReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOMETIFFReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOMETIFFReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOMETIFFReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOMETIFFReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOMETIFFReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOMETIFFReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOMETIFFReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CanReadFile", emscripten::optional_override([](vtkOMETIFFReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkOMETIFFReader& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkOMETIFFReader& self) -> std::string {  return self.GetDescriptiveName();}));
}
