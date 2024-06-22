// JavaScript wrapper for vtkImageStencilToImage with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStencil.js/vtkImagingStencil.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStencil.js/vtkImageStencilToImageEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Stencil/vtkImageStencilToImage.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageStencilToImage.h"

template<> void emscripten::internal::raw_destructor<vtkImageStencilToImage>(vtkImageStencilToImage * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageStencilToImage_class) {
  emscripten::class_<vtkImageStencilToImage, emscripten::base<vtkImageAlgorithm>>("vtkImageStencilToImage")
    .smart_ptr<vtkSmartPointer<vtkImageStencilToImage>>("vtkSmartPointer<vtkImageStencilToImage>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageStencilToImage>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageStencilToImage::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageStencilToImage& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageStencilToImage::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageStencilToImage::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageStencilToImage::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageStencilToImage& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutsideValue", &vtkImageStencilToImage::SetOutsideValue)
    .function("GetOutsideValue", &vtkImageStencilToImage::GetOutsideValue)
    .function("SetInsideValue", &vtkImageStencilToImage::SetInsideValue)
    .function("GetInsideValue", &vtkImageStencilToImage::GetInsideValue)
    .function("SetOutputScalarType", &vtkImageStencilToImage::SetOutputScalarType)
    .function("GetOutputScalarType", &vtkImageStencilToImage::GetOutputScalarType)
    .function("SetOutputScalarTypeToFloat", &vtkImageStencilToImage::SetOutputScalarTypeToFloat)
    .function("SetOutputScalarTypeToDouble", &vtkImageStencilToImage::SetOutputScalarTypeToDouble)
    .function("SetOutputScalarTypeToInt", &vtkImageStencilToImage::SetOutputScalarTypeToInt)
    .function("SetOutputScalarTypeToUnsignedInt", &vtkImageStencilToImage::SetOutputScalarTypeToUnsignedInt)
    .function("SetOutputScalarTypeToLong", &vtkImageStencilToImage::SetOutputScalarTypeToLong)
    .function("SetOutputScalarTypeToUnsignedLong", &vtkImageStencilToImage::SetOutputScalarTypeToUnsignedLong)
    .function("SetOutputScalarTypeToShort", &vtkImageStencilToImage::SetOutputScalarTypeToShort)
    .function("SetOutputScalarTypeToUnsignedShort", &vtkImageStencilToImage::SetOutputScalarTypeToUnsignedShort)
    .function("SetOutputScalarTypeToUnsignedChar", &vtkImageStencilToImage::SetOutputScalarTypeToUnsignedChar)
    .function("SetOutputScalarTypeToChar", &vtkImageStencilToImage::SetOutputScalarTypeToChar);
}
