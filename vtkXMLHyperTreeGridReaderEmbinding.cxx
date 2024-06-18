// JavaScript wrapper for vtkXMLHyperTreeGridReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLHyperTreeGridReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLHyperTreeGridReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGrid.h"
#include "vtkInformation.h"
#include "vtkXMLHyperTreeGridReader.h"

EMSCRIPTEN_BINDINGS(vtkIOXML_vtkXMLHyperTreeGridReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkXMLHyperTreeGridReader>(vtkXMLHyperTreeGridReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLHyperTreeGridReader_class) {
  emscripten::class_<vtkXMLHyperTreeGridReader, emscripten::base<vtkXMLReader>>("vtkXMLHyperTreeGridReader")
    .smart_ptr<vtkSmartPointer<vtkXMLHyperTreeGridReader>>("vtkSmartPointer<vtkXMLHyperTreeGridReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLHyperTreeGridReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLHyperTreeGridReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLHyperTreeGridReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLHyperTreeGridReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLHyperTreeGridReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLHyperTreeGridReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLHyperTreeGridReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkHyperTreeGrid*(vtkXMLHyperTreeGridReader&)>([](vtkXMLHyperTreeGridReader& self) -> vtkHyperTreeGrid* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkHyperTreeGrid*(vtkXMLHyperTreeGridReader&, int)>([](vtkXMLHyperTreeGridReader& self, int arg_0) -> vtkHyperTreeGrid* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetFixedLevel", &vtkXMLHyperTreeGridReader::SetFixedLevel)
    .function("GetFixedLevel", &vtkXMLHyperTreeGridReader::GetFixedLevel)
    .function("SetCoordinatesBoundingBox", &vtkXMLHyperTreeGridReader::SetCoordinatesBoundingBox)
    .function("SetIndicesBoundingBox", &vtkXMLHyperTreeGridReader::SetIndicesBoundingBox)
    .function("ClearAndAddSelectedHT", &vtkXMLHyperTreeGridReader::ClearAndAddSelectedHT)
    .function("AddSelectedHT", &vtkXMLHyperTreeGridReader::AddSelectedHT)
    .function("GetNumberOfPoints", &vtkXMLHyperTreeGridReader::GetNumberOfPoints)
    .function("GetNumberOfPieces", &vtkXMLHyperTreeGridReader::GetNumberOfPieces)
    .function("SetupUpdateExtent", &vtkXMLHyperTreeGridReader::SetupUpdateExtent)
    .function("CopyOutputInformation", &vtkXMLHyperTreeGridReader::CopyOutputInformation, emscripten::allow_raw_pointers())
    .function("ReadXMLData", &vtkXMLHyperTreeGridReader::ReadXMLData);
}
