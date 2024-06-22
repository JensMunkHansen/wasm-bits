// JavaScript wrapper for vtkImageRGBToHSI with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImagingColor.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImageRGBToHSIEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Color/vtkImageRGBToHSI.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageRGBToHSI.h"

template<> void emscripten::internal::raw_destructor<vtkImageRGBToHSI>(vtkImageRGBToHSI * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageRGBToHSI_class) {
  emscripten::class_<vtkImageRGBToHSI, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageRGBToHSI")
    .smart_ptr<vtkSmartPointer<vtkImageRGBToHSI>>("vtkSmartPointer<vtkImageRGBToHSI>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageRGBToHSI>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageRGBToHSI::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageRGBToHSI& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageRGBToHSI::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageRGBToHSI::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageRGBToHSI::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageRGBToHSI& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMaximum", &vtkImageRGBToHSI::SetMaximum)
    .function("GetMaximum", &vtkImageRGBToHSI::GetMaximum);
}
