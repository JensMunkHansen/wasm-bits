// JavaScript wrapper for vtkContinuousScatterplot with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkContinuousScatterplotEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkContinuousScatterplot.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContinuousScatterplot.h"

template<> void emscripten::internal::raw_destructor<vtkContinuousScatterplot>(vtkContinuousScatterplot * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContinuousScatterplot_class) {
  emscripten::class_<vtkContinuousScatterplot, emscripten::base<vtkImageAlgorithm>>("vtkContinuousScatterplot")
    .smart_ptr<vtkSmartPointer<vtkContinuousScatterplot>>("vtkSmartPointer<vtkContinuousScatterplot>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkContinuousScatterplot>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContinuousScatterplot::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContinuousScatterplot& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContinuousScatterplot::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContinuousScatterplot::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContinuousScatterplot::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContinuousScatterplot& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetEpsilon", &vtkContinuousScatterplot::GetEpsilon)
    .function("SetEpsilon", &vtkContinuousScatterplot::SetEpsilon)
    .function("SetField1", emscripten::optional_override([](vtkContinuousScatterplot& self, const std::string & arg_0, int arg_1) -> void {  return self.SetField1( arg_0.c_str(), arg_1);}))
    .function("SetField2", emscripten::optional_override([](vtkContinuousScatterplot& self, const std::string & arg_0, int arg_1) -> void {  return self.SetField2( arg_0.c_str(), arg_1);}));
}
