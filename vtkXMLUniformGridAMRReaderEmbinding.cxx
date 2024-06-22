// JavaScript wrapper for vtkXMLUniformGridAMRReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLUniformGridAMRReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLUniformGridAMRReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLUniformGridAMRReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLUniformGridAMRReader>(vtkXMLUniformGridAMRReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLUniformGridAMRReader_class) {
  emscripten::class_<vtkXMLUniformGridAMRReader, emscripten::base<vtkXMLCompositeDataReader>>("vtkXMLUniformGridAMRReader")
    .smart_ptr<vtkSmartPointer<vtkXMLUniformGridAMRReader>>("vtkSmartPointer<vtkXMLUniformGridAMRReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLUniformGridAMRReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLUniformGridAMRReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLUniformGridAMRReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLUniformGridAMRReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLUniformGridAMRReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLUniformGridAMRReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLUniformGridAMRReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMaximumLevelsToReadByDefault", &vtkXMLUniformGridAMRReader::SetMaximumLevelsToReadByDefault)
    .function("GetMaximumLevelsToReadByDefault", &vtkXMLUniformGridAMRReader::GetMaximumLevelsToReadByDefault);
}
