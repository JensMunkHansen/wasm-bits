// JavaScript wrapper for vtkFixedWidthTextReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkIOInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkFixedWidthTextReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Infovis/vtkFixedWidthTextReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCommand.h"
#include "vtkFixedWidthTextReader.h"

template<> void emscripten::internal::raw_destructor<vtkFixedWidthTextReader>(vtkFixedWidthTextReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFixedWidthTextReader_class) {
  emscripten::class_<vtkFixedWidthTextReader, emscripten::base<vtkTableAlgorithm>>("vtkFixedWidthTextReader")
    .smart_ptr<vtkSmartPointer<vtkFixedWidthTextReader>>("vtkSmartPointer<vtkFixedWidthTextReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFixedWidthTextReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFixedWidthTextReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFixedWidthTextReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFixedWidthTextReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFixedWidthTextReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFixedWidthTextReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFixedWidthTextReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkFixedWidthTextReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetFileName", emscripten::optional_override([](vtkFixedWidthTextReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("SetFieldWidth", &vtkFixedWidthTextReader::SetFieldWidth)
    .function("GetFieldWidth", &vtkFixedWidthTextReader::GetFieldWidth)
    .function("SetStripWhiteSpace", &vtkFixedWidthTextReader::SetStripWhiteSpace)
    .function("GetStripWhiteSpace", &vtkFixedWidthTextReader::GetStripWhiteSpace)
    .function("StripWhiteSpaceOn", &vtkFixedWidthTextReader::StripWhiteSpaceOn)
    .function("StripWhiteSpaceOff", &vtkFixedWidthTextReader::StripWhiteSpaceOff)
    .function("GetHaveHeaders", &vtkFixedWidthTextReader::GetHaveHeaders)
    .function("SetHaveHeaders", &vtkFixedWidthTextReader::SetHaveHeaders)
    .function("HaveHeadersOn", &vtkFixedWidthTextReader::HaveHeadersOn)
    .function("HaveHeadersOff", &vtkFixedWidthTextReader::HaveHeadersOff)
    .function("SetTableErrorObserver", &vtkFixedWidthTextReader::SetTableErrorObserver, emscripten::allow_raw_pointers())
    .function("GetTableErrorObserver", &vtkFixedWidthTextReader::GetTableErrorObserver, emscripten::allow_raw_pointers());
}
