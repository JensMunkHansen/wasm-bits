// JavaScript wrapper for vtkCamera with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkCameraEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkCamera.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTransform.h"
#include "vtkMatrix4x4.h"
#include "vtkPerspectiveTransform.h"
#include "vtkRenderer.h"
#include "vtkHomogeneousTransform.h"
#include "vtkRect.h"
#include "vtkInformation.h"
#include "vtkCamera.h"

template<> void emscripten::internal::raw_destructor<vtkCamera>(vtkCamera * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCamera_class) {
  emscripten::class_<vtkCamera, emscripten::base<vtkObject>>("vtkCamera")
    .smart_ptr<vtkSmartPointer<vtkCamera>>("vtkSmartPointer<vtkCamera>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCamera>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCamera::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCamera& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCamera::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCamera::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCamera::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCamera& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPosition", emscripten::select_overload<void(vtkCamera&, double, double, double)>([](vtkCamera& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPosition( arg_0, arg_1, arg_2); }))
    .function("SetFocalPoint", emscripten::select_overload<void(vtkCamera&, double, double, double)>([](vtkCamera& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetFocalPoint( arg_0, arg_1, arg_2); }))
    .function("SetViewUp", emscripten::select_overload<void(vtkCamera&, double, double, double)>([](vtkCamera& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetViewUp( arg_0, arg_1, arg_2); }))
    .function("OrthogonalizeViewUp", &vtkCamera::OrthogonalizeViewUp)
    .function("SetDistance", &vtkCamera::SetDistance)
    .function("GetDistance", &vtkCamera::GetDistance)
    .function("Dolly", &vtkCamera::Dolly)
    .function("SetRoll", &vtkCamera::SetRoll)
    .function("GetRoll", &vtkCamera::GetRoll)
    .function("Roll", &vtkCamera::Roll)
    .function("Azimuth", &vtkCamera::Azimuth)
    .function("Yaw", &vtkCamera::Yaw)
    .function("Elevation", &vtkCamera::Elevation)
    .function("Pitch", &vtkCamera::Pitch)
    .function("SetParallelProjection", &vtkCamera::SetParallelProjection)
    .function("GetParallelProjection", &vtkCamera::GetParallelProjection)
    .function("ParallelProjectionOn", &vtkCamera::ParallelProjectionOn)
    .function("ParallelProjectionOff", &vtkCamera::ParallelProjectionOff)
    .function("SetUseHorizontalViewAngle", &vtkCamera::SetUseHorizontalViewAngle)
    .function("GetUseHorizontalViewAngle", &vtkCamera::GetUseHorizontalViewAngle)
    .function("UseHorizontalViewAngleOn", &vtkCamera::UseHorizontalViewAngleOn)
    .function("UseHorizontalViewAngleOff", &vtkCamera::UseHorizontalViewAngleOff)
    .function("SetViewAngle", &vtkCamera::SetViewAngle)
    .function("GetViewAngle", &vtkCamera::GetViewAngle)
    .function("SetParallelScale", &vtkCamera::SetParallelScale)
    .function("GetParallelScale", &vtkCamera::GetParallelScale)
    .function("Zoom", &vtkCamera::Zoom)
    .function("SetClippingRange", emscripten::select_overload<void(vtkCamera&, double, double)>([](vtkCamera& self, double arg_0, double arg_1) -> void { return self.SetClippingRange( arg_0, arg_1); }))
    .function("SetThickness", &vtkCamera::SetThickness)
    .function("GetThickness", &vtkCamera::GetThickness)
    .function("SetWindowCenter", &vtkCamera::SetWindowCenter)
    .function("SetObliqueAngles", &vtkCamera::SetObliqueAngles)
    .function("ApplyTransform", &vtkCamera::ApplyTransform, emscripten::allow_raw_pointers())
    .function("SetViewShear", emscripten::select_overload<void(vtkCamera&, double, double, double)>([](vtkCamera& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetViewShear( arg_0, arg_1, arg_2); }))
    .function("SetEyeAngle", &vtkCamera::SetEyeAngle)
    .function("GetEyeAngle", &vtkCamera::GetEyeAngle)
    .function("SetFocalDisk", &vtkCamera::SetFocalDisk)
    .function("GetFocalDisk", &vtkCamera::GetFocalDisk)
    .function("SetFocalDistance", &vtkCamera::SetFocalDistance)
    .function("GetFocalDistance", &vtkCamera::GetFocalDistance)
    .function("SetUseOffAxisProjection", &vtkCamera::SetUseOffAxisProjection)
    .function("GetUseOffAxisProjection", &vtkCamera::GetUseOffAxisProjection)
    .function("UseOffAxisProjectionOn", &vtkCamera::UseOffAxisProjectionOn)
    .function("UseOffAxisProjectionOff", &vtkCamera::UseOffAxisProjectionOff)
    .function("GetOffAxisClippingAdjustment", &vtkCamera::GetOffAxisClippingAdjustment)
    .function("SetScreenBottomLeft", emscripten::select_overload<void(vtkCamera&, double, double, double)>([](vtkCamera& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetScreenBottomLeft( arg_0, arg_1, arg_2); }))
    .function("SetScreenBottomRight", emscripten::select_overload<void(vtkCamera&, double, double, double)>([](vtkCamera& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetScreenBottomRight( arg_0, arg_1, arg_2); }))
    .function("SetScreenTopRight", emscripten::select_overload<void(vtkCamera&, double, double, double)>([](vtkCamera& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetScreenTopRight( arg_0, arg_1, arg_2); }))
    .function("SetEyeSeparation", &vtkCamera::SetEyeSeparation)
    .function("GetEyeSeparation", &vtkCamera::GetEyeSeparation)
    .function("SetEyeTransformMatrix", emscripten::select_overload<void(vtkCamera&, vtkMatrix4x4*)>([](vtkCamera& self, vtkMatrix4x4* arg_0) -> void { return self.SetEyeTransformMatrix( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetEyeTransformMatrix", &vtkCamera::GetEyeTransformMatrix, emscripten::allow_raw_pointers())
    .function("SetModelTransformMatrix", emscripten::select_overload<void(vtkCamera&, vtkMatrix4x4*)>([](vtkCamera& self, vtkMatrix4x4* arg_0) -> void { return self.SetModelTransformMatrix( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetModelTransformMatrix", &vtkCamera::GetModelTransformMatrix, emscripten::allow_raw_pointers())
    .function("GetModelViewTransformMatrix", &vtkCamera::GetModelViewTransformMatrix, emscripten::allow_raw_pointers())
    .function("GetModelViewTransformObject", &vtkCamera::GetModelViewTransformObject, emscripten::allow_raw_pointers())
    .function("GetViewTransformMatrix", &vtkCamera::GetViewTransformMatrix, emscripten::allow_raw_pointers())
    .function("GetViewTransformObject", &vtkCamera::GetViewTransformObject, emscripten::allow_raw_pointers())
    .function("SetExplicitProjectionTransformMatrix", &vtkCamera::SetExplicitProjectionTransformMatrix, emscripten::allow_raw_pointers())
    .function("GetExplicitProjectionTransformMatrix", &vtkCamera::GetExplicitProjectionTransformMatrix, emscripten::allow_raw_pointers())
    .function("SetUseExplicitProjectionTransformMatrix", &vtkCamera::SetUseExplicitProjectionTransformMatrix)
    .function("GetUseExplicitProjectionTransformMatrix", &vtkCamera::GetUseExplicitProjectionTransformMatrix)
    .function("UseExplicitProjectionTransformMatrixOn", &vtkCamera::UseExplicitProjectionTransformMatrixOn)
    .function("UseExplicitProjectionTransformMatrixOff", &vtkCamera::UseExplicitProjectionTransformMatrixOff)
    .function("SetExplicitAspectRatio", &vtkCamera::SetExplicitAspectRatio)
    .function("GetExplicitAspectRatio", &vtkCamera::GetExplicitAspectRatio)
    .function("SetUseExplicitAspectRatio", &vtkCamera::SetUseExplicitAspectRatio)
    .function("GetUseExplicitAspectRatio", &vtkCamera::GetUseExplicitAspectRatio)
    .function("UseExplicitAspectRatioOn", &vtkCamera::UseExplicitAspectRatioOn)
    .function("UseExplicitAspectRatioOff", &vtkCamera::UseExplicitAspectRatioOff)
    .function("GetProjectionTransformMatrix", emscripten::select_overload<vtkMatrix4x4*(vtkCamera&, double, double, double)>([](vtkCamera& self, double arg_0, double arg_1, double arg_2) -> vtkMatrix4x4* { return self.GetProjectionTransformMatrix( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetProjectionTransformMatrix", emscripten::select_overload<vtkMatrix4x4*(vtkCamera&, vtkRenderer*)>([](vtkCamera& self, vtkRenderer* arg_0) -> vtkMatrix4x4* { return self.GetProjectionTransformMatrix( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetProjectionTransformObject", &vtkCamera::GetProjectionTransformObject, emscripten::allow_raw_pointers())
    .function("GetCompositeProjectionTransformMatrix", &vtkCamera::GetCompositeProjectionTransformMatrix, emscripten::allow_raw_pointers())
    .function("SetUserViewTransform", &vtkCamera::SetUserViewTransform, emscripten::allow_raw_pointers())
    .function("GetUserViewTransform", &vtkCamera::GetUserViewTransform, emscripten::allow_raw_pointers())
    .function("SetUserTransform", &vtkCamera::SetUserTransform, emscripten::allow_raw_pointers())
    .function("GetUserTransform", &vtkCamera::GetUserTransform, emscripten::allow_raw_pointers())
    .function("Render", &vtkCamera::Render, emscripten::allow_raw_pointers())
    .function("GetViewingRaysMTime", &vtkCamera::GetViewingRaysMTime)
    .function("ViewingRaysModified", &vtkCamera::ViewingRaysModified)
    .function("UpdateIdealShiftScale", &vtkCamera::UpdateIdealShiftScale)
    .function("GetFocalPointScale", &vtkCamera::GetFocalPointScale)
    .function("GetNearPlaneScale", &vtkCamera::GetNearPlaneScale)
    .function("SetShiftScaleThreshold", &vtkCamera::SetShiftScaleThreshold)
    .function("GetShiftScaleThreshold", &vtkCamera::GetShiftScaleThreshold)
    .function("ComputeViewPlaneNormal", &vtkCamera::ComputeViewPlaneNormal)
    .function("GetCameraLightTransformMatrix", &vtkCamera::GetCameraLightTransformMatrix, emscripten::allow_raw_pointers())
    .function("UpdateViewport", &vtkCamera::UpdateViewport, emscripten::allow_raw_pointers())
    .function("GetStereo", &vtkCamera::GetStereo)
    .function("SetLeftEye", &vtkCamera::SetLeftEye)
    .function("GetLeftEye", &vtkCamera::GetLeftEye)
    .function("ShallowCopy", &vtkCamera::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkCamera::DeepCopy, emscripten::allow_raw_pointers())
    .function("SetFreezeFocalPoint", &vtkCamera::SetFreezeFocalPoint)
    .function("GetFreezeFocalPoint", &vtkCamera::GetFreezeFocalPoint)
    .function("SetUseScissor", &vtkCamera::SetUseScissor)
    .function("GetUseScissor", &vtkCamera::GetUseScissor)
    .function("SetScissorRect", &vtkCamera::SetScissorRect)
    .function("GetInformation", &vtkCamera::GetInformation, emscripten::allow_raw_pointers())
    .function("SetInformation", &vtkCamera::SetInformation, emscripten::allow_raw_pointers());
}
