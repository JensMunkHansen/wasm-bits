// JavaScript wrapper for vtkSPHQuinticKernel with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkSPHQuinticKernelEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkSPHQuinticKernel.h
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
#include "vtkSPHQuinticKernel.h"

template<> void emscripten::internal::raw_destructor<vtkSPHQuinticKernel>(vtkSPHQuinticKernel * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSPHQuinticKernel_class) {
  emscripten::class_<vtkSPHQuinticKernel, emscripten::base<vtkSPHKernel>>("vtkSPHQuinticKernel")
    .smart_ptr<vtkSmartPointer<vtkSPHQuinticKernel>>("vtkSmartPointer<vtkSPHQuinticKernel>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSPHQuinticKernel>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSPHQuinticKernel::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSPHQuinticKernel& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSPHQuinticKernel::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSPHQuinticKernel::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSPHQuinticKernel::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSPHQuinticKernel& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkSPHQuinticKernel::Initialize, emscripten::allow_raw_pointers())
    .function("ComputeFunctionWeight", &vtkSPHQuinticKernel::ComputeFunctionWeight)
    .function("ComputeDerivWeight", &vtkSPHQuinticKernel::ComputeDerivWeight);
}
