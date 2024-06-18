// JavaScript wrapper for vtkFreeTypeLabelRenderStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkRenderingLabel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkFreeTypeLabelRenderStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Label/vtkFreeTypeLabelRenderStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkTextProperty.h"
#include "vtkStdString.h"
#include "vtkWindow.h"
#include "vtkFreeTypeLabelRenderStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkFreeTypeLabelRenderStrategy>(vtkFreeTypeLabelRenderStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFreeTypeLabelRenderStrategy_class) {
  emscripten::class_<vtkFreeTypeLabelRenderStrategy, emscripten::base<vtkLabelRenderStrategy>>("vtkFreeTypeLabelRenderStrategy")
    .smart_ptr<vtkSmartPointer<vtkFreeTypeLabelRenderStrategy>>("vtkSmartPointer<vtkFreeTypeLabelRenderStrategy>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFreeTypeLabelRenderStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFreeTypeLabelRenderStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFreeTypeLabelRenderStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFreeTypeLabelRenderStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFreeTypeLabelRenderStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFreeTypeLabelRenderStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFreeTypeLabelRenderStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SupportsRotation", &vtkFreeTypeLabelRenderStrategy::SupportsRotation)
    .function("SupportsBoundedSize", &vtkFreeTypeLabelRenderStrategy::SupportsBoundedSize)
    .function("ReleaseGraphicsResources", &vtkFreeTypeLabelRenderStrategy::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
