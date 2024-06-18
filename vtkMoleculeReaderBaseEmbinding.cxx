// JavaScript wrapper for vtkMoleculeReaderBase with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOChemistry.js/vtkIOChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOChemistry.js/vtkMoleculeReaderBaseEmbinding.cxx \
 /home/jmh/github/vtk/IO/Chemistry/vtkMoleculeReaderBase.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMoleculeReaderBase.h"

template<> void emscripten::internal::raw_destructor<vtkMoleculeReaderBase>(vtkMoleculeReaderBase * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMoleculeReaderBase_class) {
  emscripten::class_<vtkMoleculeReaderBase, emscripten::base<vtkPolyDataAlgorithm>>("vtkMoleculeReaderBase")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMoleculeReaderBase::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMoleculeReaderBase& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMoleculeReaderBase::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMoleculeReaderBase::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMoleculeReaderBase::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMoleculeReaderBase& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkMoleculeReaderBase& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkMoleculeReaderBase& self) -> std::string {  return self.GetFileName();}))
    .function("SetBScale", &vtkMoleculeReaderBase::SetBScale)
    .function("GetBScale", &vtkMoleculeReaderBase::GetBScale)
    .function("SetHBScale", &vtkMoleculeReaderBase::SetHBScale)
    .function("GetHBScale", &vtkMoleculeReaderBase::GetHBScale)
    .function("GetNumberOfAtoms", &vtkMoleculeReaderBase::GetNumberOfAtoms)
    .function("GetNumberOfModels", &vtkMoleculeReaderBase::GetNumberOfModels);
}
