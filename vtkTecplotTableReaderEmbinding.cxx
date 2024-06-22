// JavaScript wrapper for vtkTecplotTableReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOTecplotTable.js/vtkIOTecplotTable.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOTecplotTable.js/vtkTecplotTableReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/TecplotTable/vtkTecplotTableReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkTecplotTableReader.h"

template<> void emscripten::internal::raw_destructor<vtkTecplotTableReader>(vtkTecplotTableReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTecplotTableReader_class) {
  emscripten::class_<vtkTecplotTableReader, emscripten::base<vtkTableAlgorithm>>("vtkTecplotTableReader")
    .smart_ptr<vtkSmartPointer<vtkTecplotTableReader>>("vtkSmartPointer<vtkTecplotTableReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTecplotTableReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTecplotTableReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTecplotTableReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTecplotTableReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTecplotTableReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTecplotTableReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTecplotTableReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkTecplotTableReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetFileName", emscripten::optional_override([](vtkTecplotTableReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetMaxRecords", &vtkTecplotTableReader::GetMaxRecords)
    .function("SetMaxRecords", &vtkTecplotTableReader::SetMaxRecords)
    .function("GetHeaderLines", &vtkTecplotTableReader::GetHeaderLines)
    .function("SetHeaderLines", &vtkTecplotTableReader::SetHeaderLines)
    .function("GetColumnNamesOnLine", &vtkTecplotTableReader::GetColumnNamesOnLine)
    .function("SetColumnNamesOnLine", &vtkTecplotTableReader::SetColumnNamesOnLine)
    .function("GetSkipColumnNames", &vtkTecplotTableReader::GetSkipColumnNames)
    .function("SetSkipColumnNames", &vtkTecplotTableReader::SetSkipColumnNames)
    .function("SetPedigreeIdArrayName", emscripten::optional_override([](vtkTecplotTableReader& self, const std::string & arg_0) -> void {  return self.SetPedigreeIdArrayName( arg_0.c_str());}))
    .function("GetPedigreeIdArrayName", emscripten::optional_override([](vtkTecplotTableReader& self) -> std::string {  return self.GetPedigreeIdArrayName();}))
    .function("SetGeneratePedigreeIds", &vtkTecplotTableReader::SetGeneratePedigreeIds)
    .function("GetGeneratePedigreeIds", &vtkTecplotTableReader::GetGeneratePedigreeIds)
    .function("GeneratePedigreeIdsOn", &vtkTecplotTableReader::GeneratePedigreeIdsOn)
    .function("GeneratePedigreeIdsOff", &vtkTecplotTableReader::GeneratePedigreeIdsOff)
    .function("SetOutputPedigreeIds", &vtkTecplotTableReader::SetOutputPedigreeIds)
    .function("GetOutputPedigreeIds", &vtkTecplotTableReader::GetOutputPedigreeIds)
    .function("OutputPedigreeIdsOn", &vtkTecplotTableReader::OutputPedigreeIdsOn)
    .function("OutputPedigreeIdsOff", &vtkTecplotTableReader::OutputPedigreeIdsOff)
    .function("GetLastError", &vtkTecplotTableReader::GetLastError);
}
