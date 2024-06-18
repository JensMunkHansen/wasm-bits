// JavaScript wrapper for vtkOggTheoraWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOOggTheora.js/vtkIOOggTheora.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOOggTheora.js/vtkOggTheoraWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/OggTheora/vtkOggTheoraWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOggTheoraWriter.h"

template<> void emscripten::internal::raw_destructor<vtkOggTheoraWriter>(vtkOggTheoraWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOggTheoraWriter_class) {
  emscripten::class_<vtkOggTheoraWriter, emscripten::base<vtkGenericMovieWriter>>("vtkOggTheoraWriter")
    .smart_ptr<vtkSmartPointer<vtkOggTheoraWriter>>("vtkSmartPointer<vtkOggTheoraWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOggTheoraWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOggTheoraWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOggTheoraWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOggTheoraWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOggTheoraWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOggTheoraWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOggTheoraWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Start", &vtkOggTheoraWriter::Start)
    .function("Write", &vtkOggTheoraWriter::Write)
    .function("End", &vtkOggTheoraWriter::End)
    .function("SetQuality", &vtkOggTheoraWriter::SetQuality)
    .function("GetQualityMinValue", &vtkOggTheoraWriter::GetQualityMinValue)
    .function("GetQualityMaxValue", &vtkOggTheoraWriter::GetQualityMaxValue)
    .function("GetQuality", &vtkOggTheoraWriter::GetQuality)
    .function("SetRate", &vtkOggTheoraWriter::SetRate)
    .function("GetRateMinValue", &vtkOggTheoraWriter::GetRateMinValue)
    .function("GetRateMaxValue", &vtkOggTheoraWriter::GetRateMaxValue)
    .function("GetRate", &vtkOggTheoraWriter::GetRate)
    .function("SetSubsampling", &vtkOggTheoraWriter::SetSubsampling)
    .function("GetSubsampling", &vtkOggTheoraWriter::GetSubsampling)
    .function("SubsamplingOn", &vtkOggTheoraWriter::SubsamplingOn)
    .function("SubsamplingOff", &vtkOggTheoraWriter::SubsamplingOff);
}
