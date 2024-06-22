// JavaScript wrapper for vtkFreeTypeStringToImage with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingFreeType.js/vtkRenderingFreeType.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingFreeType.js/vtkFreeTypeStringToImageEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/FreeType/vtkFreeTypeStringToImage.h
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
#include "vtkFreeTypeStringToImage.h"

template<> void emscripten::internal::raw_destructor<vtkFreeTypeStringToImage>(vtkFreeTypeStringToImage * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFreeTypeStringToImage_class) {
  emscripten::class_<vtkFreeTypeStringToImage, emscripten::base<vtkStringToImage>>("vtkFreeTypeStringToImage")
    .smart_ptr<vtkSmartPointer<vtkFreeTypeStringToImage>>("vtkSmartPointer<vtkFreeTypeStringToImage>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFreeTypeStringToImage>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFreeTypeStringToImage::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFreeTypeStringToImage& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFreeTypeStringToImage::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFreeTypeStringToImage::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFreeTypeStringToImage::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFreeTypeStringToImage& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetBounds", &vtkFreeTypeStringToImage::GetBounds, emscripten::allow_raw_pointers())
    .function("SetScaleToPowerOfTwo", &vtkFreeTypeStringToImage::SetScaleToPowerOfTwo)
    .function("DeepCopy", &vtkFreeTypeStringToImage::DeepCopy, emscripten::allow_raw_pointers());
}
