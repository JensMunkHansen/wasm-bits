// JavaScript wrapper for vtkGraphMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkGraphMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkGraphMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkTexture.h"
#include "vtkWindow.h"
#include "vtkGraph.h"
#include "vtkLookupTable.h"
#include "vtkGraphMapper.h"

template<> void emscripten::internal::raw_destructor<vtkGraphMapper>(vtkGraphMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGraphMapper_class) {
  emscripten::class_<vtkGraphMapper, emscripten::base<vtkMapper>>("vtkGraphMapper")
    .smart_ptr<vtkSmartPointer<vtkGraphMapper>>("vtkSmartPointer<vtkGraphMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGraphMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGraphMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGraphMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGraphMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGraphMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkGraphMapper::Render, emscripten::allow_raw_pointers())
    .function("SetVertexColorArrayName", emscripten::optional_override([](vtkGraphMapper& self, const std::string & arg_0) -> void {  return self.SetVertexColorArrayName( arg_0.c_str());}))
    .function("GetVertexColorArrayName", emscripten::optional_override([](vtkGraphMapper& self) -> std::string {  return self.GetVertexColorArrayName();}))
    .function("SetColorVertices", &vtkGraphMapper::SetColorVertices)
    .function("GetColorVertices", &vtkGraphMapper::GetColorVertices)
    .function("ColorVerticesOn", &vtkGraphMapper::ColorVerticesOn)
    .function("ColorVerticesOff", &vtkGraphMapper::ColorVerticesOff)
    .function("SetScaledGlyphs", &vtkGraphMapper::SetScaledGlyphs)
    .function("GetScaledGlyphs", &vtkGraphMapper::GetScaledGlyphs)
    .function("ScaledGlyphsOn", &vtkGraphMapper::ScaledGlyphsOn)
    .function("ScaledGlyphsOff", &vtkGraphMapper::ScaledGlyphsOff)
    .function("SetScalingArrayName", emscripten::optional_override([](vtkGraphMapper& self, const std::string & arg_0) -> void {  return self.SetScalingArrayName( arg_0.c_str());}))
    .function("GetScalingArrayName", emscripten::optional_override([](vtkGraphMapper& self) -> std::string {  return self.GetScalingArrayName();}))
    .function("SetEdgeVisibility", &vtkGraphMapper::SetEdgeVisibility)
    .function("GetEdgeVisibility", &vtkGraphMapper::GetEdgeVisibility)
    .function("EdgeVisibilityOn", &vtkGraphMapper::EdgeVisibilityOn)
    .function("EdgeVisibilityOff", &vtkGraphMapper::EdgeVisibilityOff)
    .function("SetEdgeColorArrayName", emscripten::optional_override([](vtkGraphMapper& self, const std::string & arg_0) -> void {  return self.SetEdgeColorArrayName( arg_0.c_str());}))
    .function("GetEdgeColorArrayName", emscripten::optional_override([](vtkGraphMapper& self) -> std::string {  return self.GetEdgeColorArrayName();}))
    .function("SetColorEdges", &vtkGraphMapper::SetColorEdges)
    .function("GetColorEdges", &vtkGraphMapper::GetColorEdges)
    .function("ColorEdgesOn", &vtkGraphMapper::ColorEdgesOn)
    .function("ColorEdgesOff", &vtkGraphMapper::ColorEdgesOff)
    .function("SetEnabledEdgesArrayName", emscripten::optional_override([](vtkGraphMapper& self, const std::string & arg_0) -> void {  return self.SetEnabledEdgesArrayName( arg_0.c_str());}))
    .function("GetEnabledEdgesArrayName", emscripten::optional_override([](vtkGraphMapper& self) -> std::string {  return self.GetEnabledEdgesArrayName();}))
    .function("SetEnableEdgesByArray", &vtkGraphMapper::SetEnableEdgesByArray)
    .function("GetEnableEdgesByArray", &vtkGraphMapper::GetEnableEdgesByArray)
    .function("EnableEdgesByArrayOn", &vtkGraphMapper::EnableEdgesByArrayOn)
    .function("EnableEdgesByArrayOff", &vtkGraphMapper::EnableEdgesByArrayOff)
    .function("SetEnabledVerticesArrayName", emscripten::optional_override([](vtkGraphMapper& self, const std::string & arg_0) -> void {  return self.SetEnabledVerticesArrayName( arg_0.c_str());}))
    .function("GetEnabledVerticesArrayName", emscripten::optional_override([](vtkGraphMapper& self) -> std::string {  return self.GetEnabledVerticesArrayName();}))
    .function("SetEnableVerticesByArray", &vtkGraphMapper::SetEnableVerticesByArray)
    .function("GetEnableVerticesByArray", &vtkGraphMapper::GetEnableVerticesByArray)
    .function("EnableVerticesByArrayOn", &vtkGraphMapper::EnableVerticesByArrayOn)
    .function("EnableVerticesByArrayOff", &vtkGraphMapper::EnableVerticesByArrayOff)
    .function("SetIconArrayName", emscripten::optional_override([](vtkGraphMapper& self, const std::string & arg_0) -> void {  return self.SetIconArrayName( arg_0.c_str());}))
    .function("GetIconArrayName", emscripten::optional_override([](vtkGraphMapper& self) -> std::string {  return self.GetIconArrayName();}))
    .function("AddIconType", emscripten::optional_override([](vtkGraphMapper& self, const std::string & arg_0, int arg_1) -> void {  return self.AddIconType( arg_0.c_str(), arg_1);}))
    .function("ClearIconTypes", &vtkGraphMapper::ClearIconTypes)
    .function("SetIconSize", emscripten::optional_override([](vtkGraphMapper& self, std::uintptr_t arg_0) -> void {  return self.SetIconSize(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .function("GetIconSize", emscripten::optional_override([](vtkGraphMapper& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetIconSize()) / sizeof(int);}))
    .function("SetIconAlignment", &vtkGraphMapper::SetIconAlignment)
    .function("GetIconTexture", &vtkGraphMapper::GetIconTexture, emscripten::allow_raw_pointers())
    .function("SetIconTexture", &vtkGraphMapper::SetIconTexture, emscripten::allow_raw_pointers())
    .function("SetIconVisibility", &vtkGraphMapper::SetIconVisibility)
    .function("GetIconVisibility", &vtkGraphMapper::GetIconVisibility)
    .function("IconVisibilityOn", &vtkGraphMapper::IconVisibilityOn)
    .function("IconVisibilityOff", &vtkGraphMapper::IconVisibilityOff)
    .function("GetVertexPointSize", &vtkGraphMapper::GetVertexPointSize)
    .function("SetVertexPointSize", &vtkGraphMapper::SetVertexPointSize)
    .function("GetEdgeLineWidth", &vtkGraphMapper::GetEdgeLineWidth)
    .function("SetEdgeLineWidth", &vtkGraphMapper::SetEdgeLineWidth)
    .function("ReleaseGraphicsResources", &vtkGraphMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkGraphMapper::GetMTime)
    .function("SetInputData", &vtkGraphMapper::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkGraphMapper::GetInput, emscripten::allow_raw_pointers())
    .function("GetEdgeLookupTable", &vtkGraphMapper::GetEdgeLookupTable, emscripten::allow_raw_pointers())
    .function("GetVertexLookupTable", &vtkGraphMapper::GetVertexLookupTable, emscripten::allow_raw_pointers());
}
