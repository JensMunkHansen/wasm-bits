// JavaScript wrapper for vtkOutlineFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkOutlineFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkOutlineFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOutlineFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkOutlineFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkOutlineFilter>(vtkOutlineFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOutlineFilter_class) {
  using CompositeOutlineStyle=vtkOutlineFilter::CompositeOutlineStyle;
  emscripten::class_<vtkOutlineFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkOutlineFilter")
    .smart_ptr<vtkSmartPointer<vtkOutlineFilter>>("vtkSmartPointer<vtkOutlineFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOutlineFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOutlineFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOutlineFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOutlineFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOutlineFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOutlineFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOutlineFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGenerateFaces", &vtkOutlineFilter::SetGenerateFaces)
    .function("GenerateFacesOn", &vtkOutlineFilter::GenerateFacesOn)
    .function("GenerateFacesOff", &vtkOutlineFilter::GenerateFacesOff)
    .function("GetGenerateFaces", &vtkOutlineFilter::GetGenerateFaces)
    .function("SetCompositeStyle", &vtkOutlineFilter::SetCompositeStyle)
    .function("GetCompositeStyle", &vtkOutlineFilter::GetCompositeStyle)
    .function("SetCompositeStyleToRoot", &vtkOutlineFilter::SetCompositeStyleToRoot)
    .function("SetCompositeStyleToLeafs", &vtkOutlineFilter::SetCompositeStyleToLeafs)
    .function("SetCompositeStyleToRootAndLeafs", &vtkOutlineFilter::SetCompositeStyleToRootAndLeafs)
    .function("SetCompositeStyleToSpecifiedIndex", &vtkOutlineFilter::SetCompositeStyleToSpecifiedIndex)
    .function("AddIndex", &vtkOutlineFilter::AddIndex)
    .function("RemoveIndex", &vtkOutlineFilter::RemoveIndex)
    .function("RemoveAllIndices", &vtkOutlineFilter::RemoveAllIndices)
    .function("SetOutputPointsPrecision", &vtkOutlineFilter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkOutlineFilter::GetOutputPointsPrecision);
}
EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkOutlineFilter_0_2_constants) {
    typedef vtkOutlineFilter::CompositeOutlineStyle cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkOutlineFilter_CompositeOutlineStyle_ROOT_LEVEL", vtkOutlineFilter::ROOT_LEVEL },
      { "vtkOutlineFilter_CompositeOutlineStyle_LEAF_DATASETS", vtkOutlineFilter::LEAF_DATASETS },
      { "vtkOutlineFilter_CompositeOutlineStyle_ROOT_AND_LEAFS", vtkOutlineFilter::ROOT_AND_LEAFS },
      { "vtkOutlineFilter_CompositeOutlineStyle_SPECIFIED_INDEX", vtkOutlineFilter::SPECIFIED_INDEX },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
