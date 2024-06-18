// JavaScript wrapper for vtkAMRFlashReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkIOAMR.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkAMRFlashReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/AMR/vtkAMRFlashReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAMRFlashReader.h"

template<> void emscripten::internal::raw_destructor<vtkAMRFlashReader>(vtkAMRFlashReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAMRFlashReader_class) {
  emscripten::class_<vtkAMRFlashReader, emscripten::base<vtkAMRBaseReader>>("vtkAMRFlashReader")
    .smart_ptr<vtkSmartPointer<vtkAMRFlashReader>>("vtkSmartPointer<vtkAMRFlashReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAMRFlashReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRFlashReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAMRFlashReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAMRFlashReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAMRFlashReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRFlashReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAMRFlashReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfBlocks", &vtkAMRFlashReader::GetNumberOfBlocks)
    .function("GetNumberOfLevels", &vtkAMRFlashReader::GetNumberOfLevels)
    .function("SetFileName", emscripten::optional_override([](vtkAMRFlashReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}));
}
