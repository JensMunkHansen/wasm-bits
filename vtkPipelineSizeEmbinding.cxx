// JavaScript wrapper for vtkPipelineSize with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPipelineSizeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPipelineSize.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithm.h"
#include "vtkPipelineSize.h"

template<> void emscripten::internal::raw_destructor<vtkPipelineSize>(vtkPipelineSize * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPipelineSize_class) {
  emscripten::class_<vtkPipelineSize, emscripten::base<vtkObject>>("vtkPipelineSize")
    .smart_ptr<vtkSmartPointer<vtkPipelineSize>>("vtkSmartPointer<vtkPipelineSize>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPipelineSize>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPipelineSize::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPipelineSize& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPipelineSize::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPipelineSize::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPipelineSize::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPipelineSize& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetEstimatedSize", &vtkPipelineSize::GetEstimatedSize, emscripten::allow_raw_pointers())
    .function("GetNumberOfSubPieces", &vtkPipelineSize::GetNumberOfSubPieces, emscripten::allow_raw_pointers());
}
