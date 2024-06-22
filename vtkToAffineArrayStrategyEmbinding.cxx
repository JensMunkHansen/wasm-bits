// JavaScript wrapper for vtkToAffineArrayStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersReduction.js/vtkFiltersReduction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersReduction.js/vtkToAffineArrayStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Reduction/vtkToAffineArrayStrategy.h
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
#include "vtkToAffineArrayStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkToAffineArrayStrategy>(vtkToAffineArrayStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkToAffineArrayStrategy_class) {
  emscripten::class_<vtkToAffineArrayStrategy, emscripten::base<vtkToImplicitStrategy>>("vtkToAffineArrayStrategy")
    .smart_ptr<vtkSmartPointer<vtkToAffineArrayStrategy>>("vtkSmartPointer<vtkToAffineArrayStrategy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkToAffineArrayStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkToAffineArrayStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkToAffineArrayStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkToAffineArrayStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkToAffineArrayStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkToAffineArrayStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkToAffineArrayStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Reduce", &vtkToAffineArrayStrategy::Reduce, emscripten::allow_raw_pointers());
}
