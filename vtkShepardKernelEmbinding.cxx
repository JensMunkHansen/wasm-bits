// JavaScript wrapper for vtkShepardKernel with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkShepardKernelEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkShepardKernel.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdList.h"
#include "vtkDoubleArray.h"
#include "vtkShepardKernel.h"

template<> void emscripten::internal::raw_destructor<vtkShepardKernel>(vtkShepardKernel * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkShepardKernel_class) {
  emscripten::class_<vtkShepardKernel, emscripten::base<vtkGeneralizedKernel>>("vtkShepardKernel")
    .smart_ptr<vtkSmartPointer<vtkShepardKernel>>("vtkSmartPointer<vtkShepardKernel>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkShepardKernel>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShepardKernel::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkShepardKernel& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkShepardKernel::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkShepardKernel::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShepardKernel::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkShepardKernel& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPowerParameter", &vtkShepardKernel::SetPowerParameter)
    .function("GetPowerParameterMinValue", &vtkShepardKernel::GetPowerParameterMinValue)
    .function("GetPowerParameterMaxValue", &vtkShepardKernel::GetPowerParameterMaxValue)
    .function("GetPowerParameter", &vtkShepardKernel::GetPowerParameter);
}
