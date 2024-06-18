// JavaScript wrapper for vtkImageHSVToRGB with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImagingColor.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImageHSVToRGBEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Color/vtkImageHSVToRGB.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageHSVToRGB.h"

template<> void emscripten::internal::raw_destructor<vtkImageHSVToRGB>(vtkImageHSVToRGB * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageHSVToRGB_class) {
  emscripten::class_<vtkImageHSVToRGB, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageHSVToRGB")
    .smart_ptr<vtkSmartPointer<vtkImageHSVToRGB>>("vtkSmartPointer<vtkImageHSVToRGB>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageHSVToRGB>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageHSVToRGB::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageHSVToRGB& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageHSVToRGB::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageHSVToRGB::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageHSVToRGB::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageHSVToRGB& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMaximum", &vtkImageHSVToRGB::SetMaximum)
    .function("GetMaximum", &vtkImageHSVToRGB::GetMaximum);
}
