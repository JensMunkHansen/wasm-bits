// JavaScript wrapper for vtkWebGPUPolyDataMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkRenderingWebGPU.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkWebGPUPolyDataMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/WebGPU/vtkWebGPUPolyDataMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkWindow.h"
#include "vtkAbstractMapper.h"
#include "vtkHardwareSelector.h"
#include "vtkProp.h"
#include "vtkSmartPointer.h"
#include "vtkWebGPUPolyDataMapper.h"

EMSCRIPTEN_BINDINGS(vtkRenderingWebGPU_vtkWebGPUPolyDataMapper_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkWebGPUPolyDataMapper>(vtkWebGPUPolyDataMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWebGPUPolyDataMapper_class) {
  using PointDataAttributes=vtkWebGPUPolyDataMapper::PointDataAttributes;
  using CellDataAttributes=vtkWebGPUPolyDataMapper::CellDataAttributes;
  emscripten::class_<vtkWebGPUPolyDataMapper, emscripten::base<vtkPolyDataMapper>>("vtkWebGPUPolyDataMapper")
    .smart_ptr<vtkSmartPointer<vtkWebGPUPolyDataMapper>>("vtkSmartPointer<vtkWebGPUPolyDataMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkWebGPUPolyDataMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPUPolyDataMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWebGPUPolyDataMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWebGPUPolyDataMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWebGPUPolyDataMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPUPolyDataMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWebGPUPolyDataMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderPiece", &vtkWebGPUPolyDataMapper::RenderPiece, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkWebGPUPolyDataMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetSupportsSelection", &vtkWebGPUPolyDataMapper::GetSupportsSelection)
    .function("ShallowCopy", &vtkWebGPUPolyDataMapper::ShallowCopy, emscripten::allow_raw_pointers())
    .function("MapDataArrayToVertexAttribute", emscripten::optional_override([](vtkWebGPUPolyDataMapper& self, const std::string & arg_0, const std::string & arg_1, int arg_2, int arg_3) -> void {  return self.MapDataArrayToVertexAttribute( arg_0.c_str(), arg_1.c_str(), arg_2, arg_3);}))
    .function("MapDataArrayToMultiTextureAttribute", emscripten::optional_override([](vtkWebGPUPolyDataMapper& self, const std::string & arg_0, const std::string & arg_1, int arg_2, int arg_3) -> void {  return self.MapDataArrayToMultiTextureAttribute( arg_0.c_str(), arg_1.c_str(), arg_2, arg_3);}))
    .function("RemoveVertexAttributeMapping", emscripten::optional_override([](vtkWebGPUPolyDataMapper& self, const std::string & arg_0) -> void {  return self.RemoveVertexAttributeMapping( arg_0.c_str());}))
    .function("RemoveAllVertexAttributeMappings", &vtkWebGPUPolyDataMapper::RemoveAllVertexAttributeMappings)
    .function("ProcessSelectorPixelBuffers", emscripten::optional_override([](vtkWebGPUPolyDataMapper& self, vtkHardwareSelector* arg_0, std::vector<unsigned int>& arg_1, vtkProp* arg_2) -> void {  return self.ProcessSelectorPixelBuffers( arg_0, arg_1, arg_2);}), emscripten::allow_raw_pointers())
    .function("AcquirePointAttributeComputeRenderBuffer", &vtkWebGPUPolyDataMapper::AcquirePointAttributeComputeRenderBuffer)
    .function("AcquireCellAttributeComputeRenderBuffer", &vtkWebGPUPolyDataMapper::AcquireCellAttributeComputeRenderBuffer);
}
EMSCRIPTEN_BINDINGS(vtkRenderingWebGPU_vtkWebGPUPolyDataMapper_0_2_constants) {
    typedef vtkWebGPUPolyDataMapper::PointDataAttributes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[7] = {
      { "vtkWebGPUPolyDataMapper_PointDataAttributes_POINT_POSITIONS", vtkWebGPUPolyDataMapper::POINT_POSITIONS },
      { "vtkWebGPUPolyDataMapper_PointDataAttributes_POINT_COLORS", vtkWebGPUPolyDataMapper::POINT_COLORS },
      { "vtkWebGPUPolyDataMapper_PointDataAttributes_POINT_NORMALS", vtkWebGPUPolyDataMapper::POINT_NORMALS },
      { "vtkWebGPUPolyDataMapper_PointDataAttributes_POINT_TANGENTS", vtkWebGPUPolyDataMapper::POINT_TANGENTS },
      { "vtkWebGPUPolyDataMapper_PointDataAttributes_POINT_UVS", vtkWebGPUPolyDataMapper::POINT_UVS },
      { "vtkWebGPUPolyDataMapper_PointDataAttributes_POINT_NB_ATTRIBUTES", vtkWebGPUPolyDataMapper::POINT_NB_ATTRIBUTES },
      { "vtkWebGPUPolyDataMapper_PointDataAttributes_POINT_UNDEFINED", vtkWebGPUPolyDataMapper::POINT_UNDEFINED },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingWebGPU_vtkWebGPUPolyDataMapper_1_2_constants) {
    typedef vtkWebGPUPolyDataMapper::CellDataAttributes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkWebGPUPolyDataMapper_CellDataAttributes_CELL_COLORS", vtkWebGPUPolyDataMapper::CELL_COLORS },
      { "vtkWebGPUPolyDataMapper_CellDataAttributes_CELL_NORMALS", vtkWebGPUPolyDataMapper::CELL_NORMALS },
      { "vtkWebGPUPolyDataMapper_CellDataAttributes_CELL_EDGES", vtkWebGPUPolyDataMapper::CELL_EDGES },
      { "vtkWebGPUPolyDataMapper_CellDataAttributes_CELL_NB_ATTRIBUTES", vtkWebGPUPolyDataMapper::CELL_NB_ATTRIBUTES },
      { "vtkWebGPUPolyDataMapper_CellDataAttributes_CELL_UNDEFINED", vtkWebGPUPolyDataMapper::CELL_UNDEFINED },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
