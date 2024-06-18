// JavaScript wrapper for vtkKMeansDistanceFunctorCalculator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkKMeansDistanceFunctorCalculatorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkKMeansDistanceFunctorCalculator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVariantArray.h"
#include "vtkFunctionParser.h"
#include "vtkKMeansDistanceFunctorCalculator.h"

template<> void emscripten::internal::raw_destructor<vtkKMeansDistanceFunctorCalculator>(vtkKMeansDistanceFunctorCalculator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkKMeansDistanceFunctorCalculator_class) {
  emscripten::class_<vtkKMeansDistanceFunctorCalculator, emscripten::base<vtkKMeansDistanceFunctor>>("vtkKMeansDistanceFunctorCalculator")
    .smart_ptr<vtkSmartPointer<vtkKMeansDistanceFunctorCalculator>>("vtkSmartPointer<vtkKMeansDistanceFunctorCalculator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkKMeansDistanceFunctorCalculator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKMeansDistanceFunctorCalculator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkKMeansDistanceFunctorCalculator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkKMeansDistanceFunctorCalculator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkKMeansDistanceFunctorCalculator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKMeansDistanceFunctorCalculator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkKMeansDistanceFunctorCalculator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDistanceExpression", emscripten::optional_override([](vtkKMeansDistanceFunctorCalculator& self, const std::string & arg_0) -> void {  return self.SetDistanceExpression( arg_0.c_str());}))
    .function("GetDistanceExpression", emscripten::optional_override([](vtkKMeansDistanceFunctorCalculator& self) -> std::string {  return self.GetDistanceExpression();}))
    .function("SetFunctionParser", &vtkKMeansDistanceFunctorCalculator::SetFunctionParser, emscripten::allow_raw_pointers())
    .function("GetFunctionParser", &vtkKMeansDistanceFunctorCalculator::GetFunctionParser, emscripten::allow_raw_pointers());
}
