// JavaScript wrapper for vtkSpline with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkSplineEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkSpline.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSpline.h"

template<> void emscripten::internal::raw_destructor<vtkSpline>(vtkSpline * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSpline_class) {
  emscripten::class_<vtkSpline, emscripten::base<vtkObject>>("vtkSpline")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpline::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSpline& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSpline::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSpline::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpline::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSpline& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetParametricRange", emscripten::select_overload<void(vtkSpline&, double, double)>([](vtkSpline& self, double arg_0, double arg_1) -> void { return self.SetParametricRange( arg_0, arg_1); }))
    .function("SetClampValue", &vtkSpline::SetClampValue)
    .function("GetClampValue", &vtkSpline::GetClampValue)
    .function("ClampValueOn", &vtkSpline::ClampValueOn)
    .function("ClampValueOff", &vtkSpline::ClampValueOff)
    .function("GetNumberOfPoints", &vtkSpline::GetNumberOfPoints)
    .function("AddPoint", &vtkSpline::AddPoint)
    .function("FillFromDataPointer", emscripten::optional_override([](vtkSpline& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.FillFromDataPointer( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("RemovePoint", &vtkSpline::RemovePoint)
    .function("RemoveAllPoints", &vtkSpline::RemoveAllPoints)
    .function("SetClosed", &vtkSpline::SetClosed)
    .function("GetClosed", &vtkSpline::GetClosed)
    .function("ClosedOn", &vtkSpline::ClosedOn)
    .function("ClosedOff", &vtkSpline::ClosedOff)
    .function("SetLeftConstraint", &vtkSpline::SetLeftConstraint)
    .function("GetLeftConstraintMinValue", &vtkSpline::GetLeftConstraintMinValue)
    .function("GetLeftConstraintMaxValue", &vtkSpline::GetLeftConstraintMaxValue)
    .function("GetLeftConstraint", &vtkSpline::GetLeftConstraint)
    .function("SetRightConstraint", &vtkSpline::SetRightConstraint)
    .function("GetRightConstraintMinValue", &vtkSpline::GetRightConstraintMinValue)
    .function("GetRightConstraintMaxValue", &vtkSpline::GetRightConstraintMaxValue)
    .function("GetRightConstraint", &vtkSpline::GetRightConstraint)
    .function("SetLeftValue", &vtkSpline::SetLeftValue)
    .function("GetLeftValue", &vtkSpline::GetLeftValue)
    .function("SetRightValue", &vtkSpline::SetRightValue)
    .function("GetRightValue", &vtkSpline::GetRightValue)
    .function("GetMTime", &vtkSpline::GetMTime)
    .function("DeepCopy", &vtkSpline::DeepCopy, emscripten::allow_raw_pointers());
}
