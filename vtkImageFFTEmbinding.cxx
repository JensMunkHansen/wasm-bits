// JavaScript wrapper for vtkImageFFT with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingFourier.js/vtkImagingFourier.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingFourier.js/vtkImageFFTEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Fourier/vtkImageFFT.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageFFT.h"

template<> void emscripten::internal::raw_destructor<vtkImageFFT>(vtkImageFFT * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageFFT_class) {
  emscripten::class_<vtkImageFFT, emscripten::base<vtkImageFourierFilter>>("vtkImageFFT")
    .smart_ptr<vtkSmartPointer<vtkImageFFT>>("vtkSmartPointer<vtkImageFFT>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageFFT>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageFFT::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageFFT& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageFFT::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageFFT::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageFFT::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageFFT& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
