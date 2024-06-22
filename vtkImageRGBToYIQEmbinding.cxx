// JavaScript wrapper for vtkImageRGBToYIQ with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImagingColor.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImageRGBToYIQEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Color/vtkImageRGBToYIQ.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageRGBToYIQ.h"

template<> void emscripten::internal::raw_destructor<vtkImageRGBToYIQ>(vtkImageRGBToYIQ * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageRGBToYIQ_class) {
  emscripten::class_<vtkImageRGBToYIQ, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageRGBToYIQ")
    .smart_ptr<vtkSmartPointer<vtkImageRGBToYIQ>>("vtkSmartPointer<vtkImageRGBToYIQ>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageRGBToYIQ>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageRGBToYIQ::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageRGBToYIQ& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageRGBToYIQ::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageRGBToYIQ::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageRGBToYIQ::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageRGBToYIQ& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMaximum", &vtkImageRGBToYIQ::SetMaximum)
    .function("GetMaximum", &vtkImageRGBToYIQ::GetMaximum);
}
