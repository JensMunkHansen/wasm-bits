// JavaScript wrapper for vtkGeneralizedKernel with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkGeneralizedKernelEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkGeneralizedKernel.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdList.h"
#include "vtkDoubleArray.h"
#include "vtkGeneralizedKernel.h"

EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkGeneralizedKernel_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkGeneralizedKernel>(vtkGeneralizedKernel * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGeneralizedKernel_class) {
  using KernelStyle=vtkGeneralizedKernel::KernelStyle;
  emscripten::class_<vtkGeneralizedKernel, emscripten::base<vtkInterpolationKernel>>("vtkGeneralizedKernel")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGeneralizedKernel::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGeneralizedKernel& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGeneralizedKernel::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGeneralizedKernel::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGeneralizedKernel::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGeneralizedKernel& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetKernelFootprint", &vtkGeneralizedKernel::SetKernelFootprint)
    .function("GetKernelFootprint", &vtkGeneralizedKernel::GetKernelFootprint)
    .function("SetKernelFootprintToRadius", &vtkGeneralizedKernel::SetKernelFootprintToRadius)
    .function("SetKernelFootprintToNClosest", &vtkGeneralizedKernel::SetKernelFootprintToNClosest)
    .function("SetRadius", &vtkGeneralizedKernel::SetRadius)
    .function("GetRadiusMinValue", &vtkGeneralizedKernel::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkGeneralizedKernel::GetRadiusMaxValue)
    .function("GetRadius", &vtkGeneralizedKernel::GetRadius)
    .function("SetNumberOfPoints", &vtkGeneralizedKernel::SetNumberOfPoints)
    .function("GetNumberOfPointsMinValue", &vtkGeneralizedKernel::GetNumberOfPointsMinValue)
    .function("GetNumberOfPointsMaxValue", &vtkGeneralizedKernel::GetNumberOfPointsMaxValue)
    .function("GetNumberOfPoints", &vtkGeneralizedKernel::GetNumberOfPoints)
    .function("SetNormalizeWeights", &vtkGeneralizedKernel::SetNormalizeWeights)
    .function("GetNormalizeWeights", &vtkGeneralizedKernel::GetNormalizeWeights)
    .function("NormalizeWeightsOn", &vtkGeneralizedKernel::NormalizeWeightsOn)
    .function("NormalizeWeightsOff", &vtkGeneralizedKernel::NormalizeWeightsOff);
}
EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkGeneralizedKernel_0_2_constants) {
    typedef vtkGeneralizedKernel::KernelStyle cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkGeneralizedKernel_KernelStyle_RADIUS", vtkGeneralizedKernel::RADIUS },
      { "vtkGeneralizedKernel_KernelStyle_N_CLOSEST", vtkGeneralizedKernel::N_CLOSEST },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
