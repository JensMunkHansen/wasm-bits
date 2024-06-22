// JavaScript wrapper for vtkDataSetGradient with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkDataSetGradientEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkDataSetGradient.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSetGradient.h"

template<> void emscripten::internal::raw_destructor<vtkDataSetGradient>(vtkDataSetGradient * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataSetGradient_class) {
  emscripten::class_<vtkDataSetGradient, emscripten::base<vtkDataSetAlgorithm>>("vtkDataSetGradient")
    .smart_ptr<vtkSmartPointer<vtkDataSetGradient>>("vtkSmartPointer<vtkDataSetGradient>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDataSetGradient>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetGradient::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataSetGradient& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataSetGradient::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataSetGradient::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetGradient::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataSetGradient& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetResultArrayName", emscripten::optional_override([](vtkDataSetGradient& self, const std::string & arg_0) -> void {  return self.SetResultArrayName( arg_0.c_str());}))
    .function("GetResultArrayName", emscripten::optional_override([](vtkDataSetGradient& self) -> std::string {  return self.GetResultArrayName();}));
}
