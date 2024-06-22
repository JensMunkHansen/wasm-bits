// JavaScript wrapper for vtkHyperTreeGridGenerateGlobalIds with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkHyperTreeGridGenerateGlobalIdsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkHyperTreeGridGenerateGlobalIds.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkHyperTreeGridGenerateGlobalIds.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridGenerateGlobalIds>(vtkHyperTreeGridGenerateGlobalIds * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridGenerateGlobalIds_class) {
  emscripten::class_<vtkHyperTreeGridGenerateGlobalIds, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkHyperTreeGridGenerateGlobalIds")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridGenerateGlobalIds>>("vtkSmartPointer<vtkHyperTreeGridGenerateGlobalIds>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHyperTreeGridGenerateGlobalIds>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridGenerateGlobalIds::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridGenerateGlobalIds& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridGenerateGlobalIds::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridGenerateGlobalIds::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridGenerateGlobalIds::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridGenerateGlobalIds& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkHyperTreeGridGenerateGlobalIds::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkHyperTreeGridGenerateGlobalIds::GetController, emscripten::allow_raw_pointers());
}
