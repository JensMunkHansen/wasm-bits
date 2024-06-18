// JavaScript wrapper for vtkOpenGLLowMemoryPolyDataMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLLowMemoryPolyDataMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLLowMemoryPolyDataMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractMapper.h"
#include "vtkPolyData.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkWindow.h"
#include "vtkHardwareSelector.h"
#include "vtkProp.h"
#include "vtkOpenGLLowMemoryPolyDataMapper.h"

EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkOpenGLLowMemoryPolyDataMapper_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkOpenGLLowMemoryPolyDataMapper>(vtkOpenGLLowMemoryPolyDataMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLLowMemoryPolyDataMapper_class) {
  emscripten::class_<vtkOpenGLLowMemoryPolyDataMapper, emscripten::base<vtkPolyDataMapper>>("vtkOpenGLLowMemoryPolyDataMapper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLLowMemoryPolyDataMapper>>("vtkSmartPointer<vtkOpenGLLowMemoryPolyDataMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLLowMemoryPolyDataMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLLowMemoryPolyDataMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLLowMemoryPolyDataMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLLowMemoryPolyDataMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLLowMemoryPolyDataMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLLowMemoryPolyDataMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLLowMemoryPolyDataMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ShallowCopy", &vtkOpenGLLowMemoryPolyDataMapper::ShallowCopy, emscripten::allow_raw_pointers())
    .function("RenderPiece", &vtkOpenGLLowMemoryPolyDataMapper::RenderPiece, emscripten::allow_raw_pointers())
    .function("RenderPieceStart", &vtkOpenGLLowMemoryPolyDataMapper::RenderPieceStart, emscripten::allow_raw_pointers())
    .function("RenderPieceDraw", &vtkOpenGLLowMemoryPolyDataMapper::RenderPieceDraw, emscripten::allow_raw_pointers())
    .function("RenderPieceFinish", &vtkOpenGLLowMemoryPolyDataMapper::RenderPieceFinish, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkOpenGLLowMemoryPolyDataMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetPopulateSelectionSettings", &vtkOpenGLLowMemoryPolyDataMapper::GetPopulateSelectionSettings)
    .function("SetPopulateSelectionSettings", &vtkOpenGLLowMemoryPolyDataMapper::SetPopulateSelectionSettings)
    .function("SetVBOShiftScaleMethod", &vtkOpenGLLowMemoryPolyDataMapper::SetVBOShiftScaleMethod)
    .function("GetSupportsSelection", &vtkOpenGLLowMemoryPolyDataMapper::GetSupportsSelection)
    .function("SetPointIdArrayName", emscripten::optional_override([](vtkOpenGLLowMemoryPolyDataMapper& self, const std::string & arg_0) -> void {  return self.SetPointIdArrayName( arg_0.c_str());}))
    .function("GetPointIdArrayName", emscripten::optional_override([](vtkOpenGLLowMemoryPolyDataMapper& self) -> std::string {  return self.GetPointIdArrayName();}))
    .function("SetCellIdArrayName", emscripten::optional_override([](vtkOpenGLLowMemoryPolyDataMapper& self, const std::string & arg_0) -> void {  return self.SetCellIdArrayName( arg_0.c_str());}))
    .function("GetCellIdArrayName", emscripten::optional_override([](vtkOpenGLLowMemoryPolyDataMapper& self) -> std::string {  return self.GetCellIdArrayName();}))
    .function("SetProcessIdArrayName", emscripten::optional_override([](vtkOpenGLLowMemoryPolyDataMapper& self, const std::string & arg_0) -> void {  return self.SetProcessIdArrayName( arg_0.c_str());}))
    .function("GetProcessIdArrayName", emscripten::optional_override([](vtkOpenGLLowMemoryPolyDataMapper& self) -> std::string {  return self.GetProcessIdArrayName();}))
    .function("SetCompositeIdArrayName", emscripten::optional_override([](vtkOpenGLLowMemoryPolyDataMapper& self, const std::string & arg_0) -> void {  return self.SetCompositeIdArrayName( arg_0.c_str());}))
    .function("GetCompositeIdArrayName", emscripten::optional_override([](vtkOpenGLLowMemoryPolyDataMapper& self) -> std::string {  return self.GetCompositeIdArrayName();}))
    .function("ResetModsToDefault", &vtkOpenGLLowMemoryPolyDataMapper::ResetModsToDefault)
    .function("AddMod", &vtkOpenGLLowMemoryPolyDataMapper::AddMod)
    .function("AddMods", &vtkOpenGLLowMemoryPolyDataMapper::AddMods)
    .function("RemoveMod", &vtkOpenGLLowMemoryPolyDataMapper::RemoveMod)
    .function("RemoveAllMods", &vtkOpenGLLowMemoryPolyDataMapper::RemoveAllMods)
    .function("MapDataArrayToVertexAttribute", emscripten::optional_override([](vtkOpenGLLowMemoryPolyDataMapper& self, const std::string & arg_0, const std::string & arg_1, int arg_2, int arg_3) -> void {  return self.MapDataArrayToVertexAttribute( arg_0.c_str(), arg_1.c_str(), arg_2, arg_3);}))
    .function("MapDataArrayToMultiTextureAttribute", emscripten::optional_override([](vtkOpenGLLowMemoryPolyDataMapper& self, const std::string & arg_0, const std::string & arg_1, int arg_2, int arg_3) -> void {  return self.MapDataArrayToMultiTextureAttribute( arg_0.c_str(), arg_1.c_str(), arg_2, arg_3);}))
    .function("RemoveVertexAttributeMapping", emscripten::optional_override([](vtkOpenGLLowMemoryPolyDataMapper& self, const std::string & arg_0) -> void {  return self.RemoveVertexAttributeMapping( arg_0.c_str());}))
    .function("RemoveAllVertexAttributeMappings", &vtkOpenGLLowMemoryPolyDataMapper::RemoveAllVertexAttributeMappings)
    .function("ProcessSelectorPixelBuffers", emscripten::optional_override([](vtkOpenGLLowMemoryPolyDataMapper& self, vtkHardwareSelector* arg_0, std::vector<unsigned int>& arg_1, vtkProp* arg_2) -> void {  return self.ProcessSelectorPixelBuffers( arg_0, arg_1, arg_2);}), emscripten::allow_raw_pointers());
}
