// JavaScript wrapper for vtkBezierInterpolation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkBezierInterpolationEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkBezierInterpolation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkVector.h"
#include "vtkPoints.h"
#include "vtkBezierInterpolation.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkBezierInterpolation_0_1_constants) {
  emscripten::constant("VTK_21_POINT_WEDGE", true);
}
template<> void emscripten::internal::raw_destructor<vtkBezierInterpolation>(vtkBezierInterpolation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBezierInterpolation_class) {
  emscripten::class_<vtkBezierInterpolation, emscripten::base<vtkHigherOrderInterpolation>>("vtkBezierInterpolation")
    .smart_ptr<vtkSmartPointer<vtkBezierInterpolation>>("vtkSmartPointer<vtkBezierInterpolation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBezierInterpolation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBezierInterpolation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBezierInterpolation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBezierInterpolation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBezierInterpolation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBezierInterpolation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBezierInterpolation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("FlattenSimplex", &vtkBezierInterpolation::FlattenSimplex)
    .class_function("UnFlattenSimplex", &vtkBezierInterpolation::UnFlattenSimplex)
    .class_function("DeCasteljauSimplex", emscripten::optional_override([]( int arg_0, int arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3) -> void {  return vtkBezierInterpolation::DeCasteljauSimplex( arg_0, arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)),reinterpret_cast<double*>(arg_3 * sizeof(double)));}))
    .class_function("DeCasteljauSimplexDeriv", emscripten::optional_override([]( int arg_0, int arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3) -> void {  return vtkBezierInterpolation::DeCasteljauSimplexDeriv( arg_0, arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)),reinterpret_cast<double*>(arg_3 * sizeof(double)));}))
    .class_function("EvaluateShapeFunctions", emscripten::optional_override([]( int arg_0, double arg_1, std::uintptr_t arg_2) -> void {  return vtkBezierInterpolation::EvaluateShapeFunctions( arg_0, arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)));}))
    .class_function("EvaluateShapeAndGradient", emscripten::optional_override([]( int arg_0, double arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3) -> void {  return vtkBezierInterpolation::EvaluateShapeAndGradient( arg_0, arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)),reinterpret_cast<double*>(arg_3 * sizeof(double)));}));
}
