// JavaScript wrapper for vtkVectorFieldTopology with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkFiltersFlowPaths.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkVectorFieldTopologyEmbinding.cxx \
 /home/jmh/github/vtk/Filters/FlowPaths/vtkVectorFieldTopology.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVectorFieldTopology.h"

EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkVectorFieldTopology_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkVectorFieldTopology>(vtkVectorFieldTopology * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVectorFieldTopology_class) {
  emscripten::class_<vtkVectorFieldTopology, emscripten::base<vtkPolyDataAlgorithm>>("vtkVectorFieldTopology")
    .smart_ptr<vtkSmartPointer<vtkVectorFieldTopology>>("vtkSmartPointer<vtkVectorFieldTopology>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkVectorFieldTopology>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVectorFieldTopology::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVectorFieldTopology& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVectorFieldTopology::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVectorFieldTopology::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVectorFieldTopology::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVectorFieldTopology& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetIntegrationStepUnit", &vtkVectorFieldTopology::SetIntegrationStepUnit)
    .function("GetIntegrationStepUnit", &vtkVectorFieldTopology::GetIntegrationStepUnit)
    .function("SetMaxNumSteps", &vtkVectorFieldTopology::SetMaxNumSteps)
    .function("GetMaxNumSteps", &vtkVectorFieldTopology::GetMaxNumSteps)
    .function("SetIntegrationStepSize", &vtkVectorFieldTopology::SetIntegrationStepSize)
    .function("GetIntegrationStepSize", &vtkVectorFieldTopology::GetIntegrationStepSize)
    .function("SetSeparatrixDistance", &vtkVectorFieldTopology::SetSeparatrixDistance)
    .function("GetSeparatrixDistance", &vtkVectorFieldTopology::GetSeparatrixDistance)
    .function("SetUseIterativeSeeding", &vtkVectorFieldTopology::SetUseIterativeSeeding)
    .function("GetUseIterativeSeeding", &vtkVectorFieldTopology::GetUseIterativeSeeding)
    .function("SetComputeSurfaces", &vtkVectorFieldTopology::SetComputeSurfaces)
    .function("GetComputeSurfaces", &vtkVectorFieldTopology::GetComputeSurfaces)
    .function("SetExcludeBoundary", &vtkVectorFieldTopology::SetExcludeBoundary)
    .function("GetExcludeBoundary", &vtkVectorFieldTopology::GetExcludeBoundary)
    .function("SetUseBoundarySwitchPoints", &vtkVectorFieldTopology::SetUseBoundarySwitchPoints)
    .function("GetUseBoundarySwitchPoints", &vtkVectorFieldTopology::GetUseBoundarySwitchPoints)
    .function("SetVectorAngleThreshold", &vtkVectorFieldTopology::SetVectorAngleThreshold)
    .function("GetVectorAngleThreshold", &vtkVectorFieldTopology::GetVectorAngleThreshold)
    .function("SetOffsetAwayFromBoundary", &vtkVectorFieldTopology::SetOffsetAwayFromBoundary)
    .function("GetOffsetAwayFromBoundary", &vtkVectorFieldTopology::GetOffsetAwayFromBoundary)
    .function("SetEpsilonCriticalPoint", &vtkVectorFieldTopology::SetEpsilonCriticalPoint)
    .function("GetEpsilonCriticalPoint", &vtkVectorFieldTopology::GetEpsilonCriticalPoint)
    .function("SetInterpolatorType", &vtkVectorFieldTopology::SetInterpolatorType)
    .function("SetInterpolatorTypeToCellLocator", &vtkVectorFieldTopology::SetInterpolatorTypeToCellLocator)
    .function("SetInterpolatorTypeToDataSetPointLocator", &vtkVectorFieldTopology::SetInterpolatorTypeToDataSetPointLocator);
}
