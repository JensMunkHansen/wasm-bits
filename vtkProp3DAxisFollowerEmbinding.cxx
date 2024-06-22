// JavaScript wrapper for vtkProp3DAxisFollower with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkProp3DAxisFollowerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkProp3DAxisFollower.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAxisActor.h"
#include "vtkProp.h"
#include "vtkViewport.h"
#include "vtkCamera.h"
#include "vtkProp3DAxisFollower.h"

template<> void emscripten::internal::raw_destructor<vtkProp3DAxisFollower>(vtkProp3DAxisFollower * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProp3DAxisFollower_class) {
  emscripten::class_<vtkProp3DAxisFollower, emscripten::base<vtkProp3DFollower>>("vtkProp3DAxisFollower")
    .smart_ptr<vtkSmartPointer<vtkProp3DAxisFollower>>("vtkSmartPointer<vtkProp3DAxisFollower>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkProp3DAxisFollower>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProp3DAxisFollower::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProp3DAxisFollower& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProp3DAxisFollower::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProp3DAxisFollower::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProp3DAxisFollower::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProp3DAxisFollower& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetAxis", &vtkProp3DAxisFollower::SetAxis, emscripten::allow_raw_pointers())
    .function("GetAxis", &vtkProp3DAxisFollower::GetAxis, emscripten::allow_raw_pointers())
    .function("SetAutoCenter", &vtkProp3DAxisFollower::SetAutoCenter)
    .function("GetAutoCenter", &vtkProp3DAxisFollower::GetAutoCenter)
    .function("AutoCenterOn", &vtkProp3DAxisFollower::AutoCenterOn)
    .function("AutoCenterOff", &vtkProp3DAxisFollower::AutoCenterOff)
    .function("SetEnableDistanceLOD", &vtkProp3DAxisFollower::SetEnableDistanceLOD)
    .function("GetEnableDistanceLOD", &vtkProp3DAxisFollower::GetEnableDistanceLOD)
    .function("SetDistanceLODThreshold", &vtkProp3DAxisFollower::SetDistanceLODThreshold)
    .function("GetDistanceLODThresholdMinValue", &vtkProp3DAxisFollower::GetDistanceLODThresholdMinValue)
    .function("GetDistanceLODThresholdMaxValue", &vtkProp3DAxisFollower::GetDistanceLODThresholdMaxValue)
    .function("GetDistanceLODThreshold", &vtkProp3DAxisFollower::GetDistanceLODThreshold)
    .function("SetEnableViewAngleLOD", &vtkProp3DAxisFollower::SetEnableViewAngleLOD)
    .function("GetEnableViewAngleLOD", &vtkProp3DAxisFollower::GetEnableViewAngleLOD)
    .function("SetViewAngleLODThreshold", &vtkProp3DAxisFollower::SetViewAngleLODThreshold)
    .function("GetViewAngleLODThresholdMinValue", &vtkProp3DAxisFollower::GetViewAngleLODThresholdMinValue)
    .function("GetViewAngleLODThresholdMaxValue", &vtkProp3DAxisFollower::GetViewAngleLODThresholdMaxValue)
    .function("GetViewAngleLODThreshold", &vtkProp3DAxisFollower::GetViewAngleLODThreshold)
    .function("GetScreenOffset", &vtkProp3DAxisFollower::GetScreenOffset)
    .function("SetScreenOffset", &vtkProp3DAxisFollower::SetScreenOffset)
    .function("SetScreenOffsetVector", emscripten::select_overload<void(vtkProp3DAxisFollower&, double, double)>([](vtkProp3DAxisFollower& self, double arg_0, double arg_1) -> void { return self.SetScreenOffsetVector( arg_0, arg_1); }))
    .function("ComputeMatrix", &vtkProp3DAxisFollower::ComputeMatrix)
    .function("ShallowCopy", &vtkProp3DAxisFollower::ShallowCopy, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkProp3DAxisFollower::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkProp3DAxisFollower::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("RenderVolumetricGeometry", &vtkProp3DAxisFollower::RenderVolumetricGeometry, emscripten::allow_raw_pointers())
    .function("SetViewport", &vtkProp3DAxisFollower::SetViewport, emscripten::allow_raw_pointers())
    .function("GetViewport", &vtkProp3DAxisFollower::GetViewport, emscripten::allow_raw_pointers());
}
