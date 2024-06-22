// JavaScript wrapper for vtkImageViewer2 with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionImage.js/vtkInteractionImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionImage.js/vtkImageViewer2Embinding.cxx \
 /home/jmh/github/vtk/Interaction/Image/vtkImageViewer2.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkRenderWindow.h"
#include "vtkRenderer.h"
#include "vtkImageActor.h"
#include "vtkImageMapToWindowLevelColors.h"
#include "vtkInteractorStyleImage.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkImageViewer2.h"

template<> void emscripten::internal::raw_destructor<vtkImageViewer2>(vtkImageViewer2 * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageViewer2_class) {
  emscripten::class_<vtkImageViewer2, emscripten::base<vtkObject>>("vtkImageViewer2")
    .smart_ptr<vtkSmartPointer<vtkImageViewer2>>("vtkSmartPointer<vtkImageViewer2>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageViewer2>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageViewer2::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageViewer2& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageViewer2::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageViewer2::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageViewer2::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageViewer2& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetWindowName", emscripten::optional_override([](vtkImageViewer2& self) -> std::string {  return self.GetWindowName();}))
    .function("Render", &vtkImageViewer2::Render)
    .function("SetInputData", &vtkImageViewer2::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkImageViewer2::GetInput, emscripten::allow_raw_pointers())
    .function("SetInputConnection", &vtkImageViewer2::SetInputConnection, emscripten::allow_raw_pointers())
    .function("GetSliceOrientation", &vtkImageViewer2::GetSliceOrientation)
    .function("SetSliceOrientation", &vtkImageViewer2::SetSliceOrientation)
    .function("SetSliceOrientationToXY", &vtkImageViewer2::SetSliceOrientationToXY)
    .function("SetSliceOrientationToYZ", &vtkImageViewer2::SetSliceOrientationToYZ)
    .function("SetSliceOrientationToXZ", &vtkImageViewer2::SetSliceOrientationToXZ)
    .function("GetSlice", &vtkImageViewer2::GetSlice)
    .function("SetSlice", &vtkImageViewer2::SetSlice)
    .function("UpdateDisplayExtent", &vtkImageViewer2::UpdateDisplayExtent)
    .function("GetSliceMin", &vtkImageViewer2::GetSliceMin)
    .function("GetSliceMax", &vtkImageViewer2::GetSliceMax)
    .function("GetSliceRange", emscripten::select_overload<std::uintptr_t(vtkImageViewer2&)>([](vtkImageViewer2& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetSliceRange()); }))
    .function("GetColorWindow", &vtkImageViewer2::GetColorWindow)
    .function("GetColorLevel", &vtkImageViewer2::GetColorLevel)
    .function("SetColorWindow", &vtkImageViewer2::SetColorWindow)
    .function("SetColorLevel", &vtkImageViewer2::SetColorLevel)
    .function("SetDisplayId", emscripten::optional_override([](vtkImageViewer2& self, std::uintptr_t arg_0) -> void {  return self.SetDisplayId(reinterpret_cast<void*>(arg_0));}))
    .function("SetWindowId", emscripten::optional_override([](vtkImageViewer2& self, std::uintptr_t arg_0) -> void {  return self.SetWindowId(reinterpret_cast<void*>(arg_0));}))
    .function("SetParentId", emscripten::optional_override([](vtkImageViewer2& self, std::uintptr_t arg_0) -> void {  return self.SetParentId(reinterpret_cast<void*>(arg_0));}))
    .function("SetPosition", emscripten::select_overload<void(vtkImageViewer2&, int, int)>([](vtkImageViewer2& self, int arg_0, int arg_1) -> void { return self.SetPosition( arg_0, arg_1); }))
    .function("SetSize", emscripten::select_overload<void(vtkImageViewer2&, int, int)>([](vtkImageViewer2& self, int arg_0, int arg_1) -> void { return self.SetSize( arg_0, arg_1); }))
    .function("GetRenderWindow", &vtkImageViewer2::GetRenderWindow, emscripten::allow_raw_pointers())
    .function("GetRenderer", &vtkImageViewer2::GetRenderer, emscripten::allow_raw_pointers())
    .function("GetImageActor", &vtkImageViewer2::GetImageActor, emscripten::allow_raw_pointers())
    .function("GetWindowLevel", &vtkImageViewer2::GetWindowLevel, emscripten::allow_raw_pointers())
    .function("GetInteractorStyle", &vtkImageViewer2::GetInteractorStyle, emscripten::allow_raw_pointers())
    .function("SetRenderWindow", &vtkImageViewer2::SetRenderWindow, emscripten::allow_raw_pointers())
    .function("SetRenderer", &vtkImageViewer2::SetRenderer, emscripten::allow_raw_pointers())
    .function("SetupInteractor", &vtkImageViewer2::SetupInteractor, emscripten::allow_raw_pointers())
    .function("SetOffScreenRendering", &vtkImageViewer2::SetOffScreenRendering)
    .function("GetOffScreenRendering", &vtkImageViewer2::GetOffScreenRendering)
    .function("OffScreenRenderingOn", &vtkImageViewer2::OffScreenRenderingOn)
    .function("OffScreenRenderingOff", &vtkImageViewer2::OffScreenRenderingOff);
}
EMSCRIPTEN_BINDINGS(vtkInteractionImage_vtkImageViewer2_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkImageViewer2_SLICE_ORIENTATION_YZ", vtkImageViewer2::SLICE_ORIENTATION_YZ },
      { "vtkImageViewer2_SLICE_ORIENTATION_XZ", vtkImageViewer2::SLICE_ORIENTATION_XZ },
      { "vtkImageViewer2_SLICE_ORIENTATION_XY", vtkImageViewer2::SLICE_ORIENTATION_XY },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
