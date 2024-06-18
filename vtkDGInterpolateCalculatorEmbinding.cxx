// JavaScript wrapper for vtkDGInterpolateCalculator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkDGInterpolateCalculatorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkDGInterpolateCalculator.h
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
#include "vtkSmartPointer.h"
#include "vtkCellMetadata.h"
#include "vtkCellAttribute.h"
#include "vtkDGInterpolateCalculator.h"

template<> void emscripten::internal::raw_destructor<vtkDGInterpolateCalculator>(vtkDGInterpolateCalculator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDGInterpolateCalculator_class) {
  emscripten::class_<vtkDGInterpolateCalculator, emscripten::base<vtkInterpolateCalculator>>("vtkDGInterpolateCalculator")
    .smart_ptr<vtkSmartPointer<vtkDGInterpolateCalculator>>("vtkSmartPointer<vtkDGInterpolateCalculator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDGInterpolateCalculator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGInterpolateCalculator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDGInterpolateCalculator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDGInterpolateCalculator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDGInterpolateCalculator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGInterpolateCalculator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDGInterpolateCalculator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Evaluate", emscripten::select_overload<void(vtkDGInterpolateCalculator&, int, const vtkVector3d&, std::vector<double>&)>([](vtkDGInterpolateCalculator& self, int arg_0, const vtkVector3d& arg_1, std::vector<double>& arg_2) -> void { return self.Evaluate( arg_0, arg_1, arg_2); }))
    .function("Evaluate", emscripten::select_overload<void(vtkDGInterpolateCalculator&, vtkIdTypeArray*, vtkDataArray*, vtkDataArray*)>([](vtkDGInterpolateCalculator& self, vtkIdTypeArray* arg_0, vtkDataArray* arg_1, vtkDataArray* arg_2) -> void { return self.Evaluate( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("AnalyticDerivative", &vtkDGInterpolateCalculator::AnalyticDerivative)
    .function("EvaluateDerivative", emscripten::select_overload<void(vtkDGInterpolateCalculator&, int, const vtkVector3d&, std::vector<double>&, double)>([](vtkDGInterpolateCalculator& self, int arg_0, const vtkVector3d& arg_1, std::vector<double>& arg_2, double arg_3) -> void { return self.EvaluateDerivative( arg_0, arg_1, arg_2, arg_3); }))
    .function("EvaluateDerivative", emscripten::select_overload<void(vtkDGInterpolateCalculator&, vtkIdTypeArray*, vtkDataArray*, vtkDataArray*)>([](vtkDGInterpolateCalculator& self, vtkIdTypeArray* arg_0, vtkDataArray* arg_1, vtkDataArray* arg_2) -> void { return self.EvaluateDerivative( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("PrepareForGrid", &vtkDGInterpolateCalculator::PrepareForGrid, emscripten::allow_raw_pointers());
}
