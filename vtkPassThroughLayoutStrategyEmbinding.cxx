// JavaScript wrapper for vtkPassThroughLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkPassThroughLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkPassThroughLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPassThroughLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkPassThroughLayoutStrategy>(vtkPassThroughLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPassThroughLayoutStrategy_class) {
  emscripten::class_<vtkPassThroughLayoutStrategy, emscripten::base<vtkGraphLayoutStrategy>>("vtkPassThroughLayoutStrategy")
    .smart_ptr<vtkSmartPointer<vtkPassThroughLayoutStrategy>>("vtkSmartPointer<vtkPassThroughLayoutStrategy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPassThroughLayoutStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPassThroughLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPassThroughLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPassThroughLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPassThroughLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPassThroughLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPassThroughLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkPassThroughLayoutStrategy::Initialize)
    .function("Layout", &vtkPassThroughLayoutStrategy::Layout)
    .function("IsLayoutComplete", &vtkPassThroughLayoutStrategy::IsLayoutComplete);
}
