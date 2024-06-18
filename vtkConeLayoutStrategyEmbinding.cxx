// JavaScript wrapper for vtkConeLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkConeLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkConeLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkConeLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkConeLayoutStrategy>(vtkConeLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConeLayoutStrategy_class) {
  emscripten::class_<vtkConeLayoutStrategy, emscripten::base<vtkGraphLayoutStrategy>>("vtkConeLayoutStrategy")
    .smart_ptr<vtkSmartPointer<vtkConeLayoutStrategy>>("vtkSmartPointer<vtkConeLayoutStrategy>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkConeLayoutStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConeLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConeLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConeLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConeLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConeLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConeLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCompactness", &vtkConeLayoutStrategy::SetCompactness)
    .function("GetCompactness", &vtkConeLayoutStrategy::GetCompactness)
    .function("SetCompression", &vtkConeLayoutStrategy::SetCompression)
    .function("GetCompression", &vtkConeLayoutStrategy::GetCompression)
    .function("CompressionOn", &vtkConeLayoutStrategy::CompressionOn)
    .function("CompressionOff", &vtkConeLayoutStrategy::CompressionOff)
    .function("SetSpacing", &vtkConeLayoutStrategy::SetSpacing)
    .function("GetSpacing", &vtkConeLayoutStrategy::GetSpacing)
    .function("Layout", &vtkConeLayoutStrategy::Layout);
}
