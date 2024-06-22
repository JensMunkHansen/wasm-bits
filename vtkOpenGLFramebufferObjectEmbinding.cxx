// JavaScript wrapper for vtkOpenGLFramebufferObject with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLFramebufferObjectEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLFramebufferObject.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderWindow.h"
#include "vtkOpenGLRenderWindow.h"
#include "vtkShaderProgram.h"
#include "vtkOpenGLVertexArrayObject.h"
#include "vtkTextureObject.h"
#include "vtkRenderbuffer.h"
#include "vtkWindow.h"
#include "vtkPixelBufferObject.h"
#include "vtkOpenGLFramebufferObject.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLFramebufferObject>(vtkOpenGLFramebufferObject * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLFramebufferObject_class) {
  emscripten::class_<vtkOpenGLFramebufferObject, emscripten::base<vtkFrameBufferObjectBase>>("vtkOpenGLFramebufferObject")
    .smart_ptr<vtkSmartPointer<vtkOpenGLFramebufferObject>>("vtkSmartPointer<vtkOpenGLFramebufferObject>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLFramebufferObject>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLFramebufferObject::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLFramebufferObject& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLFramebufferObject::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLFramebufferObject::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLFramebufferObject::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLFramebufferObject& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetContext", &vtkOpenGLFramebufferObject::SetContext, emscripten::allow_raw_pointers())
    .function("GetContext", &vtkOpenGLFramebufferObject::GetContext, emscripten::allow_raw_pointers())
    .function("Bind", emscripten::select_overload<void(vtkOpenGLFramebufferObject&)>([](vtkOpenGLFramebufferObject& self) -> void { return self.Bind(); }))
    .function("Bind", emscripten::select_overload<void(vtkOpenGLFramebufferObject&, unsigned int)>([](vtkOpenGLFramebufferObject& self, unsigned int arg_0) -> void { return self.Bind( arg_0); }))
    .function("UnBind", emscripten::select_overload<void(vtkOpenGLFramebufferObject&)>([](vtkOpenGLFramebufferObject& self) -> void { return self.UnBind(); }))
    .function("UnBind", emscripten::select_overload<void(vtkOpenGLFramebufferObject&, unsigned int)>([](vtkOpenGLFramebufferObject& self, unsigned int arg_0) -> void { return self.UnBind( arg_0); }))
    .function("SaveCurrentBindingsAndBuffers", emscripten::select_overload<void(vtkOpenGLFramebufferObject&)>([](vtkOpenGLFramebufferObject& self) -> void { return self.SaveCurrentBindingsAndBuffers(); }))
    .function("SaveCurrentBindingsAndBuffers", emscripten::select_overload<void(vtkOpenGLFramebufferObject&, unsigned int)>([](vtkOpenGLFramebufferObject& self, unsigned int arg_0) -> void { return self.SaveCurrentBindingsAndBuffers( arg_0); }))
    .function("RestorePreviousBindingsAndBuffers", emscripten::select_overload<void(vtkOpenGLFramebufferObject&)>([](vtkOpenGLFramebufferObject& self) -> void { return self.RestorePreviousBindingsAndBuffers(); }))
    .function("RestorePreviousBindingsAndBuffers", emscripten::select_overload<void(vtkOpenGLFramebufferObject&, unsigned int)>([](vtkOpenGLFramebufferObject& self, unsigned int arg_0) -> void { return self.RestorePreviousBindingsAndBuffers( arg_0); }))
    .function("Start", &vtkOpenGLFramebufferObject::Start)
    .function("StartNonOrtho", &vtkOpenGLFramebufferObject::StartNonOrtho)
    .function("InitializeViewport", &vtkOpenGLFramebufferObject::InitializeViewport)
    .function("ActivateDrawBuffers", emscripten::select_overload<void(vtkOpenGLFramebufferObject&, unsigned int)>([](vtkOpenGLFramebufferObject& self, unsigned int arg_0) -> void { return self.ActivateDrawBuffers( arg_0); }))
    .function("ActivateDrawBuffers", emscripten::select_overload<void(vtkOpenGLFramebufferObject&, std::uintptr_t, int)>([](vtkOpenGLFramebufferObject& self, std::uintptr_t arg_0, int arg_1) -> void { return self.ActivateDrawBuffers(reinterpret_cast<unsigned int*>(arg_0 * sizeof(unsigned int)), arg_1); }))
    .function("ActivateDrawBuffer", &vtkOpenGLFramebufferObject::ActivateDrawBuffer)
    .function("ActivateReadBuffer", &vtkOpenGLFramebufferObject::ActivateReadBuffer)
    .function("ActivateBuffer", &vtkOpenGLFramebufferObject::ActivateBuffer)
    .function("DeactivateDrawBuffers", &vtkOpenGLFramebufferObject::DeactivateDrawBuffers)
    .function("DeactivateReadBuffer", &vtkOpenGLFramebufferObject::DeactivateReadBuffer)
    .function("GetActiveReadBuffer", &vtkOpenGLFramebufferObject::GetActiveReadBuffer)
    .function("GetActiveDrawBuffer", &vtkOpenGLFramebufferObject::GetActiveDrawBuffer)
    .function("RenderQuad", &vtkOpenGLFramebufferObject::RenderQuad, emscripten::allow_raw_pointers())
    .function("AddColorAttachment", emscripten::select_overload<void(vtkOpenGLFramebufferObject&, unsigned int, vtkTextureObject*, unsigned int, unsigned int, unsigned int)>([](vtkOpenGLFramebufferObject& self, unsigned int arg_0, vtkTextureObject* arg_1, unsigned int arg_2, unsigned int arg_3, unsigned int arg_4) -> void { return self.AddColorAttachment( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("AddColorAttachment", emscripten::select_overload<void(vtkOpenGLFramebufferObject&, unsigned int, vtkRenderbuffer*)>([](vtkOpenGLFramebufferObject& self, unsigned int arg_0, vtkRenderbuffer* arg_1) -> void { return self.AddColorAttachment( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("RemoveColorAttachment", &vtkOpenGLFramebufferObject::RemoveColorAttachment)
    .function("RemoveColorAttachments", &vtkOpenGLFramebufferObject::RemoveColorAttachments)
    .function("GetColorAttachmentAsTextureObject", &vtkOpenGLFramebufferObject::GetColorAttachmentAsTextureObject, emscripten::allow_raw_pointers())
    .function("GetNumberOfColorAttachments", &vtkOpenGLFramebufferObject::GetNumberOfColorAttachments)
    .function("AddDepthAttachment", emscripten::select_overload<void(vtkOpenGLFramebufferObject&)>([](vtkOpenGLFramebufferObject& self) -> void { return self.AddDepthAttachment(); }))
    .function("AddDepthAttachment", emscripten::select_overload<void(vtkOpenGLFramebufferObject&, vtkTextureObject*)>([](vtkOpenGLFramebufferObject& self, vtkTextureObject* arg_0) -> void { return self.AddDepthAttachment( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddDepthAttachment", emscripten::select_overload<void(vtkOpenGLFramebufferObject&, vtkRenderbuffer*)>([](vtkOpenGLFramebufferObject& self, vtkRenderbuffer* arg_0) -> void { return self.AddDepthAttachment( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveDepthAttachment", &vtkOpenGLFramebufferObject::RemoveDepthAttachment)
    .function("GetDepthAttachmentAsTextureObject", &vtkOpenGLFramebufferObject::GetDepthAttachmentAsTextureObject, emscripten::allow_raw_pointers())
    .function("PopulateFramebuffer", emscripten::select_overload<bool(vtkOpenGLFramebufferObject&, int, int)>([](vtkOpenGLFramebufferObject& self, int arg_0, int arg_1) -> bool { return self.PopulateFramebuffer( arg_0, arg_1); }))
    .function("PopulateFramebuffer", emscripten::select_overload<bool(vtkOpenGLFramebufferObject&, int, int, bool, int, int, bool, int, int, bool)>([](vtkOpenGLFramebufferObject& self, int arg_0, int arg_1, bool arg_2, int arg_3, int arg_4, bool arg_5, int arg_6, int arg_7, bool arg_8) -> bool { return self.PopulateFramebuffer( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8); }))
    .function("GetMaximumNumberOfActiveTargets", &vtkOpenGLFramebufferObject::GetMaximumNumberOfActiveTargets)
    .function("GetMaximumNumberOfRenderTargets", &vtkOpenGLFramebufferObject::GetMaximumNumberOfRenderTargets)
    .function("GetLastSize", emscripten::select_overload<std::uintptr_t(vtkOpenGLFramebufferObject&)>([](vtkOpenGLFramebufferObject& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetLastSize()); }))
    .class_function("IsSupported", &vtkOpenGLFramebufferObject::IsSupported, emscripten::allow_raw_pointers())
    .function("CheckFrameBufferStatus", &vtkOpenGLFramebufferObject::CheckFrameBufferStatus)
    .function("ReleaseGraphicsResources", &vtkOpenGLFramebufferObject::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetFBOIndex", &vtkOpenGLFramebufferObject::GetFBOIndex)
    .class_function("GetDrawMode", &vtkOpenGLFramebufferObject::GetDrawMode)
    .class_function("GetReadMode", &vtkOpenGLFramebufferObject::GetReadMode)
    .class_function("GetBothMode", &vtkOpenGLFramebufferObject::GetBothMode)
    .function("Resize", &vtkOpenGLFramebufferObject::Resize)
    .function("GetMultiSamples", &vtkOpenGLFramebufferObject::GetMultiSamples);
}
