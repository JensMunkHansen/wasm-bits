// JavaScript wrapper for vtkXMLImageDataReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLImageDataReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLImageDataReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkInformation.h"
#include "vtkXMLImageDataReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLImageDataReader>(vtkXMLImageDataReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLImageDataReader_class) {
  emscripten::class_<vtkXMLImageDataReader, emscripten::base<vtkXMLStructuredDataReader>>("vtkXMLImageDataReader")
    .smart_ptr<vtkSmartPointer<vtkXMLImageDataReader>>("vtkSmartPointer<vtkXMLImageDataReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLImageDataReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLImageDataReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLImageDataReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLImageDataReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLImageDataReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLImageDataReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLImageDataReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkImageData*(vtkXMLImageDataReader&)>([](vtkXMLImageDataReader& self) -> vtkImageData* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkImageData*(vtkXMLImageDataReader&, int)>([](vtkXMLImageDataReader& self, int arg_0) -> vtkImageData* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("CopyOutputInformation", &vtkXMLImageDataReader::CopyOutputInformation, emscripten::allow_raw_pointers());
}
