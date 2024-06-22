// JavaScript wrapper for vtkSmoothErrorMetric with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkSmoothErrorMetricEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkSmoothErrorMetric.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSmoothErrorMetric.h"

template<> void emscripten::internal::raw_destructor<vtkSmoothErrorMetric>(vtkSmoothErrorMetric * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSmoothErrorMetric_class) {
  emscripten::class_<vtkSmoothErrorMetric, emscripten::base<vtkGenericSubdivisionErrorMetric>>("vtkSmoothErrorMetric")
    .smart_ptr<vtkSmartPointer<vtkSmoothErrorMetric>>("vtkSmartPointer<vtkSmoothErrorMetric>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSmoothErrorMetric>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSmoothErrorMetric::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSmoothErrorMetric& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSmoothErrorMetric::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSmoothErrorMetric::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSmoothErrorMetric::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSmoothErrorMetric& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetAngleTolerance", &vtkSmoothErrorMetric::GetAngleTolerance)
    .function("SetAngleTolerance", &vtkSmoothErrorMetric::SetAngleTolerance)
    .function("RequiresEdgeSubdivision", emscripten::optional_override([](vtkSmoothErrorMetric& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2, double arg_3) -> int {  return self.RequiresEdgeSubdivision(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<double*>(arg_2 * sizeof(double)), arg_3);}))
    .function("GetError", emscripten::optional_override([](vtkSmoothErrorMetric& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2, double arg_3) -> double {  return self.GetError(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<double*>(arg_2 * sizeof(double)), arg_3);}));
}
