// JavaScript wrapper for vtkPCACurvatureEstimation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkPCACurvatureEstimationEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkPCACurvatureEstimation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractPointLocator.h"
#include "vtkPCACurvatureEstimation.h"

template<> void emscripten::internal::raw_destructor<vtkPCACurvatureEstimation>(vtkPCACurvatureEstimation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPCACurvatureEstimation_class) {
  emscripten::class_<vtkPCACurvatureEstimation, emscripten::base<vtkPolyDataAlgorithm>>("vtkPCACurvatureEstimation")
    .smart_ptr<vtkSmartPointer<vtkPCACurvatureEstimation>>("vtkSmartPointer<vtkPCACurvatureEstimation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPCACurvatureEstimation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPCACurvatureEstimation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPCACurvatureEstimation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPCACurvatureEstimation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPCACurvatureEstimation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPCACurvatureEstimation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPCACurvatureEstimation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSampleSize", &vtkPCACurvatureEstimation::SetSampleSize)
    .function("GetSampleSizeMinValue", &vtkPCACurvatureEstimation::GetSampleSizeMinValue)
    .function("GetSampleSizeMaxValue", &vtkPCACurvatureEstimation::GetSampleSizeMaxValue)
    .function("GetSampleSize", &vtkPCACurvatureEstimation::GetSampleSize)
    .function("SetLocator", &vtkPCACurvatureEstimation::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkPCACurvatureEstimation::GetLocator, emscripten::allow_raw_pointers());
}
