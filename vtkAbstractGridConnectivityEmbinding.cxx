// JavaScript wrapper for vtkAbstractGridConnectivity with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkAbstractGridConnectivityEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkAbstractGridConnectivity.h
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
#include "vtkAbstractGridConnectivity.h"

template<> void emscripten::internal::raw_destructor<vtkAbstractGridConnectivity>(vtkAbstractGridConnectivity * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractGridConnectivity_class) {
  emscripten::class_<vtkAbstractGridConnectivity, emscripten::base<vtkObject>>("vtkAbstractGridConnectivity")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractGridConnectivity::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractGridConnectivity& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractGridConnectivity::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractGridConnectivity::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractGridConnectivity::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractGridConnectivity& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfGhostLayers", &vtkAbstractGridConnectivity::SetNumberOfGhostLayers)
    .function("GetNumberOfGhostLayers", &vtkAbstractGridConnectivity::GetNumberOfGhostLayers)
    .function("GetNumberOfGrids", &vtkAbstractGridConnectivity::GetNumberOfGrids)
    .function("GetGhostedPointGhostArray", &vtkAbstractGridConnectivity::GetGhostedPointGhostArray, emscripten::allow_raw_pointers())
    .function("GetGhostedCellGhostArray", &vtkAbstractGridConnectivity::GetGhostedCellGhostArray, emscripten::allow_raw_pointers())
    .function("GetGhostedGridPointData", &vtkAbstractGridConnectivity::GetGhostedGridPointData, emscripten::allow_raw_pointers())
    .function("GetGhostedGridCellData", &vtkAbstractGridConnectivity::GetGhostedGridCellData, emscripten::allow_raw_pointers())
    .function("GetGhostedPoints", &vtkAbstractGridConnectivity::GetGhostedPoints, emscripten::allow_raw_pointers());
}
