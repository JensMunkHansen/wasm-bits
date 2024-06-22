// JavaScript wrapper for vtkFLUENTCFFReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOFLUENTCFF.js/vtkIOFLUENTCFF.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOFLUENTCFF.js/vtkFLUENTCFFReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/FLUENTCFF/vtkFLUENTCFFReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFLUENTCFFReader.h"

EMSCRIPTEN_BINDINGS(vtkIOFLUENTCFF_vtkFLUENTCFFReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkFLUENTCFFReader>(vtkFLUENTCFFReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFLUENTCFFReader_class) {
  emscripten::class_<vtkFLUENTCFFReader, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkFLUENTCFFReader")
    .smart_ptr<vtkSmartPointer<vtkFLUENTCFFReader>>("vtkSmartPointer<vtkFLUENTCFFReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFLUENTCFFReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFLUENTCFFReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFLUENTCFFReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFLUENTCFFReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFLUENTCFFReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFLUENTCFFReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFLUENTCFFReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", &vtkFLUENTCFFReader::SetFileName)
    .function("GetFileName", &vtkFLUENTCFFReader::GetFileName)
    .function("GetNumberOfCells", &vtkFLUENTCFFReader::GetNumberOfCells)
    .function("GetNumberOfCellArrays", &vtkFLUENTCFFReader::GetNumberOfCellArrays)
    .function("GetCellArrayName", emscripten::optional_override([](vtkFLUENTCFFReader& self, int arg_0) -> std::string {  return self.GetCellArrayName( arg_0);}))
    .function("GetCellArrayStatus", emscripten::optional_override([](vtkFLUENTCFFReader& self, const std::string & arg_0) -> int {  return self.GetCellArrayStatus( arg_0.c_str());}))
    .function("SetCellArrayStatus", emscripten::optional_override([](vtkFLUENTCFFReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetCellArrayStatus( arg_0.c_str(), arg_1);}))
    .function("DisableAllCellArrays", &vtkFLUENTCFFReader::DisableAllCellArrays)
    .function("EnableAllCellArrays", &vtkFLUENTCFFReader::EnableAllCellArrays);
}
