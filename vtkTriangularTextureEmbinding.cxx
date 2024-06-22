// JavaScript wrapper for vtkTriangularTexture with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkImagingHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkTriangularTextureEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Hybrid/vtkTriangularTexture.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTriangularTexture.h"

template<> void emscripten::internal::raw_destructor<vtkTriangularTexture>(vtkTriangularTexture * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTriangularTexture_class) {
  emscripten::class_<vtkTriangularTexture, emscripten::base<vtkImageAlgorithm>>("vtkTriangularTexture")
    .smart_ptr<vtkSmartPointer<vtkTriangularTexture>>("vtkSmartPointer<vtkTriangularTexture>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTriangularTexture>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTriangularTexture::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTriangularTexture& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTriangularTexture::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTriangularTexture::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTriangularTexture::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTriangularTexture& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetScaleFactor", &vtkTriangularTexture::SetScaleFactor)
    .function("GetScaleFactor", &vtkTriangularTexture::GetScaleFactor)
    .function("SetXSize", &vtkTriangularTexture::SetXSize)
    .function("GetXSize", &vtkTriangularTexture::GetXSize)
    .function("SetYSize", &vtkTriangularTexture::SetYSize)
    .function("GetYSize", &vtkTriangularTexture::GetYSize)
    .function("SetTexturePattern", &vtkTriangularTexture::SetTexturePattern)
    .function("GetTexturePatternMinValue", &vtkTriangularTexture::GetTexturePatternMinValue)
    .function("GetTexturePatternMaxValue", &vtkTriangularTexture::GetTexturePatternMaxValue)
    .function("GetTexturePattern", &vtkTriangularTexture::GetTexturePattern);
}
