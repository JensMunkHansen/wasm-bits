// JavaScript wrapper for vtkEnSightGoldBinaryReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEnSight.js/vtkIOEnSight.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEnSight.js/vtkEnSightGoldBinaryReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/EnSight/vtkEnSightGoldBinaryReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkEnSightGoldBinaryReader.h"

template<> void emscripten::internal::raw_destructor<vtkEnSightGoldBinaryReader>(vtkEnSightGoldBinaryReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEnSightGoldBinaryReader_class) {
  emscripten::class_<vtkEnSightGoldBinaryReader, emscripten::base<vtkEnSightReader>>("vtkEnSightGoldBinaryReader")
    .smart_ptr<vtkSmartPointer<vtkEnSightGoldBinaryReader>>("vtkSmartPointer<vtkEnSightGoldBinaryReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkEnSightGoldBinaryReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnSightGoldBinaryReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEnSightGoldBinaryReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEnSightGoldBinaryReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEnSightGoldBinaryReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnSightGoldBinaryReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEnSightGoldBinaryReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
