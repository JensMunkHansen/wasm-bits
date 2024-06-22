// JavaScript wrapper for vtkComputeQuartiles with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkComputeQuartilesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkComputeQuartiles.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkComputeQuartiles.h"

template<> void emscripten::internal::raw_destructor<vtkComputeQuartiles>(vtkComputeQuartiles * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkComputeQuartiles_class) {
  emscripten::class_<vtkComputeQuartiles, emscripten::base<vtkComputeQuantiles>>("vtkComputeQuartiles")
    .smart_ptr<vtkSmartPointer<vtkComputeQuartiles>>("vtkSmartPointer<vtkComputeQuartiles>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkComputeQuartiles>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkComputeQuartiles::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkComputeQuartiles& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkComputeQuartiles::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkComputeQuartiles::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkComputeQuartiles::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkComputeQuartiles& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
