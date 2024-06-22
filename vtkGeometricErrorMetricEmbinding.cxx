// JavaScript wrapper for vtkGeometricErrorMetric with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkGeometricErrorMetricEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkGeometricErrorMetric.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericDataSet.h"
#include "vtkGeometricErrorMetric.h"

template<> void emscripten::internal::raw_destructor<vtkGeometricErrorMetric>(vtkGeometricErrorMetric * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGeometricErrorMetric_class) {
  emscripten::class_<vtkGeometricErrorMetric, emscripten::base<vtkGenericSubdivisionErrorMetric>>("vtkGeometricErrorMetric")
    .smart_ptr<vtkSmartPointer<vtkGeometricErrorMetric>>("vtkSmartPointer<vtkGeometricErrorMetric>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGeometricErrorMetric>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGeometricErrorMetric::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGeometricErrorMetric& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGeometricErrorMetric::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGeometricErrorMetric::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGeometricErrorMetric::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGeometricErrorMetric& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetAbsoluteGeometricTolerance", &vtkGeometricErrorMetric::GetAbsoluteGeometricTolerance)
    .function("SetAbsoluteGeometricTolerance", &vtkGeometricErrorMetric::SetAbsoluteGeometricTolerance)
    .function("SetRelativeGeometricTolerance", &vtkGeometricErrorMetric::SetRelativeGeometricTolerance, emscripten::allow_raw_pointers())
    .function("RequiresEdgeSubdivision", emscripten::optional_override([](vtkGeometricErrorMetric& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2, double arg_3) -> int {  return self.RequiresEdgeSubdivision(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<double*>(arg_2 * sizeof(double)), arg_3);}))
    .function("GetError", emscripten::optional_override([](vtkGeometricErrorMetric& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2, double arg_3) -> double {  return self.GetError(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<double*>(arg_2 * sizeof(double)), arg_3);}))
    .function("GetRelative", &vtkGeometricErrorMetric::GetRelative);
}
