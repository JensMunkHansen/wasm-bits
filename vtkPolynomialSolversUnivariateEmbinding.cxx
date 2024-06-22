// JavaScript wrapper for vtkPolynomialSolversUnivariate with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkCommonMath.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkPolynomialSolversUnivariateEmbinding.cxx \
 /home/jmh/github/vtk/Common/Math/vtkPolynomialSolversUnivariate.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolynomialSolversUnivariate.h"

template<> void emscripten::internal::raw_destructor<vtkPolynomialSolversUnivariate>(vtkPolynomialSolversUnivariate * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolynomialSolversUnivariate_class) {
  emscripten::class_<vtkPolynomialSolversUnivariate, emscripten::base<vtkObject>>("vtkPolynomialSolversUnivariate")
    .smart_ptr<vtkSmartPointer<vtkPolynomialSolversUnivariate>>("vtkSmartPointer<vtkPolynomialSolversUnivariate>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPolynomialSolversUnivariate>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolynomialSolversUnivariate::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolynomialSolversUnivariate& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolynomialSolversUnivariate::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolynomialSolversUnivariate::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolynomialSolversUnivariate::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolynomialSolversUnivariate& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("HabichtBisectionSolve", emscripten::select_overload<int( std::uintptr_t, int, std::uintptr_t, std::uintptr_t, double)>([]( std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3, double arg_4) -> int { return vtkPolynomialSolversUnivariate::HabichtBisectionSolve(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)),reinterpret_cast<double*>(arg_3 * sizeof(double)), arg_4); }))
    .class_function("HabichtBisectionSolve", emscripten::select_overload<int( std::uintptr_t, int, std::uintptr_t, std::uintptr_t, double, int)>([]( std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3, double arg_4, int arg_5) -> int { return vtkPolynomialSolversUnivariate::HabichtBisectionSolve(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)),reinterpret_cast<double*>(arg_3 * sizeof(double)), arg_4, arg_5); }))
    .class_function("HabichtBisectionSolve", emscripten::select_overload<int( std::uintptr_t, int, std::uintptr_t, std::uintptr_t, double, int, bool)>([]( std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3, double arg_4, int arg_5, bool arg_6) -> int { return vtkPolynomialSolversUnivariate::HabichtBisectionSolve(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)),reinterpret_cast<double*>(arg_3 * sizeof(double)), arg_4, arg_5, arg_6); }))
    .class_function("SturmBisectionSolve", emscripten::select_overload<int( std::uintptr_t, int, std::uintptr_t, std::uintptr_t, double)>([]( std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3, double arg_4) -> int { return vtkPolynomialSolversUnivariate::SturmBisectionSolve(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)),reinterpret_cast<double*>(arg_3 * sizeof(double)), arg_4); }))
    .class_function("SturmBisectionSolve", emscripten::select_overload<int( std::uintptr_t, int, std::uintptr_t, std::uintptr_t, double, int)>([]( std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3, double arg_4, int arg_5) -> int { return vtkPolynomialSolversUnivariate::SturmBisectionSolve(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)),reinterpret_cast<double*>(arg_3 * sizeof(double)), arg_4, arg_5); }))
    .class_function("SturmBisectionSolve", emscripten::select_overload<int( std::uintptr_t, int, std::uintptr_t, std::uintptr_t, double, int, bool)>([]( std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3, double arg_4, int arg_5, bool arg_6) -> int { return vtkPolynomialSolversUnivariate::SturmBisectionSolve(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)),reinterpret_cast<double*>(arg_3 * sizeof(double)), arg_4, arg_5, arg_6); }))
    .class_function("FilterRoots", emscripten::optional_override([]( std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, int arg_3, double arg_4) -> int {  return vtkPolynomialSolversUnivariate::FilterRoots(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)), arg_3, arg_4);}))
    .class_function("FerrariSolve", emscripten::optional_override([]( std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2, double arg_3) -> int {  return vtkPolynomialSolversUnivariate::FerrariSolve(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<int*>(arg_2 * sizeof(int)), arg_3);}))
    .class_function("TartagliaCardanSolve", emscripten::optional_override([]( std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2, double arg_3) -> int {  return vtkPolynomialSolversUnivariate::TartagliaCardanSolve(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<int*>(arg_2 * sizeof(int)), arg_3);}))
    .class_function("SolveCubic", emscripten::select_overload<std::uintptr_t( double, double, double, double)>([]( double arg_0, double arg_1, double arg_2, double arg_3) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(vtkPolynomialSolversUnivariate::SolveCubic( arg_0, arg_1, arg_2, arg_3)); }))
    .class_function("SolveCubic", emscripten::select_overload<int( double, double, double, double, std::uintptr_t, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([]( double arg_0, double arg_1, double arg_2, double arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5, std::uintptr_t arg_6, std::uintptr_t arg_7) -> int { return vtkPolynomialSolversUnivariate::SolveCubic( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<double*>(arg_4 * sizeof(double)),reinterpret_cast<double*>(arg_5 * sizeof(double)),reinterpret_cast<double*>(arg_6 * sizeof(double)),reinterpret_cast<int*>(arg_7 * sizeof(int))); }))
    .class_function("SolveQuadratic", emscripten::select_overload<std::uintptr_t( double, double, double)>([]( double arg_0, double arg_1, double arg_2) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(vtkPolynomialSolversUnivariate::SolveQuadratic( arg_0, arg_1, arg_2)); }))
    .class_function("SolveQuadratic", emscripten::select_overload<int( std::uintptr_t, std::uintptr_t, std::uintptr_t)>([]( std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> int { return vtkPolynomialSolversUnivariate::SolveQuadratic(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<int*>(arg_2 * sizeof(int))); }))
    .class_function("SolveQuadratic", emscripten::select_overload<int( double, double, double, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([]( double arg_0, double arg_1, double arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5) -> int { return vtkPolynomialSolversUnivariate::SolveQuadratic( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double)),reinterpret_cast<double*>(arg_4 * sizeof(double)),reinterpret_cast<int*>(arg_5 * sizeof(int))); }))
    .class_function("SolveLinear", emscripten::select_overload<std::uintptr_t( double, double)>([]( double arg_0, double arg_1) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(vtkPolynomialSolversUnivariate::SolveLinear( arg_0, arg_1)); }))
    .class_function("SolveLinear", emscripten::select_overload<int( double, double, std::uintptr_t, std::uintptr_t)>([]( double arg_0, double arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3) -> int { return vtkPolynomialSolversUnivariate::SolveLinear( arg_0, arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)),reinterpret_cast<int*>(arg_3 * sizeof(int))); }))
    .class_function("SetDivisionTolerance", &vtkPolynomialSolversUnivariate::SetDivisionTolerance)
    .class_function("GetDivisionTolerance", &vtkPolynomialSolversUnivariate::GetDivisionTolerance);
}
