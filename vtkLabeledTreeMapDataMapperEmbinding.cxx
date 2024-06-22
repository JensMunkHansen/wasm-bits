// JavaScript wrapper for vtkLabeledTreeMapDataMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkRenderingLabel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkLabeledTreeMapDataMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Label/vtkLabeledTreeMapDataMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkActor2D.h"
#include "vtkTree.h"
#include "vtkWindow.h"
#include "vtkLabeledTreeMapDataMapper.h"

template<> void emscripten::internal::raw_destructor<vtkLabeledTreeMapDataMapper>(vtkLabeledTreeMapDataMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLabeledTreeMapDataMapper_class) {
  emscripten::class_<vtkLabeledTreeMapDataMapper, emscripten::base<vtkLabeledDataMapper>>("vtkLabeledTreeMapDataMapper")
    .smart_ptr<vtkSmartPointer<vtkLabeledTreeMapDataMapper>>("vtkSmartPointer<vtkLabeledTreeMapDataMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLabeledTreeMapDataMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabeledTreeMapDataMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLabeledTreeMapDataMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLabeledTreeMapDataMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLabeledTreeMapDataMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabeledTreeMapDataMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLabeledTreeMapDataMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderOpaqueGeometry", &vtkLabeledTreeMapDataMapper::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkLabeledTreeMapDataMapper::RenderOverlay, emscripten::allow_raw_pointers())
    .function("GetInputTree", &vtkLabeledTreeMapDataMapper::GetInputTree, emscripten::allow_raw_pointers())
    .function("SetRectanglesArrayName", emscripten::optional_override([](vtkLabeledTreeMapDataMapper& self, const std::string & arg_0) -> void {  return self.SetRectanglesArrayName( arg_0.c_str());}))
    .function("GetClipTextMode", &vtkLabeledTreeMapDataMapper::GetClipTextMode)
    .function("SetClipTextMode", &vtkLabeledTreeMapDataMapper::SetClipTextMode)
    .function("GetChildMotion", &vtkLabeledTreeMapDataMapper::GetChildMotion)
    .function("SetChildMotion", &vtkLabeledTreeMapDataMapper::SetChildMotion)
    .function("GetDynamicLevel", &vtkLabeledTreeMapDataMapper::GetDynamicLevel)
    .function("SetDynamicLevel", &vtkLabeledTreeMapDataMapper::SetDynamicLevel)
    .function("ReleaseGraphicsResources", &vtkLabeledTreeMapDataMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetFontSizeRange", &vtkLabeledTreeMapDataMapper::SetFontSizeRange)
    .function("SetLevelRange", &vtkLabeledTreeMapDataMapper::SetLevelRange);
}
