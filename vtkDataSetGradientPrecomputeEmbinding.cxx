// JavaScript wrapper for vtkDataSetGradientPrecompute with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkDataSetGradientPrecomputeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkDataSetGradientPrecompute.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkDataSetAlgorithm.h"
#include "vtkDataSetGradientPrecompute.h"

template<> void emscripten::internal::raw_destructor<vtkDataSetGradientPrecompute>(vtkDataSetGradientPrecompute * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataSetGradientPrecompute_class) {
  emscripten::class_<vtkDataSetGradientPrecompute, emscripten::base<vtkDataSetAlgorithm>>("vtkDataSetGradientPrecompute")
    .smart_ptr<vtkSmartPointer<vtkDataSetGradientPrecompute>>("vtkSmartPointer<vtkDataSetGradientPrecompute>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDataSetGradientPrecompute>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetGradientPrecompute::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataSetGradientPrecompute& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataSetGradientPrecompute::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataSetGradientPrecompute::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetGradientPrecompute::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataSetGradientPrecompute& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("GradientPrecompute", &vtkDataSetGradientPrecompute::GradientPrecompute, emscripten::allow_raw_pointers());
}
