// JavaScript wrapper for vtkImageConvolve with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageConvolveEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageConvolve.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageConvolve.h"

template<> void emscripten::internal::raw_destructor<vtkImageConvolve>(vtkImageConvolve * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageConvolve_class) {
  emscripten::class_<vtkImageConvolve, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageConvolve")
    .smart_ptr<vtkSmartPointer<vtkImageConvolve>>("vtkSmartPointer<vtkImageConvolve>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageConvolve>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageConvolve::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageConvolve& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageConvolve::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageConvolve::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageConvolve::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageConvolve& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
