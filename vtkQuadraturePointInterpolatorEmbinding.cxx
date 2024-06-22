// JavaScript wrapper for vtkQuadraturePointInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkQuadraturePointInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkQuadraturePointInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkQuadraturePointInterpolator.h"

template<> void emscripten::internal::raw_destructor<vtkQuadraturePointInterpolator>(vtkQuadraturePointInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuadraturePointInterpolator_class) {
  emscripten::class_<vtkQuadraturePointInterpolator, emscripten::base<vtkDataSetAlgorithm>>("vtkQuadraturePointInterpolator")
    .smart_ptr<vtkSmartPointer<vtkQuadraturePointInterpolator>>("vtkSmartPointer<vtkQuadraturePointInterpolator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkQuadraturePointInterpolator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraturePointInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuadraturePointInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuadraturePointInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuadraturePointInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraturePointInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuadraturePointInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
