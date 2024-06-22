// JavaScript wrapper for vtkGraphLayoutFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkGraphLayoutFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkGraphLayoutFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraphLayoutFilter.h"

template<> void emscripten::internal::raw_destructor<vtkGraphLayoutFilter>(vtkGraphLayoutFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGraphLayoutFilter_class) {
  emscripten::class_<vtkGraphLayoutFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkGraphLayoutFilter")
    .smart_ptr<vtkSmartPointer<vtkGraphLayoutFilter>>("vtkSmartPointer<vtkGraphLayoutFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGraphLayoutFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphLayoutFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGraphLayoutFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGraphLayoutFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGraphLayoutFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphLayoutFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGraphLayoutFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGraphBounds", emscripten::select_overload<void(vtkGraphLayoutFilter&, double, double, double, double, double, double)>([](vtkGraphLayoutFilter& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetGraphBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetAutomaticBoundsComputation", &vtkGraphLayoutFilter::SetAutomaticBoundsComputation)
    .function("GetAutomaticBoundsComputation", &vtkGraphLayoutFilter::GetAutomaticBoundsComputation)
    .function("AutomaticBoundsComputationOn", &vtkGraphLayoutFilter::AutomaticBoundsComputationOn)
    .function("AutomaticBoundsComputationOff", &vtkGraphLayoutFilter::AutomaticBoundsComputationOff)
    .function("SetMaxNumberOfIterations", &vtkGraphLayoutFilter::SetMaxNumberOfIterations)
    .function("GetMaxNumberOfIterationsMinValue", &vtkGraphLayoutFilter::GetMaxNumberOfIterationsMinValue)
    .function("GetMaxNumberOfIterationsMaxValue", &vtkGraphLayoutFilter::GetMaxNumberOfIterationsMaxValue)
    .function("GetMaxNumberOfIterations", &vtkGraphLayoutFilter::GetMaxNumberOfIterations)
    .function("SetCoolDownRate", &vtkGraphLayoutFilter::SetCoolDownRate)
    .function("GetCoolDownRateMinValue", &vtkGraphLayoutFilter::GetCoolDownRateMinValue)
    .function("GetCoolDownRateMaxValue", &vtkGraphLayoutFilter::GetCoolDownRateMaxValue)
    .function("GetCoolDownRate", &vtkGraphLayoutFilter::GetCoolDownRate)
    .function("SetThreeDimensionalLayout", &vtkGraphLayoutFilter::SetThreeDimensionalLayout)
    .function("GetThreeDimensionalLayout", &vtkGraphLayoutFilter::GetThreeDimensionalLayout)
    .function("ThreeDimensionalLayoutOn", &vtkGraphLayoutFilter::ThreeDimensionalLayoutOn)
    .function("ThreeDimensionalLayoutOff", &vtkGraphLayoutFilter::ThreeDimensionalLayoutOff);
}
