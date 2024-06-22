// JavaScript wrapper for vtkHyperTreeGridOutlineFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkHyperTreeGridOutlineFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkHyperTreeGridOutlineFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridOutlineFilter.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridOutlineFilter>(vtkHyperTreeGridOutlineFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridOutlineFilter_class) {
  emscripten::class_<vtkHyperTreeGridOutlineFilter, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkHyperTreeGridOutlineFilter")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridOutlineFilter>>("vtkSmartPointer<vtkHyperTreeGridOutlineFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHyperTreeGridOutlineFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridOutlineFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridOutlineFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridOutlineFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridOutlineFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridOutlineFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridOutlineFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGenerateFaces", &vtkHyperTreeGridOutlineFilter::SetGenerateFaces)
    .function("GenerateFacesOn", &vtkHyperTreeGridOutlineFilter::GenerateFacesOn)
    .function("GenerateFacesOff", &vtkHyperTreeGridOutlineFilter::GenerateFacesOff)
    .function("GetGenerateFaces", &vtkHyperTreeGridOutlineFilter::GetGenerateFaces);
}
