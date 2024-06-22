// JavaScript wrapper for vtkGaussianKernel with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkGaussianKernelEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkGaussianKernel.h
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
#include "vtkGaussianKernel.h"

template<> void emscripten::internal::raw_destructor<vtkGaussianKernel>(vtkGaussianKernel * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGaussianKernel_class) {
  emscripten::class_<vtkGaussianKernel, emscripten::base<vtkGeneralizedKernel>>("vtkGaussianKernel")
    .smart_ptr<vtkSmartPointer<vtkGaussianKernel>>("vtkSmartPointer<vtkGaussianKernel>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGaussianKernel>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGaussianKernel::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGaussianKernel& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGaussianKernel::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGaussianKernel::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGaussianKernel::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGaussianKernel& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkGaussianKernel::Initialize, emscripten::allow_raw_pointers())
    .function("SetSharpness", &vtkGaussianKernel::SetSharpness)
    .function("GetSharpnessMinValue", &vtkGaussianKernel::GetSharpnessMinValue)
    .function("GetSharpnessMaxValue", &vtkGaussianKernel::GetSharpnessMaxValue)
    .function("GetSharpness", &vtkGaussianKernel::GetSharpness);
}
