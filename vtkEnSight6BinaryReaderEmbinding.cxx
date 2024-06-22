// JavaScript wrapper for vtkEnSight6BinaryReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEnSight.js/vtkIOEnSight.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEnSight.js/vtkEnSight6BinaryReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/EnSight/vtkEnSight6BinaryReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkEnSight6BinaryReader.h"

template<> void emscripten::internal::raw_destructor<vtkEnSight6BinaryReader>(vtkEnSight6BinaryReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEnSight6BinaryReader_class) {
  emscripten::class_<vtkEnSight6BinaryReader, emscripten::base<vtkEnSightReader>>("vtkEnSight6BinaryReader")
    .smart_ptr<vtkSmartPointer<vtkEnSight6BinaryReader>>("vtkSmartPointer<vtkEnSight6BinaryReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkEnSight6BinaryReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnSight6BinaryReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEnSight6BinaryReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEnSight6BinaryReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEnSight6BinaryReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnSight6BinaryReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEnSight6BinaryReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
