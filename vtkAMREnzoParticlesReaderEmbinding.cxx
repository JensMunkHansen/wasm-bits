// JavaScript wrapper for vtkAMREnzoParticlesReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkIOAMR.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkAMREnzoParticlesReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/AMR/vtkAMREnzoParticlesReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAMREnzoParticlesReader.h"

template<> void emscripten::internal::raw_destructor<vtkAMREnzoParticlesReader>(vtkAMREnzoParticlesReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAMREnzoParticlesReader_class) {
  emscripten::class_<vtkAMREnzoParticlesReader, emscripten::base<vtkAMRBaseParticlesReader>>("vtkAMREnzoParticlesReader")
    .smart_ptr<vtkSmartPointer<vtkAMREnzoParticlesReader>>("vtkSmartPointer<vtkAMREnzoParticlesReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAMREnzoParticlesReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMREnzoParticlesReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAMREnzoParticlesReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAMREnzoParticlesReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAMREnzoParticlesReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMREnzoParticlesReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAMREnzoParticlesReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetParticleType", &vtkAMREnzoParticlesReader::SetParticleType)
    .function("GetParticleType", &vtkAMREnzoParticlesReader::GetParticleType)
    .function("GetTotalNumberOfParticles", &vtkAMREnzoParticlesReader::GetTotalNumberOfParticles);
}
