// JavaScript wrapper for vtkEnSightGoldReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEnSight.js/vtkIOEnSight.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEnSight.js/vtkEnSightGoldReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/EnSight/vtkEnSightGoldReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkEnSightGoldReader.h"

template<> void emscripten::internal::raw_destructor<vtkEnSightGoldReader>(vtkEnSightGoldReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEnSightGoldReader_class) {
  emscripten::class_<vtkEnSightGoldReader, emscripten::base<vtkEnSightReader>>("vtkEnSightGoldReader")
    .smart_ptr<vtkSmartPointer<vtkEnSightGoldReader>>("vtkSmartPointer<vtkEnSightGoldReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkEnSightGoldReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnSightGoldReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEnSightGoldReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEnSightGoldReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEnSightGoldReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnSightGoldReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEnSightGoldReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
