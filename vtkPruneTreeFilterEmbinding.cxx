// JavaScript wrapper for vtkPruneTreeFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkPruneTreeFilterEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkPruneTreeFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPruneTreeFilter.h"

template<> void emscripten::internal::raw_destructor<vtkPruneTreeFilter>(vtkPruneTreeFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPruneTreeFilter_class) {
  emscripten::class_<vtkPruneTreeFilter, emscripten::base<vtkTreeAlgorithm>>("vtkPruneTreeFilter")
    .smart_ptr<vtkSmartPointer<vtkPruneTreeFilter>>("vtkSmartPointer<vtkPruneTreeFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPruneTreeFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPruneTreeFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPruneTreeFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPruneTreeFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPruneTreeFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPruneTreeFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPruneTreeFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetParentVertex", &vtkPruneTreeFilter::GetParentVertex)
    .function("SetParentVertex", &vtkPruneTreeFilter::SetParentVertex)
    .function("GetShouldPruneParentVertex", &vtkPruneTreeFilter::GetShouldPruneParentVertex)
    .function("SetShouldPruneParentVertex", &vtkPruneTreeFilter::SetShouldPruneParentVertex);
}
