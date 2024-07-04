// JavaScript wrapper for vtkOpenGLRenderWindow with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLRenderWindowEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLRenderWindow.h
*/
#include "vtkEmbindSmartPointerTraits.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnsignedCharArray.h"
#include "vtkFloatArray.h"
#include "vtkTextureObject.h"
#include "vtkOpenGLShaderCache.h"
#include "vtkOpenGLVertexBufferObjectCache.h"
#include "vtkOpenGLFramebufferObject.h"
#include "vtkTextureUnitManager.h"
#include "vtkOpenGLState.h"
#include "vtkOpenGLBufferObject.h"
#include "vtkWindow.h"
#include "vtkOpenGLRenderWindow.h"

EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkOpenGLRenderWindow_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkOpenGLRenderWindow>(vtkOpenGLRenderWindow * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLRenderWindow_class) {
  using FrameBlitModes=vtkOpenGLRenderWindow::FrameBlitModes;
  emscripten::class_<vtkOpenGLRenderWindow, emscripten::base<vtkRenderWindow>>("vtkOpenGLRenderWindow")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLRenderWindow::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLRenderWindow& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLRenderWindow::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLRenderWindow::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLRenderWindow::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLRenderWindow& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Start", &vtkOpenGLRenderWindow::Start)
    .function("Frame", &vtkOpenGLRenderWindow::Frame)
    .function("GetRenderingBackend", emscripten::optional_override([](vtkOpenGLRenderWindow& self) -> std::string {  return self.GetRenderingBackend();}))
    .class_function("SetGlobalMaximumNumberOfMultiSamples", &vtkOpenGLRenderWindow::SetGlobalMaximumNumberOfMultiSamples)
    .class_function("GetGlobalMaximumNumberOfMultiSamples", &vtkOpenGLRenderWindow::GetGlobalMaximumNumberOfMultiSamples)
    .function("GetPixelData", emscripten::select_overload<std::uintptr_t(vtkOpenGLRenderWindow&, int, int, int, int, int, int)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5)); }))
    .function("GetPixelData", emscripten::select_overload<int(vtkOpenGLRenderWindow&, int, int, int, int, int, vtkUnsignedCharArray*, int)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, vtkUnsignedCharArray* arg_5, int arg_6) -> int { return self.GetPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6); }), emscripten::allow_raw_pointers())
    .function("SetPixelData", emscripten::select_overload<int(vtkOpenGLRenderWindow&, int, int, int, int, std::uintptr_t, int, int)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, std::uintptr_t arg_4, int arg_5, int arg_6) -> int { return self.SetPixelData( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<unsigned char*>(arg_4 * sizeof(unsigned char)), arg_5, arg_6); }))
    .function("SetPixelData", emscripten::select_overload<int(vtkOpenGLRenderWindow&, int, int, int, int, vtkUnsignedCharArray*, int, int)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkUnsignedCharArray* arg_4, int arg_5, int arg_6) -> int { return self.SetPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6); }), emscripten::allow_raw_pointers())
    .function("GetRGBAPixelData", emscripten::select_overload<std::uintptr_t(vtkOpenGLRenderWindow&, int, int, int, int, int, int)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetRGBAPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5)); }))
    .function("GetRGBAPixelData", emscripten::select_overload<int(vtkOpenGLRenderWindow&, int, int, int, int, int, vtkFloatArray*, int)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, vtkFloatArray* arg_5, int arg_6) -> int { return self.GetRGBAPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6); }), emscripten::allow_raw_pointers())
    .function("SetRGBAPixelData", emscripten::select_overload<int(vtkOpenGLRenderWindow&, int, int, int, int, std::uintptr_t, int, int, int)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, std::uintptr_t arg_4, int arg_5, int arg_6, int arg_7) -> int { return self.SetRGBAPixelData( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<float*>(arg_4 * sizeof(float)), arg_5, arg_6, arg_7); }))
    .function("SetRGBAPixelData", emscripten::select_overload<int(vtkOpenGLRenderWindow&, int, int, int, int, vtkFloatArray*, int, int, int)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkFloatArray* arg_4, int arg_5, int arg_6, int arg_7) -> int { return self.SetRGBAPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7); }), emscripten::allow_raw_pointers())
    .function("ReleaseRGBAPixelData", emscripten::optional_override([](vtkOpenGLRenderWindow& self, std::uintptr_t arg_0) -> void {  return self.ReleaseRGBAPixelData(reinterpret_cast<float*>(arg_0 * sizeof(float)));}))
    .function("GetRGBACharPixelData", emscripten::select_overload<std::uintptr_t(vtkOpenGLRenderWindow&, int, int, int, int, int, int)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetRGBACharPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5)); }))
    .function("GetRGBACharPixelData", emscripten::select_overload<int(vtkOpenGLRenderWindow&, int, int, int, int, int, vtkUnsignedCharArray*, int)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, vtkUnsignedCharArray* arg_5, int arg_6) -> int { return self.GetRGBACharPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6); }), emscripten::allow_raw_pointers())
    .function("SetRGBACharPixelData", emscripten::select_overload<int(vtkOpenGLRenderWindow&, int, int, int, int, std::uintptr_t, int, int, int)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, std::uintptr_t arg_4, int arg_5, int arg_6, int arg_7) -> int { return self.SetRGBACharPixelData( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<unsigned char*>(arg_4 * sizeof(unsigned char)), arg_5, arg_6, arg_7); }))
    .function("SetRGBACharPixelData", emscripten::select_overload<int(vtkOpenGLRenderWindow&, int, int, int, int, vtkUnsignedCharArray*, int, int, int)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkUnsignedCharArray* arg_4, int arg_5, int arg_6, int arg_7) -> int { return self.SetRGBACharPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7); }), emscripten::allow_raw_pointers())
    .function("GetZbufferData", emscripten::select_overload<std::uintptr_t(vtkOpenGLRenderWindow&, int, int, int, int)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetZbufferData( arg_0, arg_1, arg_2, arg_3)); }))
    .function("GetZbufferData", emscripten::select_overload<int(vtkOpenGLRenderWindow&, int, int, int, int, std::uintptr_t)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, std::uintptr_t arg_4) -> int { return self.GetZbufferData( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<float*>(arg_4 * sizeof(float))); }))
    .function("GetZbufferData", emscripten::select_overload<int(vtkOpenGLRenderWindow&, int, int, int, int, vtkFloatArray*)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkFloatArray* arg_4) -> int { return self.GetZbufferData( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("SetZbufferData", emscripten::select_overload<int(vtkOpenGLRenderWindow&, int, int, int, int, std::uintptr_t)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, std::uintptr_t arg_4) -> int { return self.SetZbufferData( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<float*>(arg_4 * sizeof(float))); }))
    .function("SetZbufferData", emscripten::select_overload<int(vtkOpenGLRenderWindow&, int, int, int, int, vtkFloatArray*)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkFloatArray* arg_4) -> int { return self.SetZbufferData( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("ActivateTexture", &vtkOpenGLRenderWindow::ActivateTexture, emscripten::allow_raw_pointers())
    .function("DeactivateTexture", &vtkOpenGLRenderWindow::DeactivateTexture, emscripten::allow_raw_pointers())
    .function("GetTextureUnitForTexture", &vtkOpenGLRenderWindow::GetTextureUnitForTexture, emscripten::allow_raw_pointers())
    .function("GetDepthBufferSize", &vtkOpenGLRenderWindow::GetDepthBufferSize)
    .function("GetUsingSRGBColorSpace", &vtkOpenGLRenderWindow::GetUsingSRGBColorSpace)
    .function("GetColorBufferSizes", emscripten::optional_override([](vtkOpenGLRenderWindow& self, std::uintptr_t arg_0) -> int {  return self.GetColorBufferSizes(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .function("GetColorBufferInternalFormat", &vtkOpenGLRenderWindow::GetColorBufferInternalFormat)
    .function("OpenGLInit", &vtkOpenGLRenderWindow::OpenGLInit)
    .function("OpenGLInitState", &vtkOpenGLRenderWindow::OpenGLInitState)
    .function("OpenGLInitContext", &vtkOpenGLRenderWindow::OpenGLInitContext)
    .function("GetContextCreationTime", &vtkOpenGLRenderWindow::GetContextCreationTime)
    .function("GetShaderCache", &vtkOpenGLRenderWindow::GetShaderCache, emscripten::allow_raw_pointers())
    .function("GetVBOCache", &vtkOpenGLRenderWindow::GetVBOCache, emscripten::allow_raw_pointers())
    .function("GetRenderFramebuffer", &vtkOpenGLRenderWindow::GetRenderFramebuffer, emscripten::allow_raw_pointers())
    .function("GetDisplayFramebuffer", &vtkOpenGLRenderWindow::GetDisplayFramebuffer, emscripten::allow_raw_pointers())
    .function("GetTextureUnitManager", &vtkOpenGLRenderWindow::GetTextureUnitManager, emscripten::allow_raw_pointers())
    .function("WaitForCompletion", &vtkOpenGLRenderWindow::WaitForCompletion)
    .function("DrawPixels", emscripten::select_overload<void(vtkOpenGLRenderWindow&, int, int, int, int, int, int, std::uintptr_t)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, std::uintptr_t arg_6) -> void { return self.DrawPixels( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5,reinterpret_cast<void*>(arg_6)); }))
    .function("DrawPixels", emscripten::select_overload<void(vtkOpenGLRenderWindow&, int, int, int, int, int, int, int, int, int, int, int, int, std::uintptr_t)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7, int arg_8, int arg_9, int arg_10, int arg_11, std::uintptr_t arg_12) -> void { return self.DrawPixels( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8, arg_9, arg_10, arg_11,reinterpret_cast<void*>(arg_12)); }))
    .function("DrawPixels", emscripten::select_overload<void(vtkOpenGLRenderWindow&, int, int, int, int, std::uintptr_t)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, std::uintptr_t arg_4) -> void { return self.DrawPixels( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<void*>(arg_4)); }))
    .function("GetMaximumHardwareLineWidth", &vtkOpenGLRenderWindow::GetMaximumHardwareLineWidth)
    .function("IsPointSpriteBugPresent", &vtkOpenGLRenderWindow::IsPointSpriteBugPresent)
    .function("GetDefaultTextureInternalFormat", &vtkOpenGLRenderWindow::GetDefaultTextureInternalFormat)
    .function("GetOpenGLSupportMessage", &vtkOpenGLRenderWindow::GetOpenGLSupportMessage)
    .function("SupportsOpenGL", &vtkOpenGLRenderWindow::SupportsOpenGL)
    .function("ReportCapabilities", emscripten::optional_override([](vtkOpenGLRenderWindow& self) -> std::string {  return self.ReportCapabilities();}))
    .function("Initialize", &vtkOpenGLRenderWindow::Initialize)
    .function("RegisterGraphicsResources", &vtkOpenGLRenderWindow::RegisterGraphicsResources, emscripten::allow_raw_pointers())
    .function("UnregisterGraphicsResources", &vtkOpenGLRenderWindow::UnregisterGraphicsResources, emscripten::allow_raw_pointers())
    .function("PushContext", &vtkOpenGLRenderWindow::PushContext)
    .function("PopContext", &vtkOpenGLRenderWindow::PopContext)
    .function("InitializeFromCurrentContext", &vtkOpenGLRenderWindow::InitializeFromCurrentContext)
    .function("SetSwapControl", &vtkOpenGLRenderWindow::SetSwapControl)
    .function("GetState", &vtkOpenGLRenderWindow::GetState, emscripten::allow_raw_pointers())
    .function("GetTQuad2DVBO", &vtkOpenGLRenderWindow::GetTQuad2DVBO, emscripten::allow_raw_pointers())
    .function("GetNoiseTextureUnit", &vtkOpenGLRenderWindow::GetNoiseTextureUnit)
    .function("End", &vtkOpenGLRenderWindow::End)
    .function("Render", &vtkOpenGLRenderWindow::Render)
    .function("StereoMidpoint", &vtkOpenGLRenderWindow::StereoMidpoint)
    .function("GetBufferNeedsResolving", &vtkOpenGLRenderWindow::GetBufferNeedsResolving)
    .function("ReleaseGraphicsResources", &vtkOpenGLRenderWindow::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("BlitDisplayFramebuffer", emscripten::select_overload<void(vtkOpenGLRenderWindow&)>([](vtkOpenGLRenderWindow& self) -> void { return self.BlitDisplayFramebuffer(); }))
    .function("BlitDisplayFramebuffer", emscripten::select_overload<void(vtkOpenGLRenderWindow&, int, int, int, int, int, int, int, int, int, int, int)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7, int arg_8, int arg_9, int arg_10) -> void { return self.BlitDisplayFramebuffer( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8, arg_9, arg_10); }))
    .function("BlitDisplayFramebufferColorAndDepth", &vtkOpenGLRenderWindow::BlitDisplayFramebufferColorAndDepth)
    .function("BlitToRenderFramebuffer", emscripten::select_overload<void(vtkOpenGLRenderWindow&, bool)>([](vtkOpenGLRenderWindow& self, bool arg_0) -> void { return self.BlitToRenderFramebuffer( arg_0); }))
    .function("BlitToRenderFramebuffer", emscripten::select_overload<void(vtkOpenGLRenderWindow&, int, int, int, int, int, int, int, int, int, int)>([](vtkOpenGLRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7, int arg_8, int arg_9) -> void { return self.BlitToRenderFramebuffer( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8, arg_9); }))
    .function("SetFrameBlitMode", &vtkOpenGLRenderWindow::SetFrameBlitMode)
    .function("GetFrameBlitModeMinValue", &vtkOpenGLRenderWindow::GetFrameBlitModeMinValue)
    .function("GetFrameBlitModeMaxValue", &vtkOpenGLRenderWindow::GetFrameBlitModeMaxValue)
    .function("GetFrameBlitMode", &vtkOpenGLRenderWindow::GetFrameBlitMode)
    .function("SetFrameBlitModeToBlitToHardware", &vtkOpenGLRenderWindow::SetFrameBlitModeToBlitToHardware)
    .function("SetFrameBlitModeToBlitToCurrent", &vtkOpenGLRenderWindow::SetFrameBlitModeToBlitToCurrent)
    .function("SetFrameBlitModeToBlitToCurrentWithDepth", &vtkOpenGLRenderWindow::SetFrameBlitModeToBlitToCurrentWithDepth)
    .function("SetFrameBlitModeToNoBlit", &vtkOpenGLRenderWindow::SetFrameBlitModeToNoBlit)
    .function("SetFramebufferFlipY", &vtkOpenGLRenderWindow::SetFramebufferFlipY)
    .function("GetFramebufferFlipY", &vtkOpenGLRenderWindow::GetFramebufferFlipY)
    .function("FramebufferFlipYOn", &vtkOpenGLRenderWindow::FramebufferFlipYOn)
    .function("FramebufferFlipYOff", &vtkOpenGLRenderWindow::FramebufferFlipYOff)
    .function("SetRenderBufferTargetDepthSize", &vtkOpenGLRenderWindow::SetRenderBufferTargetDepthSize)
    .function("GetRenderBufferTargetDepthSize", &vtkOpenGLRenderWindow::GetRenderBufferTargetDepthSize)
    .function("TextureDepthBlit", emscripten::select_overload<void(vtkOpenGLRenderWindow&, vtkTextureObject*)>([](vtkOpenGLRenderWindow& self, vtkTextureObject* arg_0) -> void { return self.TextureDepthBlit( arg_0); }), emscripten::allow_raw_pointers())
    .function("TextureDepthBlit", emscripten::select_overload<void(vtkOpenGLRenderWindow&, vtkTextureObject*, int, int, int, int)>([](vtkOpenGLRenderWindow& self, vtkTextureObject* arg_0, int arg_1, int arg_2, int arg_3, int arg_4) -> void { return self.TextureDepthBlit( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("TextureDepthBlit", emscripten::select_overload<void(vtkOpenGLRenderWindow&, vtkTextureObject*, int, int, int, int, int, int, int, int)>([](vtkOpenGLRenderWindow& self, vtkTextureObject* arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7, int arg_8) -> void { return self.TextureDepthBlit( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8); }), emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkOpenGLRenderWindow_0_2_constants) {
    typedef vtkOpenGLRenderWindow::FrameBlitModes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkOpenGLRenderWindow_FrameBlitModes_BlitToHardware", vtkOpenGLRenderWindow::BlitToHardware },
      { "vtkOpenGLRenderWindow_FrameBlitModes_BlitToCurrent", vtkOpenGLRenderWindow::BlitToCurrent },
      { "vtkOpenGLRenderWindow_FrameBlitModes_BlitToCurrentWithDepth", vtkOpenGLRenderWindow::BlitToCurrentWithDepth },
      { "vtkOpenGLRenderWindow_FrameBlitModes_NoBlit", vtkOpenGLRenderWindow::NoBlit },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
