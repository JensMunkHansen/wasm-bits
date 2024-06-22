// JavaScript wrapper for vtkTextRendererStringToImage with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingFreeType.js/vtkRenderingFreeType.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingFreeType.js/vtkTextRendererStringToImageEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/FreeType/vtkTextRendererStringToImage.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkTextProperty.h"
#include "vtkStdString.h"
#include "vtkImageData.h"
#include "vtkTextRendererStringToImage.h"

template<> void emscripten::internal::raw_destructor<vtkTextRendererStringToImage>(vtkTextRendererStringToImage * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTextRendererStringToImage_class) {
  emscripten::class_<vtkTextRendererStringToImage, emscripten::base<vtkStringToImage>>("vtkTextRendererStringToImage")
    .smart_ptr<vtkSmartPointer<vtkTextRendererStringToImage>>("vtkSmartPointer<vtkTextRendererStringToImage>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTextRendererStringToImage>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextRendererStringToImage::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTextRendererStringToImage& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTextRendererStringToImage::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTextRendererStringToImage::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextRendererStringToImage::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTextRendererStringToImage& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetBounds", &vtkTextRendererStringToImage::GetBounds, emscripten::allow_raw_pointers())
    .function("SetScaleToPowerOfTwo", &vtkTextRendererStringToImage::SetScaleToPowerOfTwo)
    .function("DeepCopy", &vtkTextRendererStringToImage::DeepCopy, emscripten::allow_raw_pointers());
}
