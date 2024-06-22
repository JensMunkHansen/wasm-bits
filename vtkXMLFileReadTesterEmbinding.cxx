// JavaScript wrapper for vtkXMLFileReadTester with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLFileReadTesterEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLFileReadTester.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLFileReadTester.h"

template<> void emscripten::internal::raw_destructor<vtkXMLFileReadTester>(vtkXMLFileReadTester * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLFileReadTester_class) {
  emscripten::class_<vtkXMLFileReadTester, emscripten::base<vtkXMLParser>>("vtkXMLFileReadTester")
    .smart_ptr<vtkSmartPointer<vtkXMLFileReadTester>>("vtkSmartPointer<vtkXMLFileReadTester>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLFileReadTester>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLFileReadTester::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLFileReadTester& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLFileReadTester::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLFileReadTester::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLFileReadTester::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLFileReadTester& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("TestReadFile", &vtkXMLFileReadTester::TestReadFile)
    .function("GetFileDataType", emscripten::optional_override([](vtkXMLFileReadTester& self) -> std::string {  return self.GetFileDataType();}))
    .function("GetFileVersion", emscripten::optional_override([](vtkXMLFileReadTester& self) -> std::string {  return self.GetFileVersion();}));
}
