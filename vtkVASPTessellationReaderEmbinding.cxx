// JavaScript wrapper for vtkVASPTessellationReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOChemistry.js/vtkIOChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOChemistry.js/vtkVASPTessellationReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Chemistry/vtkVASPTessellationReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVASPTessellationReader.h"

template<> void emscripten::internal::raw_destructor<vtkVASPTessellationReader>(vtkVASPTessellationReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVASPTessellationReader_class) {
  emscripten::class_<vtkVASPTessellationReader, emscripten::base<vtkMoleculeAlgorithm>>("vtkVASPTessellationReader")
    .smart_ptr<vtkSmartPointer<vtkVASPTessellationReader>>("vtkSmartPointer<vtkVASPTessellationReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVASPTessellationReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVASPTessellationReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVASPTessellationReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVASPTessellationReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVASPTessellationReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVASPTessellationReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVASPTessellationReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkVASPTessellationReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkVASPTessellationReader& self) -> std::string {  return self.GetFileName();}));
}
