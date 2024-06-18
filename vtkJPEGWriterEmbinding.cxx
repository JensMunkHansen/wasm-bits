// JavaScript wrapper for vtkJPEGWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkJPEGWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkJPEGWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnsignedCharArray.h"
#include "vtkJPEGWriter.h"

template<> void emscripten::internal::raw_destructor<vtkJPEGWriter>(vtkJPEGWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkJPEGWriter_class) {
  emscripten::class_<vtkJPEGWriter, emscripten::base<vtkImageWriter>>("vtkJPEGWriter")
    .smart_ptr<vtkSmartPointer<vtkJPEGWriter>>("vtkSmartPointer<vtkJPEGWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkJPEGWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkJPEGWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkJPEGWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkJPEGWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkJPEGWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkJPEGWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkJPEGWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Write", &vtkJPEGWriter::Write)
    .function("SetQuality", &vtkJPEGWriter::SetQuality)
    .function("GetQualityMinValue", &vtkJPEGWriter::GetQualityMinValue)
    .function("GetQualityMaxValue", &vtkJPEGWriter::GetQualityMaxValue)
    .function("GetQuality", &vtkJPEGWriter::GetQuality)
    .function("SetProgressive", &vtkJPEGWriter::SetProgressive)
    .function("GetProgressive", &vtkJPEGWriter::GetProgressive)
    .function("ProgressiveOn", &vtkJPEGWriter::ProgressiveOn)
    .function("ProgressiveOff", &vtkJPEGWriter::ProgressiveOff)
    .function("SetWriteToMemory", &vtkJPEGWriter::SetWriteToMemory)
    .function("GetWriteToMemory", &vtkJPEGWriter::GetWriteToMemory)
    .function("WriteToMemoryOn", &vtkJPEGWriter::WriteToMemoryOn)
    .function("WriteToMemoryOff", &vtkJPEGWriter::WriteToMemoryOff)
    .function("SetResult", &vtkJPEGWriter::SetResult, emscripten::allow_raw_pointers())
    .function("GetResult", &vtkJPEGWriter::GetResult, emscripten::allow_raw_pointers());
}
