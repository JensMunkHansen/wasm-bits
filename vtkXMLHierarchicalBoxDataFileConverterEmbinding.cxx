// JavaScript wrapper for vtkXMLHierarchicalBoxDataFileConverter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLHierarchicalBoxDataFileConverterEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLHierarchicalBoxDataFileConverter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLHierarchicalBoxDataFileConverter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLHierarchicalBoxDataFileConverter>(vtkXMLHierarchicalBoxDataFileConverter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLHierarchicalBoxDataFileConverter_class) {
  emscripten::class_<vtkXMLHierarchicalBoxDataFileConverter, emscripten::base<vtkObject>>("vtkXMLHierarchicalBoxDataFileConverter")
    .smart_ptr<vtkSmartPointer<vtkXMLHierarchicalBoxDataFileConverter>>("vtkSmartPointer<vtkXMLHierarchicalBoxDataFileConverter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLHierarchicalBoxDataFileConverter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLHierarchicalBoxDataFileConverter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLHierarchicalBoxDataFileConverter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLHierarchicalBoxDataFileConverter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLHierarchicalBoxDataFileConverter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLHierarchicalBoxDataFileConverter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLHierarchicalBoxDataFileConverter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputFileName", emscripten::optional_override([](vtkXMLHierarchicalBoxDataFileConverter& self, const std::string & arg_0) -> void {  return self.SetInputFileName( arg_0.c_str());}))
    .function("GetInputFileName", emscripten::optional_override([](vtkXMLHierarchicalBoxDataFileConverter& self) -> std::string {  return self.GetInputFileName();}))
    .function("SetOutputFileName", emscripten::optional_override([](vtkXMLHierarchicalBoxDataFileConverter& self, const std::string & arg_0) -> void {  return self.SetOutputFileName( arg_0.c_str());}))
    .function("GetOutputFileName", emscripten::optional_override([](vtkXMLHierarchicalBoxDataFileConverter& self) -> std::string {  return self.GetOutputFileName();}))
    .function("Convert", &vtkXMLHierarchicalBoxDataFileConverter::Convert);
}
