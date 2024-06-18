// JavaScript wrapper for vtkMoleculeToPolyDataFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkDomainsChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkMoleculeToPolyDataFilterEmbinding.cxx \
 /home/jmh/github/vtk/Domains/Chemistry/vtkMoleculeToPolyDataFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMolecule.h"
#include "vtkMoleculeToPolyDataFilter.h"

template<> void emscripten::internal::raw_destructor<vtkMoleculeToPolyDataFilter>(vtkMoleculeToPolyDataFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMoleculeToPolyDataFilter_class) {
  emscripten::class_<vtkMoleculeToPolyDataFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkMoleculeToPolyDataFilter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMoleculeToPolyDataFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMoleculeToPolyDataFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMoleculeToPolyDataFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMoleculeToPolyDataFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMoleculeToPolyDataFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMoleculeToPolyDataFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", &vtkMoleculeToPolyDataFilter::GetInput, emscripten::allow_raw_pointers());
}
