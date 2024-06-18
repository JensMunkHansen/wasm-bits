// JavaScript wrapper for vtkVASPAnimationReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOChemistry.js/vtkIOChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOChemistry.js/vtkVASPAnimationReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Chemistry/vtkVASPAnimationReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVASPAnimationReader.h"

template<> void emscripten::internal::raw_destructor<vtkVASPAnimationReader>(vtkVASPAnimationReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVASPAnimationReader_class) {
  emscripten::class_<vtkVASPAnimationReader, emscripten::base<vtkMoleculeAlgorithm>>("vtkVASPAnimationReader")
    .smart_ptr<vtkSmartPointer<vtkVASPAnimationReader>>("vtkSmartPointer<vtkVASPAnimationReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkVASPAnimationReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVASPAnimationReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVASPAnimationReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVASPAnimationReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVASPAnimationReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVASPAnimationReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVASPAnimationReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkVASPAnimationReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkVASPAnimationReader& self) -> std::string {  return self.GetFileName();}));
}
