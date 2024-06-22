// JavaScript wrapper for vtkEnSightSOSGoldReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEnSight.js/vtkIOEnSight.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEnSight.js/vtkEnSightSOSGoldReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/EnSight/vtkEnSightSOSGoldReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArraySelection.h"
#include "vtkEnSightSOSGoldReader.h"

template<> void emscripten::internal::raw_destructor<vtkEnSightSOSGoldReader>(vtkEnSightSOSGoldReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEnSightSOSGoldReader_class) {
  emscripten::class_<vtkEnSightSOSGoldReader, emscripten::base<vtkPartitionedDataSetCollectionAlgorithm>>("vtkEnSightSOSGoldReader")
    .smart_ptr<vtkSmartPointer<vtkEnSightSOSGoldReader>>("vtkSmartPointer<vtkEnSightSOSGoldReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkEnSightSOSGoldReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnSightSOSGoldReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEnSightSOSGoldReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEnSightSOSGoldReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEnSightSOSGoldReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnSightSOSGoldReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEnSightSOSGoldReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCaseFileName", emscripten::optional_override([](vtkEnSightSOSGoldReader& self) -> std::string {  return self.GetCaseFileName();}))
    .function("SetCaseFileName", emscripten::optional_override([](vtkEnSightSOSGoldReader& self, const std::string & arg_0) -> void {  return self.SetCaseFileName( arg_0.c_str());}))
    .function("CanReadFile", emscripten::optional_override([](vtkEnSightSOSGoldReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetPartSelection", &vtkEnSightSOSGoldReader::GetPartSelection, emscripten::allow_raw_pointers())
    .function("GetPointArraySelection", &vtkEnSightSOSGoldReader::GetPointArraySelection, emscripten::allow_raw_pointers())
    .function("GetCellArraySelection", &vtkEnSightSOSGoldReader::GetCellArraySelection, emscripten::allow_raw_pointers())
    .function("GetFieldArraySelection", &vtkEnSightSOSGoldReader::GetFieldArraySelection, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkEnSightSOSGoldReader::GetMTime);
}
