// JavaScript wrapper for vtkPiecewiseFunctionShiftScale with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkPiecewiseFunctionShiftScaleEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkPiecewiseFunctionShiftScale.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPiecewiseFunctionShiftScale.h"

template<> void emscripten::internal::raw_destructor<vtkPiecewiseFunctionShiftScale>(vtkPiecewiseFunctionShiftScale * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPiecewiseFunctionShiftScale_class) {
  emscripten::class_<vtkPiecewiseFunctionShiftScale, emscripten::base<vtkPiecewiseFunctionAlgorithm>>("vtkPiecewiseFunctionShiftScale")
    .smart_ptr<vtkSmartPointer<vtkPiecewiseFunctionShiftScale>>("vtkSmartPointer<vtkPiecewiseFunctionShiftScale>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPiecewiseFunctionShiftScale>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPiecewiseFunctionShiftScale::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPiecewiseFunctionShiftScale& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPiecewiseFunctionShiftScale::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPiecewiseFunctionShiftScale::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPiecewiseFunctionShiftScale::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPiecewiseFunctionShiftScale& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPositionShift", &vtkPiecewiseFunctionShiftScale::SetPositionShift)
    .function("SetPositionScale", &vtkPiecewiseFunctionShiftScale::SetPositionScale)
    .function("SetValueShift", &vtkPiecewiseFunctionShiftScale::SetValueShift)
    .function("SetValueScale", &vtkPiecewiseFunctionShiftScale::SetValueScale)
    .function("GetPositionShift", &vtkPiecewiseFunctionShiftScale::GetPositionShift)
    .function("GetPositionScale", &vtkPiecewiseFunctionShiftScale::GetPositionScale)
    .function("GetValueShift", &vtkPiecewiseFunctionShiftScale::GetValueShift)
    .function("GetValueScale", &vtkPiecewiseFunctionShiftScale::GetValueScale);
}
