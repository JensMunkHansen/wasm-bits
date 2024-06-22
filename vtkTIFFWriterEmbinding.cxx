// JavaScript wrapper for vtkTIFFWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkTIFFWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkTIFFWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTIFFWriter.h"

template<> void emscripten::internal::raw_destructor<vtkTIFFWriter>(vtkTIFFWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTIFFWriter_class) {
  emscripten::class_<vtkTIFFWriter, emscripten::base<vtkImageWriter>>("vtkTIFFWriter")
    .smart_ptr<vtkSmartPointer<vtkTIFFWriter>>("vtkSmartPointer<vtkTIFFWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTIFFWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTIFFWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTIFFWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTIFFWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTIFFWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTIFFWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTIFFWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Write", &vtkTIFFWriter::Write)
    .function("SetCompression", &vtkTIFFWriter::SetCompression)
    .function("GetCompressionMinValue", &vtkTIFFWriter::GetCompressionMinValue)
    .function("GetCompressionMaxValue", &vtkTIFFWriter::GetCompressionMaxValue)
    .function("GetCompression", &vtkTIFFWriter::GetCompression)
    .function("SetCompressionToNoCompression", &vtkTIFFWriter::SetCompressionToNoCompression)
    .function("SetCompressionToPackBits", &vtkTIFFWriter::SetCompressionToPackBits)
    .function("SetCompressionToJPEG", &vtkTIFFWriter::SetCompressionToJPEG)
    .function("SetCompressionToDeflate", &vtkTIFFWriter::SetCompressionToDeflate)
    .function("SetCompressionToLZW", &vtkTIFFWriter::SetCompressionToLZW);
}
EMSCRIPTEN_BINDINGS(vtkIOImage_vtkTIFFWriter_0_2_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "vtkTIFFWriter_NoCompression", vtkTIFFWriter::NoCompression },
      { "vtkTIFFWriter_PackBits", vtkTIFFWriter::PackBits },
      { "vtkTIFFWriter_JPEG", vtkTIFFWriter::JPEG },
      { "vtkTIFFWriter_Deflate", vtkTIFFWriter::Deflate },
      { "vtkTIFFWriter_LZW", vtkTIFFWriter::LZW },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
