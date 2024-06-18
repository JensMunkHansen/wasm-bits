// JavaScript wrapper for vtkToConstantArrayStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersReduction.js/vtkFiltersReduction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersReduction.js/vtkToConstantArrayStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Reduction/vtkToConstantArrayStrategy.h
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
#include "vtkToConstantArrayStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkToConstantArrayStrategy>(vtkToConstantArrayStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkToConstantArrayStrategy_class) {
  emscripten::class_<vtkToConstantArrayStrategy, emscripten::base<vtkToImplicitStrategy>>("vtkToConstantArrayStrategy")
    .smart_ptr<vtkSmartPointer<vtkToConstantArrayStrategy>>("vtkSmartPointer<vtkToConstantArrayStrategy>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkToConstantArrayStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkToConstantArrayStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkToConstantArrayStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkToConstantArrayStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkToConstantArrayStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkToConstantArrayStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkToConstantArrayStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Reduce", &vtkToConstantArrayStrategy::Reduce, emscripten::allow_raw_pointers());
}
