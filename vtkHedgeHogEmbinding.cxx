// JavaScript wrapper for vtkHedgeHog with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkHedgeHogEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkHedgeHog.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHedgeHog.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkHedgeHog_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_USE_VECTOR", 0 },
      { "VTK_USE_NORMAL", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkHedgeHog>(vtkHedgeHog * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHedgeHog_class) {
  emscripten::class_<vtkHedgeHog, emscripten::base<vtkPolyDataAlgorithm>>("vtkHedgeHog")
    .smart_ptr<vtkSmartPointer<vtkHedgeHog>>("vtkSmartPointer<vtkHedgeHog>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHedgeHog>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHedgeHog::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHedgeHog& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHedgeHog::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHedgeHog::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHedgeHog::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHedgeHog& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetScaleFactor", &vtkHedgeHog::SetScaleFactor)
    .function("GetScaleFactor", &vtkHedgeHog::GetScaleFactor)
    .function("SetVectorMode", &vtkHedgeHog::SetVectorMode)
    .function("GetVectorMode", &vtkHedgeHog::GetVectorMode)
    .function("SetVectorModeToUseVector", &vtkHedgeHog::SetVectorModeToUseVector)
    .function("SetVectorModeToUseNormal", &vtkHedgeHog::SetVectorModeToUseNormal)
    .function("GetVectorModeAsString", emscripten::optional_override([](vtkHedgeHog& self) -> std::string {  return self.GetVectorModeAsString();}))
    .function("SetOutputPointsPrecision", &vtkHedgeHog::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkHedgeHog::GetOutputPointsPrecision);
}
