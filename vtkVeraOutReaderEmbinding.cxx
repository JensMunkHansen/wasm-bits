// JavaScript wrapper for vtkVeraOutReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOVeraOut.js/vtkIOVeraOut.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOVeraOut.js/vtkVeraOutReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/VeraOut/vtkVeraOutReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArraySelection.h"
#include "vtkVeraOutReader.h"

template<> void emscripten::internal::raw_destructor<vtkVeraOutReader>(vtkVeraOutReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVeraOutReader_class) {
  emscripten::class_<vtkVeraOutReader, emscripten::base<vtkRectilinearGridAlgorithm>>("vtkVeraOutReader")
    .smart_ptr<vtkSmartPointer<vtkVeraOutReader>>("vtkSmartPointer<vtkVeraOutReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkVeraOutReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVeraOutReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVeraOutReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVeraOutReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVeraOutReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVeraOutReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVeraOutReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkVeraOutReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkVeraOutReader& self) -> std::string {  return self.GetFileName();}))
    .function("GetCellDataArraySelection", &vtkVeraOutReader::GetCellDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetFieldDataArraySelection", &vtkVeraOutReader::GetFieldDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkVeraOutReader::GetMTime);
}
