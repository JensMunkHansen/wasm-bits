// JavaScript wrapper for vtkXMLPHyperTreeGridReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLPHyperTreeGridReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLPHyperTreeGridReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGrid.h"
#include "vtkInformation.h"
#include "vtkXMLPHyperTreeGridReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPHyperTreeGridReader>(vtkXMLPHyperTreeGridReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPHyperTreeGridReader_class) {
  emscripten::class_<vtkXMLPHyperTreeGridReader, emscripten::base<vtkXMLPDataObjectReader>>("vtkXMLPHyperTreeGridReader")
    .smart_ptr<vtkSmartPointer<vtkXMLPHyperTreeGridReader>>("vtkSmartPointer<vtkXMLPHyperTreeGridReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLPHyperTreeGridReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPHyperTreeGridReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPHyperTreeGridReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPHyperTreeGridReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPHyperTreeGridReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPHyperTreeGridReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPHyperTreeGridReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkHyperTreeGrid*(vtkXMLPHyperTreeGridReader&)>([](vtkXMLPHyperTreeGridReader& self) -> vtkHyperTreeGrid* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkHyperTreeGrid*(vtkXMLPHyperTreeGridReader&, int)>([](vtkXMLPHyperTreeGridReader& self, int arg_0) -> vtkHyperTreeGrid* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("CopyOutputInformation", &vtkXMLPHyperTreeGridReader::CopyOutputInformation, emscripten::allow_raw_pointers());
}
