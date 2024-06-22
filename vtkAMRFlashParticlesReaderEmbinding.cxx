// JavaScript wrapper for vtkAMRFlashParticlesReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkIOAMR.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkAMRFlashParticlesReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/AMR/vtkAMRFlashParticlesReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAMRFlashParticlesReader.h"

template<> void emscripten::internal::raw_destructor<vtkAMRFlashParticlesReader>(vtkAMRFlashParticlesReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAMRFlashParticlesReader_class) {
  emscripten::class_<vtkAMRFlashParticlesReader, emscripten::base<vtkAMRBaseParticlesReader>>("vtkAMRFlashParticlesReader")
    .smart_ptr<vtkSmartPointer<vtkAMRFlashParticlesReader>>("vtkSmartPointer<vtkAMRFlashParticlesReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAMRFlashParticlesReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRFlashParticlesReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAMRFlashParticlesReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAMRFlashParticlesReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAMRFlashParticlesReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRFlashParticlesReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAMRFlashParticlesReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetTotalNumberOfParticles", &vtkAMRFlashParticlesReader::GetTotalNumberOfParticles);
}
