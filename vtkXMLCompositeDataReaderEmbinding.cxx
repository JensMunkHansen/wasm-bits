// JavaScript wrapper for vtkXMLCompositeDataReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLCompositeDataReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLCompositeDataReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCompositeDataSet.h"
#include "vtkXMLCompositeDataReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLCompositeDataReader>(vtkXMLCompositeDataReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLCompositeDataReader_class) {
  emscripten::class_<vtkXMLCompositeDataReader, emscripten::base<vtkXMLReader>>("vtkXMLCompositeDataReader")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLCompositeDataReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLCompositeDataReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLCompositeDataReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLCompositeDataReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLCompositeDataReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLCompositeDataReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPieceDistribution", &vtkXMLCompositeDataReader::SetPieceDistribution)
    .function("GetPieceDistributionMinValue", &vtkXMLCompositeDataReader::GetPieceDistributionMinValue)
    .function("GetPieceDistributionMaxValue", &vtkXMLCompositeDataReader::GetPieceDistributionMaxValue)
    .function("GetPieceDistribution", &vtkXMLCompositeDataReader::GetPieceDistribution)
    .function("GetOutput", emscripten::select_overload<vtkCompositeDataSet*(vtkXMLCompositeDataReader&)>([](vtkXMLCompositeDataReader& self) -> vtkCompositeDataSet* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkCompositeDataSet*(vtkXMLCompositeDataReader&, int)>([](vtkXMLCompositeDataReader& self, int arg_0) -> vtkCompositeDataSet* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetFileName", emscripten::optional_override([](vtkXMLCompositeDataReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}));
}
EMSCRIPTEN_BINDINGS(vtkIOXML_vtkXMLCompositeDataReader_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkXMLCompositeDataReader_Block", vtkXMLCompositeDataReader::Block },
      { "vtkXMLCompositeDataReader_Interleave", vtkXMLCompositeDataReader::Interleave },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
