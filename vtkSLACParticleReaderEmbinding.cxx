// JavaScript wrapper for vtkSLACParticleReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIONetCDF.js/vtkIONetCDF.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIONetCDF.js/vtkSLACParticleReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/NetCDF/vtkSLACParticleReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSLACParticleReader.h"

template<> void emscripten::internal::raw_destructor<vtkSLACParticleReader>(vtkSLACParticleReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSLACParticleReader_class) {
  emscripten::class_<vtkSLACParticleReader, emscripten::base<vtkPolyDataAlgorithm>>("vtkSLACParticleReader")
    .smart_ptr<vtkSmartPointer<vtkSLACParticleReader>>("vtkSmartPointer<vtkSLACParticleReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSLACParticleReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSLACParticleReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSLACParticleReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSLACParticleReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSLACParticleReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSLACParticleReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSLACParticleReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkSLACParticleReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetFileName", emscripten::optional_override([](vtkSLACParticleReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .class_function("CanReadFile", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSLACParticleReader::CanReadFile( arg_0.c_str());}));
}