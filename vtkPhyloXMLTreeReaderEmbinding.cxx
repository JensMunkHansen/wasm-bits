// JavaScript wrapper for vtkPhyloXMLTreeReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkIOInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkPhyloXMLTreeReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Infovis/vtkPhyloXMLTreeReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTree.h"
#include "vtkPhyloXMLTreeReader.h"

template<> void emscripten::internal::raw_destructor<vtkPhyloXMLTreeReader>(vtkPhyloXMLTreeReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPhyloXMLTreeReader_class) {
  emscripten::class_<vtkPhyloXMLTreeReader, emscripten::base<vtkXMLReader>>("vtkPhyloXMLTreeReader")
    .smart_ptr<vtkSmartPointer<vtkPhyloXMLTreeReader>>("vtkSmartPointer<vtkPhyloXMLTreeReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPhyloXMLTreeReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPhyloXMLTreeReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPhyloXMLTreeReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPhyloXMLTreeReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPhyloXMLTreeReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPhyloXMLTreeReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPhyloXMLTreeReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkTree*(vtkPhyloXMLTreeReader&)>([](vtkPhyloXMLTreeReader& self) -> vtkTree* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkTree*(vtkPhyloXMLTreeReader&, int)>([](vtkPhyloXMLTreeReader& self, int arg_0) -> vtkTree* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers());
}
