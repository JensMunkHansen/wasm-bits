// JavaScript wrapper for vtkPNGWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkPNGWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkPNGWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnsignedCharArray.h"
#include "vtkPNGWriter.h"

template<> void emscripten::internal::raw_destructor<vtkPNGWriter>(vtkPNGWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPNGWriter_class) {
  emscripten::class_<vtkPNGWriter, emscripten::base<vtkImageWriter>>("vtkPNGWriter")
    .smart_ptr<vtkSmartPointer<vtkPNGWriter>>("vtkSmartPointer<vtkPNGWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPNGWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPNGWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPNGWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPNGWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPNGWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPNGWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPNGWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Write", &vtkPNGWriter::Write)
    .function("SetCompressionLevel", &vtkPNGWriter::SetCompressionLevel)
    .function("GetCompressionLevelMinValue", &vtkPNGWriter::GetCompressionLevelMinValue)
    .function("GetCompressionLevelMaxValue", &vtkPNGWriter::GetCompressionLevelMaxValue)
    .function("GetCompressionLevel", &vtkPNGWriter::GetCompressionLevel)
    .function("SetWriteToMemory", &vtkPNGWriter::SetWriteToMemory)
    .function("GetWriteToMemory", &vtkPNGWriter::GetWriteToMemory)
    .function("WriteToMemoryOn", &vtkPNGWriter::WriteToMemoryOn)
    .function("WriteToMemoryOff", &vtkPNGWriter::WriteToMemoryOff)
    .function("SetResult", &vtkPNGWriter::SetResult, emscripten::allow_raw_pointers())
    .function("GetResult", &vtkPNGWriter::GetResult, emscripten::allow_raw_pointers())
    .function("AddText", emscripten::optional_override([](vtkPNGWriter& self, const std::string & arg_0, const std::string & arg_1) -> void {  return self.AddText( arg_0.c_str(), arg_1.c_str());}))
    .function("ClearText", &vtkPNGWriter::ClearText);
}
