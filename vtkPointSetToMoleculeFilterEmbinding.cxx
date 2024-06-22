// JavaScript wrapper for vtkPointSetToMoleculeFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkDomainsChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkPointSetToMoleculeFilterEmbinding.cxx \
 /home/jmh/github/vtk/Domains/Chemistry/vtkPointSetToMoleculeFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointSetToMoleculeFilter.h"

template<> void emscripten::internal::raw_destructor<vtkPointSetToMoleculeFilter>(vtkPointSetToMoleculeFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointSetToMoleculeFilter_class) {
  emscripten::class_<vtkPointSetToMoleculeFilter, emscripten::base<vtkMoleculeAlgorithm>>("vtkPointSetToMoleculeFilter")
    .smart_ptr<vtkSmartPointer<vtkPointSetToMoleculeFilter>>("vtkSmartPointer<vtkPointSetToMoleculeFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPointSetToMoleculeFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointSetToMoleculeFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointSetToMoleculeFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointSetToMoleculeFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointSetToMoleculeFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointSetToMoleculeFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointSetToMoleculeFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetConvertLinesIntoBonds", &vtkPointSetToMoleculeFilter::GetConvertLinesIntoBonds)
    .function("SetConvertLinesIntoBonds", &vtkPointSetToMoleculeFilter::SetConvertLinesIntoBonds)
    .function("ConvertLinesIntoBondsOn", &vtkPointSetToMoleculeFilter::ConvertLinesIntoBondsOn)
    .function("ConvertLinesIntoBondsOff", &vtkPointSetToMoleculeFilter::ConvertLinesIntoBondsOff);
}
