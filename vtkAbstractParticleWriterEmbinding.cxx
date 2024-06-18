// JavaScript wrapper for vtkAbstractParticleWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkAbstractParticleWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkAbstractParticleWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractParticleWriter.h"

template<> void emscripten::internal::raw_destructor<vtkAbstractParticleWriter>(vtkAbstractParticleWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractParticleWriter_class) {
  emscripten::class_<vtkAbstractParticleWriter, emscripten::base<vtkWriter>>("vtkAbstractParticleWriter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractParticleWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractParticleWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractParticleWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractParticleWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractParticleWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractParticleWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTimeStep", &vtkAbstractParticleWriter::SetTimeStep)
    .function("GetTimeStep", &vtkAbstractParticleWriter::GetTimeStep)
    .function("SetTimeValue", &vtkAbstractParticleWriter::SetTimeValue)
    .function("GetTimeValue", &vtkAbstractParticleWriter::GetTimeValue)
    .function("SetFileName", emscripten::optional_override([](vtkAbstractParticleWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkAbstractParticleWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetCollectiveIO", &vtkAbstractParticleWriter::SetCollectiveIO)
    .function("GetCollectiveIO", &vtkAbstractParticleWriter::GetCollectiveIO)
    .function("SetWriteModeToCollective", &vtkAbstractParticleWriter::SetWriteModeToCollective)
    .function("SetWriteModeToIndependent", &vtkAbstractParticleWriter::SetWriteModeToIndependent);
}
