// JavaScript wrapper for vtkHDRReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkHDRReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkHDRReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHDRReader.h"

EMSCRIPTEN_BINDINGS(vtkIOImage_vtkHDRReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkHDRReader>(vtkHDRReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHDRReader_class) {
  using FormatType=vtkHDRReader::FormatType;
  emscripten::class_<vtkHDRReader, emscripten::base<vtkImageReader>>("vtkHDRReader")
    .smart_ptr<vtkSmartPointer<vtkHDRReader>>("vtkSmartPointer<vtkHDRReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHDRReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHDRReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHDRReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHDRReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHDRReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHDRReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHDRReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFormat", &vtkHDRReader::GetFormat)
    .function("GetGamma", &vtkHDRReader::GetGamma)
    .function("GetExposure", &vtkHDRReader::GetExposure)
    .function("GetPixelAspect", &vtkHDRReader::GetPixelAspect)
    .function("CanReadFile", emscripten::optional_override([](vtkHDRReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkHDRReader& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkHDRReader& self) -> std::string {  return self.GetDescriptiveName();}));
}
EMSCRIPTEN_BINDINGS(vtkIOImage_vtkHDRReader_0_2_constants) {
    typedef vtkHDRReader::FormatType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkHDRReader_FormatType_FORMAT_32BIT_RLE_RGBE", vtkHDRReader::FORMAT_32BIT_RLE_RGBE },
      { "vtkHDRReader_FormatType_FORMAT_32BIT_RLE_XYZE", vtkHDRReader::FORMAT_32BIT_RLE_XYZE },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
