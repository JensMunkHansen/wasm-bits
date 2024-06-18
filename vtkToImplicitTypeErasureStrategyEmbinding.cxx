// JavaScript wrapper for vtkToImplicitTypeErasureStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersReduction.js/vtkFiltersReduction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersReduction.js/vtkToImplicitTypeErasureStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Reduction/vtkToImplicitTypeErasureStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkToImplicitStrategy.h"
#include "vtkDataArray.h"
#include "vtkSmartPointer.h"
#include "vtkToImplicitTypeErasureStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkToImplicitTypeErasureStrategy>(vtkToImplicitTypeErasureStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkToImplicitTypeErasureStrategy_class) {
  emscripten::class_<vtkToImplicitTypeErasureStrategy, emscripten::base<vtkToImplicitStrategy>>("vtkToImplicitTypeErasureStrategy")
    .smart_ptr<vtkSmartPointer<vtkToImplicitTypeErasureStrategy>>("vtkSmartPointer<vtkToImplicitTypeErasureStrategy>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkToImplicitTypeErasureStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkToImplicitTypeErasureStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkToImplicitTypeErasureStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkToImplicitTypeErasureStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkToImplicitTypeErasureStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkToImplicitTypeErasureStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkToImplicitTypeErasureStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Reduce", &vtkToImplicitTypeErasureStrategy::Reduce, emscripten::allow_raw_pointers());
}
