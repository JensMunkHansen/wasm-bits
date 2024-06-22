// JavaScript wrapper for vtkImageCityBlockDistance with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageCityBlockDistanceEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageCityBlockDistance.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageCityBlockDistance.h"

template<> void emscripten::internal::raw_destructor<vtkImageCityBlockDistance>(vtkImageCityBlockDistance * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageCityBlockDistance_class) {
  emscripten::class_<vtkImageCityBlockDistance, emscripten::base<vtkImageDecomposeFilter>>("vtkImageCityBlockDistance")
    .smart_ptr<vtkSmartPointer<vtkImageCityBlockDistance>>("vtkSmartPointer<vtkImageCityBlockDistance>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageCityBlockDistance>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageCityBlockDistance::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageCityBlockDistance& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageCityBlockDistance::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageCityBlockDistance::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageCityBlockDistance::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageCityBlockDistance& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
