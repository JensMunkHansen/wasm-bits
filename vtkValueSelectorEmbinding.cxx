// JavaScript wrapper for vtkValueSelector with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkValueSelectorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkValueSelector.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSelectionNode.h"
#include "vtkValueSelector.h"

template<> void emscripten::internal::raw_destructor<vtkValueSelector>(vtkValueSelector * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkValueSelector_class) {
  emscripten::class_<vtkValueSelector, emscripten::base<vtkSelector>>("vtkValueSelector")
    .smart_ptr<vtkSmartPointer<vtkValueSelector>>("vtkSmartPointer<vtkValueSelector>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkValueSelector>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkValueSelector::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkValueSelector& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkValueSelector::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkValueSelector::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkValueSelector::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkValueSelector& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkValueSelector::Initialize, emscripten::allow_raw_pointers())
    .function("Finalize", &vtkValueSelector::Finalize);
}
