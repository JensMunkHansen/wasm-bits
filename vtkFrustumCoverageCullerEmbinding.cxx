// JavaScript wrapper for vtkFrustumCoverageCuller with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkFrustumCoverageCullerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkFrustumCoverageCuller.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkProp.h"
#include "vtkFrustumCoverageCuller.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkFrustumCoverageCuller_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_CULLER_SORT_NONE", 0 },
      { "VTK_CULLER_SORT_FRONT_TO_BACK", 1 },
      { "VTK_CULLER_SORT_BACK_TO_FRONT", 2 },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkFrustumCoverageCuller>(vtkFrustumCoverageCuller * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFrustumCoverageCuller_class) {
  emscripten::class_<vtkFrustumCoverageCuller, emscripten::base<vtkCuller>>("vtkFrustumCoverageCuller")
    .smart_ptr<vtkSmartPointer<vtkFrustumCoverageCuller>>("vtkSmartPointer<vtkFrustumCoverageCuller>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFrustumCoverageCuller>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFrustumCoverageCuller::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFrustumCoverageCuller& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFrustumCoverageCuller::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFrustumCoverageCuller::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFrustumCoverageCuller::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFrustumCoverageCuller& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMinimumCoverage", &vtkFrustumCoverageCuller::SetMinimumCoverage)
    .function("GetMinimumCoverage", &vtkFrustumCoverageCuller::GetMinimumCoverage)
    .function("SetMaximumCoverage", &vtkFrustumCoverageCuller::SetMaximumCoverage)
    .function("GetMaximumCoverage", &vtkFrustumCoverageCuller::GetMaximumCoverage)
    .function("SetSortingStyle", &vtkFrustumCoverageCuller::SetSortingStyle)
    .function("GetSortingStyleMinValue", &vtkFrustumCoverageCuller::GetSortingStyleMinValue)
    .function("GetSortingStyleMaxValue", &vtkFrustumCoverageCuller::GetSortingStyleMaxValue)
    .function("GetSortingStyle", &vtkFrustumCoverageCuller::GetSortingStyle)
    .function("SetSortingStyleToNone", &vtkFrustumCoverageCuller::SetSortingStyleToNone)
    .function("SetSortingStyleToBackToFront", &vtkFrustumCoverageCuller::SetSortingStyleToBackToFront)
    .function("SetSortingStyleToFrontToBack", &vtkFrustumCoverageCuller::SetSortingStyleToFrontToBack)
    .function("GetSortingStyleAsString", emscripten::optional_override([](vtkFrustumCoverageCuller& self) -> std::string {  return self.GetSortingStyleAsString();}));
}
