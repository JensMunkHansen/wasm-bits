// JavaScript wrapper for vtkMoleculeToBondStickFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkDomainsChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkMoleculeToBondStickFilterEmbinding.cxx \
 /home/jmh/github/vtk/Domains/Chemistry/vtkMoleculeToBondStickFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMoleculeToBondStickFilter.h"

template<> void emscripten::internal::raw_destructor<vtkMoleculeToBondStickFilter>(vtkMoleculeToBondStickFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMoleculeToBondStickFilter_class) {
  emscripten::class_<vtkMoleculeToBondStickFilter, emscripten::base<vtkMoleculeToPolyDataFilter>>("vtkMoleculeToBondStickFilter")
    .smart_ptr<vtkSmartPointer<vtkMoleculeToBondStickFilter>>("vtkSmartPointer<vtkMoleculeToBondStickFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMoleculeToBondStickFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMoleculeToBondStickFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMoleculeToBondStickFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMoleculeToBondStickFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMoleculeToBondStickFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMoleculeToBondStickFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMoleculeToBondStickFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
