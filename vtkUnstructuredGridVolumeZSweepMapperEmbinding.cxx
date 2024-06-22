// JavaScript wrapper for vtkUnstructuredGridVolumeZSweepMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkUnstructuredGridVolumeZSweepMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkUnstructuredGridVolumeZSweepMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGridVolumeRayIntegrator.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"
#include "vtkUnstructuredGridVolumeZSweepMapper.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridVolumeZSweepMapper>(vtkUnstructuredGridVolumeZSweepMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridVolumeZSweepMapper_class) {
  emscripten::class_<vtkUnstructuredGridVolumeZSweepMapper, emscripten::base<vtkUnstructuredGridVolumeMapper>>("vtkUnstructuredGridVolumeZSweepMapper")
    .smart_ptr<vtkSmartPointer<vtkUnstructuredGridVolumeZSweepMapper>>("vtkSmartPointer<vtkUnstructuredGridVolumeZSweepMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkUnstructuredGridVolumeZSweepMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridVolumeZSweepMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridVolumeZSweepMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridVolumeZSweepMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridVolumeZSweepMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridVolumeZSweepMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridVolumeZSweepMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetImageSampleDistance", &vtkUnstructuredGridVolumeZSweepMapper::SetImageSampleDistance)
    .function("GetImageSampleDistanceMinValue", &vtkUnstructuredGridVolumeZSweepMapper::GetImageSampleDistanceMinValue)
    .function("GetImageSampleDistanceMaxValue", &vtkUnstructuredGridVolumeZSweepMapper::GetImageSampleDistanceMaxValue)
    .function("GetImageSampleDistance", &vtkUnstructuredGridVolumeZSweepMapper::GetImageSampleDistance)
    .function("SetMinimumImageSampleDistance", &vtkUnstructuredGridVolumeZSweepMapper::SetMinimumImageSampleDistance)
    .function("GetMinimumImageSampleDistanceMinValue", &vtkUnstructuredGridVolumeZSweepMapper::GetMinimumImageSampleDistanceMinValue)
    .function("GetMinimumImageSampleDistanceMaxValue", &vtkUnstructuredGridVolumeZSweepMapper::GetMinimumImageSampleDistanceMaxValue)
    .function("GetMinimumImageSampleDistance", &vtkUnstructuredGridVolumeZSweepMapper::GetMinimumImageSampleDistance)
    .function("SetMaximumImageSampleDistance", &vtkUnstructuredGridVolumeZSweepMapper::SetMaximumImageSampleDistance)
    .function("GetMaximumImageSampleDistanceMinValue", &vtkUnstructuredGridVolumeZSweepMapper::GetMaximumImageSampleDistanceMinValue)
    .function("GetMaximumImageSampleDistanceMaxValue", &vtkUnstructuredGridVolumeZSweepMapper::GetMaximumImageSampleDistanceMaxValue)
    .function("GetMaximumImageSampleDistance", &vtkUnstructuredGridVolumeZSweepMapper::GetMaximumImageSampleDistance)
    .function("SetAutoAdjustSampleDistances", &vtkUnstructuredGridVolumeZSweepMapper::SetAutoAdjustSampleDistances)
    .function("GetAutoAdjustSampleDistancesMinValue", &vtkUnstructuredGridVolumeZSweepMapper::GetAutoAdjustSampleDistancesMinValue)
    .function("GetAutoAdjustSampleDistancesMaxValue", &vtkUnstructuredGridVolumeZSweepMapper::GetAutoAdjustSampleDistancesMaxValue)
    .function("GetAutoAdjustSampleDistances", &vtkUnstructuredGridVolumeZSweepMapper::GetAutoAdjustSampleDistances)
    .function("AutoAdjustSampleDistancesOn", &vtkUnstructuredGridVolumeZSweepMapper::AutoAdjustSampleDistancesOn)
    .function("AutoAdjustSampleDistancesOff", &vtkUnstructuredGridVolumeZSweepMapper::AutoAdjustSampleDistancesOff)
    .function("SetIntermixIntersectingGeometry", &vtkUnstructuredGridVolumeZSweepMapper::SetIntermixIntersectingGeometry)
    .function("GetIntermixIntersectingGeometryMinValue", &vtkUnstructuredGridVolumeZSweepMapper::GetIntermixIntersectingGeometryMinValue)
    .function("GetIntermixIntersectingGeometryMaxValue", &vtkUnstructuredGridVolumeZSweepMapper::GetIntermixIntersectingGeometryMaxValue)
    .function("GetIntermixIntersectingGeometry", &vtkUnstructuredGridVolumeZSweepMapper::GetIntermixIntersectingGeometry)
    .function("IntermixIntersectingGeometryOn", &vtkUnstructuredGridVolumeZSweepMapper::IntermixIntersectingGeometryOn)
    .function("IntermixIntersectingGeometryOff", &vtkUnstructuredGridVolumeZSweepMapper::IntermixIntersectingGeometryOff)
    .function("GetMaxPixelListSize", &vtkUnstructuredGridVolumeZSweepMapper::GetMaxPixelListSize)
    .function("SetMaxPixelListSize", &vtkUnstructuredGridVolumeZSweepMapper::SetMaxPixelListSize)
    .function("SetRayIntegrator", &vtkUnstructuredGridVolumeZSweepMapper::SetRayIntegrator, emscripten::allow_raw_pointers())
    .function("GetRayIntegrator", &vtkUnstructuredGridVolumeZSweepMapper::GetRayIntegrator, emscripten::allow_raw_pointers())
    .function("Render", &vtkUnstructuredGridVolumeZSweepMapper::Render, emscripten::allow_raw_pointers());
}
