// JavaScript wrapper for vtkImageEuclideanDistance with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageEuclideanDistanceEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageEuclideanDistance.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkImageEuclideanDistance.h"

EMSCRIPTEN_BINDINGS(vtkImagingGeneral_vtkImageEuclideanDistance_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_EDT_SAITO_CACHED", 0 },
      { "VTK_EDT_SAITO", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkImageEuclideanDistance>(vtkImageEuclideanDistance * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageEuclideanDistance_class) {
  emscripten::class_<vtkImageEuclideanDistance, emscripten::base<vtkImageDecomposeFilter>>("vtkImageEuclideanDistance")
    .smart_ptr<vtkSmartPointer<vtkImageEuclideanDistance>>("vtkSmartPointer<vtkImageEuclideanDistance>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageEuclideanDistance>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageEuclideanDistance::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageEuclideanDistance& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageEuclideanDistance::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageEuclideanDistance::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageEuclideanDistance::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageEuclideanDistance& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInitialize", &vtkImageEuclideanDistance::SetInitialize)
    .function("GetInitialize", &vtkImageEuclideanDistance::GetInitialize)
    .function("InitializeOn", &vtkImageEuclideanDistance::InitializeOn)
    .function("InitializeOff", &vtkImageEuclideanDistance::InitializeOff)
    .function("SetConsiderAnisotropy", &vtkImageEuclideanDistance::SetConsiderAnisotropy)
    .function("GetConsiderAnisotropy", &vtkImageEuclideanDistance::GetConsiderAnisotropy)
    .function("ConsiderAnisotropyOn", &vtkImageEuclideanDistance::ConsiderAnisotropyOn)
    .function("ConsiderAnisotropyOff", &vtkImageEuclideanDistance::ConsiderAnisotropyOff)
    .function("SetMaximumDistance", &vtkImageEuclideanDistance::SetMaximumDistance)
    .function("GetMaximumDistance", &vtkImageEuclideanDistance::GetMaximumDistance)
    .function("SetAlgorithm", &vtkImageEuclideanDistance::SetAlgorithm)
    .function("GetAlgorithm", &vtkImageEuclideanDistance::GetAlgorithm)
    .function("SetAlgorithmToSaito", &vtkImageEuclideanDistance::SetAlgorithmToSaito)
    .function("SetAlgorithmToSaitoCached", &vtkImageEuclideanDistance::SetAlgorithmToSaitoCached);
}
