// JavaScript wrapper for vtkUncertaintyTubeFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkUncertaintyTubeFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkUncertaintyTubeFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUncertaintyTubeFilter.h"

template<> void emscripten::internal::raw_destructor<vtkUncertaintyTubeFilter>(vtkUncertaintyTubeFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUncertaintyTubeFilter_class) {
  emscripten::class_<vtkUncertaintyTubeFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkUncertaintyTubeFilter")
    .smart_ptr<vtkSmartPointer<vtkUncertaintyTubeFilter>>("vtkSmartPointer<vtkUncertaintyTubeFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkUncertaintyTubeFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUncertaintyTubeFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUncertaintyTubeFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUncertaintyTubeFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUncertaintyTubeFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUncertaintyTubeFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUncertaintyTubeFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfSides", &vtkUncertaintyTubeFilter::SetNumberOfSides)
    .function("GetNumberOfSidesMinValue", &vtkUncertaintyTubeFilter::GetNumberOfSidesMinValue)
    .function("GetNumberOfSidesMaxValue", &vtkUncertaintyTubeFilter::GetNumberOfSidesMaxValue)
    .function("GetNumberOfSides", &vtkUncertaintyTubeFilter::GetNumberOfSides);
}
