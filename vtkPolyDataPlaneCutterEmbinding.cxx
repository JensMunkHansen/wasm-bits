// JavaScript wrapper for vtkPolyDataPlaneCutter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkPolyDataPlaneCutterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkPolyDataPlaneCutter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlane.h"
#include "vtkDataObject.h"
#include "vtkPolyDataPlaneCutter.h"

template<> void emscripten::internal::raw_destructor<vtkPolyDataPlaneCutter>(vtkPolyDataPlaneCutter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataPlaneCutter_class) {
  emscripten::class_<vtkPolyDataPlaneCutter, emscripten::base<vtkPolyDataAlgorithm>>("vtkPolyDataPlaneCutter")
    .smart_ptr<vtkSmartPointer<vtkPolyDataPlaneCutter>>("vtkSmartPointer<vtkPolyDataPlaneCutter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPolyDataPlaneCutter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataPlaneCutter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataPlaneCutter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataPlaneCutter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataPlaneCutter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataPlaneCutter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataPlaneCutter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPlane", &vtkPolyDataPlaneCutter::SetPlane, emscripten::allow_raw_pointers())
    .function("GetPlane", &vtkPolyDataPlaneCutter::GetPlane, emscripten::allow_raw_pointers())
    .function("SetComputeNormals", &vtkPolyDataPlaneCutter::SetComputeNormals)
    .function("GetComputeNormals", &vtkPolyDataPlaneCutter::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkPolyDataPlaneCutter::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkPolyDataPlaneCutter::ComputeNormalsOff)
    .function("SetInterpolateAttributes", &vtkPolyDataPlaneCutter::SetInterpolateAttributes)
    .function("GetInterpolateAttributes", &vtkPolyDataPlaneCutter::GetInterpolateAttributes)
    .function("InterpolateAttributesOn", &vtkPolyDataPlaneCutter::InterpolateAttributesOn)
    .function("InterpolateAttributesOff", &vtkPolyDataPlaneCutter::InterpolateAttributesOff)
    .function("SetOutputPointsPrecision", &vtkPolyDataPlaneCutter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkPolyDataPlaneCutter::GetOutputPointsPrecision)
    .function("GetMTime", &vtkPolyDataPlaneCutter::GetMTime)
    .function("SetBatchSize", &vtkPolyDataPlaneCutter::SetBatchSize)
    .function("GetBatchSizeMinValue", &vtkPolyDataPlaneCutter::GetBatchSizeMinValue)
    .function("GetBatchSizeMaxValue", &vtkPolyDataPlaneCutter::GetBatchSizeMaxValue)
    .function("GetBatchSize", &vtkPolyDataPlaneCutter::GetBatchSize)
    .class_function("CanFullyProcessDataObject", &vtkPolyDataPlaneCutter::CanFullyProcessDataObject, emscripten::allow_raw_pointers());
}
