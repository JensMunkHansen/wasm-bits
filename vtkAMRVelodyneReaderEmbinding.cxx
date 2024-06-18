// JavaScript wrapper for vtkAMRVelodyneReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkIOAMR.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkAMRVelodyneReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/AMR/vtkAMRVelodyneReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOverlappingAMR.h"
#include "vtkAMRVelodyneReader.h"

template<> void emscripten::internal::raw_destructor<vtkAMRVelodyneReader>(vtkAMRVelodyneReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAMRVelodyneReader_class) {
  emscripten::class_<vtkAMRVelodyneReader, emscripten::base<vtkAMRBaseReader>>("vtkAMRVelodyneReader")
    .smart_ptr<vtkSmartPointer<vtkAMRVelodyneReader>>("vtkSmartPointer<vtkAMRVelodyneReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAMRVelodyneReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRVelodyneReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAMRVelodyneReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAMRVelodyneReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAMRVelodyneReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRVelodyneReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAMRVelodyneReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfBlocks", &vtkAMRVelodyneReader::GetNumberOfBlocks)
    .function("GetNumberOfLevels", &vtkAMRVelodyneReader::GetNumberOfLevels)
    .function("SetFileName", emscripten::optional_override([](vtkAMRVelodyneReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetOutput", &vtkAMRVelodyneReader::GetOutput, emscripten::allow_raw_pointers());
}
