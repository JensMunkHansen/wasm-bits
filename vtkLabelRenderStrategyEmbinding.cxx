// JavaScript wrapper for vtkLabelRenderStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkRenderingLabel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkLabelRenderStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Label/vtkLabelRenderStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkRenderer.h"
#include "vtkTextProperty.h"
#include "vtkStdString.h"
#include "vtkWindow.h"
#include "vtkLabelRenderStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkLabelRenderStrategy>(vtkLabelRenderStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLabelRenderStrategy_class) {
  emscripten::class_<vtkLabelRenderStrategy, emscripten::base<vtkObject>>("vtkLabelRenderStrategy")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabelRenderStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLabelRenderStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLabelRenderStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLabelRenderStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabelRenderStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLabelRenderStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SupportsRotation", &vtkLabelRenderStrategy::SupportsRotation)
    .function("SupportsBoundedSize", &vtkLabelRenderStrategy::SupportsBoundedSize)
    .function("SetRenderer", &vtkLabelRenderStrategy::SetRenderer, emscripten::allow_raw_pointers())
    .function("GetRenderer", &vtkLabelRenderStrategy::GetRenderer, emscripten::allow_raw_pointers())
    .function("SetDefaultTextProperty", &vtkLabelRenderStrategy::SetDefaultTextProperty, emscripten::allow_raw_pointers())
    .function("GetDefaultTextProperty", &vtkLabelRenderStrategy::GetDefaultTextProperty, emscripten::allow_raw_pointers())
    .function("StartFrame", &vtkLabelRenderStrategy::StartFrame)
    .function("EndFrame", &vtkLabelRenderStrategy::EndFrame)
    .function("ReleaseGraphicsResources", &vtkLabelRenderStrategy::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
