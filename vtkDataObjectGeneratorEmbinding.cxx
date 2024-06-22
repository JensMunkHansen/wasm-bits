// JavaScript wrapper for vtkDataObjectGenerator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkDataObjectGeneratorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkDataObjectGenerator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObjectGenerator.h"

template<> void emscripten::internal::raw_destructor<vtkDataObjectGenerator>(vtkDataObjectGenerator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataObjectGenerator_class) {
  emscripten::class_<vtkDataObjectGenerator, emscripten::base<vtkDataObjectAlgorithm>>("vtkDataObjectGenerator")
    .smart_ptr<vtkSmartPointer<vtkDataObjectGenerator>>("vtkSmartPointer<vtkDataObjectGenerator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDataObjectGenerator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectGenerator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataObjectGenerator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataObjectGenerator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataObjectGenerator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectGenerator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataObjectGenerator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetProgram", emscripten::optional_override([](vtkDataObjectGenerator& self, const std::string & arg_0) -> void {  return self.SetProgram( arg_0.c_str());}))
    .function("GetProgram", emscripten::optional_override([](vtkDataObjectGenerator& self) -> std::string {  return self.GetProgram();}));
}
