// JavaScript wrapper for vtkPlaneCutter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkPlaneCutterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkPlaneCutter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlane.h"
#include "vtkPlaneCutter.h"

template<> void emscripten::internal::raw_destructor<vtkPlaneCutter>(vtkPlaneCutter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlaneCutter_class) {
  emscripten::class_<vtkPlaneCutter, emscripten::base<vtkDataObjectAlgorithm>>("vtkPlaneCutter")
    .smart_ptr<vtkSmartPointer<vtkPlaneCutter>>("vtkSmartPointer<vtkPlaneCutter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPlaneCutter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlaneCutter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlaneCutter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlaneCutter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlaneCutter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlaneCutter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlaneCutter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkPlaneCutter::GetMTime)
    .function("SetPlane", &vtkPlaneCutter::SetPlane, emscripten::allow_raw_pointers())
    .function("GetPlane", &vtkPlaneCutter::GetPlane, emscripten::allow_raw_pointers())
    .function("SetComputeNormals", &vtkPlaneCutter::SetComputeNormals)
    .function("GetComputeNormals", &vtkPlaneCutter::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkPlaneCutter::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkPlaneCutter::ComputeNormalsOff)
    .function("SetInterpolateAttributes", &vtkPlaneCutter::SetInterpolateAttributes)
    .function("GetInterpolateAttributes", &vtkPlaneCutter::GetInterpolateAttributes)
    .function("InterpolateAttributesOn", &vtkPlaneCutter::InterpolateAttributesOn)
    .function("InterpolateAttributesOff", &vtkPlaneCutter::InterpolateAttributesOff)
    .function("SetGeneratePolygons", &vtkPlaneCutter::SetGeneratePolygons)
    .function("GetGeneratePolygons", &vtkPlaneCutter::GetGeneratePolygons)
    .function("GeneratePolygonsOn", &vtkPlaneCutter::GeneratePolygonsOn)
    .function("GeneratePolygonsOff", &vtkPlaneCutter::GeneratePolygonsOff)
    .function("SetBuildTree", &vtkPlaneCutter::SetBuildTree)
    .function("GetBuildTree", &vtkPlaneCutter::GetBuildTree)
    .function("BuildTreeOn", &vtkPlaneCutter::BuildTreeOn)
    .function("BuildTreeOff", &vtkPlaneCutter::BuildTreeOff)
    .function("SetBuildHierarchy", &vtkPlaneCutter::SetBuildHierarchy)
    .function("GetBuildHierarchy", &vtkPlaneCutter::GetBuildHierarchy)
    .function("BuildHierarchyOn", &vtkPlaneCutter::BuildHierarchyOn)
    .function("BuildHierarchyOff", &vtkPlaneCutter::BuildHierarchyOff)
    .function("SetMergePoints", &vtkPlaneCutter::SetMergePoints)
    .function("GetMergePoints", &vtkPlaneCutter::GetMergePoints)
    .function("MergePointsOn", &vtkPlaneCutter::MergePointsOn)
    .function("MergePointsOff", &vtkPlaneCutter::MergePointsOff)
    .function("SetOutputPointsPrecision", &vtkPlaneCutter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecisionMinValue", &vtkPlaneCutter::GetOutputPointsPrecisionMinValue)
    .function("GetOutputPointsPrecisionMaxValue", &vtkPlaneCutter::GetOutputPointsPrecisionMaxValue)
    .function("GetOutputPointsPrecision", &vtkPlaneCutter::GetOutputPointsPrecision);
}
