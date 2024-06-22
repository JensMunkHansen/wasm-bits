// JavaScript wrapper for vtkOpenGLState with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLStateEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLState.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOpenGLFramebufferObject.h"
#include "vtkTextureObject.h"
#include "vtkOpenGLRenderWindow.h"
#include "vtkTextureUnitManager.h"
#include "vtkOpenGLShaderCache.h"
#include "vtkOpenGLVertexBufferObjectCache.h"
#include "vtkOpenGLState.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLState>(vtkOpenGLState * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLState_class) {
  emscripten::class_<vtkOpenGLState, emscripten::base<vtkObject>>("vtkOpenGLState")
    .smart_ptr<vtkSmartPointer<vtkOpenGLState>>("vtkSmartPointer<vtkOpenGLState>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLState>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLState::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLState& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLState::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLState::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLState::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLState& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("vtkglClearColor", &vtkOpenGLState::vtkglClearColor)
    .function("vtkglClearDepth", &vtkOpenGLState::vtkglClearDepth)
    .function("vtkglDepthFunc", &vtkOpenGLState::vtkglDepthFunc)
    .function("vtkglDepthMask", &vtkOpenGLState::vtkglDepthMask)
    .function("vtkglColorMask", &vtkOpenGLState::vtkglColorMask)
    .function("vtkglViewport", &vtkOpenGLState::vtkglViewport)
    .function("vtkglScissor", &vtkOpenGLState::vtkglScissor)
    .function("vtkglEnable", &vtkOpenGLState::vtkglEnable)
    .function("vtkglDisable", &vtkOpenGLState::vtkglDisable)
    .function("vtkglBlendFunc", &vtkOpenGLState::vtkglBlendFunc)
    .function("vtkglBlendFuncSeparate", &vtkOpenGLState::vtkglBlendFuncSeparate)
    .function("vtkglBlendEquation", &vtkOpenGLState::vtkglBlendEquation)
    .function("vtkglBlendEquationSeparate", &vtkOpenGLState::vtkglBlendEquationSeparate)
    .function("vtkglCullFace", &vtkOpenGLState::vtkglCullFace)
    .function("vtkglActiveTexture", &vtkOpenGLState::vtkglActiveTexture)
    .function("vtkglBindFramebuffer", &vtkOpenGLState::vtkglBindFramebuffer)
    .function("vtkglDrawBuffer", &vtkOpenGLState::vtkglDrawBuffer)
    .function("vtkglDrawBuffers", emscripten::optional_override([](vtkOpenGLState& self, unsigned int arg_0, std::uintptr_t arg_1) -> void {  return self.vtkglDrawBuffers( arg_0,reinterpret_cast<unsigned int*>(arg_1 * sizeof(unsigned int)));}))
    .function("vtkglReadBuffer", &vtkOpenGLState::vtkglReadBuffer)
    .function("vtkglPointSize", &vtkOpenGLState::vtkglPointSize)
    .function("vtkglLineWidth", &vtkOpenGLState::vtkglLineWidth)
    .function("vtkglStencilMaskSeparate", &vtkOpenGLState::vtkglStencilMaskSeparate)
    .function("vtkglStencilMask", &vtkOpenGLState::vtkglStencilMask)
    .function("vtkglStencilOpSeparate", &vtkOpenGLState::vtkglStencilOpSeparate)
    .function("vtkglStencilOp", &vtkOpenGLState::vtkglStencilOp)
    .function("vtkglStencilFuncSeparate", &vtkOpenGLState::vtkglStencilFuncSeparate)
    .function("vtkglStencilFunc", &vtkOpenGLState::vtkglStencilFunc)
    .function("vtkBindFramebuffer", &vtkOpenGLState::vtkBindFramebuffer, emscripten::allow_raw_pointers())
    .function("vtkDrawBuffers", emscripten::optional_override([](vtkOpenGLState& self, unsigned int arg_0, std::uintptr_t arg_1, vtkOpenGLFramebufferObject* arg_2) -> void {  return self.vtkDrawBuffers( arg_0,reinterpret_cast<unsigned int*>(arg_1 * sizeof(unsigned int)), arg_2);}), emscripten::allow_raw_pointers())
    .function("vtkReadBuffer", &vtkOpenGLState::vtkReadBuffer, emscripten::allow_raw_pointers())
    .function("vtkglPixelStorei", &vtkOpenGLState::vtkglPixelStorei)
    .function("ResetGLClearColorState", &vtkOpenGLState::ResetGLClearColorState)
    .function("ResetGLClearDepthState", &vtkOpenGLState::ResetGLClearDepthState)
    .function("ResetGLDepthFuncState", &vtkOpenGLState::ResetGLDepthFuncState)
    .function("ResetGLDepthMaskState", &vtkOpenGLState::ResetGLDepthMaskState)
    .function("ResetGLColorMaskState", &vtkOpenGLState::ResetGLColorMaskState)
    .function("ResetGLViewportState", &vtkOpenGLState::ResetGLViewportState)
    .function("ResetGLScissorState", &vtkOpenGLState::ResetGLScissorState)
    .function("ResetGLBlendFuncState", &vtkOpenGLState::ResetGLBlendFuncState)
    .function("ResetGLBlendEquationState", &vtkOpenGLState::ResetGLBlendEquationState)
    .function("ResetGLCullFaceState", &vtkOpenGLState::ResetGLCullFaceState)
    .function("ResetGLActiveTexture", &vtkOpenGLState::ResetGLActiveTexture)
    .function("vtkglClear", &vtkOpenGLState::vtkglClear)
    .function("vtkglGetBooleanv", emscripten::optional_override([](vtkOpenGLState& self, unsigned int arg_0, std::uintptr_t arg_1) -> void {  return self.vtkglGetBooleanv( arg_0,reinterpret_cast<unsigned char*>(arg_1 * sizeof(unsigned char)));}))
    .function("vtkglGetIntegerv", emscripten::optional_override([](vtkOpenGLState& self, unsigned int arg_0, std::uintptr_t arg_1) -> void {  return self.vtkglGetIntegerv( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)));}))
    .function("vtkglGetDoublev", emscripten::optional_override([](vtkOpenGLState& self, unsigned int arg_0, std::uintptr_t arg_1) -> void {  return self.vtkglGetDoublev( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("vtkglGetFloatv", emscripten::optional_override([](vtkOpenGLState& self, unsigned int arg_0, std::uintptr_t arg_1) -> void {  return self.vtkglGetFloatv( arg_0,reinterpret_cast<float*>(arg_1 * sizeof(float)));}))
    .function("GetBlendFuncState", emscripten::optional_override([](vtkOpenGLState& self, std::uintptr_t arg_0) -> void {  return self.GetBlendFuncState(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .function("GetEnumState", &vtkOpenGLState::GetEnumState)
    .function("SetEnumState", &vtkOpenGLState::SetEnumState)
    .function("ResetEnumState", &vtkOpenGLState::ResetEnumState)
    .function("ActivateTexture", &vtkOpenGLState::ActivateTexture, emscripten::allow_raw_pointers())
    .function("DeactivateTexture", &vtkOpenGLState::DeactivateTexture, emscripten::allow_raw_pointers())
    .function("GetTextureUnitForTexture", &vtkOpenGLState::GetTextureUnitForTexture, emscripten::allow_raw_pointers())
    .function("VerifyNoActiveTextures", &vtkOpenGLState::VerifyNoActiveTextures)
    .function("PushFramebufferBindings", &vtkOpenGLState::PushFramebufferBindings)
    .function("PushDrawFramebufferBinding", &vtkOpenGLState::PushDrawFramebufferBinding)
    .function("PushReadFramebufferBinding", &vtkOpenGLState::PushReadFramebufferBinding)
    .function("PopFramebufferBindings", &vtkOpenGLState::PopFramebufferBindings)
    .function("PopDrawFramebufferBinding", &vtkOpenGLState::PopDrawFramebufferBinding)
    .function("PopReadFramebufferBinding", &vtkOpenGLState::PopReadFramebufferBinding)
    .function("ResetFramebufferBindings", &vtkOpenGLState::ResetFramebufferBindings)
    .function("Initialize", &vtkOpenGLState::Initialize, emscripten::allow_raw_pointers())
    .function("SetTextureUnitManager", &vtkOpenGLState::SetTextureUnitManager, emscripten::allow_raw_pointers())
    .function("GetTextureUnitManager", &vtkOpenGLState::GetTextureUnitManager, emscripten::allow_raw_pointers())
    .function("GetShaderCache", &vtkOpenGLState::GetShaderCache, emscripten::allow_raw_pointers())
    .function("GetVBOCache", &vtkOpenGLState::GetVBOCache, emscripten::allow_raw_pointers())
    .function("SetVBOCache", &vtkOpenGLState::SetVBOCache, emscripten::allow_raw_pointers())
    .function("GetDefaultTextureInternalFormat", &vtkOpenGLState::GetDefaultTextureInternalFormat)
    .function("vtkglBlitFramebuffer", &vtkOpenGLState::vtkglBlitFramebuffer)
    .function("Reset", &vtkOpenGLState::Reset)
    .function("Push", &vtkOpenGLState::Push)
    .function("Pop", &vtkOpenGLState::Pop)
    .function("GetVersion", &vtkOpenGLState::GetVersion)
    .function("GetVendor", &vtkOpenGLState::GetVendor)
    .function("GetRenderer", &vtkOpenGLState::GetRenderer);
}
