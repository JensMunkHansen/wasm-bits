// JavaScript wrapper for vtkPPairwiseExtractHistogram2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallelImaging.js/vtkFiltersParallelImaging.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallelImaging.js/vtkPPairwiseExtractHistogram2DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/ParallelImaging/vtkPPairwiseExtractHistogram2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkPPairwiseExtractHistogram2D.h"

template<> void emscripten::internal::raw_destructor<vtkPPairwiseExtractHistogram2D>(vtkPPairwiseExtractHistogram2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPPairwiseExtractHistogram2D_class) {
  emscripten::class_<vtkPPairwiseExtractHistogram2D, emscripten::base<vtkPairwiseExtractHistogram2D>>("vtkPPairwiseExtractHistogram2D")
    .smart_ptr<vtkSmartPointer<vtkPPairwiseExtractHistogram2D>>("vtkSmartPointer<vtkPPairwiseExtractHistogram2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPPairwiseExtractHistogram2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPPairwiseExtractHistogram2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPPairwiseExtractHistogram2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPPairwiseExtractHistogram2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPPairwiseExtractHistogram2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPPairwiseExtractHistogram2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPPairwiseExtractHistogram2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkPPairwiseExtractHistogram2D::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkPPairwiseExtractHistogram2D::GetController, emscripten::allow_raw_pointers());
}
