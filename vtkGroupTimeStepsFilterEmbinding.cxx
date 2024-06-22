// JavaScript wrapper for vtkGroupTimeStepsFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkGroupTimeStepsFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkGroupTimeStepsFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGroupTimeStepsFilter.h"

template<> void emscripten::internal::raw_destructor<vtkGroupTimeStepsFilter>(vtkGroupTimeStepsFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGroupTimeStepsFilter_class) {
  emscripten::class_<vtkGroupTimeStepsFilter, emscripten::base<vtkDataObjectAlgorithm>>("vtkGroupTimeStepsFilter")
    .smart_ptr<vtkSmartPointer<vtkGroupTimeStepsFilter>>("vtkSmartPointer<vtkGroupTimeStepsFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGroupTimeStepsFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGroupTimeStepsFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGroupTimeStepsFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGroupTimeStepsFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGroupTimeStepsFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGroupTimeStepsFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGroupTimeStepsFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
