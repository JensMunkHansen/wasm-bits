// JavaScript wrapper for vtkRenderWindowInteractor3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderWindowInteractor3DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkRenderWindowInteractor3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMatrix4x4.h"
#include "vtkEventData.h"
#include "vtkCamera.h"
#include "vtkRenderWindowInteractor3D.h"

template<> void emscripten::internal::raw_destructor<vtkRenderWindowInteractor3D>(vtkRenderWindowInteractor3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRenderWindowInteractor3D_class) {
  emscripten::class_<vtkRenderWindowInteractor3D, emscripten::base<vtkRenderWindowInteractor>>("vtkRenderWindowInteractor3D")
    .smart_ptr<vtkSmartPointer<vtkRenderWindowInteractor3D>>("vtkSmartPointer<vtkRenderWindowInteractor3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRenderWindowInteractor3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderWindowInteractor3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRenderWindowInteractor3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRenderWindowInteractor3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRenderWindowInteractor3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderWindowInteractor3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRenderWindowInteractor3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Enable", &vtkRenderWindowInteractor3D::Enable)
    .function("Disable", &vtkRenderWindowInteractor3D::Disable)
    .function("GetWorldEventPosition", emscripten::optional_override([](vtkRenderWindowInteractor3D& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetWorldEventPosition( arg_0)) / sizeof(double);}))
    .function("GetLastWorldEventPosition", emscripten::optional_override([](vtkRenderWindowInteractor3D& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetLastWorldEventPosition( arg_0)) / sizeof(double);}))
    .function("GetWorldEventOrientation", emscripten::optional_override([](vtkRenderWindowInteractor3D& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetWorldEventOrientation( arg_0)) / sizeof(double);}))
    .function("GetLastWorldEventOrientation", emscripten::optional_override([](vtkRenderWindowInteractor3D& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetLastWorldEventOrientation( arg_0)) / sizeof(double);}))
    .function("GetWorldEventPose", &vtkRenderWindowInteractor3D::GetWorldEventPose, emscripten::allow_raw_pointers())
    .function("GetLastWorldEventPose", &vtkRenderWindowInteractor3D::GetLastWorldEventPose, emscripten::allow_raw_pointers())
    .function("SetPhysicalEventPosition", &vtkRenderWindowInteractor3D::SetPhysicalEventPosition)
    .function("SetPhysicalEventPose", &vtkRenderWindowInteractor3D::SetPhysicalEventPose, emscripten::allow_raw_pointers())
    .function("GetPhysicalEventPose", &vtkRenderWindowInteractor3D::GetPhysicalEventPose, emscripten::allow_raw_pointers())
    .function("GetLastPhysicalEventPose", &vtkRenderWindowInteractor3D::GetLastPhysicalEventPose, emscripten::allow_raw_pointers())
    .function("GetStartingPhysicalEventPose", &vtkRenderWindowInteractor3D::GetStartingPhysicalEventPose, emscripten::allow_raw_pointers())
    .function("GetStartingPhysicalToWorldMatrix", &vtkRenderWindowInteractor3D::GetStartingPhysicalToWorldMatrix, emscripten::allow_raw_pointers())
    .function("SetStartingPhysicalToWorldMatrix", &vtkRenderWindowInteractor3D::SetStartingPhysicalToWorldMatrix, emscripten::allow_raw_pointers())
    .function("SetStartingPhysicalEventPose", &vtkRenderWindowInteractor3D::SetStartingPhysicalEventPose, emscripten::allow_raw_pointers())
    .function("SetWorldEventPosition", &vtkRenderWindowInteractor3D::SetWorldEventPosition)
    .function("SetWorldEventOrientation", &vtkRenderWindowInteractor3D::SetWorldEventOrientation)
    .function("SetWorldEventPose", &vtkRenderWindowInteractor3D::SetWorldEventPose, emscripten::allow_raw_pointers())
    .function("RightButtonPressEvent", &vtkRenderWindowInteractor3D::RightButtonPressEvent)
    .function("RightButtonReleaseEvent", &vtkRenderWindowInteractor3D::RightButtonReleaseEvent)
    .function("MiddleButtonPressEvent", &vtkRenderWindowInteractor3D::MiddleButtonPressEvent)
    .function("MiddleButtonReleaseEvent", &vtkRenderWindowInteractor3D::MiddleButtonReleaseEvent)
    .function("SetPhysicalViewDirection", &vtkRenderWindowInteractor3D::SetPhysicalViewDirection)
    .function("GetPhysicalViewDirection", emscripten::optional_override([](vtkRenderWindowInteractor3D& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPhysicalViewDirection()) / sizeof(double);}))
    .function("SetPhysicalViewUp", &vtkRenderWindowInteractor3D::SetPhysicalViewUp)
    .function("GetPhysicalViewUp", emscripten::optional_override([](vtkRenderWindowInteractor3D& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPhysicalViewUp()) / sizeof(double);}))
    .function("SetPhysicalTranslation", &vtkRenderWindowInteractor3D::SetPhysicalTranslation, emscripten::allow_raw_pointers())
    .function("GetPhysicalTranslation", emscripten::optional_override([](vtkRenderWindowInteractor3D& self, vtkCamera* arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPhysicalTranslation( arg_0)) / sizeof(double);}), emscripten::allow_raw_pointers())
    .function("SetPhysicalScale", &vtkRenderWindowInteractor3D::SetPhysicalScale)
    .function("GetPhysicalScale", &vtkRenderWindowInteractor3D::GetPhysicalScale);
}
