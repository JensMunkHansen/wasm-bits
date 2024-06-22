// JavaScript wrapper for vtkXMLUtilities with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXMLParser.js/vtkIOXMLParser.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXMLParser.js/vtkXMLUtilitiesEmbinding.cxx \
 /home/jmh/github/vtk/IO/XMLParser/vtkXMLUtilities.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLDataElement.h"
#include "vtkXMLUtilities.h"

template<> void emscripten::internal::raw_destructor<vtkXMLUtilities>(vtkXMLUtilities * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLUtilities_class) {
  emscripten::class_<vtkXMLUtilities, emscripten::base<vtkObject>>("vtkXMLUtilities")
    .smart_ptr<vtkSmartPointer<vtkXMLUtilities>>("vtkSmartPointer<vtkXMLUtilities>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLUtilities>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLUtilities::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLUtilities& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLUtilities::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLUtilities::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLUtilities::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLUtilities& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ReadElementFromString", emscripten::optional_override([]( const std::string & arg_0, int arg_1) -> vtkXMLDataElement* {  return vtkXMLUtilities::ReadElementFromString( arg_0.c_str(), arg_1);}), emscripten::allow_raw_pointers())
    .class_function("ReadElementFromFile", emscripten::optional_override([]( const std::string & arg_0, int arg_1) -> vtkXMLDataElement* {  return vtkXMLUtilities::ReadElementFromFile( arg_0.c_str(), arg_1);}), emscripten::allow_raw_pointers())
    .class_function("FactorElements", &vtkXMLUtilities::FactorElements, emscripten::allow_raw_pointers())
    .class_function("UnFactorElements", &vtkXMLUtilities::UnFactorElements, emscripten::allow_raw_pointers());
}
