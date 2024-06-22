// JavaScript wrapper for vtkTextureObject with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkTextureObjectEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkTextureObject.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOpenGLRenderWindow.h"
#include "vtkWindow.h"
#include "vtkOpenGLBufferObject.h"
#include "vtkPixelBufferObject.h"
#include "vtkShaderProgram.h"
#include "vtkOpenGLVertexArrayObject.h"
#include "vtkTextureObject.h"

template<> void emscripten::internal::raw_destructor<vtkTextureObject>(vtkTextureObject * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTextureObject_class) {
  emscripten::class_<vtkTextureObject, emscripten::base<vtkObject>>("vtkTextureObject")
    .smart_ptr<vtkSmartPointer<vtkTextureObject>>("vtkSmartPointer<vtkTextureObject>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTextureObject>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextureObject::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTextureObject& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTextureObject::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTextureObject::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextureObject::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTextureObject& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetContext", &vtkTextureObject::SetContext, emscripten::allow_raw_pointers())
    .function("GetContext", &vtkTextureObject::GetContext, emscripten::allow_raw_pointers())
    .function("GetWidth", &vtkTextureObject::GetWidth)
    .function("GetHeight", &vtkTextureObject::GetHeight)
    .function("GetDepth", &vtkTextureObject::GetDepth)
    .function("GetSamples", &vtkTextureObject::GetSamples)
    .function("GetComponents", &vtkTextureObject::GetComponents)
    .function("GetTuples", &vtkTextureObject::GetTuples)
    .function("GetNumberOfDimensions", &vtkTextureObject::GetNumberOfDimensions)
    .function("SetSamples", &vtkTextureObject::SetSamples)
    .function("GetTarget", &vtkTextureObject::GetTarget)
    .function("GetHandle", &vtkTextureObject::GetHandle)
    .function("GetTextureUnit", &vtkTextureObject::GetTextureUnit)
    .function("Bind", &vtkTextureObject::Bind)
    .function("Activate", &vtkTextureObject::Activate)
    .function("Deactivate", &vtkTextureObject::Deactivate)
    .function("ReleaseGraphicsResources", &vtkTextureObject::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("IsBound", &vtkTextureObject::IsBound)
    .function("SendParameters", &vtkTextureObject::SendParameters)
    .function("SetAutoParameters", &vtkTextureObject::SetAutoParameters)
    .function("GetAutoParameters", &vtkTextureObject::GetAutoParameters)
    .function("AutoParametersOn", &vtkTextureObject::AutoParametersOn)
    .function("AutoParametersOff", &vtkTextureObject::AutoParametersOff)
    .function("Create2DFromRaw", emscripten::optional_override([](vtkTextureObject& self, unsigned int arg_0, unsigned int arg_1, int arg_2, int arg_3, std::uintptr_t arg_4) -> bool {  return self.Create2DFromRaw( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<void*>(arg_4));}))
    .function("CreateDepthFromRaw", emscripten::optional_override([](vtkTextureObject& self, unsigned int arg_0, unsigned int arg_1, int arg_2, int arg_3, std::uintptr_t arg_4) -> bool {  return self.CreateDepthFromRaw( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<void*>(arg_4));}))
    .function("CreateTextureBuffer", &vtkTextureObject::CreateTextureBuffer, emscripten::allow_raw_pointers())
    .function("EmulateTextureBufferWith2DTextures", &vtkTextureObject::EmulateTextureBufferWith2DTextures, emscripten::allow_raw_pointers())
    .function("Create1D", &vtkTextureObject::Create1D, emscripten::allow_raw_pointers())
    .function("Create1DFromRaw", emscripten::optional_override([](vtkTextureObject& self, unsigned int arg_0, int arg_1, int arg_2, std::uintptr_t arg_3) -> bool {  return self.Create1DFromRaw( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}))
    .function("Create2D", emscripten::select_overload<bool(vtkTextureObject&, unsigned int, unsigned int, int, vtkPixelBufferObject*, bool)>([](vtkTextureObject& self, unsigned int arg_0, unsigned int arg_1, int arg_2, vtkPixelBufferObject* arg_3, bool arg_4) -> bool { return self.Create2D( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("Create2D", emscripten::select_overload<bool(vtkTextureObject&, unsigned int, unsigned int, int, int, bool)>([](vtkTextureObject& self, unsigned int arg_0, unsigned int arg_1, int arg_2, int arg_3, bool arg_4) -> bool { return self.Create2D( arg_0, arg_1, arg_2, arg_3, arg_4); }))
    .function("Create3D", emscripten::select_overload<bool(vtkTextureObject&, unsigned int, unsigned int, unsigned int, int, vtkPixelBufferObject*, bool)>([](vtkTextureObject& self, unsigned int arg_0, unsigned int arg_1, unsigned int arg_2, int arg_3, vtkPixelBufferObject* arg_4, bool arg_5) -> bool { return self.Create3D( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }), emscripten::allow_raw_pointers())
    .function("Create3D", emscripten::select_overload<bool(vtkTextureObject&, unsigned int, unsigned int, unsigned int, int, int, bool)>([](vtkTextureObject& self, unsigned int arg_0, unsigned int arg_1, unsigned int arg_2, int arg_3, int arg_4, bool arg_5) -> bool { return self.Create3D( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("Create3DFromRaw", emscripten::optional_override([](vtkTextureObject& self, unsigned int arg_0, unsigned int arg_1, unsigned int arg_2, int arg_3, int arg_4, std::uintptr_t arg_5) -> bool {  return self.Create3DFromRaw( arg_0, arg_1, arg_2, arg_3, arg_4,reinterpret_cast<void*>(arg_5));}))
    .function("AllocateProxyTexture3D", &vtkTextureObject::AllocateProxyTexture3D)
    .function("Download", emscripten::select_overload<vtkPixelBufferObject*(vtkTextureObject&)>([](vtkTextureObject& self) -> vtkPixelBufferObject* { return self.Download(); }), emscripten::allow_raw_pointers())
    .function("Download", emscripten::select_overload<vtkPixelBufferObject*(vtkTextureObject&, unsigned int, unsigned int)>([](vtkTextureObject& self, unsigned int arg_0, unsigned int arg_1) -> vtkPixelBufferObject* { return self.Download( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("CreateDepth", &vtkTextureObject::CreateDepth, emscripten::allow_raw_pointers())
    .function("AllocateDepth", &vtkTextureObject::AllocateDepth)
    .function("AllocateDepthStencil", &vtkTextureObject::AllocateDepthStencil)
    .function("Allocate1D", &vtkTextureObject::Allocate1D)
    .function("Allocate2D", &vtkTextureObject::Allocate2D)
    .function("Allocate3D", &vtkTextureObject::Allocate3D)
    .function("GetVTKDataType", &vtkTextureObject::GetVTKDataType)
    .function("GetDataType", &vtkTextureObject::GetDataType)
    .function("SetDataType", &vtkTextureObject::SetDataType)
    .function("GetDefaultDataType", &vtkTextureObject::GetDefaultDataType)
    .function("GetInternalFormat", &vtkTextureObject::GetInternalFormat)
    .function("SetInternalFormat", &vtkTextureObject::SetInternalFormat)
    .function("GetDefaultInternalFormat", &vtkTextureObject::GetDefaultInternalFormat)
    .function("GetFormat", &vtkTextureObject::GetFormat)
    .function("SetFormat", &vtkTextureObject::SetFormat)
    .function("GetDefaultFormat", &vtkTextureObject::GetDefaultFormat)
    .function("ResetFormatAndType", &vtkTextureObject::ResetFormatAndType)
    .function("GetMinificationFilterMode", &vtkTextureObject::GetMinificationFilterMode)
    .function("GetMagnificationFilterMode", &vtkTextureObject::GetMagnificationFilterMode)
    .function("GetWrapSMode", &vtkTextureObject::GetWrapSMode)
    .function("GetWrapTMode", &vtkTextureObject::GetWrapTMode)
    .function("GetWrapRMode", &vtkTextureObject::GetWrapRMode)
    .function("SetRequireDepthBufferFloat", &vtkTextureObject::SetRequireDepthBufferFloat)
    .function("GetRequireDepthBufferFloat", &vtkTextureObject::GetRequireDepthBufferFloat)
    .function("GetSupportsDepthBufferFloat", &vtkTextureObject::GetSupportsDepthBufferFloat)
    .function("SetRequireTextureFloat", &vtkTextureObject::SetRequireTextureFloat)
    .function("GetRequireTextureFloat", &vtkTextureObject::GetRequireTextureFloat)
    .function("GetSupportsTextureFloat", &vtkTextureObject::GetSupportsTextureFloat)
    .function("SetRequireTextureInteger", &vtkTextureObject::SetRequireTextureInteger)
    .function("GetRequireTextureInteger", &vtkTextureObject::GetRequireTextureInteger)
    .function("GetSupportsTextureInteger", &vtkTextureObject::GetSupportsTextureInteger)
    .function("GetWrapS", &vtkTextureObject::GetWrapS)
    .function("SetWrapS", &vtkTextureObject::SetWrapS)
    .function("GetWrapT", &vtkTextureObject::GetWrapT)
    .function("SetWrapT", &vtkTextureObject::SetWrapT)
    .function("GetWrapR", &vtkTextureObject::GetWrapR)
    .function("SetWrapR", &vtkTextureObject::SetWrapR)
    .function("GetMinificationFilter", &vtkTextureObject::GetMinificationFilter)
    .function("SetMinificationFilter", &vtkTextureObject::SetMinificationFilter)
    .function("GetMagnificationFilter", &vtkTextureObject::GetMagnificationFilter)
    .function("SetMagnificationFilter", &vtkTextureObject::SetMagnificationFilter)
    .function("SetLinearMagnification", &vtkTextureObject::SetLinearMagnification)
    .function("GetLinearMagnification", &vtkTextureObject::GetLinearMagnification)
    .function("SetBorderColor", emscripten::select_overload<void(vtkTextureObject&, float, float, float, float)>([](vtkTextureObject& self, float arg_0, float arg_1, float arg_2, float arg_3) -> void { return self.SetBorderColor( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetMinLOD", &vtkTextureObject::SetMinLOD)
    .function("GetMinLOD", &vtkTextureObject::GetMinLOD)
    .function("SetMaxLOD", &vtkTextureObject::SetMaxLOD)
    .function("GetMaxLOD", &vtkTextureObject::GetMaxLOD)
    .function("SetBaseLevel", &vtkTextureObject::SetBaseLevel)
    .function("GetBaseLevel", &vtkTextureObject::GetBaseLevel)
    .function("SetMaxLevel", &vtkTextureObject::SetMaxLevel)
    .function("GetMaxLevel", &vtkTextureObject::GetMaxLevel)
    .function("GetDepthTextureCompare", &vtkTextureObject::GetDepthTextureCompare)
    .function("SetDepthTextureCompare", &vtkTextureObject::SetDepthTextureCompare)
    .function("GetDepthTextureCompareFunction", &vtkTextureObject::GetDepthTextureCompareFunction)
    .function("SetDepthTextureCompareFunction", &vtkTextureObject::SetDepthTextureCompareFunction)
    .function("GetGenerateMipmap", &vtkTextureObject::GetGenerateMipmap)
    .function("SetGenerateMipmap", &vtkTextureObject::SetGenerateMipmap)
    .function("SetMaximumAnisotropicFiltering", &vtkTextureObject::SetMaximumAnisotropicFiltering)
    .function("GetMaximumAnisotropicFiltering", &vtkTextureObject::GetMaximumAnisotropicFiltering)
    .class_function("GetMaximumTextureSize", &vtkTextureObject::GetMaximumTextureSize, emscripten::allow_raw_pointers())
    .class_function("GetMaximumTextureSize3D", emscripten::select_overload<int( vtkOpenGLRenderWindow*)>([]( vtkOpenGLRenderWindow* arg_0) -> int { return vtkTextureObject::GetMaximumTextureSize3D( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetMaximumTextureSize3D", emscripten::select_overload<int(vtkTextureObject&)>([](vtkTextureObject& self) -> int { return self.GetMaximumTextureSize3D(); }))
    .class_function("IsSupported", emscripten::select_overload<bool( vtkOpenGLRenderWindow*, bool, bool, bool)>([]( vtkOpenGLRenderWindow* arg_0, bool arg_1, bool arg_2, bool arg_3) -> bool { return vtkTextureObject::IsSupported( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .class_function("IsSupported", emscripten::select_overload<bool( vtkOpenGLRenderWindow*)>([]( vtkOpenGLRenderWindow* arg_0) -> bool { return vtkTextureObject::IsSupported( arg_0); }), emscripten::allow_raw_pointers())
    .function("CopyToFrameBuffer", emscripten::select_overload<void(vtkTextureObject&, vtkShaderProgram*, vtkOpenGLVertexArrayObject*)>([](vtkTextureObject& self, vtkShaderProgram* arg_0, vtkOpenGLVertexArrayObject* arg_1) -> void { return self.CopyToFrameBuffer( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("CopyToFrameBuffer", emscripten::select_overload<void(vtkTextureObject&, int, int, int, int, int, int, int, int, int, int, vtkShaderProgram*, vtkOpenGLVertexArrayObject*)>([](vtkTextureObject& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7, int arg_8, int arg_9, vtkShaderProgram* arg_10, vtkOpenGLVertexArrayObject* arg_11) -> void { return self.CopyToFrameBuffer( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8, arg_9, arg_10, arg_11); }), emscripten::allow_raw_pointers())
    .function("CopyToFrameBuffer", emscripten::select_overload<void(vtkTextureObject&, int, int, int, int, int, int, int, int, vtkShaderProgram*, vtkOpenGLVertexArrayObject*)>([](vtkTextureObject& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7, vtkShaderProgram* arg_8, vtkOpenGLVertexArrayObject* arg_9) -> void { return self.CopyToFrameBuffer( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8, arg_9); }), emscripten::allow_raw_pointers())
    .function("CopyToFrameBuffer", emscripten::select_overload<void(vtkTextureObject&, std::uintptr_t, std::uintptr_t, vtkShaderProgram*, vtkOpenGLVertexArrayObject*)>([](vtkTextureObject& self, std::uintptr_t arg_0, std::uintptr_t arg_1, vtkShaderProgram* arg_2, vtkOpenGLVertexArrayObject* arg_3) -> void { return self.CopyToFrameBuffer(reinterpret_cast<float*>(arg_0 * sizeof(float)),reinterpret_cast<float*>(arg_1 * sizeof(float)), arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("CopyFromFrameBuffer", &vtkTextureObject::CopyFromFrameBuffer)
    .function("Resize", &vtkTextureObject::Resize)
    .function("GetUseSRGBColorSpace", &vtkTextureObject::GetUseSRGBColorSpace)
    .function("SetUseSRGBColorSpace", &vtkTextureObject::SetUseSRGBColorSpace)
    .function("UseSRGBColorSpaceOn", &vtkTextureObject::UseSRGBColorSpaceOn)
    .function("UseSRGBColorSpaceOff", &vtkTextureObject::UseSRGBColorSpaceOff)
    .function("AssignToExistingTexture", &vtkTextureObject::AssignToExistingTexture);
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkTextureObject_0_2_constants) {
  const struct { const char *name; int value; }
    constants[29] = {
      { "vtkTextureObject_Lequal", vtkTextureObject::Lequal },
      { "vtkTextureObject_Gequal", vtkTextureObject::Gequal },
      { "vtkTextureObject_Less", vtkTextureObject::Less },
      { "vtkTextureObject_Greater", vtkTextureObject::Greater },
      { "vtkTextureObject_Equal", vtkTextureObject::Equal },
      { "vtkTextureObject_NotEqual", vtkTextureObject::NotEqual },
      { "vtkTextureObject_AlwaysTrue", vtkTextureObject::AlwaysTrue },
      { "vtkTextureObject_Never", vtkTextureObject::Never },
      { "vtkTextureObject_NumberOfDepthTextureCompareFunctions", vtkTextureObject::NumberOfDepthTextureCompareFunctions },
      { "vtkTextureObject_ClampToEdge", vtkTextureObject::ClampToEdge },
      { "vtkTextureObject_Repeat", vtkTextureObject::Repeat },
      { "vtkTextureObject_MirroredRepeat", vtkTextureObject::MirroredRepeat },
      { "vtkTextureObject_ClampToBorder", vtkTextureObject::ClampToBorder },
      { "vtkTextureObject_NumberOfWrapModes", vtkTextureObject::NumberOfWrapModes },
      { "vtkTextureObject_Nearest", vtkTextureObject::Nearest },
      { "vtkTextureObject_Linear", vtkTextureObject::Linear },
      { "vtkTextureObject_NearestMipmapNearest", vtkTextureObject::NearestMipmapNearest },
      { "vtkTextureObject_NearestMipmapLinear", vtkTextureObject::NearestMipmapLinear },
      { "vtkTextureObject_LinearMipmapNearest", vtkTextureObject::LinearMipmapNearest },
      { "vtkTextureObject_LinearMipmapLinear", vtkTextureObject::LinearMipmapLinear },
      { "vtkTextureObject_NumberOfMinificationModes", vtkTextureObject::NumberOfMinificationModes },
      { "vtkTextureObject_Native", vtkTextureObject::Native },
      { "vtkTextureObject_Fixed8", vtkTextureObject::Fixed8 },
      { "vtkTextureObject_Fixed16", vtkTextureObject::Fixed16 },
      { "vtkTextureObject_Fixed24", vtkTextureObject::Fixed24 },
      { "vtkTextureObject_Fixed32", vtkTextureObject::Fixed32 },
      { "vtkTextureObject_Float16", vtkTextureObject::Float16 },
      { "vtkTextureObject_Float32", vtkTextureObject::Float32 },
      { "vtkTextureObject_NumberOfDepthFormats", vtkTextureObject::NumberOfDepthFormats },
  };
  for (int c = 0; c < 29; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
