// JavaScript wrapper for vtkMetaImageReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkMetaImageReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkMetaImageReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMetaImageReader.h"

template<> void emscripten::internal::raw_destructor<vtkMetaImageReader>(vtkMetaImageReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMetaImageReader_class) {
  emscripten::class_<vtkMetaImageReader, emscripten::base<vtkImageReader2>>("vtkMetaImageReader")
    .smart_ptr<vtkSmartPointer<vtkMetaImageReader>>("vtkSmartPointer<vtkMetaImageReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMetaImageReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMetaImageReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMetaImageReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMetaImageReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMetaImageReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMetaImageReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMetaImageReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkMetaImageReader& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkMetaImageReader& self) -> std::string {  return self.GetDescriptiveName();}))
    .function("GetPixelSpacing", emscripten::optional_override([](vtkMetaImageReader& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPixelSpacing()) / sizeof(double);}))
    .function("GetWidth", &vtkMetaImageReader::GetWidth)
    .function("GetHeight", &vtkMetaImageReader::GetHeight)
    .function("GetImagePositionPatient", emscripten::optional_override([](vtkMetaImageReader& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetImagePositionPatient()) / sizeof(double);}))
    .function("GetNumberOfComponents", &vtkMetaImageReader::GetNumberOfComponents)
    .function("GetPixelRepresentation", &vtkMetaImageReader::GetPixelRepresentation)
    .function("GetDataByteOrder", &vtkMetaImageReader::GetDataByteOrder)
    .function("GetRescaleSlope", &vtkMetaImageReader::GetRescaleSlope)
    .function("GetRescaleOffset", &vtkMetaImageReader::GetRescaleOffset)
    .function("GetBitsAllocated", &vtkMetaImageReader::GetBitsAllocated)
    .function("GetDistanceUnits", emscripten::optional_override([](vtkMetaImageReader& self) -> std::string {  return self.GetDistanceUnits();}))
    .function("GetAnatomicalOrientation", emscripten::optional_override([](vtkMetaImageReader& self) -> std::string {  return self.GetAnatomicalOrientation();}))
    .function("GetGantryAngle", &vtkMetaImageReader::GetGantryAngle)
    .function("GetPatientName", emscripten::optional_override([](vtkMetaImageReader& self) -> std::string {  return self.GetPatientName();}))
    .function("GetPatientID", emscripten::optional_override([](vtkMetaImageReader& self) -> std::string {  return self.GetPatientID();}))
    .function("GetDate", emscripten::optional_override([](vtkMetaImageReader& self) -> std::string {  return self.GetDate();}))
    .function("GetSeries", emscripten::optional_override([](vtkMetaImageReader& self) -> std::string {  return self.GetSeries();}))
    .function("GetImageNumber", emscripten::optional_override([](vtkMetaImageReader& self) -> std::string {  return self.GetImageNumber();}))
    .function("GetModality", emscripten::optional_override([](vtkMetaImageReader& self) -> std::string {  return self.GetModality();}))
    .function("GetStudyID", emscripten::optional_override([](vtkMetaImageReader& self) -> std::string {  return self.GetStudyID();}))
    .function("GetStudyUID", emscripten::optional_override([](vtkMetaImageReader& self) -> std::string {  return self.GetStudyUID();}))
    .function("GetTransferSyntaxUID", emscripten::optional_override([](vtkMetaImageReader& self) -> std::string {  return self.GetTransferSyntaxUID();}))
    .function("CanReadFile", emscripten::optional_override([](vtkMetaImageReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}));
}
