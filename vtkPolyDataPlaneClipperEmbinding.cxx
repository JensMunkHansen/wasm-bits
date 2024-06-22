// JavaScript wrapper for vtkPolyDataPlaneClipper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkPolyDataPlaneClipperEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkPolyDataPlaneClipper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlane.h"
#include "vtkPolyData.h"
#include "vtkDataObject.h"
#include "vtkPolyDataPlaneClipper.h"

template<> void emscripten::internal::raw_destructor<vtkPolyDataPlaneClipper>(vtkPolyDataPlaneClipper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataPlaneClipper_class) {
  emscripten::class_<vtkPolyDataPlaneClipper, emscripten::base<vtkPolyDataAlgorithm>>("vtkPolyDataPlaneClipper")
    .smart_ptr<vtkSmartPointer<vtkPolyDataPlaneClipper>>("vtkSmartPointer<vtkPolyDataPlaneClipper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPolyDataPlaneClipper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataPlaneClipper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataPlaneClipper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataPlaneClipper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataPlaneClipper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataPlaneClipper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataPlaneClipper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkPolyDataPlaneClipper::GetMTime)
    .function("SetPlane", &vtkPolyDataPlaneClipper::SetPlane, emscripten::allow_raw_pointers())
    .function("GetPlane", &vtkPolyDataPlaneClipper::GetPlane, emscripten::allow_raw_pointers())
    .function("SetClippingLoops", &vtkPolyDataPlaneClipper::SetClippingLoops)
    .function("GetClippingLoops", &vtkPolyDataPlaneClipper::GetClippingLoops)
    .function("ClippingLoopsOn", &vtkPolyDataPlaneClipper::ClippingLoopsOn)
    .function("ClippingLoopsOff", &vtkPolyDataPlaneClipper::ClippingLoopsOff)
    .function("SetCapping", &vtkPolyDataPlaneClipper::SetCapping)
    .function("GetCapping", &vtkPolyDataPlaneClipper::GetCapping)
    .function("CappingOn", &vtkPolyDataPlaneClipper::CappingOn)
    .function("CappingOff", &vtkPolyDataPlaneClipper::CappingOff)
    .function("GetCap", &vtkPolyDataPlaneClipper::GetCap, emscripten::allow_raw_pointers())
    .function("SetPassCapPointData", &vtkPolyDataPlaneClipper::SetPassCapPointData)
    .function("GetPassCapPointData", &vtkPolyDataPlaneClipper::GetPassCapPointData)
    .function("PassCapPointDataOn", &vtkPolyDataPlaneClipper::PassCapPointDataOn)
    .function("PassCapPointDataOff", &vtkPolyDataPlaneClipper::PassCapPointDataOff)
    .function("SetOutputPointsPrecision", &vtkPolyDataPlaneClipper::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkPolyDataPlaneClipper::GetOutputPointsPrecision)
    .function("SetBatchSize", &vtkPolyDataPlaneClipper::SetBatchSize)
    .function("GetBatchSizeMinValue", &vtkPolyDataPlaneClipper::GetBatchSizeMinValue)
    .function("GetBatchSizeMaxValue", &vtkPolyDataPlaneClipper::GetBatchSizeMaxValue)
    .function("GetBatchSize", &vtkPolyDataPlaneClipper::GetBatchSize)
    .class_function("CanFullyProcessDataObject", &vtkPolyDataPlaneClipper::CanFullyProcessDataObject, emscripten::allow_raw_pointers());
}
