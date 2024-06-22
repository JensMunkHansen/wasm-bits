// JavaScript wrapper for vtkLagrangeInterpolation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkLagrangeInterpolationEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkLagrangeInterpolation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkPoints.h"
#include "vtkLagrangeInterpolation.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkLagrangeInterpolation_0_1_constants) {
  emscripten::constant("VTK_21_POINT_WEDGE", true);
}
template<> void emscripten::internal::raw_destructor<vtkLagrangeInterpolation>(vtkLagrangeInterpolation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLagrangeInterpolation_class) {
  emscripten::class_<vtkLagrangeInterpolation, emscripten::base<vtkHigherOrderInterpolation>>("vtkLagrangeInterpolation")
    .smart_ptr<vtkSmartPointer<vtkLagrangeInterpolation>>("vtkSmartPointer<vtkLagrangeInterpolation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLagrangeInterpolation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangeInterpolation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLagrangeInterpolation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLagrangeInterpolation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLagrangeInterpolation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangeInterpolation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLagrangeInterpolation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("EvaluateShapeFunctions", emscripten::optional_override([]( int arg_0, double arg_1, std::uintptr_t arg_2) -> void {  return vtkLagrangeInterpolation::EvaluateShapeFunctions( arg_0, arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)));}))
    .class_function("EvaluateShapeAndGradient", emscripten::optional_override([]( int arg_0, double arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3) -> void {  return vtkLagrangeInterpolation::EvaluateShapeAndGradient( arg_0, arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)),reinterpret_cast<double*>(arg_3 * sizeof(double)));}));
}
