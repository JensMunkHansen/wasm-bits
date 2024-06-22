// JavaScript wrapper for vtkFitImplicitFunction with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFitImplicitFunctionEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkFitImplicitFunction.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitFunction.h"
#include "vtkFitImplicitFunction.h"

template<> void emscripten::internal::raw_destructor<vtkFitImplicitFunction>(vtkFitImplicitFunction * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFitImplicitFunction_class) {
  emscripten::class_<vtkFitImplicitFunction, emscripten::base<vtkPointCloudFilter>>("vtkFitImplicitFunction")
    .smart_ptr<vtkSmartPointer<vtkFitImplicitFunction>>("vtkSmartPointer<vtkFitImplicitFunction>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFitImplicitFunction>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFitImplicitFunction::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFitImplicitFunction& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFitImplicitFunction::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFitImplicitFunction::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFitImplicitFunction::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFitImplicitFunction& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetImplicitFunction", &vtkFitImplicitFunction::SetImplicitFunction, emscripten::allow_raw_pointers())
    .function("GetImplicitFunction", &vtkFitImplicitFunction::GetImplicitFunction, emscripten::allow_raw_pointers())
    .function("SetThreshold", &vtkFitImplicitFunction::SetThreshold)
    .function("GetThresholdMinValue", &vtkFitImplicitFunction::GetThresholdMinValue)
    .function("GetThresholdMaxValue", &vtkFitImplicitFunction::GetThresholdMaxValue)
    .function("GetThreshold", &vtkFitImplicitFunction::GetThreshold)
    .function("GetMTime", &vtkFitImplicitFunction::GetMTime);
}
