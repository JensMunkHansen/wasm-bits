// JavaScript wrapper for vtkParametricSpline with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricSplineEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricSpline.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSpline.h"
#include "vtkPoints.h"
#include "vtkParametricSpline.h"

template<> void emscripten::internal::raw_destructor<vtkParametricSpline>(vtkParametricSpline * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricSpline_class) {
  emscripten::class_<vtkParametricSpline, emscripten::base<vtkParametricFunction>>("vtkParametricSpline")
    .smart_ptr<vtkSmartPointer<vtkParametricSpline>>("vtkSmartPointer<vtkParametricSpline>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParametricSpline>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricSpline::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricSpline& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricSpline::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricSpline::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricSpline::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricSpline& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDimension", &vtkParametricSpline::GetDimension)
    .function("SetXSpline", &vtkParametricSpline::SetXSpline, emscripten::allow_raw_pointers())
    .function("SetYSpline", &vtkParametricSpline::SetYSpline, emscripten::allow_raw_pointers())
    .function("SetZSpline", &vtkParametricSpline::SetZSpline, emscripten::allow_raw_pointers())
    .function("GetXSpline", &vtkParametricSpline::GetXSpline, emscripten::allow_raw_pointers())
    .function("GetYSpline", &vtkParametricSpline::GetYSpline, emscripten::allow_raw_pointers())
    .function("GetZSpline", &vtkParametricSpline::GetZSpline, emscripten::allow_raw_pointers())
    .function("SetPoints", &vtkParametricSpline::SetPoints, emscripten::allow_raw_pointers())
    .function("GetPoints", &vtkParametricSpline::GetPoints, emscripten::allow_raw_pointers())
    .function("SetNumberOfPoints", &vtkParametricSpline::SetNumberOfPoints)
    .function("SetPoint", &vtkParametricSpline::SetPoint)
    .function("SetClosed", &vtkParametricSpline::SetClosed)
    .function("GetClosed", &vtkParametricSpline::GetClosed)
    .function("ClosedOn", &vtkParametricSpline::ClosedOn)
    .function("ClosedOff", &vtkParametricSpline::ClosedOff)
    .function("SetParameterizeByLength", &vtkParametricSpline::SetParameterizeByLength)
    .function("GetParameterizeByLength", &vtkParametricSpline::GetParameterizeByLength)
    .function("ParameterizeByLengthOn", &vtkParametricSpline::ParameterizeByLengthOn)
    .function("ParameterizeByLengthOff", &vtkParametricSpline::ParameterizeByLengthOff)
    .function("SetLeftConstraint", &vtkParametricSpline::SetLeftConstraint)
    .function("GetLeftConstraintMinValue", &vtkParametricSpline::GetLeftConstraintMinValue)
    .function("GetLeftConstraintMaxValue", &vtkParametricSpline::GetLeftConstraintMaxValue)
    .function("GetLeftConstraint", &vtkParametricSpline::GetLeftConstraint)
    .function("SetRightConstraint", &vtkParametricSpline::SetRightConstraint)
    .function("GetRightConstraintMinValue", &vtkParametricSpline::GetRightConstraintMinValue)
    .function("GetRightConstraintMaxValue", &vtkParametricSpline::GetRightConstraintMaxValue)
    .function("GetRightConstraint", &vtkParametricSpline::GetRightConstraint)
    .function("SetLeftValue", &vtkParametricSpline::SetLeftValue)
    .function("GetLeftValue", &vtkParametricSpline::GetLeftValue)
    .function("SetRightValue", &vtkParametricSpline::SetRightValue)
    .function("GetRightValue", &vtkParametricSpline::GetRightValue);
}
