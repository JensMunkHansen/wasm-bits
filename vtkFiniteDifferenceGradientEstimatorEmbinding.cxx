// JavaScript wrapper for vtkFiniteDifferenceGradientEstimator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkFiniteDifferenceGradientEstimatorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkFiniteDifferenceGradientEstimator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFiniteDifferenceGradientEstimator.h"

template<> void emscripten::internal::raw_destructor<vtkFiniteDifferenceGradientEstimator>(vtkFiniteDifferenceGradientEstimator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFiniteDifferenceGradientEstimator_class) {
  emscripten::class_<vtkFiniteDifferenceGradientEstimator, emscripten::base<vtkEncodedGradientEstimator>>("vtkFiniteDifferenceGradientEstimator")
    .smart_ptr<vtkSmartPointer<vtkFiniteDifferenceGradientEstimator>>("vtkSmartPointer<vtkFiniteDifferenceGradientEstimator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFiniteDifferenceGradientEstimator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFiniteDifferenceGradientEstimator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFiniteDifferenceGradientEstimator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFiniteDifferenceGradientEstimator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFiniteDifferenceGradientEstimator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFiniteDifferenceGradientEstimator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFiniteDifferenceGradientEstimator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSampleSpacingInVoxels", &vtkFiniteDifferenceGradientEstimator::SetSampleSpacingInVoxels)
    .function("GetSampleSpacingInVoxels", &vtkFiniteDifferenceGradientEstimator::GetSampleSpacingInVoxels);
}
