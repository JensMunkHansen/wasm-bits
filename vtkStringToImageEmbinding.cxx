// JavaScript wrapper for vtkStringToImage with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkStringToImageEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkStringToImage.h
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
#include "vtkStringToImage.h"

template<> void emscripten::internal::raw_destructor<vtkStringToImage>(vtkStringToImage * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStringToImage_class) {
  emscripten::class_<vtkStringToImage, emscripten::base<vtkObject>>("vtkStringToImage")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStringToImage::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStringToImage& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStringToImage::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStringToImage::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStringToImage::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStringToImage& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetScaleToPowerOfTwo", &vtkStringToImage::SetScaleToPowerOfTwo)
    .function("GetScaleToPowerOfTwo", &vtkStringToImage::GetScaleToPowerOfTwo);
}
