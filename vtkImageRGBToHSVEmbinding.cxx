// JavaScript wrapper for vtkImageRGBToHSV with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImagingColor.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImageRGBToHSVEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Color/vtkImageRGBToHSV.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageRGBToHSV.h"

template<> void emscripten::internal::raw_destructor<vtkImageRGBToHSV>(vtkImageRGBToHSV * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageRGBToHSV_class) {
  emscripten::class_<vtkImageRGBToHSV, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageRGBToHSV")
    .smart_ptr<vtkSmartPointer<vtkImageRGBToHSV>>("vtkSmartPointer<vtkImageRGBToHSV>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageRGBToHSV>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageRGBToHSV::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageRGBToHSV& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageRGBToHSV::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageRGBToHSV::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageRGBToHSV::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageRGBToHSV& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMaximum", &vtkImageRGBToHSV::SetMaximum)
    .function("GetMaximum", &vtkImageRGBToHSV::GetMaximum);
}
