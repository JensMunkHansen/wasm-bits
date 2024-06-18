// JavaScript wrapper for vtkInterpolateCalculator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkInterpolateCalculatorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkInterpolateCalculator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkIdTypeArray.h"
#include "vtkDataArray.h"
#include "vtkInterpolateCalculator.h"

template<> void emscripten::internal::raw_destructor<vtkInterpolateCalculator>(vtkInterpolateCalculator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInterpolateCalculator_class) {
  emscripten::class_<vtkInterpolateCalculator, emscripten::base<vtkCellAttributeCalculator>>("vtkInterpolateCalculator")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInterpolateCalculator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInterpolateCalculator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInterpolateCalculator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInterpolateCalculator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInterpolateCalculator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInterpolateCalculator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AnalyticDerivative", &vtkInterpolateCalculator::AnalyticDerivative)
    .function("EvaluateDerivative", emscripten::select_overload<void(vtkInterpolateCalculator&, int, const vtkVector3d&, std::vector<double>&, double)>([](vtkInterpolateCalculator& self, int arg_0, const vtkVector3d& arg_1, std::vector<double>& arg_2, double arg_3) -> void { return self.EvaluateDerivative( arg_0, arg_1, arg_2, arg_3); }));
}
