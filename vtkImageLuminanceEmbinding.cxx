// JavaScript wrapper for vtkImageLuminance with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImagingColor.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImageLuminanceEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Color/vtkImageLuminance.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageLuminance.h"

template<> void emscripten::internal::raw_destructor<vtkImageLuminance>(vtkImageLuminance * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageLuminance_class) {
  emscripten::class_<vtkImageLuminance, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageLuminance")
    .smart_ptr<vtkSmartPointer<vtkImageLuminance>>("vtkSmartPointer<vtkImageLuminance>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageLuminance>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageLuminance::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageLuminance& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageLuminance::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageLuminance::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageLuminance::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageLuminance& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
