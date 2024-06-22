// JavaScript wrapper for vtkNIFTIImageReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkNIFTIImageReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkNIFTIImageReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMatrix4x4.h"
#include "vtkNIFTIImageHeader.h"
#include "vtkNIFTIImageReader.h"

template<> void emscripten::internal::raw_destructor<vtkNIFTIImageReader>(vtkNIFTIImageReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNIFTIImageReader_class) {
  emscripten::class_<vtkNIFTIImageReader, emscripten::base<vtkImageReader2>>("vtkNIFTIImageReader")
    .smart_ptr<vtkSmartPointer<vtkNIFTIImageReader>>("vtkSmartPointer<vtkNIFTIImageReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkNIFTIImageReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNIFTIImageReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNIFTIImageReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNIFTIImageReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNIFTIImageReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNIFTIImageReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNIFTIImageReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkNIFTIImageReader& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkNIFTIImageReader& self) -> std::string {  return self.GetDescriptiveName();}))
    .function("CanReadFile", emscripten::optional_override([](vtkNIFTIImageReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetTimeAsVector", &vtkNIFTIImageReader::GetTimeAsVector)
    .function("SetTimeAsVector", &vtkNIFTIImageReader::SetTimeAsVector)
    .function("TimeAsVectorOn", &vtkNIFTIImageReader::TimeAsVectorOn)
    .function("TimeAsVectorOff", &vtkNIFTIImageReader::TimeAsVectorOff)
    .function("GetTimeDimension", &vtkNIFTIImageReader::GetTimeDimension)
    .function("GetTimeSpacing", &vtkNIFTIImageReader::GetTimeSpacing)
    .function("GetRescaleSlope", &vtkNIFTIImageReader::GetRescaleSlope)
    .function("GetRescaleIntercept", &vtkNIFTIImageReader::GetRescaleIntercept)
    .function("GetPlanarRGB", &vtkNIFTIImageReader::GetPlanarRGB)
    .function("SetPlanarRGB", &vtkNIFTIImageReader::SetPlanarRGB)
    .function("PlanarRGBOn", &vtkNIFTIImageReader::PlanarRGBOn)
    .function("PlanarRGBOff", &vtkNIFTIImageReader::PlanarRGBOff)
    .function("GetQFac", &vtkNIFTIImageReader::GetQFac)
    .function("GetQFormMatrix", &vtkNIFTIImageReader::GetQFormMatrix, emscripten::allow_raw_pointers())
    .function("GetSFormMatrix", &vtkNIFTIImageReader::GetSFormMatrix, emscripten::allow_raw_pointers())
    .function("GetNIFTIHeader", &vtkNIFTIImageReader::GetNIFTIHeader, emscripten::allow_raw_pointers());
}
