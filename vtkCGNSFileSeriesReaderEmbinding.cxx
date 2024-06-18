// JavaScript wrapper for vtkCGNSFileSeriesReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCGNSReader.js/vtkIOCGNSReader.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCGNSReader.js/vtkCGNSFileSeriesReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/CGNS/vtkCGNSFileSeriesReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkCGNSReader.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkCGNSFileSeriesReader.h"

template<> void emscripten::internal::raw_destructor<vtkCGNSFileSeriesReader>(vtkCGNSFileSeriesReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCGNSFileSeriesReader_class) {
  emscripten::class_<vtkCGNSFileSeriesReader, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkCGNSFileSeriesReader")
    .smart_ptr<vtkSmartPointer<vtkCGNSFileSeriesReader>>("vtkSmartPointer<vtkCGNSFileSeriesReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCGNSFileSeriesReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCGNSFileSeriesReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCGNSFileSeriesReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCGNSFileSeriesReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCGNSFileSeriesReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCGNSFileSeriesReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCGNSFileSeriesReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkCGNSFileSeriesReader::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkCGNSFileSeriesReader::GetController, emscripten::allow_raw_pointers())
    .function("SetReader", &vtkCGNSFileSeriesReader::SetReader, emscripten::allow_raw_pointers())
    .function("GetReader", &vtkCGNSFileSeriesReader::GetReader, emscripten::allow_raw_pointers())
    .function("CanReadFile", emscripten::optional_override([](vtkCGNSFileSeriesReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("AddFileName", emscripten::optional_override([](vtkCGNSFileSeriesReader& self, const std::string & arg_0) -> void {  return self.AddFileName( arg_0.c_str());}))
    .function("RemoveAllFileNames", &vtkCGNSFileSeriesReader::RemoveAllFileNames)
    .function("GetIgnoreReaderTime", &vtkCGNSFileSeriesReader::GetIgnoreReaderTime)
    .function("SetIgnoreReaderTime", &vtkCGNSFileSeriesReader::SetIgnoreReaderTime)
    .function("IgnoreReaderTimeOn", &vtkCGNSFileSeriesReader::IgnoreReaderTimeOn)
    .function("IgnoreReaderTimeOff", &vtkCGNSFileSeriesReader::IgnoreReaderTimeOff)
    .function("GetCurrentFileName", emscripten::optional_override([](vtkCGNSFileSeriesReader& self) -> std::string {  return self.GetCurrentFileName();}));
}
