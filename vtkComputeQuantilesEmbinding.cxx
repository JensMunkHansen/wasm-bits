// JavaScript wrapper for vtkComputeQuantiles with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkComputeQuantilesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkComputeQuantiles.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkComputeQuantiles.h"

template<> void emscripten::internal::raw_destructor<vtkComputeQuantiles>(vtkComputeQuantiles * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkComputeQuantiles_class) {
  emscripten::class_<vtkComputeQuantiles, emscripten::base<vtkTableAlgorithm>>("vtkComputeQuantiles")
    .smart_ptr<vtkSmartPointer<vtkComputeQuantiles>>("vtkSmartPointer<vtkComputeQuantiles>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkComputeQuantiles>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkComputeQuantiles::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkComputeQuantiles& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkComputeQuantiles::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkComputeQuantiles::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkComputeQuantiles::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkComputeQuantiles& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfIntervals", &vtkComputeQuantiles::GetNumberOfIntervals)
    .function("SetNumberOfIntervals", &vtkComputeQuantiles::SetNumberOfIntervals);
}
