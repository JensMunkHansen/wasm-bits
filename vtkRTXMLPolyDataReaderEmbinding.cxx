// JavaScript wrapper for vtkRTXMLPolyDataReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkRTXMLPolyDataReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkRTXMLPolyDataReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRTXMLPolyDataReader.h"

template<> void emscripten::internal::raw_destructor<vtkRTXMLPolyDataReader>(vtkRTXMLPolyDataReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRTXMLPolyDataReader_class) {
  emscripten::class_<vtkRTXMLPolyDataReader, emscripten::base<vtkXMLPolyDataReader>>("vtkRTXMLPolyDataReader")
    .smart_ptr<vtkSmartPointer<vtkRTXMLPolyDataReader>>("vtkSmartPointer<vtkRTXMLPolyDataReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRTXMLPolyDataReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRTXMLPolyDataReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRTXMLPolyDataReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRTXMLPolyDataReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRTXMLPolyDataReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRTXMLPolyDataReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRTXMLPolyDataReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLocation", emscripten::optional_override([](vtkRTXMLPolyDataReader& self, const std::string & arg_0) -> void {  return self.SetLocation( arg_0.c_str());}))
    .function("GetDataLocation", emscripten::optional_override([](vtkRTXMLPolyDataReader& self) -> std::string {  return self.GetDataLocation();}))
    .function("UpdateToNextFile", &vtkRTXMLPolyDataReader::UpdateToNextFile)
    .function("NewDataAvailable", &vtkRTXMLPolyDataReader::NewDataAvailable)
    .function("ResetReader", &vtkRTXMLPolyDataReader::ResetReader)
    .function("GetNextFileName", emscripten::optional_override([](vtkRTXMLPolyDataReader& self) -> std::string {  return self.GetNextFileName();}));
}
