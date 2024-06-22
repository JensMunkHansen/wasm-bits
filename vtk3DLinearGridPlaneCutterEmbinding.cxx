// JavaScript wrapper for vtk3DLinearGridPlaneCutter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtk3DLinearGridPlaneCutterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtk3DLinearGridPlaneCutter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlane.h"
#include "vtkDataObject.h"
#include "vtk3DLinearGridPlaneCutter.h"

template<> void emscripten::internal::raw_destructor<vtk3DLinearGridPlaneCutter>(vtk3DLinearGridPlaneCutter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtk3DLinearGridPlaneCutter_class) {
  emscripten::class_<vtk3DLinearGridPlaneCutter, emscripten::base<vtkDataObjectAlgorithm>>("vtk3DLinearGridPlaneCutter")
    .smart_ptr<vtkSmartPointer<vtk3DLinearGridPlaneCutter>>("vtkSmartPointer<vtk3DLinearGridPlaneCutter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtk3DLinearGridPlaneCutter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtk3DLinearGridPlaneCutter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtk3DLinearGridPlaneCutter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtk3DLinearGridPlaneCutter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtk3DLinearGridPlaneCutter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtk3DLinearGridPlaneCutter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtk3DLinearGridPlaneCutter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPlane", &vtk3DLinearGridPlaneCutter::SetPlane, emscripten::allow_raw_pointers())
    .function("GetPlane", &vtk3DLinearGridPlaneCutter::GetPlane, emscripten::allow_raw_pointers())
    .function("SetMergePoints", &vtk3DLinearGridPlaneCutter::SetMergePoints)
    .function("GetMergePoints", &vtk3DLinearGridPlaneCutter::GetMergePoints)
    .function("MergePointsOn", &vtk3DLinearGridPlaneCutter::MergePointsOn)
    .function("MergePointsOff", &vtk3DLinearGridPlaneCutter::MergePointsOff)
    .function("SetInterpolateAttributes", &vtk3DLinearGridPlaneCutter::SetInterpolateAttributes)
    .function("GetInterpolateAttributes", &vtk3DLinearGridPlaneCutter::GetInterpolateAttributes)
    .function("InterpolateAttributesOn", &vtk3DLinearGridPlaneCutter::InterpolateAttributesOn)
    .function("InterpolateAttributesOff", &vtk3DLinearGridPlaneCutter::InterpolateAttributesOff)
    .function("SetComputeNormals", &vtk3DLinearGridPlaneCutter::SetComputeNormals)
    .function("GetComputeNormals", &vtk3DLinearGridPlaneCutter::GetComputeNormals)
    .function("ComputeNormalsOn", &vtk3DLinearGridPlaneCutter::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtk3DLinearGridPlaneCutter::ComputeNormalsOff)
    .function("GetMTime", &vtk3DLinearGridPlaneCutter::GetMTime)
    .function("SetOutputPointsPrecision", &vtk3DLinearGridPlaneCutter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtk3DLinearGridPlaneCutter::GetOutputPointsPrecision)
    .function("SetSequentialProcessing", &vtk3DLinearGridPlaneCutter::SetSequentialProcessing)
    .function("GetSequentialProcessing", &vtk3DLinearGridPlaneCutter::GetSequentialProcessing)
    .function("SequentialProcessingOn", &vtk3DLinearGridPlaneCutter::SequentialProcessingOn)
    .function("SequentialProcessingOff", &vtk3DLinearGridPlaneCutter::SequentialProcessingOff)
    .function("GetNumberOfThreadsUsed", &vtk3DLinearGridPlaneCutter::GetNumberOfThreadsUsed)
    .function("GetLargeIds", &vtk3DLinearGridPlaneCutter::GetLargeIds)
    .class_function("CanFullyProcessDataObject", &vtk3DLinearGridPlaneCutter::CanFullyProcessDataObject, emscripten::allow_raw_pointers());
}
