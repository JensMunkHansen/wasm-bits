// JavaScript wrapper for vtkMoleculeToLinesFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkDomainsChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkMoleculeToLinesFilterEmbinding.cxx \
 /home/jmh/github/vtk/Domains/Chemistry/vtkMoleculeToLinesFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMoleculeToLinesFilter.h"

template<> void emscripten::internal::raw_destructor<vtkMoleculeToLinesFilter>(vtkMoleculeToLinesFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMoleculeToLinesFilter_class) {
  emscripten::class_<vtkMoleculeToLinesFilter, emscripten::base<vtkMoleculeToPolyDataFilter>>("vtkMoleculeToLinesFilter")
    .smart_ptr<vtkSmartPointer<vtkMoleculeToLinesFilter>>("vtkSmartPointer<vtkMoleculeToLinesFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMoleculeToLinesFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMoleculeToLinesFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMoleculeToLinesFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMoleculeToLinesFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMoleculeToLinesFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMoleculeToLinesFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMoleculeToLinesFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
