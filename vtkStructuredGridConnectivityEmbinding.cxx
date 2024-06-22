// JavaScript wrapper for vtkStructuredGridConnectivity with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkStructuredGridConnectivityEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkStructuredGridConnectivity.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnsignedCharArray.h"
#include "vtkPointData.h"
#include "vtkCellData.h"
#include "vtkPoints.h"
#include "vtkStructuredNeighbor.h"
#include "vtkIdList.h"
#include "vtkStructuredGridConnectivity.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeometry_vtkStructuredGridConnectivity_0_1_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "VTK_NO_OVERLAP", 0 },
      { "VTK_NODE_OVERLAP", 1 },
      { "VTK_EDGE_OVERLAP", 2 },
      { "VTK_PARTIAL_OVERLAP", 3 },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkStructuredGridConnectivity>(vtkStructuredGridConnectivity * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStructuredGridConnectivity_class) {
  emscripten::class_<vtkStructuredGridConnectivity, emscripten::base<vtkAbstractGridConnectivity>>("vtkStructuredGridConnectivity")
    .smart_ptr<vtkSmartPointer<vtkStructuredGridConnectivity>>("vtkSmartPointer<vtkStructuredGridConnectivity>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStructuredGridConnectivity>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGridConnectivity::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStructuredGridConnectivity& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStructuredGridConnectivity::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStructuredGridConnectivity::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGridConnectivity::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStructuredGridConnectivity& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWholeExtent", emscripten::select_overload<void(vtkStructuredGridConnectivity&, int, int, int, int, int, int)>([](vtkStructuredGridConnectivity& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetWholeExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetDataDimension", &vtkStructuredGridConnectivity::GetDataDimension)
    .function("SetNumberOfGrids", &vtkStructuredGridConnectivity::SetNumberOfGrids)
    .function("ComputeNeighbors", &vtkStructuredGridConnectivity::ComputeNeighbors)
    .function("GetNumberOfNeighbors", &vtkStructuredGridConnectivity::GetNumberOfNeighbors)
    .function("GetGridNeighbor", &vtkStructuredGridConnectivity::GetGridNeighbor)
    .function("GetNeighbors", emscripten::optional_override([](vtkStructuredGridConnectivity& self, int arg_0, std::uintptr_t arg_1) -> vtkIdList* {  return self.GetNeighbors( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)));}), emscripten::allow_raw_pointers())
    .function("FillGhostArrays", &vtkStructuredGridConnectivity::FillGhostArrays, emscripten::allow_raw_pointers())
    .function("CreateGhostLayers", &vtkStructuredGridConnectivity::CreateGhostLayers);
}
