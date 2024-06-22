// JavaScript wrapper for vtkRISReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkIOInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkRISReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Infovis/vtkRISReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRISReader.h"

template<> void emscripten::internal::raw_destructor<vtkRISReader>(vtkRISReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRISReader_class) {
  emscripten::class_<vtkRISReader, emscripten::base<vtkTableAlgorithm>>("vtkRISReader")
    .smart_ptr<vtkSmartPointer<vtkRISReader>>("vtkSmartPointer<vtkRISReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRISReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRISReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRISReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRISReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRISReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRISReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRISReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkRISReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetFileName", emscripten::optional_override([](vtkRISReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetDelimiter", emscripten::optional_override([](vtkRISReader& self) -> std::string {  return self.GetDelimiter();}))
    .function("SetDelimiter", emscripten::optional_override([](vtkRISReader& self, const std::string & arg_0) -> void {  return self.SetDelimiter( arg_0.c_str());}))
    .function("GetMaxRecords", &vtkRISReader::GetMaxRecords)
    .function("SetMaxRecords", &vtkRISReader::SetMaxRecords);
}
