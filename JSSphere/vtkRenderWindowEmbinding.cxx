// JavaScript wrapper for vtkRenderWindow with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderWindowEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkRenderWindow.h
*/
#include "vtkEmbindSmartPointerTraits.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkRenderTimerLog.h"
#include "vtkRendererCollection.h"
#include "vtkCollection.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkUnsignedCharArray.h"
#include "vtkFloatArray.h"
#include "vtkMatrix4x4.h"
#include "vtkEventData.h"
#include "vtkRenderWindow.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkRenderWindow_0_1_constants) {
  const struct { const char *name; int value; }
    constants[24] = {
      { "VTK_STEREO_CRYSTAL_EYES", 1 },
      { "VTK_STEREO_RED_BLUE", 2 },
      { "VTK_STEREO_INTERLACED", 3 },
      { "VTK_STEREO_LEFT", 4 },
      { "VTK_STEREO_RIGHT", 5 },
      { "VTK_STEREO_DRESDEN", 6 },
      { "VTK_STEREO_ANAGLYPH", 7 },
      { "VTK_STEREO_CHECKERBOARD", 8 },
      { "VTK_STEREO_SPLITVIEWPORT_HORIZONTAL", 9 },
      { "VTK_STEREO_FAKE", 10 },
      { "VTK_STEREO_EMULATE", 11 },
      { "VTK_STEREO_ZSPACE_INSPIRE", 12 },
      { "VTK_CURSOR_DEFAULT", 0 },
      { "VTK_CURSOR_ARROW", 1 },
      { "VTK_CURSOR_SIZENE", 2 },
      { "VTK_CURSOR_SIZENW", 3 },
      { "VTK_CURSOR_SIZESW", 4 },
      { "VTK_CURSOR_SIZESE", 5 },
      { "VTK_CURSOR_SIZENS", 6 },
      { "VTK_CURSOR_SIZEWE", 7 },
      { "VTK_CURSOR_SIZEALL", 8 },
      { "VTK_CURSOR_HAND", 9 },
      { "VTK_CURSOR_CROSSHAIR", 10 },
      { "VTK_CURSOR_CUSTOM", 11 },
  };
  for (int c = 0; c < 24; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkRenderWindow>(vtkRenderWindow * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRenderWindow_class) {
  emscripten::class_<vtkRenderWindow, emscripten::base<vtkWindow>>("vtkRenderWindow")
    .smart_ptr<vtkSmartPointer<vtkRenderWindow>>("vtkSmartPointer<vtkRenderWindow>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRenderWindow>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderWindow::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRenderWindow& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRenderWindow::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRenderWindow::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderWindow::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRenderWindow& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddRenderer", &vtkRenderWindow::AddRenderer, emscripten::allow_raw_pointers())
    .function("RemoveRenderer", &vtkRenderWindow::RemoveRenderer, emscripten::allow_raw_pointers())
    .function("HasRenderer", &vtkRenderWindow::HasRenderer, emscripten::allow_raw_pointers())
    .class_function("GetRenderLibrary", emscripten::optional_override([]() -> std::string {  return vtkRenderWindow::GetRenderLibrary();}))
    .function("GetRenderingBackend", emscripten::optional_override([](vtkRenderWindow& self) -> std::string {  return self.GetRenderingBackend();}))
    .function("GetRenderTimer", &vtkRenderWindow::GetRenderTimer, emscripten::allow_raw_pointers())
    .function("GetRenderers", &vtkRenderWindow::GetRenderers, emscripten::allow_raw_pointers())
    .function("CaptureGL2PSSpecialProps", &vtkRenderWindow::CaptureGL2PSSpecialProps, emscripten::allow_raw_pointers())
    .function("GetCapturingGL2PSSpecialProps", &vtkRenderWindow::GetCapturingGL2PSSpecialProps)
    .function("Render", &vtkRenderWindow::Render)
    .function("Start", &vtkRenderWindow::Start)
    .function("End", &vtkRenderWindow::End)
    .function("Finalize", &vtkRenderWindow::Finalize)
    .function("Frame", &vtkRenderWindow::Frame)
    .function("WaitForCompletion", &vtkRenderWindow::WaitForCompletion)
    .function("CopyResultFrame", &vtkRenderWindow::CopyResultFrame)
    .function("MakeRenderWindowInteractor", &vtkRenderWindow::MakeRenderWindowInteractor, emscripten::allow_raw_pointers())
    .function("HideCursor", &vtkRenderWindow::HideCursor)
    .function("ShowCursor", &vtkRenderWindow::ShowCursor)
    .function("SetCursorPosition", &vtkRenderWindow::SetCursorPosition)
    .function("SetCurrentCursor", &vtkRenderWindow::SetCurrentCursor)
    .function("GetCurrentCursor", &vtkRenderWindow::GetCurrentCursor)
    .function("SetCursorFileName", emscripten::optional_override([](vtkRenderWindow& self, const std::string & arg_0) -> void {  return self.SetCursorFileName( arg_0.c_str());}))
    .function("GetCursorFileName", emscripten::optional_override([](vtkRenderWindow& self) -> std::string {  return self.GetCursorFileName();}))
    .function("SetFullScreen", &vtkRenderWindow::SetFullScreen)
    .function("GetFullScreen", &vtkRenderWindow::GetFullScreen)
    .function("FullScreenOn", &vtkRenderWindow::FullScreenOn)
    .function("FullScreenOff", &vtkRenderWindow::FullScreenOff)
    .function("SetBorders", &vtkRenderWindow::SetBorders)
    .function("GetBorders", &vtkRenderWindow::GetBorders)
    .function("BordersOn", &vtkRenderWindow::BordersOn)
    .function("BordersOff", &vtkRenderWindow::BordersOff)
    .function("GetStereoCapableWindow", &vtkRenderWindow::GetStereoCapableWindow)
    .function("StereoCapableWindowOn", &vtkRenderWindow::StereoCapableWindowOn)
    .function("StereoCapableWindowOff", &vtkRenderWindow::StereoCapableWindowOff)
    .function("SetStereoCapableWindow", &vtkRenderWindow::SetStereoCapableWindow)
    .function("GetStereoRender", &vtkRenderWindow::GetStereoRender)
    .function("SetStereoRender", &vtkRenderWindow::SetStereoRender)
    .function("StereoRenderOn", &vtkRenderWindow::StereoRenderOn)
    .function("StereoRenderOff", &vtkRenderWindow::StereoRenderOff)
    .function("SetAlphaBitPlanes", &vtkRenderWindow::SetAlphaBitPlanes)
    .function("GetAlphaBitPlanes", &vtkRenderWindow::GetAlphaBitPlanes)
    .function("AlphaBitPlanesOn", &vtkRenderWindow::AlphaBitPlanesOn)
    .function("AlphaBitPlanesOff", &vtkRenderWindow::AlphaBitPlanesOff)
    .function("SetPointSmoothing", &vtkRenderWindow::SetPointSmoothing)
    .function("GetPointSmoothing", &vtkRenderWindow::GetPointSmoothing)
    .function("PointSmoothingOn", &vtkRenderWindow::PointSmoothingOn)
    .function("PointSmoothingOff", &vtkRenderWindow::PointSmoothingOff)
    .function("SetLineSmoothing", &vtkRenderWindow::SetLineSmoothing)
    .function("GetLineSmoothing", &vtkRenderWindow::GetLineSmoothing)
    .function("LineSmoothingOn", &vtkRenderWindow::LineSmoothingOn)
    .function("LineSmoothingOff", &vtkRenderWindow::LineSmoothingOff)
    .function("SetPolygonSmoothing", &vtkRenderWindow::SetPolygonSmoothing)
    .function("GetPolygonSmoothing", &vtkRenderWindow::GetPolygonSmoothing)
    .function("PolygonSmoothingOn", &vtkRenderWindow::PolygonSmoothingOn)
    .function("PolygonSmoothingOff", &vtkRenderWindow::PolygonSmoothingOff)
    .function("GetStereoType", &vtkRenderWindow::GetStereoType)
    .function("SetStereoType", &vtkRenderWindow::SetStereoType)
    .function("SetStereoTypeToCrystalEyes", &vtkRenderWindow::SetStereoTypeToCrystalEyes)
    .function("SetStereoTypeToRedBlue", &vtkRenderWindow::SetStereoTypeToRedBlue)
    .function("SetStereoTypeToInterlaced", &vtkRenderWindow::SetStereoTypeToInterlaced)
    .function("SetStereoTypeToLeft", &vtkRenderWindow::SetStereoTypeToLeft)
    .function("SetStereoTypeToRight", &vtkRenderWindow::SetStereoTypeToRight)
    .function("SetStereoTypeToDresden", &vtkRenderWindow::SetStereoTypeToDresden)
    .function("SetStereoTypeToAnaglyph", &vtkRenderWindow::SetStereoTypeToAnaglyph)
    .function("SetStereoTypeToCheckerboard", &vtkRenderWindow::SetStereoTypeToCheckerboard)
    .function("SetStereoTypeToSplitViewportHorizontal", &vtkRenderWindow::SetStereoTypeToSplitViewportHorizontal)
    .function("SetStereoTypeToFake", &vtkRenderWindow::SetStereoTypeToFake)
    .function("SetStereoTypeToEmulate", &vtkRenderWindow::SetStereoTypeToEmulate)
    .function("GetStereoTypeAsString", emscripten::select_overload<std::string(vtkRenderWindow&)>([](vtkRenderWindow& self) -> std::string { return self.GetStereoTypeAsString(); }))
    .class_function("GetStereoTypeAsString", emscripten::select_overload<std::string( int)>([]( int arg_0) -> std::string { return vtkRenderWindow::GetStereoTypeAsString( arg_0); }))
    .function("StereoUpdate", &vtkRenderWindow::StereoUpdate)
    .function("StereoMidpoint", &vtkRenderWindow::StereoMidpoint)
    .function("StereoRenderComplete", &vtkRenderWindow::StereoRenderComplete)
    .function("SetAnaglyphColorSaturation", &vtkRenderWindow::SetAnaglyphColorSaturation)
    .function("GetAnaglyphColorSaturationMinValue", &vtkRenderWindow::GetAnaglyphColorSaturationMinValue)
    .function("GetAnaglyphColorSaturationMaxValue", &vtkRenderWindow::GetAnaglyphColorSaturationMaxValue)
    .function("GetAnaglyphColorSaturation", &vtkRenderWindow::GetAnaglyphColorSaturation)
    .function("SetAnaglyphColorMask", emscripten::select_overload<void(vtkRenderWindow&, int, int)>([](vtkRenderWindow& self, int arg_0, int arg_1) -> void { return self.SetAnaglyphColorMask( arg_0, arg_1); }))
    .function("WindowRemap", &vtkRenderWindow::WindowRemap)
    .function("SetSwapBuffers", &vtkRenderWindow::SetSwapBuffers)
    .function("GetSwapBuffers", &vtkRenderWindow::GetSwapBuffers)
    .function("SwapBuffersOn", &vtkRenderWindow::SwapBuffersOn)
    .function("SwapBuffersOff", &vtkRenderWindow::SwapBuffersOff)
    .function("SetPixelData", emscripten::select_overload<int(vtkRenderWindow&, int, int, int, int, std::uintptr_t, int, int)>([](vtkRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, std::uintptr_t arg_4, int arg_5, int arg_6) -> int { return self.SetPixelData( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<unsigned char*>(arg_4 * sizeof(unsigned char)), arg_5, arg_6); }))
    .function("SetPixelData", emscripten::select_overload<int(vtkRenderWindow&, int, int, int, int, vtkUnsignedCharArray*, int, int)>([](vtkRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkUnsignedCharArray* arg_4, int arg_5, int arg_6) -> int { return self.SetPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6); }), emscripten::allow_raw_pointers())
    .function("GetRGBAPixelData", emscripten::select_overload<std::uintptr_t(vtkRenderWindow&, int, int, int, int, int, int)>([](vtkRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetRGBAPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5)); }))
    .function("GetRGBAPixelData", emscripten::select_overload<int(vtkRenderWindow&, int, int, int, int, int, vtkFloatArray*, int)>([](vtkRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, vtkFloatArray* arg_5, int arg_6) -> int { return self.GetRGBAPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6); }), emscripten::allow_raw_pointers())
    .function("SetRGBAPixelData", emscripten::select_overload<int(vtkRenderWindow&, int, int, int, int, std::uintptr_t, int, int, int)>([](vtkRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, std::uintptr_t arg_4, int arg_5, int arg_6, int arg_7) -> int { return self.SetRGBAPixelData( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<float*>(arg_4 * sizeof(float)), arg_5, arg_6, arg_7); }))
    .function("SetRGBAPixelData", emscripten::select_overload<int(vtkRenderWindow&, int, int, int, int, vtkFloatArray*, int, int, int)>([](vtkRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkFloatArray* arg_4, int arg_5, int arg_6, int arg_7) -> int { return self.SetRGBAPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7); }), emscripten::allow_raw_pointers())
    .function("ReleaseRGBAPixelData", emscripten::optional_override([](vtkRenderWindow& self, std::uintptr_t arg_0) -> void {  return self.ReleaseRGBAPixelData(reinterpret_cast<float*>(arg_0 * sizeof(float)));}))
    .function("GetRGBACharPixelData", emscripten::select_overload<std::uintptr_t(vtkRenderWindow&, int, int, int, int, int, int)>([](vtkRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetRGBACharPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5)); }))
    .function("GetRGBACharPixelData", emscripten::select_overload<int(vtkRenderWindow&, int, int, int, int, int, vtkUnsignedCharArray*, int)>([](vtkRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, vtkUnsignedCharArray* arg_5, int arg_6) -> int { return self.GetRGBACharPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6); }), emscripten::allow_raw_pointers())
    .function("SetRGBACharPixelData", emscripten::select_overload<int(vtkRenderWindow&, int, int, int, int, std::uintptr_t, int, int, int)>([](vtkRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, std::uintptr_t arg_4, int arg_5, int arg_6, int arg_7) -> int { return self.SetRGBACharPixelData( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<unsigned char*>(arg_4 * sizeof(unsigned char)), arg_5, arg_6, arg_7); }))
    .function("SetRGBACharPixelData", emscripten::select_overload<int(vtkRenderWindow&, int, int, int, int, vtkUnsignedCharArray*, int, int, int)>([](vtkRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkUnsignedCharArray* arg_4, int arg_5, int arg_6, int arg_7) -> int { return self.SetRGBACharPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7); }), emscripten::allow_raw_pointers())
    .function("GetZbufferData", emscripten::select_overload<std::uintptr_t(vtkRenderWindow&, int, int, int, int)>([](vtkRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetZbufferData( arg_0, arg_1, arg_2, arg_3)); }))
    .function("GetZbufferData", emscripten::select_overload<int(vtkRenderWindow&, int, int, int, int, std::uintptr_t)>([](vtkRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, std::uintptr_t arg_4) -> int { return self.GetZbufferData( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<float*>(arg_4 * sizeof(float))); }))
    .function("GetZbufferData", emscripten::select_overload<int(vtkRenderWindow&, int, int, int, int, vtkFloatArray*)>([](vtkRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkFloatArray* arg_4) -> int { return self.GetZbufferData( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("SetZbufferData", emscripten::select_overload<int(vtkRenderWindow&, int, int, int, int, std::uintptr_t)>([](vtkRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, std::uintptr_t arg_4) -> int { return self.SetZbufferData( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<float*>(arg_4 * sizeof(float))); }))
    .function("SetZbufferData", emscripten::select_overload<int(vtkRenderWindow&, int, int, int, int, vtkFloatArray*)>([](vtkRenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkFloatArray* arg_4) -> int { return self.SetZbufferData( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("GetZbufferDataAtPoint", &vtkRenderWindow::GetZbufferDataAtPoint)
    .function("GetNeverRendered", &vtkRenderWindow::GetNeverRendered)
    .function("GetAbortRender", &vtkRenderWindow::GetAbortRender)
    .function("SetAbortRender", &vtkRenderWindow::SetAbortRender)
    .function("GetInAbortCheck", &vtkRenderWindow::GetInAbortCheck)
    .function("SetInAbortCheck", &vtkRenderWindow::SetInAbortCheck)
    .function("CheckAbortStatus", &vtkRenderWindow::CheckAbortStatus)
    .function("GetEventPending", &vtkRenderWindow::GetEventPending)
    .function("CheckInRenderStatus", &vtkRenderWindow::CheckInRenderStatus)
    .function("ClearInRenderStatus", &vtkRenderWindow::ClearInRenderStatus)
    .function("SetDesiredUpdateRate", &vtkRenderWindow::SetDesiredUpdateRate)
    .function("GetDesiredUpdateRate", &vtkRenderWindow::GetDesiredUpdateRate)
    .function("GetNumberOfLayers", &vtkRenderWindow::GetNumberOfLayers)
    .function("SetNumberOfLayers", &vtkRenderWindow::SetNumberOfLayers)
    .function("GetNumberOfLayersMinValue", &vtkRenderWindow::GetNumberOfLayersMinValue)
    .function("GetNumberOfLayersMaxValue", &vtkRenderWindow::GetNumberOfLayersMaxValue)
    .function("GetInteractor", &vtkRenderWindow::GetInteractor, emscripten::allow_raw_pointers())
    .function("SetInteractor", &vtkRenderWindow::SetInteractor, emscripten::allow_raw_pointers())
    .function("SetDisplayId", emscripten::optional_override([](vtkRenderWindow& self, std::uintptr_t arg_0) -> void {  return self.SetDisplayId(reinterpret_cast<void*>(arg_0));}))
    .function("SetWindowId", emscripten::optional_override([](vtkRenderWindow& self, std::uintptr_t arg_0) -> void {  return self.SetWindowId(reinterpret_cast<void*>(arg_0));}))
    .function("SetNextWindowId", emscripten::optional_override([](vtkRenderWindow& self, std::uintptr_t arg_0) -> void {  return self.SetNextWindowId(reinterpret_cast<void*>(arg_0));}))
    .function("SetParentId", emscripten::optional_override([](vtkRenderWindow& self, std::uintptr_t arg_0) -> void {  return self.SetParentId(reinterpret_cast<void*>(arg_0));}))
    .function("GetGenericDisplayId", emscripten::optional_override([](vtkRenderWindow& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetGenericDisplayId());}))
    .function("GetGenericWindowId", emscripten::optional_override([](vtkRenderWindow& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetGenericWindowId());}))
    .function("GetGenericParentId", emscripten::optional_override([](vtkRenderWindow& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetGenericParentId());}))
    .function("GetGenericContext", emscripten::optional_override([](vtkRenderWindow& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetGenericContext());}))
    .function("GetGenericDrawable", emscripten::optional_override([](vtkRenderWindow& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetGenericDrawable());}))
    .function("SetWindowInfo", emscripten::optional_override([](vtkRenderWindow& self, const std::string & arg_0) -> void {  return self.SetWindowInfo( arg_0.c_str());}))
    .function("SetNextWindowInfo", emscripten::optional_override([](vtkRenderWindow& self, const std::string & arg_0) -> void {  return self.SetNextWindowInfo( arg_0.c_str());}))
    .function("SetParentInfo", emscripten::optional_override([](vtkRenderWindow& self, const std::string & arg_0) -> void {  return self.SetParentInfo( arg_0.c_str());}))
    .function("InitializeFromCurrentContext", &vtkRenderWindow::InitializeFromCurrentContext)
    .function("SetSharedRenderWindow", &vtkRenderWindow::SetSharedRenderWindow, emscripten::allow_raw_pointers())
    .function("GetSharedRenderWindow", &vtkRenderWindow::GetSharedRenderWindow, emscripten::allow_raw_pointers())
    .function("GetPlatformSupportsRenderWindowSharing", &vtkRenderWindow::GetPlatformSupportsRenderWindowSharing)
    .function("IsCurrent", &vtkRenderWindow::IsCurrent)
    .function("SetForceMakeCurrent", &vtkRenderWindow::SetForceMakeCurrent)
    .function("ReportCapabilities", emscripten::optional_override([](vtkRenderWindow& self) -> std::string {  return self.ReportCapabilities();}))
    .function("SupportsOpenGL", &vtkRenderWindow::SupportsOpenGL)
    .function("IsDirect", &vtkRenderWindow::IsDirect)
    .function("GetDepthBufferSize", &vtkRenderWindow::GetDepthBufferSize)
    .function("GetColorBufferSizes", emscripten::optional_override([](vtkRenderWindow& self, std::uintptr_t arg_0) -> int {  return self.GetColorBufferSizes(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .function("SetMultiSamples", &vtkRenderWindow::SetMultiSamples)
    .function("GetMultiSamples", &vtkRenderWindow::GetMultiSamples)
    .function("SetStencilCapable", &vtkRenderWindow::SetStencilCapable)
    .function("GetStencilCapable", &vtkRenderWindow::GetStencilCapable)
    .function("StencilCapableOn", &vtkRenderWindow::StencilCapableOn)
    .function("StencilCapableOff", &vtkRenderWindow::StencilCapableOff)
    .function("SetDeviceIndex", &vtkRenderWindow::SetDeviceIndex)
    .function("GetDeviceIndex", &vtkRenderWindow::GetDeviceIndex)
    .function("GetNumberOfDevices", &vtkRenderWindow::GetNumberOfDevices)
    .function("GetUseSRGBColorSpace", &vtkRenderWindow::GetUseSRGBColorSpace)
    .function("SetUseSRGBColorSpace", &vtkRenderWindow::SetUseSRGBColorSpace)
    .function("UseSRGBColorSpaceOn", &vtkRenderWindow::UseSRGBColorSpaceOn)
    .function("UseSRGBColorSpaceOff", &vtkRenderWindow::UseSRGBColorSpaceOff)
    .function("SetPhysicalViewDirection", emscripten::select_overload<void(vtkRenderWindow&, double, double, double)>([](vtkRenderWindow& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPhysicalViewDirection( arg_0, arg_1, arg_2); }))
    .function("SetPhysicalViewUp", emscripten::select_overload<void(vtkRenderWindow&, double, double, double)>([](vtkRenderWindow& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPhysicalViewUp( arg_0, arg_1, arg_2); }))
    .function("SetPhysicalTranslation", emscripten::select_overload<void(vtkRenderWindow&, double, double, double)>([](vtkRenderWindow& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPhysicalTranslation( arg_0, arg_1, arg_2); }))
    .function("SetPhysicalScale", &vtkRenderWindow::SetPhysicalScale)
    .function("GetPhysicalScale", &vtkRenderWindow::GetPhysicalScale)
    .function("SetPhysicalToWorldMatrix", &vtkRenderWindow::SetPhysicalToWorldMatrix, emscripten::allow_raw_pointers())
    .function("GetPhysicalToWorldMatrix", &vtkRenderWindow::GetPhysicalToWorldMatrix, emscripten::allow_raw_pointers())
    .function("GetDeviceToWorldMatrixForDevice", &vtkRenderWindow::GetDeviceToWorldMatrixForDevice, emscripten::allow_raw_pointers())
    .function("GetEnableTranslucentSurface", &vtkRenderWindow::GetEnableTranslucentSurface)
    .function("SetEnableTranslucentSurface", &vtkRenderWindow::SetEnableTranslucentSurface)
    .function("EnableTranslucentSurfaceOn", &vtkRenderWindow::EnableTranslucentSurfaceOn)
    .function("EnableTranslucentSurfaceOff", &vtkRenderWindow::EnableTranslucentSurfaceOff);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkRenderWindow_0_2_constants) {
  emscripten::constant("PhysicalToWorldMatrixModified", vtkCommand::UserEvent + 200);
}
