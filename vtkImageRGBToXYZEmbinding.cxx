// JavaScript wrapper for vtkImageRGBToXYZ with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImagingColor.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingColor.js/vtkImageRGBToXYZEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Color/vtkImageRGBToXYZ.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageRGBToXYZ.h"

template<> void emscripten::internal::raw_destructor<vtkImageRGBToXYZ>(vtkImageRGBToXYZ * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageRGBToXYZ_class) {
  emscripten::class_<vtkImageRGBToXYZ, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageRGBToXYZ")
    .smart_ptr<vtkSmartPointer<vtkImageRGBToXYZ>>("vtkSmartPointer<vtkImageRGBToXYZ>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageRGBToXYZ>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageRGBToXYZ::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageRGBToXYZ& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageRGBToXYZ::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageRGBToXYZ::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageRGBToXYZ::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageRGBToXYZ& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
