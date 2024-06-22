// JavaScript wrapper for vtkStructuredDataPlaneCutter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkStructuredDataPlaneCutterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkStructuredDataPlaneCutter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlane.h"
#include "vtkSphereTree.h"
#include "vtkStructuredDataPlaneCutter.h"

template<> void emscripten::internal::raw_destructor<vtkStructuredDataPlaneCutter>(vtkStructuredDataPlaneCutter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStructuredDataPlaneCutter_class) {
  emscripten::class_<vtkStructuredDataPlaneCutter, emscripten::base<vtkPolyDataAlgorithm>>("vtkStructuredDataPlaneCutter")
    .smart_ptr<vtkSmartPointer<vtkStructuredDataPlaneCutter>>("vtkSmartPointer<vtkStructuredDataPlaneCutter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStructuredDataPlaneCutter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredDataPlaneCutter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStructuredDataPlaneCutter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStructuredDataPlaneCutter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStructuredDataPlaneCutter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredDataPlaneCutter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStructuredDataPlaneCutter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkStructuredDataPlaneCutter::GetMTime)
    .function("SetPlane", &vtkStructuredDataPlaneCutter::SetPlane, emscripten::allow_raw_pointers())
    .function("GetPlane", &vtkStructuredDataPlaneCutter::GetPlane, emscripten::allow_raw_pointers())
    .function("SetGeneratePolygons", &vtkStructuredDataPlaneCutter::SetGeneratePolygons)
    .function("GetGeneratePolygons", &vtkStructuredDataPlaneCutter::GetGeneratePolygons)
    .function("GeneratePolygonsOn", &vtkStructuredDataPlaneCutter::GeneratePolygonsOn)
    .function("GeneratePolygonsOff", &vtkStructuredDataPlaneCutter::GeneratePolygonsOff)
    .function("SetBuildTree", &vtkStructuredDataPlaneCutter::SetBuildTree)
    .function("GetBuildTree", &vtkStructuredDataPlaneCutter::GetBuildTree)
    .function("BuildTreeOn", &vtkStructuredDataPlaneCutter::BuildTreeOn)
    .function("BuildTreeOff", &vtkStructuredDataPlaneCutter::BuildTreeOff)
    .function("SetBuildHierarchy", &vtkStructuredDataPlaneCutter::SetBuildHierarchy)
    .function("GetBuildHierarchy", &vtkStructuredDataPlaneCutter::GetBuildHierarchy)
    .function("BuildHierarchyOn", &vtkStructuredDataPlaneCutter::BuildHierarchyOn)
    .function("BuildHierarchyOff", &vtkStructuredDataPlaneCutter::BuildHierarchyOff)
    .function("SetSphereTree", &vtkStructuredDataPlaneCutter::SetSphereTree, emscripten::allow_raw_pointers())
    .function("GetSphereTree", &vtkStructuredDataPlaneCutter::GetSphereTree, emscripten::allow_raw_pointers())
    .function("SetComputeNormals", &vtkStructuredDataPlaneCutter::SetComputeNormals)
    .function("GetComputeNormals", &vtkStructuredDataPlaneCutter::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkStructuredDataPlaneCutter::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkStructuredDataPlaneCutter::ComputeNormalsOff)
    .function("SetOutputPointsPrecision", &vtkStructuredDataPlaneCutter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecisionMinValue", &vtkStructuredDataPlaneCutter::GetOutputPointsPrecisionMinValue)
    .function("GetOutputPointsPrecisionMaxValue", &vtkStructuredDataPlaneCutter::GetOutputPointsPrecisionMaxValue)
    .function("GetOutputPointsPrecision", &vtkStructuredDataPlaneCutter::GetOutputPointsPrecision)
    .function("SetInterpolateAttributes", &vtkStructuredDataPlaneCutter::SetInterpolateAttributes)
    .function("GetInterpolateAttributes", &vtkStructuredDataPlaneCutter::GetInterpolateAttributes)
    .function("InterpolateAttributesOn", &vtkStructuredDataPlaneCutter::InterpolateAttributesOn)
    .function("InterpolateAttributesOff", &vtkStructuredDataPlaneCutter::InterpolateAttributesOff)
    .function("SetBatchSize", &vtkStructuredDataPlaneCutter::SetBatchSize)
    .function("GetBatchSizeMinValue", &vtkStructuredDataPlaneCutter::GetBatchSizeMinValue)
    .function("GetBatchSizeMaxValue", &vtkStructuredDataPlaneCutter::GetBatchSizeMaxValue)
    .function("GetBatchSize", &vtkStructuredDataPlaneCutter::GetBatchSize);
}
