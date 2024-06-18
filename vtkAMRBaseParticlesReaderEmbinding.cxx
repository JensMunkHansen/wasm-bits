// JavaScript wrapper for vtkAMRBaseParticlesReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkIOAMR.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkAMRBaseParticlesReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/AMR/vtkAMRBaseParticlesReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkDataArraySelection.h"
#include "vtkAMRBaseParticlesReader.h"

template<> void emscripten::internal::raw_destructor<vtkAMRBaseParticlesReader>(vtkAMRBaseParticlesReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAMRBaseParticlesReader_class) {
  emscripten::class_<vtkAMRBaseParticlesReader, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkAMRBaseParticlesReader")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRBaseParticlesReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAMRBaseParticlesReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAMRBaseParticlesReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAMRBaseParticlesReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRBaseParticlesReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAMRBaseParticlesReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFrequency", &vtkAMRBaseParticlesReader::GetFrequency)
    .function("SetFrequency", &vtkAMRBaseParticlesReader::SetFrequency)
    .function("GetController", &vtkAMRBaseParticlesReader::GetController, emscripten::allow_raw_pointers())
    .function("SetController", &vtkAMRBaseParticlesReader::SetController, emscripten::allow_raw_pointers())
    .function("SetFilterLocation", &vtkAMRBaseParticlesReader::SetFilterLocation)
    .function("GetFilterLocation", &vtkAMRBaseParticlesReader::GetFilterLocation)
    .function("FilterLocationOn", &vtkAMRBaseParticlesReader::FilterLocationOn)
    .function("FilterLocationOff", &vtkAMRBaseParticlesReader::FilterLocationOff)
    .function("GetParticleDataArraySelection", &vtkAMRBaseParticlesReader::GetParticleDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetNumberOfParticleArrays", &vtkAMRBaseParticlesReader::GetNumberOfParticleArrays)
    .function("GetParticleArrayName", emscripten::optional_override([](vtkAMRBaseParticlesReader& self, int arg_0) -> std::string {  return self.GetParticleArrayName( arg_0);}))
    .function("GetParticleArrayStatus", emscripten::optional_override([](vtkAMRBaseParticlesReader& self, const std::string & arg_0) -> int {  return self.GetParticleArrayStatus( arg_0.c_str());}))
    .function("SetParticleArrayStatus", emscripten::optional_override([](vtkAMRBaseParticlesReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetParticleArrayStatus( arg_0.c_str(), arg_1);}))
    .function("SetFileName", emscripten::optional_override([](vtkAMRBaseParticlesReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkAMRBaseParticlesReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetMinLocation", &vtkAMRBaseParticlesReader::SetMinLocation)
    .function("SetMaxLocation", &vtkAMRBaseParticlesReader::SetMaxLocation);
}
