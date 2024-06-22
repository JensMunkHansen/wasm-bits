// JavaScript wrapper for vtkOpenGLPolyDataMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLPolyDataMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLPolyDataMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkPolyData.h"
#include "vtkWindow.h"
#include "vtkAbstractMapper.h"
#include "vtkOpenGLVertexBufferObjectGroup.h"
#include "vtkHardwareSelector.h"
#include "vtkProp.h"
#include "vtkOpenGLPolyDataMapper.h"

EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkOpenGLPolyDataMapper_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkOpenGLPolyDataMapper>(vtkOpenGLPolyDataMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLPolyDataMapper_class) {
  using PrimitiveTypes=vtkOpenGLPolyDataMapper::PrimitiveTypes;
  emscripten::class_<vtkOpenGLPolyDataMapper, emscripten::base<vtkPolyDataMapper>>("vtkOpenGLPolyDataMapper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLPolyDataMapper>>("vtkSmartPointer<vtkOpenGLPolyDataMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLPolyDataMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLPolyDataMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLPolyDataMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLPolyDataMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLPolyDataMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLPolyDataMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLPolyDataMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderPiece", &vtkOpenGLPolyDataMapper::RenderPiece, emscripten::allow_raw_pointers())
    .function("RenderPieceStart", &vtkOpenGLPolyDataMapper::RenderPieceStart, emscripten::allow_raw_pointers())
    .function("RenderPieceDraw", &vtkOpenGLPolyDataMapper::RenderPieceDraw, emscripten::allow_raw_pointers())
    .function("RenderPieceFinish", &vtkOpenGLPolyDataMapper::RenderPieceFinish, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkOpenGLPolyDataMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetPopulateSelectionSettings", &vtkOpenGLPolyDataMapper::GetPopulateSelectionSettings)
    .function("SetPopulateSelectionSettings", &vtkOpenGLPolyDataMapper::SetPopulateSelectionSettings)
    .function("GetSupportsSelection", &vtkOpenGLPolyDataMapper::GetSupportsSelection)
    .function("SetPointIdArrayName", emscripten::optional_override([](vtkOpenGLPolyDataMapper& self, const std::string & arg_0) -> void {  return self.SetPointIdArrayName( arg_0.c_str());}))
    .function("GetPointIdArrayName", emscripten::optional_override([](vtkOpenGLPolyDataMapper& self) -> std::string {  return self.GetPointIdArrayName();}))
    .function("SetCellIdArrayName", emscripten::optional_override([](vtkOpenGLPolyDataMapper& self, const std::string & arg_0) -> void {  return self.SetCellIdArrayName( arg_0.c_str());}))
    .function("GetCellIdArrayName", emscripten::optional_override([](vtkOpenGLPolyDataMapper& self) -> std::string {  return self.GetCellIdArrayName();}))
    .function("SetProcessIdArrayName", emscripten::optional_override([](vtkOpenGLPolyDataMapper& self, const std::string & arg_0) -> void {  return self.SetProcessIdArrayName( arg_0.c_str());}))
    .function("GetProcessIdArrayName", emscripten::optional_override([](vtkOpenGLPolyDataMapper& self) -> std::string {  return self.GetProcessIdArrayName();}))
    .function("SetCompositeIdArrayName", emscripten::optional_override([](vtkOpenGLPolyDataMapper& self, const std::string & arg_0) -> void {  return self.SetCompositeIdArrayName( arg_0.c_str());}))
    .function("GetCompositeIdArrayName", emscripten::optional_override([](vtkOpenGLPolyDataMapper& self) -> std::string {  return self.GetCompositeIdArrayName();}))
    .function("ShallowCopy", &vtkOpenGLPolyDataMapper::ShallowCopy, emscripten::allow_raw_pointers())
    .function("GetVBOs", &vtkOpenGLPolyDataMapper::GetVBOs, emscripten::allow_raw_pointers())
    .function("SetVBOShiftScaleMethod", &vtkOpenGLPolyDataMapper::SetVBOShiftScaleMethod)
    .function("GetUseProgramPointSize", &vtkOpenGLPolyDataMapper::GetUseProgramPointSize)
    .function("SetUseProgramPointSize", &vtkOpenGLPolyDataMapper::SetUseProgramPointSize)
    .function("UseProgramPointSizeOn", &vtkOpenGLPolyDataMapper::UseProgramPointSizeOn)
    .function("UseProgramPointSizeOff", &vtkOpenGLPolyDataMapper::UseProgramPointSizeOff)
    .function("MapDataArrayToVertexAttribute", emscripten::optional_override([](vtkOpenGLPolyDataMapper& self, const std::string & arg_0, const std::string & arg_1, int arg_2, int arg_3) -> void {  return self.MapDataArrayToVertexAttribute( arg_0.c_str(), arg_1.c_str(), arg_2, arg_3);}))
    .function("MapDataArrayToMultiTextureAttribute", emscripten::optional_override([](vtkOpenGLPolyDataMapper& self, const std::string & arg_0, const std::string & arg_1, int arg_2, int arg_3) -> void {  return self.MapDataArrayToMultiTextureAttribute( arg_0.c_str(), arg_1.c_str(), arg_2, arg_3);}))
    .function("RemoveVertexAttributeMapping", emscripten::optional_override([](vtkOpenGLPolyDataMapper& self, const std::string & arg_0) -> void {  return self.RemoveVertexAttributeMapping( arg_0.c_str());}))
    .function("RemoveAllVertexAttributeMappings", &vtkOpenGLPolyDataMapper::RemoveAllVertexAttributeMappings)
    .function("ProcessSelectorPixelBuffers", emscripten::optional_override([](vtkOpenGLPolyDataMapper& self, vtkHardwareSelector* arg_0, std::vector<unsigned int>& arg_1, vtkProp* arg_2) -> void {  return self.ProcessSelectorPixelBuffers( arg_0, arg_1, arg_2);}), emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkOpenGLPolyDataMapper_0_2_constants) {
    typedef vtkOpenGLPolyDataMapper::PrimitiveTypes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[7] = {
      { "vtkOpenGLPolyDataMapper_PrimitiveTypes_PrimitiveStart", vtkOpenGLPolyDataMapper::PrimitiveStart },
      { "vtkOpenGLPolyDataMapper_PrimitiveTypes_PrimitivePoints", vtkOpenGLPolyDataMapper::PrimitivePoints },
      { "vtkOpenGLPolyDataMapper_PrimitiveTypes_PrimitiveLines", vtkOpenGLPolyDataMapper::PrimitiveLines },
      { "vtkOpenGLPolyDataMapper_PrimitiveTypes_PrimitiveTris", vtkOpenGLPolyDataMapper::PrimitiveTris },
      { "vtkOpenGLPolyDataMapper_PrimitiveTypes_PrimitiveTriStrips", vtkOpenGLPolyDataMapper::PrimitiveTriStrips },
      { "vtkOpenGLPolyDataMapper_PrimitiveTypes_PrimitiveVertices", vtkOpenGLPolyDataMapper::PrimitiveVertices },
      { "vtkOpenGLPolyDataMapper_PrimitiveTypes_PrimitiveEnd", vtkOpenGLPolyDataMapper::PrimitiveEnd },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
