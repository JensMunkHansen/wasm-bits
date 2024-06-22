// JavaScript wrapper for vtkStructuredAMRGridConnectivity with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkStructuredAMRGridConnectivityEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkStructuredAMRGridConnectivity.h
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
#include "vtkStructuredAMRNeighbor.h"
#include "vtkStructuredAMRGridConnectivity.h"

template<> void emscripten::internal::raw_destructor<vtkStructuredAMRGridConnectivity>(vtkStructuredAMRGridConnectivity * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStructuredAMRGridConnectivity_class) {
  emscripten::class_<vtkStructuredAMRGridConnectivity, emscripten::base<vtkAbstractGridConnectivity>>("vtkStructuredAMRGridConnectivity")
    .smart_ptr<vtkSmartPointer<vtkStructuredAMRGridConnectivity>>("vtkSmartPointer<vtkStructuredAMRGridConnectivity>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStructuredAMRGridConnectivity>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredAMRGridConnectivity::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStructuredAMRGridConnectivity& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStructuredAMRGridConnectivity::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStructuredAMRGridConnectivity::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredAMRGridConnectivity::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStructuredAMRGridConnectivity& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkStructuredAMRGridConnectivity::Initialize)
    .function("ComputeNeighbors", &vtkStructuredAMRGridConnectivity::ComputeNeighbors)
    .function("CreateGhostLayers", &vtkStructuredAMRGridConnectivity::CreateGhostLayers)
    .function("SetBalancedRefinement", &vtkStructuredAMRGridConnectivity::SetBalancedRefinement)
    .function("GetBalancedRefinement", &vtkStructuredAMRGridConnectivity::GetBalancedRefinement)
    .function("SetNodeCentered", &vtkStructuredAMRGridConnectivity::SetNodeCentered)
    .function("GetNodeCentered", &vtkStructuredAMRGridConnectivity::GetNodeCentered)
    .function("SetCellCentered", &vtkStructuredAMRGridConnectivity::SetCellCentered)
    .function("GetCellCentered", &vtkStructuredAMRGridConnectivity::GetCellCentered)
    .function("GetNumberOfNeighbors", &vtkStructuredAMRGridConnectivity::GetNumberOfNeighbors)
    .function("GetNeighbor", &vtkStructuredAMRGridConnectivity::GetNeighbor);
}
