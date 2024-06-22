// JavaScript wrapper for vtkRemoveGhosts with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkRemoveGhostsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkRemoveGhosts.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRemoveGhosts.h"

template<> void emscripten::internal::raw_destructor<vtkRemoveGhosts>(vtkRemoveGhosts * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRemoveGhosts_class) {
  emscripten::class_<vtkRemoveGhosts, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkRemoveGhosts")
    .smart_ptr<vtkSmartPointer<vtkRemoveGhosts>>("vtkSmartPointer<vtkRemoveGhosts>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRemoveGhosts>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRemoveGhosts::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRemoveGhosts& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRemoveGhosts::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRemoveGhosts::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRemoveGhosts::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRemoveGhosts& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
