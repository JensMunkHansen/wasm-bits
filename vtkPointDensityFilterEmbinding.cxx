// JavaScript wrapper for vtkPointDensityFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkPointDensityFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkPointDensityFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractPointLocator.h"
#include "vtkPointDensityFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkPointDensityFilter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "VTK_DENSITY_ESTIMATE_FIXED_RADIUS", 0 },
      { "VTK_DENSITY_ESTIMATE_RELATIVE_RADIUS", 1 },
      { "VTK_DENSITY_FORM_VOLUME_NORM", 0 },
      { "VTK_DENSITY_FORM_NPTS", 1 },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkPointDensityFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPointDensityFilter>(vtkPointDensityFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointDensityFilter_class) {
  using FunctionClass=vtkPointDensityFilter::FunctionClass;
  emscripten::class_<vtkPointDensityFilter, emscripten::base<vtkImageAlgorithm>>("vtkPointDensityFilter")
    .smart_ptr<vtkSmartPointer<vtkPointDensityFilter>>("vtkSmartPointer<vtkPointDensityFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPointDensityFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointDensityFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointDensityFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointDensityFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointDensityFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointDensityFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointDensityFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSampleDimensions", emscripten::select_overload<void(vtkPointDensityFilter&, int, int, int)>([](vtkPointDensityFilter& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetSampleDimensions( arg_0, arg_1, arg_2); }))
    .function("SetModelBounds", emscripten::select_overload<void(vtkPointDensityFilter&, double, double, double, double, double, double)>([](vtkPointDensityFilter& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetModelBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetAdjustDistance", &vtkPointDensityFilter::SetAdjustDistance)
    .function("GetAdjustDistanceMinValue", &vtkPointDensityFilter::GetAdjustDistanceMinValue)
    .function("GetAdjustDistanceMaxValue", &vtkPointDensityFilter::GetAdjustDistanceMaxValue)
    .function("GetAdjustDistance", &vtkPointDensityFilter::GetAdjustDistance)
    .function("SetDensityEstimate", &vtkPointDensityFilter::SetDensityEstimate)
    .function("GetDensityEstimateMinValue", &vtkPointDensityFilter::GetDensityEstimateMinValue)
    .function("GetDensityEstimateMaxValue", &vtkPointDensityFilter::GetDensityEstimateMaxValue)
    .function("GetDensityEstimate", &vtkPointDensityFilter::GetDensityEstimate)
    .function("SetDensityEstimateToFixedRadius", &vtkPointDensityFilter::SetDensityEstimateToFixedRadius)
    .function("SetDensityEstimateToRelativeRadius", &vtkPointDensityFilter::SetDensityEstimateToRelativeRadius)
    .function("GetDensityEstimateAsString", emscripten::optional_override([](vtkPointDensityFilter& self) -> std::string {  return self.GetDensityEstimateAsString();}))
    .function("SetDensityForm", &vtkPointDensityFilter::SetDensityForm)
    .function("GetDensityFormMinValue", &vtkPointDensityFilter::GetDensityFormMinValue)
    .function("GetDensityFormMaxValue", &vtkPointDensityFilter::GetDensityFormMaxValue)
    .function("GetDensityForm", &vtkPointDensityFilter::GetDensityForm)
    .function("SetDensityFormToVolumeNormalized", &vtkPointDensityFilter::SetDensityFormToVolumeNormalized)
    .function("SetDensityFormToNumberOfPoints", &vtkPointDensityFilter::SetDensityFormToNumberOfPoints)
    .function("GetDensityFormAsString", emscripten::optional_override([](vtkPointDensityFilter& self) -> std::string {  return self.GetDensityFormAsString();}))
    .function("SetRadius", &vtkPointDensityFilter::SetRadius)
    .function("GetRadiusMinValue", &vtkPointDensityFilter::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkPointDensityFilter::GetRadiusMaxValue)
    .function("GetRadius", &vtkPointDensityFilter::GetRadius)
    .function("SetRelativeRadius", &vtkPointDensityFilter::SetRelativeRadius)
    .function("GetRelativeRadiusMinValue", &vtkPointDensityFilter::GetRelativeRadiusMinValue)
    .function("GetRelativeRadiusMaxValue", &vtkPointDensityFilter::GetRelativeRadiusMaxValue)
    .function("GetRelativeRadius", &vtkPointDensityFilter::GetRelativeRadius)
    .function("SetScalarWeighting", &vtkPointDensityFilter::SetScalarWeighting)
    .function("GetScalarWeighting", &vtkPointDensityFilter::GetScalarWeighting)
    .function("ScalarWeightingOn", &vtkPointDensityFilter::ScalarWeightingOn)
    .function("ScalarWeightingOff", &vtkPointDensityFilter::ScalarWeightingOff)
    .function("SetComputeGradient", &vtkPointDensityFilter::SetComputeGradient)
    .function("GetComputeGradient", &vtkPointDensityFilter::GetComputeGradient)
    .function("ComputeGradientOn", &vtkPointDensityFilter::ComputeGradientOn)
    .function("ComputeGradientOff", &vtkPointDensityFilter::ComputeGradientOff)
    .function("SetLocator", &vtkPointDensityFilter::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkPointDensityFilter::GetLocator, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkPointDensityFilter_0_2_constants) {
    typedef vtkPointDensityFilter::FunctionClass cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkPointDensityFilter_FunctionClass_ZERO", vtkPointDensityFilter::ZERO },
      { "vtkPointDensityFilter_FunctionClass_NON_ZERO", vtkPointDensityFilter::NON_ZERO },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
