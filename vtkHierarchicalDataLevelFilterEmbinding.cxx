// JavaScript wrapper for vtkHierarchicalDataLevelFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkHierarchicalDataLevelFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkHierarchicalDataLevelFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHierarchicalDataLevelFilter.h"

template<> void emscripten::internal::raw_destructor<vtkHierarchicalDataLevelFilter>(vtkHierarchicalDataLevelFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHierarchicalDataLevelFilter_class) {
  emscripten::class_<vtkHierarchicalDataLevelFilter, emscripten::base<vtkLevelIdScalars>>("vtkHierarchicalDataLevelFilter")
    .smart_ptr<vtkSmartPointer<vtkHierarchicalDataLevelFilter>>("vtkSmartPointer<vtkHierarchicalDataLevelFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHierarchicalDataLevelFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHierarchicalDataLevelFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHierarchicalDataLevelFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHierarchicalDataLevelFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHierarchicalDataLevelFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHierarchicalDataLevelFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHierarchicalDataLevelFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
