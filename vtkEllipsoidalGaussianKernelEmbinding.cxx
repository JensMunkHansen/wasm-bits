// JavaScript wrapper for vtkEllipsoidalGaussianKernel with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkEllipsoidalGaussianKernelEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkEllipsoidalGaussianKernel.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractPointLocator.h"
#include "vtkDataSet.h"
#include "vtkPointData.h"
#include "vtkIdList.h"
#include "vtkDoubleArray.h"
#include "vtkStdString.h"
#include "vtkEllipsoidalGaussianKernel.h"

template<> void emscripten::internal::raw_destructor<vtkEllipsoidalGaussianKernel>(vtkEllipsoidalGaussianKernel * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEllipsoidalGaussianKernel_class) {
  emscripten::class_<vtkEllipsoidalGaussianKernel, emscripten::base<vtkGeneralizedKernel>>("vtkEllipsoidalGaussianKernel")
    .smart_ptr<vtkSmartPointer<vtkEllipsoidalGaussianKernel>>("vtkSmartPointer<vtkEllipsoidalGaussianKernel>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkEllipsoidalGaussianKernel>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEllipsoidalGaussianKernel::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEllipsoidalGaussianKernel& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEllipsoidalGaussianKernel::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEllipsoidalGaussianKernel::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEllipsoidalGaussianKernel::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEllipsoidalGaussianKernel& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkEllipsoidalGaussianKernel::Initialize, emscripten::allow_raw_pointers())
    .function("SetUseNormals", &vtkEllipsoidalGaussianKernel::SetUseNormals)
    .function("GetUseNormals", &vtkEllipsoidalGaussianKernel::GetUseNormals)
    .function("UseNormalsOn", &vtkEllipsoidalGaussianKernel::UseNormalsOn)
    .function("UseNormalsOff", &vtkEllipsoidalGaussianKernel::UseNormalsOff)
    .function("SetNormalsArrayName", &vtkEllipsoidalGaussianKernel::SetNormalsArrayName)
    .function("GetNormalsArrayName", &vtkEllipsoidalGaussianKernel::GetNormalsArrayName)
    .function("SetUseScalars", &vtkEllipsoidalGaussianKernel::SetUseScalars)
    .function("GetUseScalars", &vtkEllipsoidalGaussianKernel::GetUseScalars)
    .function("UseScalarsOn", &vtkEllipsoidalGaussianKernel::UseScalarsOn)
    .function("UseScalarsOff", &vtkEllipsoidalGaussianKernel::UseScalarsOff)
    .function("SetScalarsArrayName", &vtkEllipsoidalGaussianKernel::SetScalarsArrayName)
    .function("GetScalarsArrayName", &vtkEllipsoidalGaussianKernel::GetScalarsArrayName)
    .function("SetScaleFactor", &vtkEllipsoidalGaussianKernel::SetScaleFactor)
    .function("GetScaleFactorMinValue", &vtkEllipsoidalGaussianKernel::GetScaleFactorMinValue)
    .function("GetScaleFactorMaxValue", &vtkEllipsoidalGaussianKernel::GetScaleFactorMaxValue)
    .function("GetScaleFactor", &vtkEllipsoidalGaussianKernel::GetScaleFactor)
    .function("SetSharpness", &vtkEllipsoidalGaussianKernel::SetSharpness)
    .function("GetSharpnessMinValue", &vtkEllipsoidalGaussianKernel::GetSharpnessMinValue)
    .function("GetSharpnessMaxValue", &vtkEllipsoidalGaussianKernel::GetSharpnessMaxValue)
    .function("GetSharpness", &vtkEllipsoidalGaussianKernel::GetSharpness)
    .function("SetEccentricity", &vtkEllipsoidalGaussianKernel::SetEccentricity)
    .function("GetEccentricityMinValue", &vtkEllipsoidalGaussianKernel::GetEccentricityMinValue)
    .function("GetEccentricityMaxValue", &vtkEllipsoidalGaussianKernel::GetEccentricityMaxValue)
    .function("GetEccentricity", &vtkEllipsoidalGaussianKernel::GetEccentricity);
}
