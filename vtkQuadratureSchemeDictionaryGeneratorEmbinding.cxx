// JavaScript wrapper for vtkQuadratureSchemeDictionaryGenerator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkQuadratureSchemeDictionaryGeneratorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkQuadratureSchemeDictionaryGenerator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkQuadratureSchemeDictionaryGenerator.h"

template<> void emscripten::internal::raw_destructor<vtkQuadratureSchemeDictionaryGenerator>(vtkQuadratureSchemeDictionaryGenerator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuadratureSchemeDictionaryGenerator_class) {
  emscripten::class_<vtkQuadratureSchemeDictionaryGenerator, emscripten::base<vtkDataSetAlgorithm>>("vtkQuadratureSchemeDictionaryGenerator")
    .smart_ptr<vtkSmartPointer<vtkQuadratureSchemeDictionaryGenerator>>("vtkSmartPointer<vtkQuadratureSchemeDictionaryGenerator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkQuadratureSchemeDictionaryGenerator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadratureSchemeDictionaryGenerator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuadratureSchemeDictionaryGenerator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuadratureSchemeDictionaryGenerator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuadratureSchemeDictionaryGenerator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadratureSchemeDictionaryGenerator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuadratureSchemeDictionaryGenerator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
