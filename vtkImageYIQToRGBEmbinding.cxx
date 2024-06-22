// JavaScript wrapper for vtkImageYIQToRGB with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImagingColor.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImageYIQToRGBEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Color/vtkImageYIQToRGB.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageYIQToRGB.h"

template<> void emscripten::internal::raw_destructor<vtkImageYIQToRGB>(vtkImageYIQToRGB * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageYIQToRGB_class) {
  emscripten::class_<vtkImageYIQToRGB, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageYIQToRGB")
    .smart_ptr<vtkSmartPointer<vtkImageYIQToRGB>>("vtkSmartPointer<vtkImageYIQToRGB>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageYIQToRGB>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageYIQToRGB::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageYIQToRGB& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageYIQToRGB::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageYIQToRGB::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageYIQToRGB::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageYIQToRGB& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMaximum", &vtkImageYIQToRGB::SetMaximum)
    .function("GetMaximum", &vtkImageYIQToRGB::GetMaximum);
}
