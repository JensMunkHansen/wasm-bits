// JavaScript wrapper for vtkFixedPointRayCastImage with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkFixedPointRayCastImageEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkFixedPointRayCastImage.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFixedPointRayCastImage.h"

template<> void emscripten::internal::raw_destructor<vtkFixedPointRayCastImage>(vtkFixedPointRayCastImage * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFixedPointRayCastImage_class) {
  emscripten::class_<vtkFixedPointRayCastImage, emscripten::base<vtkObject>>("vtkFixedPointRayCastImage")
    .smart_ptr<vtkSmartPointer<vtkFixedPointRayCastImage>>("vtkSmartPointer<vtkFixedPointRayCastImage>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFixedPointRayCastImage>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFixedPointRayCastImage::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFixedPointRayCastImage& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFixedPointRayCastImage::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFixedPointRayCastImage::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFixedPointRayCastImage::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFixedPointRayCastImage& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetImage", emscripten::optional_override([](vtkFixedPointRayCastImage& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetImage()) / sizeof(unsigned short);}))
    .function("SetImageViewportSize", emscripten::select_overload<void(vtkFixedPointRayCastImage&, int, int)>([](vtkFixedPointRayCastImage& self, int arg_0, int arg_1) -> void { return self.SetImageViewportSize( arg_0, arg_1); }))
    .function("SetImageMemorySize", emscripten::select_overload<void(vtkFixedPointRayCastImage&, int, int)>([](vtkFixedPointRayCastImage& self, int arg_0, int arg_1) -> void { return self.SetImageMemorySize( arg_0, arg_1); }))
    .function("SetImageInUseSize", emscripten::select_overload<void(vtkFixedPointRayCastImage&, int, int)>([](vtkFixedPointRayCastImage& self, int arg_0, int arg_1) -> void { return self.SetImageInUseSize( arg_0, arg_1); }))
    .function("SetImageOrigin", emscripten::select_overload<void(vtkFixedPointRayCastImage&, int, int)>([](vtkFixedPointRayCastImage& self, int arg_0, int arg_1) -> void { return self.SetImageOrigin( arg_0, arg_1); }))
    .function("SetImageSampleDistance", &vtkFixedPointRayCastImage::SetImageSampleDistance)
    .function("GetImageSampleDistance", &vtkFixedPointRayCastImage::GetImageSampleDistance)
    .function("AllocateImage", &vtkFixedPointRayCastImage::AllocateImage)
    .function("ClearImage", &vtkFixedPointRayCastImage::ClearImage)
    .function("SetZBufferSize", emscripten::select_overload<void(vtkFixedPointRayCastImage&, int, int)>([](vtkFixedPointRayCastImage& self, int arg_0, int arg_1) -> void { return self.SetZBufferSize( arg_0, arg_1); }))
    .function("SetZBufferOrigin", emscripten::select_overload<void(vtkFixedPointRayCastImage&, int, int)>([](vtkFixedPointRayCastImage& self, int arg_0, int arg_1) -> void { return self.SetZBufferOrigin( arg_0, arg_1); }))
    .function("SetUseZBuffer", &vtkFixedPointRayCastImage::SetUseZBuffer)
    .function("GetUseZBufferMinValue", &vtkFixedPointRayCastImage::GetUseZBufferMinValue)
    .function("GetUseZBufferMaxValue", &vtkFixedPointRayCastImage::GetUseZBufferMaxValue)
    .function("GetUseZBuffer", &vtkFixedPointRayCastImage::GetUseZBuffer)
    .function("UseZBufferOn", &vtkFixedPointRayCastImage::UseZBufferOn)
    .function("UseZBufferOff", &vtkFixedPointRayCastImage::UseZBufferOff)
    .function("GetZBufferValue", &vtkFixedPointRayCastImage::GetZBufferValue)
    .function("GetZBuffer", emscripten::optional_override([](vtkFixedPointRayCastImage& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetZBuffer()) / sizeof(float);}))
    .function("AllocateZBuffer", &vtkFixedPointRayCastImage::AllocateZBuffer);
}
