// JavaScript wrapper for vtkImageGradientMagnitude with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageGradientMagnitudeEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageGradientMagnitude.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageGradientMagnitude.h"

template<> void emscripten::internal::raw_destructor<vtkImageGradientMagnitude>(vtkImageGradientMagnitude * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageGradientMagnitude_class) {
  emscripten::class_<vtkImageGradientMagnitude, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageGradientMagnitude")
    .smart_ptr<vtkSmartPointer<vtkImageGradientMagnitude>>("vtkSmartPointer<vtkImageGradientMagnitude>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageGradientMagnitude>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageGradientMagnitude::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageGradientMagnitude& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageGradientMagnitude::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageGradientMagnitude::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageGradientMagnitude::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageGradientMagnitude& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetHandleBoundaries", &vtkImageGradientMagnitude::SetHandleBoundaries)
    .function("GetHandleBoundaries", &vtkImageGradientMagnitude::GetHandleBoundaries)
    .function("HandleBoundariesOn", &vtkImageGradientMagnitude::HandleBoundariesOn)
    .function("HandleBoundariesOff", &vtkImageGradientMagnitude::HandleBoundariesOff)
    .function("SetDimensionality", &vtkImageGradientMagnitude::SetDimensionality)
    .function("GetDimensionalityMinValue", &vtkImageGradientMagnitude::GetDimensionalityMinValue)
    .function("GetDimensionalityMaxValue", &vtkImageGradientMagnitude::GetDimensionalityMaxValue)
    .function("GetDimensionality", &vtkImageGradientMagnitude::GetDimensionality);
}
