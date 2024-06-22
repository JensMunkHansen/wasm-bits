// JavaScript wrapper for vtkFlagpoleLabel with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkFlagpoleLabelEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkFlagpoleLabel.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextProperty.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkFlagpoleLabel.h"

template<> void emscripten::internal::raw_destructor<vtkFlagpoleLabel>(vtkFlagpoleLabel * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFlagpoleLabel_class) {
  emscripten::class_<vtkFlagpoleLabel, emscripten::base<vtkActor>>("vtkFlagpoleLabel")
    .smart_ptr<vtkSmartPointer<vtkFlagpoleLabel>>("vtkSmartPointer<vtkFlagpoleLabel>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFlagpoleLabel>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFlagpoleLabel::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFlagpoleLabel& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFlagpoleLabel::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFlagpoleLabel::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFlagpoleLabel::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFlagpoleLabel& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInput", emscripten::optional_override([](vtkFlagpoleLabel& self, const std::string & arg_0) -> void {  return self.SetInput( arg_0.c_str());}))
    .function("GetInput", emscripten::optional_override([](vtkFlagpoleLabel& self) -> std::string {  return self.GetInput();}))
    .function("SetTextProperty", &vtkFlagpoleLabel::SetTextProperty, emscripten::allow_raw_pointers())
    .function("GetTextProperty", &vtkFlagpoleLabel::GetTextProperty, emscripten::allow_raw_pointers())
    .function("SetForceOpaque", &vtkFlagpoleLabel::SetForceOpaque)
    .function("GetForceOpaque", &vtkFlagpoleLabel::GetForceOpaque)
    .function("ForceOpaqueOn", &vtkFlagpoleLabel::ForceOpaqueOn)
    .function("ForceOpaqueOff", &vtkFlagpoleLabel::ForceOpaqueOff)
    .function("SetForceTranslucent", &vtkFlagpoleLabel::SetForceTranslucent)
    .function("GetForceTranslucent", &vtkFlagpoleLabel::GetForceTranslucent)
    .function("ForceTranslucentOn", &vtkFlagpoleLabel::ForceTranslucentOn)
    .function("ForceTranslucentOff", &vtkFlagpoleLabel::ForceTranslucentOff)
    .function("HasTranslucentPolygonalGeometry", &vtkFlagpoleLabel::HasTranslucentPolygonalGeometry)
    .function("RenderOpaqueGeometry", &vtkFlagpoleLabel::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkFlagpoleLabel::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkFlagpoleLabel::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetBasePosition", &vtkFlagpoleLabel::SetBasePosition)
    .function("SetTopPosition", &vtkFlagpoleLabel::SetTopPosition)
    .function("GetFlagSize", &vtkFlagpoleLabel::GetFlagSize)
    .function("SetFlagSize", &vtkFlagpoleLabel::SetFlagSize);
}
