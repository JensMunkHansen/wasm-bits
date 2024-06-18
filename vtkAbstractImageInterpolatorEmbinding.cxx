// JavaScript wrapper for vtkAbstractImageInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkAbstractImageInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkAbstractImageInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkAbstractImageInterpolator.h"

EMSCRIPTEN_BINDINGS(vtkImagingCore_vtkAbstractImageInterpolator_enums) {
}
EMSCRIPTEN_BINDINGS(vtkImagingCore_vtkAbstractImageInterpolator_0_1_constants) {
  const struct { const char *name; vtkImageBorderMode value; }
    constants[3] = {
      { "VTK_IMAGE_BORDER_CLAMP", VTK_IMAGE_BORDER_CLAMP },
      { "VTK_IMAGE_BORDER_REPEAT", VTK_IMAGE_BORDER_REPEAT },
      { "VTK_IMAGE_BORDER_MIRROR", VTK_IMAGE_BORDER_MIRROR },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
template<> void emscripten::internal::raw_destructor<vtkAbstractImageInterpolator>(vtkAbstractImageInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractImageInterpolator_class) {
  emscripten::class_<vtkAbstractImageInterpolator, emscripten::base<vtkObject>>("vtkAbstractImageInterpolator")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractImageInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractImageInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractImageInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractImageInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractImageInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractImageInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkAbstractImageInterpolator::Initialize, emscripten::allow_raw_pointers())
    .function("ReleaseData", &vtkAbstractImageInterpolator::ReleaseData)
    .function("DeepCopy", &vtkAbstractImageInterpolator::DeepCopy, emscripten::allow_raw_pointers())
    .function("Update", &vtkAbstractImageInterpolator::Update)
    .function("Interpolate", emscripten::select_overload<double(vtkAbstractImageInterpolator&, double, double, double, int)>([](vtkAbstractImageInterpolator& self, double arg_0, double arg_1, double arg_2, int arg_3) -> double { return self.Interpolate( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetOutValue", &vtkAbstractImageInterpolator::SetOutValue)
    .function("GetOutValue", &vtkAbstractImageInterpolator::GetOutValue)
    .function("SetTolerance", &vtkAbstractImageInterpolator::SetTolerance)
    .function("GetTolerance", &vtkAbstractImageInterpolator::GetTolerance)
    .function("SetComponentOffset", &vtkAbstractImageInterpolator::SetComponentOffset)
    .function("GetComponentOffset", &vtkAbstractImageInterpolator::GetComponentOffset)
    .function("SetComponentCount", &vtkAbstractImageInterpolator::SetComponentCount)
    .function("GetComponentCount", &vtkAbstractImageInterpolator::GetComponentCount)
    .function("ComputeNumberOfComponents", &vtkAbstractImageInterpolator::ComputeNumberOfComponents)
    .function("GetNumberOfComponents", &vtkAbstractImageInterpolator::GetNumberOfComponents)
    .function("SetBorderMode", &vtkAbstractImageInterpolator::SetBorderMode)
    .function("SetBorderModeToClamp", &vtkAbstractImageInterpolator::SetBorderModeToClamp)
    .function("SetBorderModeToRepeat", &vtkAbstractImageInterpolator::SetBorderModeToRepeat)
    .function("SetBorderModeToMirror", &vtkAbstractImageInterpolator::SetBorderModeToMirror)
    .function("GetBorderMode", &vtkAbstractImageInterpolator::GetBorderMode)
    .function("GetBorderModeAsString", emscripten::optional_override([](vtkAbstractImageInterpolator& self) -> std::string {  return self.GetBorderModeAsString();}))
    .function("SetSlidingWindow", &vtkAbstractImageInterpolator::SetSlidingWindow)
    .function("SlidingWindowOn", &vtkAbstractImageInterpolator::SlidingWindowOn)
    .function("SlidingWindowOff", &vtkAbstractImageInterpolator::SlidingWindowOff)
    .function("GetSlidingWindow", &vtkAbstractImageInterpolator::GetSlidingWindow);
}
