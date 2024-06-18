// JavaScript wrapper for vtkSelector with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkSelectorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkSelector.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSelectionNode.h"
#include "vtkDataObject.h"
#include "vtkSelector.h"

EMSCRIPTEN_BINDINGS(vtkFiltersExtraction_vtkSelector_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkSelector>(vtkSelector * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSelector_class) {
  emscripten::class_<vtkSelector, emscripten::base<vtkObject>>("vtkSelector")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSelector::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSelector& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSelector::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSelector::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSelector::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSelector& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkSelector::Initialize, emscripten::allow_raw_pointers())
    .function("Finalize", &vtkSelector::Finalize)
    .function("Execute", &vtkSelector::Execute, emscripten::allow_raw_pointers())
    .function("SetInsidednessArrayName", &vtkSelector::SetInsidednessArrayName)
    .function("GetInsidednessArrayName", &vtkSelector::GetInsidednessArrayName);
}
