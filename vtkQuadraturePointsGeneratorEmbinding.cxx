// JavaScript wrapper for vtkQuadraturePointsGenerator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkQuadraturePointsGeneratorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkQuadraturePointsGenerator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkQuadraturePointsGenerator.h"

template<> void emscripten::internal::raw_destructor<vtkQuadraturePointsGenerator>(vtkQuadraturePointsGenerator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuadraturePointsGenerator_class) {
  emscripten::class_<vtkQuadraturePointsGenerator, emscripten::base<vtkDataSetAlgorithm>>("vtkQuadraturePointsGenerator")
    .smart_ptr<vtkSmartPointer<vtkQuadraturePointsGenerator>>("vtkSmartPointer<vtkQuadraturePointsGenerator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkQuadraturePointsGenerator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraturePointsGenerator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuadraturePointsGenerator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuadraturePointsGenerator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuadraturePointsGenerator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraturePointsGenerator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuadraturePointsGenerator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
