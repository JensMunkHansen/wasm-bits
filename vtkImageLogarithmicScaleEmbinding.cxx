// JavaScript wrapper for vtkImageLogarithmicScale with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMath.js/vtkImagingMath.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMath.js/vtkImageLogarithmicScaleEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Math/vtkImageLogarithmicScale.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageLogarithmicScale.h"

template<> void emscripten::internal::raw_destructor<vtkImageLogarithmicScale>(vtkImageLogarithmicScale * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageLogarithmicScale_class) {
  emscripten::class_<vtkImageLogarithmicScale, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageLogarithmicScale")
    .smart_ptr<vtkSmartPointer<vtkImageLogarithmicScale>>("vtkSmartPointer<vtkImageLogarithmicScale>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageLogarithmicScale>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageLogarithmicScale::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageLogarithmicScale& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageLogarithmicScale::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageLogarithmicScale::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageLogarithmicScale::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageLogarithmicScale& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetConstant", &vtkImageLogarithmicScale::SetConstant)
    .function("GetConstant", &vtkImageLogarithmicScale::GetConstant);
}
