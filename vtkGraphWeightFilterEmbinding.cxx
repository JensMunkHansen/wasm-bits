// JavaScript wrapper for vtkGraphWeightFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkGraphWeightFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkGraphWeightFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraphWeightFilter.h"

template<> void emscripten::internal::raw_destructor<vtkGraphWeightFilter>(vtkGraphWeightFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGraphWeightFilter_class) {
  emscripten::class_<vtkGraphWeightFilter, emscripten::base<vtkGraphAlgorithm>>("vtkGraphWeightFilter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphWeightFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGraphWeightFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGraphWeightFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGraphWeightFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphWeightFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGraphWeightFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
