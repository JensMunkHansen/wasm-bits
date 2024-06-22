// JavaScript wrapper for vtkTreeOrbitLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkTreeOrbitLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkTreeOrbitLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTreeOrbitLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkTreeOrbitLayoutStrategy>(vtkTreeOrbitLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTreeOrbitLayoutStrategy_class) {
  emscripten::class_<vtkTreeOrbitLayoutStrategy, emscripten::base<vtkGraphLayoutStrategy>>("vtkTreeOrbitLayoutStrategy")
    .smart_ptr<vtkSmartPointer<vtkTreeOrbitLayoutStrategy>>("vtkSmartPointer<vtkTreeOrbitLayoutStrategy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTreeOrbitLayoutStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeOrbitLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTreeOrbitLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTreeOrbitLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTreeOrbitLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeOrbitLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTreeOrbitLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Layout", &vtkTreeOrbitLayoutStrategy::Layout)
    .function("SetLogSpacingValue", &vtkTreeOrbitLayoutStrategy::SetLogSpacingValue)
    .function("GetLogSpacingValue", &vtkTreeOrbitLayoutStrategy::GetLogSpacingValue)
    .function("SetLeafSpacing", &vtkTreeOrbitLayoutStrategy::SetLeafSpacing)
    .function("GetLeafSpacingMinValue", &vtkTreeOrbitLayoutStrategy::GetLeafSpacingMinValue)
    .function("GetLeafSpacingMaxValue", &vtkTreeOrbitLayoutStrategy::GetLeafSpacingMaxValue)
    .function("GetLeafSpacing", &vtkTreeOrbitLayoutStrategy::GetLeafSpacing)
    .function("SetChildRadiusFactor", &vtkTreeOrbitLayoutStrategy::SetChildRadiusFactor)
    .function("GetChildRadiusFactor", &vtkTreeOrbitLayoutStrategy::GetChildRadiusFactor);
}
