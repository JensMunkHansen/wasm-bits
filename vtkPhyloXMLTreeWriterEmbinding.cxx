// JavaScript wrapper for vtkPhyloXMLTreeWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkIOInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkPhyloXMLTreeWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Infovis/vtkPhyloXMLTreeWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTree.h"
#include "vtkStdString.h"
#include "vtkPhyloXMLTreeWriter.h"

template<> void emscripten::internal::raw_destructor<vtkPhyloXMLTreeWriter>(vtkPhyloXMLTreeWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPhyloXMLTreeWriter_class) {
  emscripten::class_<vtkPhyloXMLTreeWriter, emscripten::base<vtkXMLWriter>>("vtkPhyloXMLTreeWriter")
    .smart_ptr<vtkSmartPointer<vtkPhyloXMLTreeWriter>>("vtkSmartPointer<vtkPhyloXMLTreeWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPhyloXMLTreeWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPhyloXMLTreeWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPhyloXMLTreeWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPhyloXMLTreeWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPhyloXMLTreeWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPhyloXMLTreeWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPhyloXMLTreeWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", emscripten::select_overload<vtkTree*(vtkPhyloXMLTreeWriter&)>([](vtkPhyloXMLTreeWriter& self) -> vtkTree* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkTree*(vtkPhyloXMLTreeWriter&, int)>([](vtkPhyloXMLTreeWriter& self, int arg_0) -> vtkTree* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetDefaultFileExtension", emscripten::optional_override([](vtkPhyloXMLTreeWriter& self) -> std::string {  return self.GetDefaultFileExtension();}))
    .function("GetEdgeWeightArrayName", &vtkPhyloXMLTreeWriter::GetEdgeWeightArrayName)
    .function("SetEdgeWeightArrayName", &vtkPhyloXMLTreeWriter::SetEdgeWeightArrayName)
    .function("GetNodeNameArrayName", &vtkPhyloXMLTreeWriter::GetNodeNameArrayName)
    .function("SetNodeNameArrayName", &vtkPhyloXMLTreeWriter::SetNodeNameArrayName)
    .function("IgnoreArray", emscripten::optional_override([](vtkPhyloXMLTreeWriter& self, const std::string & arg_0) -> void {  return self.IgnoreArray( arg_0.c_str());}));
}
