// JavaScript wrapper for vtkAMRBaseReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkIOAMR.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkAMRBaseReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/AMR/vtkAMRBaseReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkDataArraySelection.h"
#include "vtkAMRBaseReader.h"

template<> void emscripten::internal::raw_destructor<vtkAMRBaseReader>(vtkAMRBaseReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAMRBaseReader_class) {
  emscripten::class_<vtkAMRBaseReader, emscripten::base<vtkOverlappingAMRAlgorithm>>("vtkAMRBaseReader")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRBaseReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAMRBaseReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAMRBaseReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAMRBaseReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRBaseReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAMRBaseReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkAMRBaseReader::Initialize)
    .function("SetEnableCaching", &vtkAMRBaseReader::SetEnableCaching)
    .function("GetEnableCaching", &vtkAMRBaseReader::GetEnableCaching)
    .function("EnableCachingOn", &vtkAMRBaseReader::EnableCachingOn)
    .function("EnableCachingOff", &vtkAMRBaseReader::EnableCachingOff)
    .function("IsCachingEnabled", &vtkAMRBaseReader::IsCachingEnabled)
    .function("SetController", &vtkAMRBaseReader::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkAMRBaseReader::GetController, emscripten::allow_raw_pointers())
    .function("SetMaxLevel", &vtkAMRBaseReader::SetMaxLevel)
    .function("GetCellDataArraySelection", &vtkAMRBaseReader::GetCellDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetPointDataArraySelection", &vtkAMRBaseReader::GetPointDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetNumberOfPointArrays", &vtkAMRBaseReader::GetNumberOfPointArrays)
    .function("GetNumberOfCellArrays", &vtkAMRBaseReader::GetNumberOfCellArrays)
    .function("GetPointArrayName", emscripten::optional_override([](vtkAMRBaseReader& self, int arg_0) -> std::string {  return self.GetPointArrayName( arg_0);}))
    .function("GetCellArrayName", emscripten::optional_override([](vtkAMRBaseReader& self, int arg_0) -> std::string {  return self.GetCellArrayName( arg_0);}))
    .function("GetPointArrayStatus", emscripten::optional_override([](vtkAMRBaseReader& self, const std::string & arg_0) -> int {  return self.GetPointArrayStatus( arg_0.c_str());}))
    .function("GetCellArrayStatus", emscripten::optional_override([](vtkAMRBaseReader& self, const std::string & arg_0) -> int {  return self.GetCellArrayStatus( arg_0.c_str());}))
    .function("SetPointArrayStatus", emscripten::optional_override([](vtkAMRBaseReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetPointArrayStatus( arg_0.c_str(), arg_1);}))
    .function("SetCellArrayStatus", emscripten::optional_override([](vtkAMRBaseReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetCellArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetFileName", emscripten::optional_override([](vtkAMRBaseReader& self) -> std::string {  return self.GetFileName();}));
}
