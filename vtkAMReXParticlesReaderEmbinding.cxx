// JavaScript wrapper for vtkAMReXParticlesReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkIOAMR.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkAMReXParticlesReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/AMR/vtkAMReXParticlesReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArraySelection.h"
#include "vtkMultiProcessController.h"
#include "vtkAMReXParticlesReader.h"

template<> void emscripten::internal::raw_destructor<vtkAMReXParticlesReader>(vtkAMReXParticlesReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAMReXParticlesReader_class) {
  emscripten::class_<vtkAMReXParticlesReader, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkAMReXParticlesReader")
    .smart_ptr<vtkSmartPointer<vtkAMReXParticlesReader>>("vtkSmartPointer<vtkAMReXParticlesReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAMReXParticlesReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMReXParticlesReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAMReXParticlesReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAMReXParticlesReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAMReXParticlesReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMReXParticlesReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAMReXParticlesReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPlotFileName", emscripten::optional_override([](vtkAMReXParticlesReader& self, const std::string & arg_0) -> void {  return self.SetPlotFileName( arg_0.c_str());}))
    .function("GetPlotFileName", emscripten::optional_override([](vtkAMReXParticlesReader& self) -> std::string {  return self.GetPlotFileName();}))
    .function("SetParticleType", &vtkAMReXParticlesReader::SetParticleType)
    .function("GetParticleType", &vtkAMReXParticlesReader::GetParticleType)
    .function("GetPointDataArraySelection", &vtkAMReXParticlesReader::GetPointDataArraySelection, emscripten::allow_raw_pointers())
    .class_function("CanReadFile", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1) -> int {  return vtkAMReXParticlesReader::CanReadFile( arg_0.c_str(), arg_1.c_str());}))
    .function("SetController", &vtkAMReXParticlesReader::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkAMReXParticlesReader::GetController, emscripten::allow_raw_pointers());
}
