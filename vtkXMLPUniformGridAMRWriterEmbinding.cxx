// JavaScript wrapper for vtkXMLPUniformGridAMRWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkIOParallelXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkXMLPUniformGridAMRWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/ParallelXML/vtkXMLPUniformGridAMRWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkXMLPUniformGridAMRWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPUniformGridAMRWriter>(vtkXMLPUniformGridAMRWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPUniformGridAMRWriter_class) {
  emscripten::class_<vtkXMLPUniformGridAMRWriter, emscripten::base<vtkXMLUniformGridAMRWriter>>("vtkXMLPUniformGridAMRWriter")
    .smart_ptr<vtkSmartPointer<vtkXMLPUniformGridAMRWriter>>("vtkSmartPointer<vtkXMLPUniformGridAMRWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLPUniformGridAMRWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPUniformGridAMRWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPUniformGridAMRWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPUniformGridAMRWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPUniformGridAMRWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPUniformGridAMRWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPUniformGridAMRWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkXMLPUniformGridAMRWriter::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkXMLPUniformGridAMRWriter::GetController, emscripten::allow_raw_pointers())
    .function("SetWriteMetaFile", &vtkXMLPUniformGridAMRWriter::SetWriteMetaFile);
}
