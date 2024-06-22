// JavaScript wrapper for vtkTIFFReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkTIFFReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkTIFFReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTIFFReader.h"

template<> void emscripten::internal::raw_destructor<vtkTIFFReader>(vtkTIFFReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTIFFReader_class) {
  emscripten::class_<vtkTIFFReader, emscripten::base<vtkImageReader2>>("vtkTIFFReader")
    .smart_ptr<vtkSmartPointer<vtkTIFFReader>>("vtkSmartPointer<vtkTIFFReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTIFFReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTIFFReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTIFFReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTIFFReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTIFFReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTIFFReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTIFFReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CanReadFile", emscripten::optional_override([](vtkTIFFReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkTIFFReader& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkTIFFReader& self) -> std::string {  return self.GetDescriptiveName();}))
    .function("SetOrientationType", &vtkTIFFReader::SetOrientationType)
    .function("GetOrientationType", &vtkTIFFReader::GetOrientationType)
    .function("GetOrientationTypeSpecifiedFlag", &vtkTIFFReader::GetOrientationTypeSpecifiedFlag)
    .function("SetOriginSpecifiedFlag", &vtkTIFFReader::SetOriginSpecifiedFlag)
    .function("GetOriginSpecifiedFlag", &vtkTIFFReader::GetOriginSpecifiedFlag)
    .function("OriginSpecifiedFlagOn", &vtkTIFFReader::OriginSpecifiedFlagOn)
    .function("OriginSpecifiedFlagOff", &vtkTIFFReader::OriginSpecifiedFlagOff)
    .function("SetSpacingSpecifiedFlag", &vtkTIFFReader::SetSpacingSpecifiedFlag)
    .function("GetSpacingSpecifiedFlag", &vtkTIFFReader::GetSpacingSpecifiedFlag)
    .function("SpacingSpecifiedFlagOn", &vtkTIFFReader::SpacingSpecifiedFlagOn)
    .function("SpacingSpecifiedFlagOff", &vtkTIFFReader::SpacingSpecifiedFlagOff)
    .function("SetIgnoreColorMap", &vtkTIFFReader::SetIgnoreColorMap)
    .function("GetIgnoreColorMap", &vtkTIFFReader::GetIgnoreColorMap)
    .function("IgnoreColorMapOn", &vtkTIFFReader::IgnoreColorMapOn)
    .function("IgnoreColorMapOff", &vtkTIFFReader::IgnoreColorMapOff);
}
