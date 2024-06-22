// JavaScript wrapper for vtkResampleToImage with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkResampleToImageEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkResampleToImage.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkResampleToImage.h"

template<> void emscripten::internal::raw_destructor<vtkResampleToImage>(vtkResampleToImage * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkResampleToImage_class) {
  emscripten::class_<vtkResampleToImage, emscripten::base<vtkAlgorithm>>("vtkResampleToImage")
    .smart_ptr<vtkSmartPointer<vtkResampleToImage>>("vtkSmartPointer<vtkResampleToImage>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkResampleToImage>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResampleToImage::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkResampleToImage& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkResampleToImage::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkResampleToImage::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResampleToImage::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkResampleToImage& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetUseInputBounds", &vtkResampleToImage::SetUseInputBounds)
    .function("GetUseInputBounds", &vtkResampleToImage::GetUseInputBounds)
    .function("UseInputBoundsOn", &vtkResampleToImage::UseInputBoundsOn)
    .function("UseInputBoundsOff", &vtkResampleToImage::UseInputBoundsOff)
    .function("SetSamplingBounds", emscripten::select_overload<void(vtkResampleToImage&, double, double, double, double, double, double)>([](vtkResampleToImage& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetSamplingBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetSamplingDimensions", emscripten::select_overload<void(vtkResampleToImage&, int, int, int)>([](vtkResampleToImage& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetSamplingDimensions( arg_0, arg_1, arg_2); }))
    .function("GetOutput", &vtkResampleToImage::GetOutput, emscripten::allow_raw_pointers())
    .function("GetMaskArrayName", emscripten::optional_override([](vtkResampleToImage& self) -> std::string {  return self.GetMaskArrayName();}));
}
