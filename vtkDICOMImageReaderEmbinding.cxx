// JavaScript wrapper for vtkDICOMImageReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkDICOMImageReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkDICOMImageReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDICOMImageReader.h"

template<> void emscripten::internal::raw_destructor<vtkDICOMImageReader>(vtkDICOMImageReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDICOMImageReader_class) {
  emscripten::class_<vtkDICOMImageReader, emscripten::base<vtkImageReader2>>("vtkDICOMImageReader")
    .smart_ptr<vtkSmartPointer<vtkDICOMImageReader>>("vtkSmartPointer<vtkDICOMImageReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDICOMImageReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDICOMImageReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDICOMImageReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDICOMImageReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDICOMImageReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDICOMImageReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDICOMImageReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkDICOMImageReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("SetDirectoryName", emscripten::optional_override([](vtkDICOMImageReader& self, const std::string & arg_0) -> void {  return self.SetDirectoryName( arg_0.c_str());}))
    .function("GetDirectoryName", emscripten::optional_override([](vtkDICOMImageReader& self) -> std::string {  return self.GetDirectoryName();}))
    .function("GetWidth", &vtkDICOMImageReader::GetWidth)
    .function("GetHeight", &vtkDICOMImageReader::GetHeight)
    .function("GetBitsAllocated", &vtkDICOMImageReader::GetBitsAllocated)
    .function("GetPixelRepresentation", &vtkDICOMImageReader::GetPixelRepresentation)
    .function("GetNumberOfComponents", &vtkDICOMImageReader::GetNumberOfComponents)
    .function("GetTransferSyntaxUID", emscripten::optional_override([](vtkDICOMImageReader& self) -> std::string {  return self.GetTransferSyntaxUID();}))
    .function("GetRescaleSlope", &vtkDICOMImageReader::GetRescaleSlope)
    .function("GetRescaleOffset", &vtkDICOMImageReader::GetRescaleOffset)
    .function("GetPatientName", emscripten::optional_override([](vtkDICOMImageReader& self) -> std::string {  return self.GetPatientName();}))
    .function("GetStudyUID", emscripten::optional_override([](vtkDICOMImageReader& self) -> std::string {  return self.GetStudyUID();}))
    .function("GetStudyID", emscripten::optional_override([](vtkDICOMImageReader& self) -> std::string {  return self.GetStudyID();}))
    .function("GetGantryAngle", &vtkDICOMImageReader::GetGantryAngle)
    .function("CanReadFile", emscripten::optional_override([](vtkDICOMImageReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkDICOMImageReader& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkDICOMImageReader& self) -> std::string {  return self.GetDescriptiveName();}));
}
