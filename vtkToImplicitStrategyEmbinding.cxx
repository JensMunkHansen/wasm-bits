// JavaScript wrapper for vtkToImplicitStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersReduction.js/vtkFiltersReduction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersReduction.js/vtkToImplicitStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Reduction/vtkToImplicitStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkSmartPointer.h"
#include "vtkToImplicitStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkToImplicitStrategy>(vtkToImplicitStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkToImplicitStrategy_class) {
  emscripten::class_<vtkToImplicitStrategy, emscripten::base<vtkObject>>("vtkToImplicitStrategy")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkToImplicitStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkToImplicitStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkToImplicitStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkToImplicitStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkToImplicitStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkToImplicitStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTolerance", &vtkToImplicitStrategy::SetTolerance)
    .function("GetTolerance", &vtkToImplicitStrategy::GetTolerance)
    .function("ClearCache", &vtkToImplicitStrategy::ClearCache);
}
