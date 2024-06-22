// JavaScript wrapper for vtkISIReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkIOInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkISIReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Infovis/vtkISIReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkISIReader.h"

template<> void emscripten::internal::raw_destructor<vtkISIReader>(vtkISIReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkISIReader_class) {
  emscripten::class_<vtkISIReader, emscripten::base<vtkTableAlgorithm>>("vtkISIReader")
    .smart_ptr<vtkSmartPointer<vtkISIReader>>("vtkSmartPointer<vtkISIReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkISIReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkISIReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkISIReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkISIReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkISIReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkISIReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkISIReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkISIReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetFileName", emscripten::optional_override([](vtkISIReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetDelimiter", emscripten::optional_override([](vtkISIReader& self) -> std::string {  return self.GetDelimiter();}))
    .function("SetDelimiter", emscripten::optional_override([](vtkISIReader& self, const std::string & arg_0) -> void {  return self.SetDelimiter( arg_0.c_str());}))
    .function("GetMaxRecords", &vtkISIReader::GetMaxRecords)
    .function("SetMaxRecords", &vtkISIReader::SetMaxRecords);
}
