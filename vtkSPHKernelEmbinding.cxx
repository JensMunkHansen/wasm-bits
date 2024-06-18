// JavaScript wrapper for vtkSPHKernel with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkSPHKernelEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkSPHKernel.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkAbstractPointLocator.h"
#include "vtkDataSet.h"
#include "vtkPointData.h"
#include "vtkIdList.h"
#include "vtkDoubleArray.h"
#include "vtkSPHKernel.h"

template<> void emscripten::internal::raw_destructor<vtkSPHKernel>(vtkSPHKernel * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSPHKernel_class) {
  emscripten::class_<vtkSPHKernel, emscripten::base<vtkInterpolationKernel>>("vtkSPHKernel")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSPHKernel::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSPHKernel& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSPHKernel::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSPHKernel::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSPHKernel::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSPHKernel& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSpatialStep", &vtkSPHKernel::SetSpatialStep)
    .function("GetSpatialStepMinValue", &vtkSPHKernel::GetSpatialStepMinValue)
    .function("GetSpatialStepMaxValue", &vtkSPHKernel::GetSpatialStepMaxValue)
    .function("GetSpatialStep", &vtkSPHKernel::GetSpatialStep)
    .function("SetDimension", &vtkSPHKernel::SetDimension)
    .function("GetDimensionMinValue", &vtkSPHKernel::GetDimensionMinValue)
    .function("GetDimensionMaxValue", &vtkSPHKernel::GetDimensionMaxValue)
    .function("GetDimension", &vtkSPHKernel::GetDimension)
    .function("GetCutoffFactor", &vtkSPHKernel::GetCutoffFactor)
    .function("SetCutoffArray", &vtkSPHKernel::SetCutoffArray, emscripten::allow_raw_pointers())
    .function("GetCutoffArray", &vtkSPHKernel::GetCutoffArray, emscripten::allow_raw_pointers())
    .function("SetDensityArray", &vtkSPHKernel::SetDensityArray, emscripten::allow_raw_pointers())
    .function("GetDensityArray", &vtkSPHKernel::GetDensityArray, emscripten::allow_raw_pointers())
    .function("SetMassArray", &vtkSPHKernel::SetMassArray, emscripten::allow_raw_pointers())
    .function("GetMassArray", &vtkSPHKernel::GetMassArray, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkSPHKernel::Initialize, emscripten::allow_raw_pointers())
    .function("GetNormFactor", &vtkSPHKernel::GetNormFactor);
}
