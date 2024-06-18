// JavaScript wrapper for vtkSPHQuarticKernel with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkSPHQuarticKernelEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkSPHQuarticKernel.h
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
#include "vtkSPHQuarticKernel.h"

template<> void emscripten::internal::raw_destructor<vtkSPHQuarticKernel>(vtkSPHQuarticKernel * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSPHQuarticKernel_class) {
  emscripten::class_<vtkSPHQuarticKernel, emscripten::base<vtkSPHKernel>>("vtkSPHQuarticKernel")
    .smart_ptr<vtkSmartPointer<vtkSPHQuarticKernel>>("vtkSmartPointer<vtkSPHQuarticKernel>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSPHQuarticKernel>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSPHQuarticKernel::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSPHQuarticKernel& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSPHQuarticKernel::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSPHQuarticKernel::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSPHQuarticKernel::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSPHQuarticKernel& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkSPHQuarticKernel::Initialize, emscripten::allow_raw_pointers())
    .function("ComputeFunctionWeight", &vtkSPHQuarticKernel::ComputeFunctionWeight)
    .function("ComputeDerivWeight", &vtkSPHQuarticKernel::ComputeDerivWeight);
}
