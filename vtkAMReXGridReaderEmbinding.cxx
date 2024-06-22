// JavaScript wrapper for vtkAMReXGridReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkIOAMR.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkAMReXGridReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/AMR/vtkAMReXGridReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAMReXGridReader.h"

template<> void emscripten::internal::raw_destructor<vtkAMReXGridReader>(vtkAMReXGridReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAMReXGridReader_class) {
  emscripten::class_<vtkAMReXGridReader, emscripten::base<vtkAMRBaseReader>>("vtkAMReXGridReader")
    .smart_ptr<vtkSmartPointer<vtkAMReXGridReader>>("vtkSmartPointer<vtkAMReXGridReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAMReXGridReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMReXGridReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAMReXGridReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAMReXGridReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAMReXGridReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMReXGridReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAMReXGridReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfBlocks", &vtkAMReXGridReader::GetNumberOfBlocks)
    .function("GetNumberOfLevels", &vtkAMReXGridReader::GetNumberOfLevels)
    .function("SetFileName", emscripten::optional_override([](vtkAMReXGridReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}));
}
