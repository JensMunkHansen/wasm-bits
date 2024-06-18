// JavaScript wrapper for vtkViewDependentErrorMetric with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkViewDependentErrorMetricEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkViewDependentErrorMetric.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkViewDependentErrorMetric.h"

template<> void emscripten::internal::raw_destructor<vtkViewDependentErrorMetric>(vtkViewDependentErrorMetric * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkViewDependentErrorMetric_class) {
  emscripten::class_<vtkViewDependentErrorMetric, emscripten::base<vtkGenericSubdivisionErrorMetric>>("vtkViewDependentErrorMetric")
    .smart_ptr<vtkSmartPointer<vtkViewDependentErrorMetric>>("vtkSmartPointer<vtkViewDependentErrorMetric>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkViewDependentErrorMetric>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkViewDependentErrorMetric::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkViewDependentErrorMetric& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkViewDependentErrorMetric::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkViewDependentErrorMetric::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkViewDependentErrorMetric::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkViewDependentErrorMetric& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPixelTolerance", &vtkViewDependentErrorMetric::GetPixelTolerance)
    .function("SetPixelTolerance", &vtkViewDependentErrorMetric::SetPixelTolerance)
    .function("GetViewport", &vtkViewDependentErrorMetric::GetViewport, emscripten::allow_raw_pointers())
    .function("SetViewport", &vtkViewDependentErrorMetric::SetViewport, emscripten::allow_raw_pointers())
    .function("RequiresEdgeSubdivision", emscripten::optional_override([](vtkViewDependentErrorMetric& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2, double arg_3) -> int {  return self.RequiresEdgeSubdivision(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<double*>(arg_2 * sizeof(double)), arg_3);}))
    .function("GetError", emscripten::optional_override([](vtkViewDependentErrorMetric& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2, double arg_3) -> double {  return self.GetError(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<double*>(arg_2 * sizeof(double)), arg_3);}));
}
