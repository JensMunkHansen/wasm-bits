// JavaScript wrapper for vtkImageFourierCenter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingFourier.js/vtkImagingFourier.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingFourier.js/vtkImageFourierCenterEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Fourier/vtkImageFourierCenter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageFourierCenter.h"

template<> void emscripten::internal::raw_destructor<vtkImageFourierCenter>(vtkImageFourierCenter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageFourierCenter_class) {
  emscripten::class_<vtkImageFourierCenter, emscripten::base<vtkImageDecomposeFilter>>("vtkImageFourierCenter")
    .smart_ptr<vtkSmartPointer<vtkImageFourierCenter>>("vtkSmartPointer<vtkImageFourierCenter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageFourierCenter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageFourierCenter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageFourierCenter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageFourierCenter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageFourierCenter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageFourierCenter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageFourierCenter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
