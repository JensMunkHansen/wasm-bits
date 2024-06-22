// JavaScript wrapper for vtkHierarchicalBinningFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkHierarchicalBinningFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkHierarchicalBinningFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHierarchicalBinningFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkHierarchicalBinningFilter_0_1_constants) {
  emscripten::constant("VTK_MAX_LEVEL", 12);
}
template<> void emscripten::internal::raw_destructor<vtkHierarchicalBinningFilter>(vtkHierarchicalBinningFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHierarchicalBinningFilter_class) {
  emscripten::class_<vtkHierarchicalBinningFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkHierarchicalBinningFilter")
    .smart_ptr<vtkSmartPointer<vtkHierarchicalBinningFilter>>("vtkSmartPointer<vtkHierarchicalBinningFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHierarchicalBinningFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHierarchicalBinningFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHierarchicalBinningFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHierarchicalBinningFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHierarchicalBinningFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHierarchicalBinningFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHierarchicalBinningFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfLevels", &vtkHierarchicalBinningFilter::SetNumberOfLevels)
    .function("GetNumberOfLevelsMinValue", &vtkHierarchicalBinningFilter::GetNumberOfLevelsMinValue)
    .function("GetNumberOfLevelsMaxValue", &vtkHierarchicalBinningFilter::GetNumberOfLevelsMaxValue)
    .function("GetNumberOfLevels", &vtkHierarchicalBinningFilter::GetNumberOfLevels)
    .function("SetAutomatic", &vtkHierarchicalBinningFilter::SetAutomatic)
    .function("GetAutomatic", &vtkHierarchicalBinningFilter::GetAutomatic)
    .function("AutomaticOn", &vtkHierarchicalBinningFilter::AutomaticOn)
    .function("AutomaticOff", &vtkHierarchicalBinningFilter::AutomaticOff)
    .function("SetDivisions", emscripten::select_overload<void(vtkHierarchicalBinningFilter&, int, int, int)>([](vtkHierarchicalBinningFilter& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetDivisions( arg_0, arg_1, arg_2); }))
    .function("SetBounds", emscripten::select_overload<void(vtkHierarchicalBinningFilter&, double, double, double, double, double, double)>([](vtkHierarchicalBinningFilter& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetNumberOfGlobalBins", &vtkHierarchicalBinningFilter::GetNumberOfGlobalBins)
    .function("GetNumberOfBins", &vtkHierarchicalBinningFilter::GetNumberOfBins);
}
