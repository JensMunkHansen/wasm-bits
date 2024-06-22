// JavaScript wrapper for vtkPExtractHistogram2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallelImaging.js/vtkFiltersParallelImaging.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallelImaging.js/vtkPExtractHistogram2DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/ParallelImaging/vtkPExtractHistogram2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkPExtractHistogram2D.h"

template<> void emscripten::internal::raw_destructor<vtkPExtractHistogram2D>(vtkPExtractHistogram2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPExtractHistogram2D_class) {
  emscripten::class_<vtkPExtractHistogram2D, emscripten::base<vtkExtractHistogram2D>>("vtkPExtractHistogram2D")
    .smart_ptr<vtkSmartPointer<vtkPExtractHistogram2D>>("vtkSmartPointer<vtkPExtractHistogram2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPExtractHistogram2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPExtractHistogram2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPExtractHistogram2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPExtractHistogram2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPExtractHistogram2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPExtractHistogram2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPExtractHistogram2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkPExtractHistogram2D::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkPExtractHistogram2D::GetController, emscripten::allow_raw_pointers());
}
