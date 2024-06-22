// JavaScript wrapper for vtkBMPReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkBMPReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkBMPReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLookupTable.h"
#include "vtkBMPReader.h"

template<> void emscripten::internal::raw_destructor<vtkBMPReader>(vtkBMPReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBMPReader_class) {
  emscripten::class_<vtkBMPReader, emscripten::base<vtkImageReader>>("vtkBMPReader")
    .smart_ptr<vtkSmartPointer<vtkBMPReader>>("vtkSmartPointer<vtkBMPReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBMPReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBMPReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBMPReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBMPReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBMPReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBMPReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBMPReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDepth", &vtkBMPReader::GetDepth)
    .function("CanReadFile", emscripten::optional_override([](vtkBMPReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkBMPReader& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkBMPReader& self) -> std::string {  return self.GetDescriptiveName();}))
    .function("SetAllow8BitBMP", &vtkBMPReader::SetAllow8BitBMP)
    .function("GetAllow8BitBMP", &vtkBMPReader::GetAllow8BitBMP)
    .function("Allow8BitBMPOn", &vtkBMPReader::Allow8BitBMPOn)
    .function("Allow8BitBMPOff", &vtkBMPReader::Allow8BitBMPOff)
    .function("GetLookupTable", &vtkBMPReader::GetLookupTable, emscripten::allow_raw_pointers())
    .function("GetColors", emscripten::optional_override([](vtkBMPReader& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetColors()) / sizeof(unsigned char);}));
}
