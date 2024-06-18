// JavaScript wrapper for vtkAbstractPolyDataReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkAbstractPolyDataReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkAbstractPolyDataReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractPolyDataReader.h"

template<> void emscripten::internal::raw_destructor<vtkAbstractPolyDataReader>(vtkAbstractPolyDataReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractPolyDataReader_class) {
  emscripten::class_<vtkAbstractPolyDataReader, emscripten::base<vtkPolyDataAlgorithm>>("vtkAbstractPolyDataReader")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractPolyDataReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractPolyDataReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractPolyDataReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractPolyDataReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractPolyDataReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractPolyDataReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkAbstractPolyDataReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkAbstractPolyDataReader& self) -> std::string {  return self.GetFileName();}));
}
