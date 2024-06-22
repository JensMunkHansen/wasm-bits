// JavaScript wrapper for vtkImageRFFT with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingFourier.js/vtkImagingFourier.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingFourier.js/vtkImageRFFTEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Fourier/vtkImageRFFT.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageRFFT.h"

template<> void emscripten::internal::raw_destructor<vtkImageRFFT>(vtkImageRFFT * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageRFFT_class) {
  emscripten::class_<vtkImageRFFT, emscripten::base<vtkImageFourierFilter>>("vtkImageRFFT")
    .smart_ptr<vtkSmartPointer<vtkImageRFFT>>("vtkSmartPointer<vtkImageRFFT>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageRFFT>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageRFFT::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageRFFT& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageRFFT::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageRFFT::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageRFFT::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageRFFT& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
