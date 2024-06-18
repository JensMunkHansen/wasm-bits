// JavaScript wrapper for vtkSimplePointsReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkSimplePointsReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkSimplePointsReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSimplePointsReader.h"

template<> void emscripten::internal::raw_destructor<vtkSimplePointsReader>(vtkSimplePointsReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSimplePointsReader_class) {
  emscripten::class_<vtkSimplePointsReader, emscripten::base<vtkPolyDataAlgorithm>>("vtkSimplePointsReader")
    .smart_ptr<vtkSmartPointer<vtkSimplePointsReader>>("vtkSmartPointer<vtkSimplePointsReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSimplePointsReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimplePointsReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSimplePointsReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSimplePointsReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSimplePointsReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimplePointsReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSimplePointsReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkSimplePointsReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkSimplePointsReader& self) -> std::string {  return self.GetFileName();}));
}
