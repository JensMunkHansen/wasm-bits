// JavaScript wrapper for vtkXMLPImageDataReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLPImageDataReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLPImageDataReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkInformation.h"
#include "vtkXMLPImageDataReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPImageDataReader>(vtkXMLPImageDataReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPImageDataReader_class) {
  emscripten::class_<vtkXMLPImageDataReader, emscripten::base<vtkXMLPStructuredDataReader>>("vtkXMLPImageDataReader")
    .smart_ptr<vtkSmartPointer<vtkXMLPImageDataReader>>("vtkSmartPointer<vtkXMLPImageDataReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLPImageDataReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPImageDataReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPImageDataReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPImageDataReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPImageDataReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPImageDataReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPImageDataReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkImageData*(vtkXMLPImageDataReader&)>([](vtkXMLPImageDataReader& self) -> vtkImageData* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkImageData*(vtkXMLPImageDataReader&, int)>([](vtkXMLPImageDataReader& self, int arg_0) -> vtkImageData* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("CopyOutputInformation", &vtkXMLPImageDataReader::CopyOutputInformation, emscripten::allow_raw_pointers());
}
