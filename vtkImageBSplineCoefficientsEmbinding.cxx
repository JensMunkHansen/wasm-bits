// JavaScript wrapper for vtkImageBSplineCoefficients with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageBSplineCoefficientsEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageBSplineCoefficients.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractImageInterpolator.h"
#include "vtkImageBSplineCoefficients.h"

template<> void emscripten::internal::raw_destructor<vtkImageBSplineCoefficients>(vtkImageBSplineCoefficients * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageBSplineCoefficients_class) {
  emscripten::class_<vtkImageBSplineCoefficients, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageBSplineCoefficients")
    .smart_ptr<vtkSmartPointer<vtkImageBSplineCoefficients>>("vtkSmartPointer<vtkImageBSplineCoefficients>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageBSplineCoefficients>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageBSplineCoefficients::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageBSplineCoefficients& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageBSplineCoefficients::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageBSplineCoefficients::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageBSplineCoefficients::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageBSplineCoefficients& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSplineDegree", &vtkImageBSplineCoefficients::SetSplineDegree)
    .function("GetSplineDegreeMinValue", &vtkImageBSplineCoefficients::GetSplineDegreeMinValue)
    .function("GetSplineDegreeMaxValue", &vtkImageBSplineCoefficients::GetSplineDegreeMaxValue)
    .function("GetSplineDegree", &vtkImageBSplineCoefficients::GetSplineDegree)
    .function("SetBorderMode", &vtkImageBSplineCoefficients::SetBorderMode)
    .function("GetBorderModeMinValue", &vtkImageBSplineCoefficients::GetBorderModeMinValue)
    .function("GetBorderModeMaxValue", &vtkImageBSplineCoefficients::GetBorderModeMaxValue)
    .function("SetBorderModeToClamp", &vtkImageBSplineCoefficients::SetBorderModeToClamp)
    .function("SetBorderModeToRepeat", &vtkImageBSplineCoefficients::SetBorderModeToRepeat)
    .function("SetBorderModeToMirror", &vtkImageBSplineCoefficients::SetBorderModeToMirror)
    .function("GetBorderMode", &vtkImageBSplineCoefficients::GetBorderMode)
    .function("GetBorderModeAsString", emscripten::optional_override([](vtkImageBSplineCoefficients& self) -> std::string {  return self.GetBorderModeAsString();}))
    .function("SetOutputScalarType", &vtkImageBSplineCoefficients::SetOutputScalarType)
    .function("GetOutputScalarTypeMinValue", &vtkImageBSplineCoefficients::GetOutputScalarTypeMinValue)
    .function("GetOutputScalarTypeMaxValue", &vtkImageBSplineCoefficients::GetOutputScalarTypeMaxValue)
    .function("GetOutputScalarType", &vtkImageBSplineCoefficients::GetOutputScalarType)
    .function("SetOutputScalarTypeToFloat", &vtkImageBSplineCoefficients::SetOutputScalarTypeToFloat)
    .function("SetOutputScalarTypeToDouble", &vtkImageBSplineCoefficients::SetOutputScalarTypeToDouble)
    .function("GetOutputScalarTypeAsString", emscripten::optional_override([](vtkImageBSplineCoefficients& self) -> std::string {  return self.GetOutputScalarTypeAsString();}))
    .function("SetBypass", &vtkImageBSplineCoefficients::SetBypass)
    .function("BypassOn", &vtkImageBSplineCoefficients::BypassOn)
    .function("BypassOff", &vtkImageBSplineCoefficients::BypassOff)
    .function("GetBypass", &vtkImageBSplineCoefficients::GetBypass)
    .function("Evaluate", emscripten::select_overload<double(vtkImageBSplineCoefficients&, double, double, double)>([](vtkImageBSplineCoefficients& self, double arg_0, double arg_1, double arg_2) -> double { return self.Evaluate( arg_0, arg_1, arg_2); }));
}
