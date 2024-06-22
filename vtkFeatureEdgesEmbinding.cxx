// JavaScript wrapper for vtkFeatureEdges with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFeatureEdgesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkFeatureEdges.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkFeatureEdges.h"

template<> void emscripten::internal::raw_destructor<vtkFeatureEdges>(vtkFeatureEdges * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFeatureEdges_class) {
  emscripten::class_<vtkFeatureEdges, emscripten::base<vtkPolyDataAlgorithm>>("vtkFeatureEdges")
    .smart_ptr<vtkSmartPointer<vtkFeatureEdges>>("vtkSmartPointer<vtkFeatureEdges>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFeatureEdges>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFeatureEdges::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFeatureEdges& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFeatureEdges::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFeatureEdges::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFeatureEdges::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFeatureEdges& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ExtractAllEdgeTypesOn", &vtkFeatureEdges::ExtractAllEdgeTypesOn)
    .function("ExtractAllEdgeTypesOff", &vtkFeatureEdges::ExtractAllEdgeTypesOff)
    .function("SetBoundaryEdges", &vtkFeatureEdges::SetBoundaryEdges)
    .function("GetBoundaryEdges", &vtkFeatureEdges::GetBoundaryEdges)
    .function("BoundaryEdgesOn", &vtkFeatureEdges::BoundaryEdgesOn)
    .function("BoundaryEdgesOff", &vtkFeatureEdges::BoundaryEdgesOff)
    .function("SetFeatureEdges", &vtkFeatureEdges::SetFeatureEdges)
    .function("GetFeatureEdges", &vtkFeatureEdges::GetFeatureEdges)
    .function("FeatureEdgesOn", &vtkFeatureEdges::FeatureEdgesOn)
    .function("FeatureEdgesOff", &vtkFeatureEdges::FeatureEdgesOff)
    .function("SetFeatureAngle", &vtkFeatureEdges::SetFeatureAngle)
    .function("GetFeatureAngleMinValue", &vtkFeatureEdges::GetFeatureAngleMinValue)
    .function("GetFeatureAngleMaxValue", &vtkFeatureEdges::GetFeatureAngleMaxValue)
    .function("GetFeatureAngle", &vtkFeatureEdges::GetFeatureAngle)
    .function("SetNonManifoldEdges", &vtkFeatureEdges::SetNonManifoldEdges)
    .function("GetNonManifoldEdges", &vtkFeatureEdges::GetNonManifoldEdges)
    .function("NonManifoldEdgesOn", &vtkFeatureEdges::NonManifoldEdgesOn)
    .function("NonManifoldEdgesOff", &vtkFeatureEdges::NonManifoldEdgesOff)
    .function("SetManifoldEdges", &vtkFeatureEdges::SetManifoldEdges)
    .function("GetManifoldEdges", &vtkFeatureEdges::GetManifoldEdges)
    .function("ManifoldEdgesOn", &vtkFeatureEdges::ManifoldEdgesOn)
    .function("ManifoldEdgesOff", &vtkFeatureEdges::ManifoldEdgesOff)
    .function("SetPassLines", &vtkFeatureEdges::SetPassLines)
    .function("GetPassLines", &vtkFeatureEdges::GetPassLines)
    .function("PassLinesOn", &vtkFeatureEdges::PassLinesOn)
    .function("PassLinesOff", &vtkFeatureEdges::PassLinesOff)
    .function("SetColoring", &vtkFeatureEdges::SetColoring)
    .function("GetColoring", &vtkFeatureEdges::GetColoring)
    .function("ColoringOn", &vtkFeatureEdges::ColoringOn)
    .function("ColoringOff", &vtkFeatureEdges::ColoringOff)
    .function("SetRemoveGhostInterfaces", &vtkFeatureEdges::SetRemoveGhostInterfaces)
    .function("GetRemoveGhostInterfaces", &vtkFeatureEdges::GetRemoveGhostInterfaces)
    .function("RemoveGhostInterfacesOn", &vtkFeatureEdges::RemoveGhostInterfacesOn)
    .function("RemoveGhostInterfacesOff", &vtkFeatureEdges::RemoveGhostInterfacesOff)
    .function("SetLocator", &vtkFeatureEdges::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkFeatureEdges::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkFeatureEdges::CreateDefaultLocator)
    .function("GetMTime", &vtkFeatureEdges::GetMTime)
    .function("SetOutputPointsPrecision", &vtkFeatureEdges::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkFeatureEdges::GetOutputPointsPrecision);
}
