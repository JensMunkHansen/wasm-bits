// JavaScript wrapper for vtkFiberSurface with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTopology.js/vtkFiltersTopology.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTopology.js/vtkFiberSurfaceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Topology/vtkFiberSurface.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFiberSurface.h"

EMSCRIPTEN_BINDINGS(vtkFiltersTopology_vtkFiberSurface_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkFiberSurface>(vtkFiberSurface * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFiberSurface_class) {
  using BaseVertexType=vtkFiberSurface::BaseVertexType;
  using ClipVertexType=vtkFiberSurface::ClipVertexType;
  emscripten::class_<vtkFiberSurface, emscripten::base<vtkPolyDataAlgorithm>>("vtkFiberSurface")
    .smart_ptr<vtkSmartPointer<vtkFiberSurface>>("vtkSmartPointer<vtkFiberSurface>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFiberSurface>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFiberSurface::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFiberSurface& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFiberSurface::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFiberSurface::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFiberSurface::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFiberSurface& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetField1", emscripten::optional_override([](vtkFiberSurface& self, const std::string & arg_0) -> void {  return self.SetField1( arg_0.c_str());}))
    .function("SetField2", emscripten::optional_override([](vtkFiberSurface& self, const std::string & arg_0) -> void {  return self.SetField2( arg_0.c_str());}));
}
EMSCRIPTEN_BINDINGS(vtkFiltersTopology_vtkFiberSurface_0_2_constants) {
    typedef vtkFiberSurface::BaseVertexType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[11] = {
      { "vtkFiberSurface_BaseVertexType_bv_not_used", vtkFiberSurface::bv_not_used },
      { "vtkFiberSurface_BaseVertexType_bv_vertex_0", vtkFiberSurface::bv_vertex_0 },
      { "vtkFiberSurface_BaseVertexType_bv_vertex_1", vtkFiberSurface::bv_vertex_1 },
      { "vtkFiberSurface_BaseVertexType_bv_vertex_2", vtkFiberSurface::bv_vertex_2 },
      { "vtkFiberSurface_BaseVertexType_bv_vertex_3", vtkFiberSurface::bv_vertex_3 },
      { "vtkFiberSurface_BaseVertexType_bv_edge_01", vtkFiberSurface::bv_edge_01 },
      { "vtkFiberSurface_BaseVertexType_bv_edge_02", vtkFiberSurface::bv_edge_02 },
      { "vtkFiberSurface_BaseVertexType_bv_edge_03", vtkFiberSurface::bv_edge_03 },
      { "vtkFiberSurface_BaseVertexType_bv_edge_12", vtkFiberSurface::bv_edge_12 },
      { "vtkFiberSurface_BaseVertexType_bv_edge_13", vtkFiberSurface::bv_edge_13 },
      { "vtkFiberSurface_BaseVertexType_bv_edge_23", vtkFiberSurface::bv_edge_23 },
  };
  for (int c = 0; c < 11; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersTopology_vtkFiberSurface_1_2_constants) {
    typedef vtkFiberSurface::ClipVertexType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[10] = {
      { "vtkFiberSurface_ClipVertexType_not_used", vtkFiberSurface::not_used },
      { "vtkFiberSurface_ClipVertexType_vertex_0", vtkFiberSurface::vertex_0 },
      { "vtkFiberSurface_ClipVertexType_vertex_1", vtkFiberSurface::vertex_1 },
      { "vtkFiberSurface_ClipVertexType_vertex_2", vtkFiberSurface::vertex_2 },
      { "vtkFiberSurface_ClipVertexType_edge_0_parm_0", vtkFiberSurface::edge_0_parm_0 },
      { "vtkFiberSurface_ClipVertexType_edge_1_parm_0", vtkFiberSurface::edge_1_parm_0 },
      { "vtkFiberSurface_ClipVertexType_edge_2_parm_0", vtkFiberSurface::edge_2_parm_0 },
      { "vtkFiberSurface_ClipVertexType_edge_0_parm_1", vtkFiberSurface::edge_0_parm_1 },
      { "vtkFiberSurface_ClipVertexType_edge_1_parm_1", vtkFiberSurface::edge_1_parm_1 },
      { "vtkFiberSurface_ClipVertexType_edge_2_parm_1", vtkFiberSurface::edge_2_parm_1 },
  };
  for (int c = 0; c < 10; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
