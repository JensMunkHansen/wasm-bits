// JavaScript wrapper for vtkInteractorStyleImage with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractionStyle.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractorStyleImageEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Style/vtkInteractorStyleImage.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageProperty.h"
#include "vtkInteractorStyleImage.h"

EMSCRIPTEN_BINDINGS(vtkInteractionStyle_vtkInteractorStyleImage_0_1_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "VTKIS_WINDOW_LEVEL", 1024 },
      { "VTKIS_SLICE", 1025 },
      { "VTKIS_IMAGE2D", 2 },
      { "VTKIS_IMAGE3D", 3 },
      { "VTKIS_IMAGE_SLICING", 4 },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkInteractorStyleImage>(vtkInteractorStyleImage * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyleImage_class) {
  emscripten::class_<vtkInteractorStyleImage, emscripten::base<vtkInteractorStyleTrackballCamera>>("vtkInteractorStyleImage")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyleImage>>("vtkSmartPointer<vtkInteractorStyleImage>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkInteractorStyleImage>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleImage::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyleImage& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyleImage::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyleImage::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleImage::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyleImage& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("OnMouseMove", &vtkInteractorStyleImage::OnMouseMove)
    .function("OnLeftButtonDown", &vtkInteractorStyleImage::OnLeftButtonDown)
    .function("OnLeftButtonUp", &vtkInteractorStyleImage::OnLeftButtonUp)
    .function("OnMiddleButtonDown", &vtkInteractorStyleImage::OnMiddleButtonDown)
    .function("OnMiddleButtonUp", &vtkInteractorStyleImage::OnMiddleButtonUp)
    .function("OnRightButtonDown", &vtkInteractorStyleImage::OnRightButtonDown)
    .function("OnRightButtonUp", &vtkInteractorStyleImage::OnRightButtonUp)
    .function("OnChar", &vtkInteractorStyleImage::OnChar)
    .function("WindowLevel", &vtkInteractorStyleImage::WindowLevel)
    .function("Pick", &vtkInteractorStyleImage::Pick)
    .function("Slice", &vtkInteractorStyleImage::Slice)
    .function("StartWindowLevel", &vtkInteractorStyleImage::StartWindowLevel)
    .function("EndWindowLevel", &vtkInteractorStyleImage::EndWindowLevel)
    .function("StartPick", &vtkInteractorStyleImage::StartPick)
    .function("EndPick", &vtkInteractorStyleImage::EndPick)
    .function("StartSlice", &vtkInteractorStyleImage::StartSlice)
    .function("EndSlice", &vtkInteractorStyleImage::EndSlice)
    .function("SetInteractionMode", &vtkInteractorStyleImage::SetInteractionMode)
    .function("GetInteractionModeMinValue", &vtkInteractorStyleImage::GetInteractionModeMinValue)
    .function("GetInteractionModeMaxValue", &vtkInteractorStyleImage::GetInteractionModeMaxValue)
    .function("GetInteractionMode", &vtkInteractorStyleImage::GetInteractionMode)
    .function("SetInteractionModeToImage2D", &vtkInteractorStyleImage::SetInteractionModeToImage2D)
    .function("SetInteractionModeToImage3D", &vtkInteractorStyleImage::SetInteractionModeToImage3D)
    .function("SetInteractionModeToImageSlicing", &vtkInteractorStyleImage::SetInteractionModeToImageSlicing)
    .function("SetXViewRightVector", emscripten::select_overload<void(vtkInteractorStyleImage&, double, double, double)>([](vtkInteractorStyleImage& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetXViewRightVector( arg_0, arg_1, arg_2); }))
    .function("SetXViewUpVector", emscripten::select_overload<void(vtkInteractorStyleImage&, double, double, double)>([](vtkInteractorStyleImage& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetXViewUpVector( arg_0, arg_1, arg_2); }))
    .function("SetYViewRightVector", emscripten::select_overload<void(vtkInteractorStyleImage&, double, double, double)>([](vtkInteractorStyleImage& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetYViewRightVector( arg_0, arg_1, arg_2); }))
    .function("SetYViewUpVector", emscripten::select_overload<void(vtkInteractorStyleImage&, double, double, double)>([](vtkInteractorStyleImage& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetYViewUpVector( arg_0, arg_1, arg_2); }))
    .function("SetZViewRightVector", emscripten::select_overload<void(vtkInteractorStyleImage&, double, double, double)>([](vtkInteractorStyleImage& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetZViewRightVector( arg_0, arg_1, arg_2); }))
    .function("SetZViewUpVector", emscripten::select_overload<void(vtkInteractorStyleImage&, double, double, double)>([](vtkInteractorStyleImage& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetZViewUpVector( arg_0, arg_1, arg_2); }))
    .function("SetCurrentImageNumber", &vtkInteractorStyleImage::SetCurrentImageNumber)
    .function("GetCurrentImageNumber", &vtkInteractorStyleImage::GetCurrentImageNumber)
    .function("GetCurrentImageProperty", &vtkInteractorStyleImage::GetCurrentImageProperty, emscripten::allow_raw_pointers());
}
