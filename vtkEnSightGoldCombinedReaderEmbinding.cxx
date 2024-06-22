// JavaScript wrapper for vtkEnSightGoldCombinedReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEnSight.js/vtkIOEnSight.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEnSight.js/vtkEnSightGoldCombinedReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/EnSight/vtkEnSightGoldCombinedReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDoubleArray.h"
#include "vtkDataArraySelection.h"
#include "vtkEnSightGoldCombinedReader.h"

template<> void emscripten::internal::raw_destructor<vtkEnSightGoldCombinedReader>(vtkEnSightGoldCombinedReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEnSightGoldCombinedReader_class) {
  emscripten::class_<vtkEnSightGoldCombinedReader, emscripten::base<vtkPartitionedDataSetCollectionAlgorithm>>("vtkEnSightGoldCombinedReader")
    .smart_ptr<vtkSmartPointer<vtkEnSightGoldCombinedReader>>("vtkSmartPointer<vtkEnSightGoldCombinedReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkEnSightGoldCombinedReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnSightGoldCombinedReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEnSightGoldCombinedReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEnSightGoldCombinedReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEnSightGoldCombinedReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnSightGoldCombinedReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEnSightGoldCombinedReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCaseFileName", emscripten::optional_override([](vtkEnSightGoldCombinedReader& self, const std::string & arg_0) -> void {  return self.SetCaseFileName( arg_0.c_str());}))
    .function("GetCaseFileName", emscripten::optional_override([](vtkEnSightGoldCombinedReader& self) -> std::string {  return self.GetCaseFileName();}))
    .function("SetFilePath", emscripten::optional_override([](vtkEnSightGoldCombinedReader& self, const std::string & arg_0) -> void {  return self.SetFilePath( arg_0.c_str());}))
    .function("GetFilePath", emscripten::optional_override([](vtkEnSightGoldCombinedReader& self) -> std::string {  return self.GetFilePath();}))
    .function("GetAllTimeSteps", &vtkEnSightGoldCombinedReader::GetAllTimeSteps, emscripten::allow_raw_pointers())
    .function("SetTimeValue", &vtkEnSightGoldCombinedReader::SetTimeValue)
    .function("GetTimeValue", &vtkEnSightGoldCombinedReader::GetTimeValue)
    .function("CanReadFile", emscripten::optional_override([](vtkEnSightGoldCombinedReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetPartSelection", &vtkEnSightGoldCombinedReader::GetPartSelection, emscripten::allow_raw_pointers())
    .function("GetPointArraySelection", &vtkEnSightGoldCombinedReader::GetPointArraySelection, emscripten::allow_raw_pointers())
    .function("GetCellArraySelection", &vtkEnSightGoldCombinedReader::GetCellArraySelection, emscripten::allow_raw_pointers())
    .function("GetFieldArraySelection", &vtkEnSightGoldCombinedReader::GetFieldArraySelection, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkEnSightGoldCombinedReader::GetMTime);
}
