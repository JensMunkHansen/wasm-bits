// JavaScript wrapper for vtkPDataSetReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallel.js/vtkIOParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallel.js/vtkPDataSetReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Parallel/vtkPDataSetReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkPDataSetReader.h"

template<> void emscripten::internal::raw_destructor<vtkPDataSetReader>(vtkPDataSetReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPDataSetReader_class) {
  emscripten::class_<vtkPDataSetReader, emscripten::base<vtkDataSetAlgorithm>>("vtkPDataSetReader")
    .smart_ptr<vtkSmartPointer<vtkPDataSetReader>>("vtkSmartPointer<vtkPDataSetReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPDataSetReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPDataSetReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPDataSetReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPDataSetReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPDataSetReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPDataSetReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPDataSetReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkPDataSetReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkPDataSetReader& self) -> std::string {  return self.GetFileName();}))
    .function("GetDataType", &vtkPDataSetReader::GetDataType)
    .function("CanReadFile", emscripten::optional_override([](vtkPDataSetReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}));
}
