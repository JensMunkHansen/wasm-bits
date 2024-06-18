// JavaScript wrapper for vtkSPHCubicKernel with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkSPHCubicKernelEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkSPHCubicKernel.h
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
#include "vtkSPHCubicKernel.h"

template<> void emscripten::internal::raw_destructor<vtkSPHCubicKernel>(vtkSPHCubicKernel * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSPHCubicKernel_class) {
  emscripten::class_<vtkSPHCubicKernel, emscripten::base<vtkSPHKernel>>("vtkSPHCubicKernel")
    .smart_ptr<vtkSmartPointer<vtkSPHCubicKernel>>("vtkSmartPointer<vtkSPHCubicKernel>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSPHCubicKernel>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSPHCubicKernel::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSPHCubicKernel& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSPHCubicKernel::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSPHCubicKernel::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSPHCubicKernel::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSPHCubicKernel& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkSPHCubicKernel::Initialize, emscripten::allow_raw_pointers())
    .function("ComputeFunctionWeight", &vtkSPHCubicKernel::ComputeFunctionWeight)
    .function("ComputeDerivWeight", &vtkSPHCubicKernel::ComputeDerivWeight);
}
