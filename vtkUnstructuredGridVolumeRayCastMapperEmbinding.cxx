// JavaScript wrapper for vtkUnstructuredGridVolumeRayCastMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkUnstructuredGridVolumeRayCastMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkUnstructuredGridVolumeRayCastMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGridVolumeRayCastFunction.h"
#include "vtkUnstructuredGridVolumeRayIntegrator.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"
#include "vtkWindow.h"
#include "vtkUnstructuredGridVolumeRayCastMapper.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridVolumeRayCastMapper>(vtkUnstructuredGridVolumeRayCastMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridVolumeRayCastMapper_class) {
  emscripten::class_<vtkUnstructuredGridVolumeRayCastMapper, emscripten::base<vtkUnstructuredGridVolumeMapper>>("vtkUnstructuredGridVolumeRayCastMapper")
    .smart_ptr<vtkSmartPointer<vtkUnstructuredGridVolumeRayCastMapper>>("vtkSmartPointer<vtkUnstructuredGridVolumeRayCastMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkUnstructuredGridVolumeRayCastMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridVolumeRayCastMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridVolumeRayCastMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridVolumeRayCastMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridVolumeRayCastMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridVolumeRayCastMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridVolumeRayCastMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetImageSampleDistance", &vtkUnstructuredGridVolumeRayCastMapper::SetImageSampleDistance)
    .function("GetImageSampleDistanceMinValue", &vtkUnstructuredGridVolumeRayCastMapper::GetImageSampleDistanceMinValue)
    .function("GetImageSampleDistanceMaxValue", &vtkUnstructuredGridVolumeRayCastMapper::GetImageSampleDistanceMaxValue)
    .function("GetImageSampleDistance", &vtkUnstructuredGridVolumeRayCastMapper::GetImageSampleDistance)
    .function("SetMinimumImageSampleDistance", &vtkUnstructuredGridVolumeRayCastMapper::SetMinimumImageSampleDistance)
    .function("GetMinimumImageSampleDistanceMinValue", &vtkUnstructuredGridVolumeRayCastMapper::GetMinimumImageSampleDistanceMinValue)
    .function("GetMinimumImageSampleDistanceMaxValue", &vtkUnstructuredGridVolumeRayCastMapper::GetMinimumImageSampleDistanceMaxValue)
    .function("GetMinimumImageSampleDistance", &vtkUnstructuredGridVolumeRayCastMapper::GetMinimumImageSampleDistance)
    .function("SetMaximumImageSampleDistance", &vtkUnstructuredGridVolumeRayCastMapper::SetMaximumImageSampleDistance)
    .function("GetMaximumImageSampleDistanceMinValue", &vtkUnstructuredGridVolumeRayCastMapper::GetMaximumImageSampleDistanceMinValue)
    .function("GetMaximumImageSampleDistanceMaxValue", &vtkUnstructuredGridVolumeRayCastMapper::GetMaximumImageSampleDistanceMaxValue)
    .function("GetMaximumImageSampleDistance", &vtkUnstructuredGridVolumeRayCastMapper::GetMaximumImageSampleDistance)
    .function("SetAutoAdjustSampleDistances", &vtkUnstructuredGridVolumeRayCastMapper::SetAutoAdjustSampleDistances)
    .function("GetAutoAdjustSampleDistancesMinValue", &vtkUnstructuredGridVolumeRayCastMapper::GetAutoAdjustSampleDistancesMinValue)
    .function("GetAutoAdjustSampleDistancesMaxValue", &vtkUnstructuredGridVolumeRayCastMapper::GetAutoAdjustSampleDistancesMaxValue)
    .function("GetAutoAdjustSampleDistances", &vtkUnstructuredGridVolumeRayCastMapper::GetAutoAdjustSampleDistances)
    .function("AutoAdjustSampleDistancesOn", &vtkUnstructuredGridVolumeRayCastMapper::AutoAdjustSampleDistancesOn)
    .function("AutoAdjustSampleDistancesOff", &vtkUnstructuredGridVolumeRayCastMapper::AutoAdjustSampleDistancesOff)
    .function("SetNumberOfThreads", &vtkUnstructuredGridVolumeRayCastMapper::SetNumberOfThreads)
    .function("GetNumberOfThreads", &vtkUnstructuredGridVolumeRayCastMapper::GetNumberOfThreads)
    .function("SetIntermixIntersectingGeometry", &vtkUnstructuredGridVolumeRayCastMapper::SetIntermixIntersectingGeometry)
    .function("GetIntermixIntersectingGeometryMinValue", &vtkUnstructuredGridVolumeRayCastMapper::GetIntermixIntersectingGeometryMinValue)
    .function("GetIntermixIntersectingGeometryMaxValue", &vtkUnstructuredGridVolumeRayCastMapper::GetIntermixIntersectingGeometryMaxValue)
    .function("GetIntermixIntersectingGeometry", &vtkUnstructuredGridVolumeRayCastMapper::GetIntermixIntersectingGeometry)
    .function("IntermixIntersectingGeometryOn", &vtkUnstructuredGridVolumeRayCastMapper::IntermixIntersectingGeometryOn)
    .function("IntermixIntersectingGeometryOff", &vtkUnstructuredGridVolumeRayCastMapper::IntermixIntersectingGeometryOff)
    .function("SetRayCastFunction", &vtkUnstructuredGridVolumeRayCastMapper::SetRayCastFunction, emscripten::allow_raw_pointers())
    .function("GetRayCastFunction", &vtkUnstructuredGridVolumeRayCastMapper::GetRayCastFunction, emscripten::allow_raw_pointers())
    .function("SetRayIntegrator", &vtkUnstructuredGridVolumeRayCastMapper::SetRayIntegrator, emscripten::allow_raw_pointers())
    .function("GetRayIntegrator", &vtkUnstructuredGridVolumeRayCastMapper::GetRayIntegrator, emscripten::allow_raw_pointers())
    .function("Render", &vtkUnstructuredGridVolumeRayCastMapper::Render, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkUnstructuredGridVolumeRayCastMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("CastRays", &vtkUnstructuredGridVolumeRayCastMapper::CastRays);
}
