// JavaScript wrapper for vtkDynamic2DLabelMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkRenderingLabel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkDynamic2DLabelMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Label/vtkDynamic2DLabelMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkActor2D.h"
#include "vtkDynamic2DLabelMapper.h"

template<> void emscripten::internal::raw_destructor<vtkDynamic2DLabelMapper>(vtkDynamic2DLabelMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDynamic2DLabelMapper_class) {
  emscripten::class_<vtkDynamic2DLabelMapper, emscripten::base<vtkLabeledDataMapper>>("vtkDynamic2DLabelMapper")
    .smart_ptr<vtkSmartPointer<vtkDynamic2DLabelMapper>>("vtkSmartPointer<vtkDynamic2DLabelMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDynamic2DLabelMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDynamic2DLabelMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDynamic2DLabelMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDynamic2DLabelMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDynamic2DLabelMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDynamic2DLabelMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDynamic2DLabelMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPriorityArrayName", emscripten::optional_override([](vtkDynamic2DLabelMapper& self, const std::string & arg_0) -> void {  return self.SetPriorityArrayName( arg_0.c_str());}))
    .function("SetReversePriority", &vtkDynamic2DLabelMapper::SetReversePriority)
    .function("GetReversePriority", &vtkDynamic2DLabelMapper::GetReversePriority)
    .function("ReversePriorityOn", &vtkDynamic2DLabelMapper::ReversePriorityOn)
    .function("ReversePriorityOff", &vtkDynamic2DLabelMapper::ReversePriorityOff)
    .function("SetLabelHeightPadding", &vtkDynamic2DLabelMapper::SetLabelHeightPadding)
    .function("GetLabelHeightPadding", &vtkDynamic2DLabelMapper::GetLabelHeightPadding)
    .function("SetLabelWidthPadding", &vtkDynamic2DLabelMapper::SetLabelWidthPadding)
    .function("GetLabelWidthPadding", &vtkDynamic2DLabelMapper::GetLabelWidthPadding)
    .function("RenderOpaqueGeometry", &vtkDynamic2DLabelMapper::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkDynamic2DLabelMapper::RenderOverlay, emscripten::allow_raw_pointers());
}
