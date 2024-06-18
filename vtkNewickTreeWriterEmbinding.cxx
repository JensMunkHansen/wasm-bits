// JavaScript wrapper for vtkNewickTreeWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkIOInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkNewickTreeWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Infovis/vtkNewickTreeWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTree.h"
#include "vtkStdString.h"
#include "vtkNewickTreeWriter.h"

template<> void emscripten::internal::raw_destructor<vtkNewickTreeWriter>(vtkNewickTreeWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNewickTreeWriter_class) {
  emscripten::class_<vtkNewickTreeWriter, emscripten::base<vtkDataWriter>>("vtkNewickTreeWriter")
    .smart_ptr<vtkSmartPointer<vtkNewickTreeWriter>>("vtkSmartPointer<vtkNewickTreeWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkNewickTreeWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNewickTreeWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNewickTreeWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNewickTreeWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNewickTreeWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNewickTreeWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNewickTreeWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", emscripten::select_overload<vtkTree*(vtkNewickTreeWriter&)>([](vtkNewickTreeWriter& self) -> vtkTree* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkTree*(vtkNewickTreeWriter&, int)>([](vtkNewickTreeWriter& self, int arg_0) -> vtkTree* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetEdgeWeightArrayName", &vtkNewickTreeWriter::GetEdgeWeightArrayName)
    .function("SetEdgeWeightArrayName", &vtkNewickTreeWriter::SetEdgeWeightArrayName)
    .function("GetNodeNameArrayName", &vtkNewickTreeWriter::GetNodeNameArrayName)
    .function("SetNodeNameArrayName", &vtkNewickTreeWriter::SetNodeNameArrayName);
}
