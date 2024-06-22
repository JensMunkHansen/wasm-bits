// JavaScript wrapper for vtkDataSetToDataObjectFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkDataSetToDataObjectFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkDataSetToDataObjectFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSetToDataObjectFilter.h"

template<> void emscripten::internal::raw_destructor<vtkDataSetToDataObjectFilter>(vtkDataSetToDataObjectFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataSetToDataObjectFilter_class) {
  emscripten::class_<vtkDataSetToDataObjectFilter, emscripten::base<vtkDataObjectAlgorithm>>("vtkDataSetToDataObjectFilter")
    .smart_ptr<vtkSmartPointer<vtkDataSetToDataObjectFilter>>("vtkSmartPointer<vtkDataSetToDataObjectFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDataSetToDataObjectFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetToDataObjectFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataSetToDataObjectFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataSetToDataObjectFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataSetToDataObjectFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetToDataObjectFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataSetToDataObjectFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGeometry", &vtkDataSetToDataObjectFilter::SetGeometry)
    .function("GetGeometry", &vtkDataSetToDataObjectFilter::GetGeometry)
    .function("GeometryOn", &vtkDataSetToDataObjectFilter::GeometryOn)
    .function("GeometryOff", &vtkDataSetToDataObjectFilter::GeometryOff)
    .function("SetTopology", &vtkDataSetToDataObjectFilter::SetTopology)
    .function("GetTopology", &vtkDataSetToDataObjectFilter::GetTopology)
    .function("TopologyOn", &vtkDataSetToDataObjectFilter::TopologyOn)
    .function("TopologyOff", &vtkDataSetToDataObjectFilter::TopologyOff)
    .function("SetLegacyTopology", &vtkDataSetToDataObjectFilter::SetLegacyTopology)
    .function("GetLegacyTopology", &vtkDataSetToDataObjectFilter::GetLegacyTopology)
    .function("LegacyTopologyOn", &vtkDataSetToDataObjectFilter::LegacyTopologyOn)
    .function("LegacyTopologyOff", &vtkDataSetToDataObjectFilter::LegacyTopologyOff)
    .function("SetModernTopology", &vtkDataSetToDataObjectFilter::SetModernTopology)
    .function("GetModernTopology", &vtkDataSetToDataObjectFilter::GetModernTopology)
    .function("ModernTopologyOn", &vtkDataSetToDataObjectFilter::ModernTopologyOn)
    .function("ModernTopologyOff", &vtkDataSetToDataObjectFilter::ModernTopologyOff)
    .function("SetFieldData", &vtkDataSetToDataObjectFilter::SetFieldData)
    .function("GetFieldData", &vtkDataSetToDataObjectFilter::GetFieldData)
    .function("FieldDataOn", &vtkDataSetToDataObjectFilter::FieldDataOn)
    .function("FieldDataOff", &vtkDataSetToDataObjectFilter::FieldDataOff)
    .function("SetPointData", &vtkDataSetToDataObjectFilter::SetPointData)
    .function("GetPointData", &vtkDataSetToDataObjectFilter::GetPointData)
    .function("PointDataOn", &vtkDataSetToDataObjectFilter::PointDataOn)
    .function("PointDataOff", &vtkDataSetToDataObjectFilter::PointDataOff)
    .function("SetCellData", &vtkDataSetToDataObjectFilter::SetCellData)
    .function("GetCellData", &vtkDataSetToDataObjectFilter::GetCellData)
    .function("CellDataOn", &vtkDataSetToDataObjectFilter::CellDataOn)
    .function("CellDataOff", &vtkDataSetToDataObjectFilter::CellDataOff);
}
