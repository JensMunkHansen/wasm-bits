// JavaScript wrapper for vtkHDFWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOHDF.js/vtkIOHDF.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOHDF.js/vtkHDFWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/HDF/vtkHDFWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHDFWriter.h"

template<> void emscripten::internal::raw_destructor<vtkHDFWriter>(vtkHDFWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHDFWriter_class) {
  emscripten::class_<vtkHDFWriter, emscripten::base<vtkWriter>>("vtkHDFWriter")
    .smart_ptr<vtkSmartPointer<vtkHDFWriter>>("vtkSmartPointer<vtkHDFWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHDFWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHDFWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHDFWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHDFWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHDFWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHDFWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHDFWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkHDFWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkHDFWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetOverwrite", &vtkHDFWriter::SetOverwrite)
    .function("GetOverwrite", &vtkHDFWriter::GetOverwrite)
    .function("SetWriteAllTimeSteps", &vtkHDFWriter::SetWriteAllTimeSteps)
    .function("GetWriteAllTimeSteps", &vtkHDFWriter::GetWriteAllTimeSteps)
    .function("SetChunkSize", &vtkHDFWriter::SetChunkSize)
    .function("GetChunkSize", &vtkHDFWriter::GetChunkSize)
    .function("SetCompressionLevel", &vtkHDFWriter::SetCompressionLevel)
    .function("GetCompressionLevelMinValue", &vtkHDFWriter::GetCompressionLevelMinValue)
    .function("GetCompressionLevelMaxValue", &vtkHDFWriter::GetCompressionLevelMaxValue)
    .function("GetCompressionLevel", &vtkHDFWriter::GetCompressionLevel)
    .function("SetUseExternalComposite", &vtkHDFWriter::SetUseExternalComposite)
    .function("GetUseExternalComposite", &vtkHDFWriter::GetUseExternalComposite);
}
