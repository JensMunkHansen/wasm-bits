// JavaScript wrapper for vtkLocationSelector with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkLocationSelectorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkLocationSelector.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSelectionNode.h"
#include "vtkLocationSelector.h"

template<> void emscripten::internal::raw_destructor<vtkLocationSelector>(vtkLocationSelector * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLocationSelector_class) {
  emscripten::class_<vtkLocationSelector, emscripten::base<vtkSelector>>("vtkLocationSelector")
    .smart_ptr<vtkSmartPointer<vtkLocationSelector>>("vtkSmartPointer<vtkLocationSelector>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLocationSelector>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLocationSelector::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLocationSelector& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLocationSelector::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLocationSelector::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLocationSelector::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLocationSelector& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkLocationSelector::Initialize, emscripten::allow_raw_pointers())
    .function("Finalize", &vtkLocationSelector::Finalize);
}
