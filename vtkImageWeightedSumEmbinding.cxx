// JavaScript wrapper for vtkImageWeightedSum with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMath.js/vtkImagingMath.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMath.js/vtkImageWeightedSumEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Math/vtkImageWeightedSum.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDoubleArray.h"
#include "vtkImageWeightedSum.h"

template<> void emscripten::internal::raw_destructor<vtkImageWeightedSum>(vtkImageWeightedSum * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageWeightedSum_class) {
  emscripten::class_<vtkImageWeightedSum, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageWeightedSum")
    .smart_ptr<vtkSmartPointer<vtkImageWeightedSum>>("vtkSmartPointer<vtkImageWeightedSum>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageWeightedSum>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageWeightedSum::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageWeightedSum& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageWeightedSum::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageWeightedSum::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageWeightedSum::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageWeightedSum& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWeights", &vtkImageWeightedSum::SetWeights, emscripten::allow_raw_pointers())
    .function("GetWeights", &vtkImageWeightedSum::GetWeights, emscripten::allow_raw_pointers())
    .function("SetWeight", &vtkImageWeightedSum::SetWeight)
    .function("GetNormalizeByWeight", &vtkImageWeightedSum::GetNormalizeByWeight)
    .function("SetNormalizeByWeight", &vtkImageWeightedSum::SetNormalizeByWeight)
    .function("GetNormalizeByWeightMinValue", &vtkImageWeightedSum::GetNormalizeByWeightMinValue)
    .function("GetNormalizeByWeightMaxValue", &vtkImageWeightedSum::GetNormalizeByWeightMaxValue)
    .function("NormalizeByWeightOn", &vtkImageWeightedSum::NormalizeByWeightOn)
    .function("NormalizeByWeightOff", &vtkImageWeightedSum::NormalizeByWeightOff)
    .function("CalculateTotalWeight", &vtkImageWeightedSum::CalculateTotalWeight);
}
