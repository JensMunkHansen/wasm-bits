// JavaScript wrapper for vtkCMLMoleculeReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOChemistry.js/vtkIOChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOChemistry.js/vtkCMLMoleculeReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Chemistry/vtkCMLMoleculeReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMolecule.h"
#include "vtkCMLMoleculeReader.h"

template<> void emscripten::internal::raw_destructor<vtkCMLMoleculeReader>(vtkCMLMoleculeReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCMLMoleculeReader_class) {
  emscripten::class_<vtkCMLMoleculeReader, emscripten::base<vtkMoleculeAlgorithm>>("vtkCMLMoleculeReader")
    .smart_ptr<vtkSmartPointer<vtkCMLMoleculeReader>>("vtkSmartPointer<vtkCMLMoleculeReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCMLMoleculeReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCMLMoleculeReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCMLMoleculeReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCMLMoleculeReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCMLMoleculeReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCMLMoleculeReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCMLMoleculeReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", &vtkCMLMoleculeReader::GetOutput, emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkCMLMoleculeReader::SetOutput, emscripten::allow_raw_pointers())
    .function("SetFileName", emscripten::optional_override([](vtkCMLMoleculeReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkCMLMoleculeReader& self) -> std::string {  return self.GetFileName();}));
}
