// JavaScript wrapper for vtkImageNonMaximumSuppression with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImagingMorphological.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImageNonMaximumSuppressionEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Morphological/vtkImageNonMaximumSuppression.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkImageNonMaximumSuppression.h"

EMSCRIPTEN_BINDINGS(vtkImagingMorphological_vtkImageNonMaximumSuppression_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_IMAGE_NON_MAXIMUM_SUPPRESSION_MAGNITUDE_INPUT", 0 },
      { "VTK_IMAGE_NON_MAXIMUM_SUPPRESSION_VECTOR_INPUT", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkImageNonMaximumSuppression>(vtkImageNonMaximumSuppression * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageNonMaximumSuppression_class) {
  emscripten::class_<vtkImageNonMaximumSuppression, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageNonMaximumSuppression")
    .smart_ptr<vtkSmartPointer<vtkImageNonMaximumSuppression>>("vtkSmartPointer<vtkImageNonMaximumSuppression>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageNonMaximumSuppression>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageNonMaximumSuppression::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageNonMaximumSuppression& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageNonMaximumSuppression::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageNonMaximumSuppression::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageNonMaximumSuppression::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageNonMaximumSuppression& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMagnitudeInputData", &vtkImageNonMaximumSuppression::SetMagnitudeInputData, emscripten::allow_raw_pointers())
    .function("SetVectorInputData", &vtkImageNonMaximumSuppression::SetVectorInputData, emscripten::allow_raw_pointers())
    .function("SetHandleBoundaries", &vtkImageNonMaximumSuppression::SetHandleBoundaries)
    .function("GetHandleBoundaries", &vtkImageNonMaximumSuppression::GetHandleBoundaries)
    .function("HandleBoundariesOn", &vtkImageNonMaximumSuppression::HandleBoundariesOn)
    .function("HandleBoundariesOff", &vtkImageNonMaximumSuppression::HandleBoundariesOff)
    .function("SetDimensionality", &vtkImageNonMaximumSuppression::SetDimensionality)
    .function("GetDimensionalityMinValue", &vtkImageNonMaximumSuppression::GetDimensionalityMinValue)
    .function("GetDimensionalityMaxValue", &vtkImageNonMaximumSuppression::GetDimensionalityMaxValue)
    .function("GetDimensionality", &vtkImageNonMaximumSuppression::GetDimensionality);
}
