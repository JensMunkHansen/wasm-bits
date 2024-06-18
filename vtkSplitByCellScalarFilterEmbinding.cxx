// JavaScript wrapper for vtkSplitByCellScalarFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkSplitByCellScalarFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkSplitByCellScalarFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSplitByCellScalarFilter.h"

template<> void emscripten::internal::raw_destructor<vtkSplitByCellScalarFilter>(vtkSplitByCellScalarFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSplitByCellScalarFilter_class) {
  emscripten::class_<vtkSplitByCellScalarFilter, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkSplitByCellScalarFilter")
    .smart_ptr<vtkSmartPointer<vtkSplitByCellScalarFilter>>("vtkSmartPointer<vtkSplitByCellScalarFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSplitByCellScalarFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSplitByCellScalarFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSplitByCellScalarFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSplitByCellScalarFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSplitByCellScalarFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSplitByCellScalarFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSplitByCellScalarFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPassAllPoints", &vtkSplitByCellScalarFilter::GetPassAllPoints)
    .function("SetPassAllPoints", &vtkSplitByCellScalarFilter::SetPassAllPoints)
    .function("PassAllPointsOn", &vtkSplitByCellScalarFilter::PassAllPointsOn)
    .function("PassAllPointsOff", &vtkSplitByCellScalarFilter::PassAllPointsOff);
}
