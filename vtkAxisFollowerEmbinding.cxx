// JavaScript wrapper for vtkAxisFollower with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkAxisFollowerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkAxisFollower.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAxisActor.h"
#include "vtkRenderer.h"
#include "vtkProp.h"
#include "vtkViewport.h"
#include "vtkCamera.h"
#include "vtkAxisFollower.h"

template<> void emscripten::internal::raw_destructor<vtkAxisFollower>(vtkAxisFollower * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAxisFollower_class) {
  emscripten::class_<vtkAxisFollower, emscripten::base<vtkFollower>>("vtkAxisFollower")
    .smart_ptr<vtkSmartPointer<vtkAxisFollower>>("vtkSmartPointer<vtkAxisFollower>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAxisFollower>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAxisFollower::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAxisFollower& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAxisFollower::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAxisFollower::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAxisFollower::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAxisFollower& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetAxis", &vtkAxisFollower::SetAxis, emscripten::allow_raw_pointers())
    .function("GetAxis", &vtkAxisFollower::GetAxis, emscripten::allow_raw_pointers())
    .function("SetAutoCenter", &vtkAxisFollower::SetAutoCenter)
    .function("GetAutoCenter", &vtkAxisFollower::GetAutoCenter)
    .function("AutoCenterOn", &vtkAxisFollower::AutoCenterOn)
    .function("AutoCenterOff", &vtkAxisFollower::AutoCenterOff)
    .function("SetEnableDistanceLOD", &vtkAxisFollower::SetEnableDistanceLOD)
    .function("GetEnableDistanceLOD", &vtkAxisFollower::GetEnableDistanceLOD)
    .function("SetDistanceLODThreshold", &vtkAxisFollower::SetDistanceLODThreshold)
    .function("GetDistanceLODThresholdMinValue", &vtkAxisFollower::GetDistanceLODThresholdMinValue)
    .function("GetDistanceLODThresholdMaxValue", &vtkAxisFollower::GetDistanceLODThresholdMaxValue)
    .function("GetDistanceLODThreshold", &vtkAxisFollower::GetDistanceLODThreshold)
    .function("SetEnableViewAngleLOD", &vtkAxisFollower::SetEnableViewAngleLOD)
    .function("GetEnableViewAngleLOD", &vtkAxisFollower::GetEnableViewAngleLOD)
    .function("SetViewAngleLODThreshold", &vtkAxisFollower::SetViewAngleLODThreshold)
    .function("GetViewAngleLODThresholdMinValue", &vtkAxisFollower::GetViewAngleLODThresholdMinValue)
    .function("GetViewAngleLODThresholdMaxValue", &vtkAxisFollower::GetViewAngleLODThresholdMaxValue)
    .function("GetViewAngleLODThreshold", &vtkAxisFollower::GetViewAngleLODThreshold)
    .function("GetScreenOffset", &vtkAxisFollower::GetScreenOffset)
    .function("SetScreenOffset", &vtkAxisFollower::SetScreenOffset)
    .function("SetScreenOffsetVector", emscripten::select_overload<void(vtkAxisFollower&, double, double)>([](vtkAxisFollower& self, double arg_0, double arg_1) -> void { return self.SetScreenOffsetVector( arg_0, arg_1); }))
    .function("Render", emscripten::select_overload<void(vtkAxisFollower&, vtkRenderer*)>([](vtkAxisFollower& self, vtkRenderer* arg_0) -> void { return self.Render( arg_0); }), emscripten::allow_raw_pointers())
    .function("ComputeMatrix", &vtkAxisFollower::ComputeMatrix)
    .function("ComputeTransformMatrix", &vtkAxisFollower::ComputeTransformMatrix, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkAxisFollower::ShallowCopy, emscripten::allow_raw_pointers());
}
