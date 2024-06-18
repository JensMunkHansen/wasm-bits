// JavaScript wrapper for vtkImageMagnitude with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMath.js/vtkImagingMath.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMath.js/vtkImageMagnitudeEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Math/vtkImageMagnitude.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageMagnitude.h"

template<> void emscripten::internal::raw_destructor<vtkImageMagnitude>(vtkImageMagnitude * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageMagnitude_class) {
  emscripten::class_<vtkImageMagnitude, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageMagnitude")
    .smart_ptr<vtkSmartPointer<vtkImageMagnitude>>("vtkSmartPointer<vtkImageMagnitude>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageMagnitude>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMagnitude::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageMagnitude& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageMagnitude::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageMagnitude::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMagnitude::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageMagnitude& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
