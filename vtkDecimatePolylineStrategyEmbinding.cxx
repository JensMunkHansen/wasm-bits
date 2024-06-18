// JavaScript wrapper for vtkDecimatePolylineStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkDecimatePolylineStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkDecimatePolylineStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkPointSet.h"
#include "vtkDecimatePolylineStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkDecimatePolylineStrategy>(vtkDecimatePolylineStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDecimatePolylineStrategy_class) {
  emscripten::class_<vtkDecimatePolylineStrategy, emscripten::base<vtkObject>>("vtkDecimatePolylineStrategy")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDecimatePolylineStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDecimatePolylineStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDecimatePolylineStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDecimatePolylineStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDecimatePolylineStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDecimatePolylineStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
