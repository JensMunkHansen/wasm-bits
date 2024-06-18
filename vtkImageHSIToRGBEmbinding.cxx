// JavaScript wrapper for vtkImageHSIToRGB with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImagingColor.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImageHSIToRGBEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Color/vtkImageHSIToRGB.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageHSIToRGB.h"

template<> void emscripten::internal::raw_destructor<vtkImageHSIToRGB>(vtkImageHSIToRGB * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageHSIToRGB_class) {
  emscripten::class_<vtkImageHSIToRGB, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageHSIToRGB")
    .smart_ptr<vtkSmartPointer<vtkImageHSIToRGB>>("vtkSmartPointer<vtkImageHSIToRGB>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageHSIToRGB>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageHSIToRGB::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageHSIToRGB& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageHSIToRGB::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageHSIToRGB::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageHSIToRGB::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageHSIToRGB& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMaximum", &vtkImageHSIToRGB::SetMaximum)
    .function("GetMaximum", &vtkImageHSIToRGB::GetMaximum);
}
