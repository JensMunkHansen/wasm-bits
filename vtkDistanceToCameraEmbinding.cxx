// JavaScript wrapper for vtkDistanceToCamera with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkDistanceToCameraEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkDistanceToCamera.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkDistanceToCamera.h"

template<> void emscripten::internal::raw_destructor<vtkDistanceToCamera>(vtkDistanceToCamera * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDistanceToCamera_class) {
  emscripten::class_<vtkDistanceToCamera, emscripten::base<vtkPointSetAlgorithm>>("vtkDistanceToCamera")
    .smart_ptr<vtkSmartPointer<vtkDistanceToCamera>>("vtkSmartPointer<vtkDistanceToCamera>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDistanceToCamera>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDistanceToCamera::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDistanceToCamera& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDistanceToCamera::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDistanceToCamera::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDistanceToCamera::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDistanceToCamera& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRenderer", &vtkDistanceToCamera::SetRenderer, emscripten::allow_raw_pointers())
    .function("GetRenderer", &vtkDistanceToCamera::GetRenderer, emscripten::allow_raw_pointers())
    .function("SetScreenSize", &vtkDistanceToCamera::SetScreenSize)
    .function("GetScreenSize", &vtkDistanceToCamera::GetScreenSize)
    .function("SetScaling", &vtkDistanceToCamera::SetScaling)
    .function("GetScaling", &vtkDistanceToCamera::GetScaling)
    .function("ScalingOn", &vtkDistanceToCamera::ScalingOn)
    .function("ScalingOff", &vtkDistanceToCamera::ScalingOff)
    .function("SetDistanceArrayName", emscripten::optional_override([](vtkDistanceToCamera& self, const std::string & arg_0) -> void {  return self.SetDistanceArrayName( arg_0.c_str());}))
    .function("GetDistanceArrayName", emscripten::optional_override([](vtkDistanceToCamera& self) -> std::string {  return self.GetDistanceArrayName();}))
    .function("GetMTime", &vtkDistanceToCamera::GetMTime);
}
