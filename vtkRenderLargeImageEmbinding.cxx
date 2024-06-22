// JavaScript wrapper for vtkRenderLargeImage with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkRenderLargeImageEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkRenderLargeImage.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkImageData.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkRenderLargeImage.h"

template<> void emscripten::internal::raw_destructor<vtkRenderLargeImage>(vtkRenderLargeImage * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRenderLargeImage_class) {
  emscripten::class_<vtkRenderLargeImage, emscripten::base<vtkAlgorithm>>("vtkRenderLargeImage")
    .smart_ptr<vtkSmartPointer<vtkRenderLargeImage>>("vtkSmartPointer<vtkRenderLargeImage>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRenderLargeImage>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderLargeImage::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRenderLargeImage& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRenderLargeImage::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRenderLargeImage::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderLargeImage::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRenderLargeImage& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMagnification", &vtkRenderLargeImage::SetMagnification)
    .function("GetMagnification", &vtkRenderLargeImage::GetMagnification)
    .function("SetInput", &vtkRenderLargeImage::SetInput, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkRenderLargeImage::GetInput, emscripten::allow_raw_pointers())
    .function("GetOutput", &vtkRenderLargeImage::GetOutput, emscripten::allow_raw_pointers());
}
