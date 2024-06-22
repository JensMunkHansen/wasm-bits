// JavaScript wrapper for vtkToImplicitRamerDouglasPeuckerStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersReduction.js/vtkFiltersReduction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersReduction.js/vtkToImplicitRamerDouglasPeuckerStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Reduction/vtkToImplicitRamerDouglasPeuckerStrategy.h
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
#include "vtkToImplicitRamerDouglasPeuckerStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkToImplicitRamerDouglasPeuckerStrategy>(vtkToImplicitRamerDouglasPeuckerStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkToImplicitRamerDouglasPeuckerStrategy_class) {
  emscripten::class_<vtkToImplicitRamerDouglasPeuckerStrategy, emscripten::base<vtkToImplicitStrategy>>("vtkToImplicitRamerDouglasPeuckerStrategy")
    .smart_ptr<vtkSmartPointer<vtkToImplicitRamerDouglasPeuckerStrategy>>("vtkSmartPointer<vtkToImplicitRamerDouglasPeuckerStrategy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkToImplicitRamerDouglasPeuckerStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkToImplicitRamerDouglasPeuckerStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkToImplicitRamerDouglasPeuckerStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkToImplicitRamerDouglasPeuckerStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkToImplicitRamerDouglasPeuckerStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkToImplicitRamerDouglasPeuckerStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkToImplicitRamerDouglasPeuckerStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Reduce", &vtkToImplicitRamerDouglasPeuckerStrategy::Reduce, emscripten::allow_raw_pointers())
    .function("ClearCache", &vtkToImplicitRamerDouglasPeuckerStrategy::ClearCache);
}
