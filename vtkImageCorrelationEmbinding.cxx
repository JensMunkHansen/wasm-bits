// JavaScript wrapper for vtkImageCorrelation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageCorrelationEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageCorrelation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkImageCorrelation.h"

template<> void emscripten::internal::raw_destructor<vtkImageCorrelation>(vtkImageCorrelation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageCorrelation_class) {
  emscripten::class_<vtkImageCorrelation, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageCorrelation")
    .smart_ptr<vtkSmartPointer<vtkImageCorrelation>>("vtkSmartPointer<vtkImageCorrelation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageCorrelation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageCorrelation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageCorrelation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageCorrelation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageCorrelation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageCorrelation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageCorrelation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDimensionality", &vtkImageCorrelation::SetDimensionality)
    .function("GetDimensionalityMinValue", &vtkImageCorrelation::GetDimensionalityMinValue)
    .function("GetDimensionalityMaxValue", &vtkImageCorrelation::GetDimensionalityMaxValue)
    .function("GetDimensionality", &vtkImageCorrelation::GetDimensionality)
    .function("SetInput1Data", &vtkImageCorrelation::SetInput1Data, emscripten::allow_raw_pointers())
    .function("SetInput2Data", &vtkImageCorrelation::SetInput2Data, emscripten::allow_raw_pointers());
}
