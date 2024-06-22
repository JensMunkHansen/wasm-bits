// JavaScript wrapper for vtkImageBSplineInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageBSplineInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageBSplineInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageBSplineInterpolator.h"

EMSCRIPTEN_BINDINGS(vtkImagingCore_vtkImageBSplineInterpolator_0_1_constants) {
  emscripten::constant("VTK_IMAGE_BSPLINE_DEGREE_MAX", 9);
}
template<> void emscripten::internal::raw_destructor<vtkImageBSplineInterpolator>(vtkImageBSplineInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageBSplineInterpolator_class) {
  emscripten::class_<vtkImageBSplineInterpolator, emscripten::base<vtkAbstractImageInterpolator>>("vtkImageBSplineInterpolator")
    .smart_ptr<vtkSmartPointer<vtkImageBSplineInterpolator>>("vtkSmartPointer<vtkImageBSplineInterpolator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageBSplineInterpolator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageBSplineInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageBSplineInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageBSplineInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageBSplineInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageBSplineInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageBSplineInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSplineDegree", &vtkImageBSplineInterpolator::SetSplineDegree)
    .function("GetSplineDegree", &vtkImageBSplineInterpolator::GetSplineDegree)
    .function("GetSplineDegreeMinValue", &vtkImageBSplineInterpolator::GetSplineDegreeMinValue)
    .function("GetSplineDegreeMaxValue", &vtkImageBSplineInterpolator::GetSplineDegreeMaxValue)
    .function("IsSeparable", &vtkImageBSplineInterpolator::IsSeparable);
}
