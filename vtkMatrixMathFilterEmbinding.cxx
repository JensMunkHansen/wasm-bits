// JavaScript wrapper for vtkMatrixMathFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersVerdict.js/vtkFiltersVerdict.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersVerdict.js/vtkMatrixMathFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Verdict/vtkMatrixMathFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkMatrixMathFilter.h"

template<> void emscripten::internal::raw_destructor<vtkMatrixMathFilter>(vtkMatrixMathFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMatrixMathFilter_class) {
  emscripten::class_<vtkMatrixMathFilter, emscripten::base<vtkDataSetAlgorithm>>("vtkMatrixMathFilter")
    .smart_ptr<vtkSmartPointer<vtkMatrixMathFilter>>("vtkSmartPointer<vtkMatrixMathFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMatrixMathFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMatrixMathFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMatrixMathFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMatrixMathFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMatrixMathFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMatrixMathFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMatrixMathFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOperation", &vtkMatrixMathFilter::SetOperation)
    .function("GetOperation", &vtkMatrixMathFilter::GetOperation)
    .function("SetOperationToDeterminant", &vtkMatrixMathFilter::SetOperationToDeterminant)
    .function("SetOperationToEigenvalue", &vtkMatrixMathFilter::SetOperationToEigenvalue)
    .function("SetOperationToEigenvector", &vtkMatrixMathFilter::SetOperationToEigenvector)
    .function("SetOperationToInverse", &vtkMatrixMathFilter::SetOperationToInverse);
}
