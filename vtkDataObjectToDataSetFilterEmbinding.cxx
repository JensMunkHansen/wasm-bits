// JavaScript wrapper for vtkDataObjectToDataSetFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkDataObjectToDataSetFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkDataObjectToDataSetFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkDataSet.h"
#include "vtkPolyData.h"
#include "vtkStructuredPoints.h"
#include "vtkStructuredGrid.h"
#include "vtkUnstructuredGrid.h"
#include "vtkRectilinearGrid.h"
#include "vtkDataObjectToDataSetFilter.h"

template<> void emscripten::internal::raw_destructor<vtkDataObjectToDataSetFilter>(vtkDataObjectToDataSetFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataObjectToDataSetFilter_class) {
  emscripten::class_<vtkDataObjectToDataSetFilter, emscripten::base<vtkDataSetAlgorithm>>("vtkDataObjectToDataSetFilter")
    .smart_ptr<vtkSmartPointer<vtkDataObjectToDataSetFilter>>("vtkSmartPointer<vtkDataObjectToDataSetFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDataObjectToDataSetFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectToDataSetFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataObjectToDataSetFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataObjectToDataSetFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectToDataSetFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", &vtkDataObjectToDataSetFilter::GetInput, emscripten::allow_raw_pointers())
    .function("SetDataSetType", &vtkDataObjectToDataSetFilter::SetDataSetType)
    .function("GetDataSetType", &vtkDataObjectToDataSetFilter::GetDataSetType)
    .function("SetDataSetTypeToPolyData", &vtkDataObjectToDataSetFilter::SetDataSetTypeToPolyData)
    .function("SetDataSetTypeToStructuredPoints", &vtkDataObjectToDataSetFilter::SetDataSetTypeToStructuredPoints)
    .function("SetDataSetTypeToStructuredGrid", &vtkDataObjectToDataSetFilter::SetDataSetTypeToStructuredGrid)
    .function("SetDataSetTypeToRectilinearGrid", &vtkDataObjectToDataSetFilter::SetDataSetTypeToRectilinearGrid)
    .function("SetDataSetTypeToUnstructuredGrid", &vtkDataObjectToDataSetFilter::SetDataSetTypeToUnstructuredGrid)
    .function("GetOutput", emscripten::select_overload<vtkDataSet*(vtkDataObjectToDataSetFilter&)>([](vtkDataObjectToDataSetFilter& self) -> vtkDataSet* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkDataSet*(vtkDataObjectToDataSetFilter&, int)>([](vtkDataObjectToDataSetFilter& self, int arg_0) -> vtkDataSet* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetPolyDataOutput", &vtkDataObjectToDataSetFilter::GetPolyDataOutput, emscripten::allow_raw_pointers())
    .function("GetStructuredPointsOutput", &vtkDataObjectToDataSetFilter::GetStructuredPointsOutput, emscripten::allow_raw_pointers())
    .function("GetStructuredGridOutput", &vtkDataObjectToDataSetFilter::GetStructuredGridOutput, emscripten::allow_raw_pointers())
    .function("GetUnstructuredGridOutput", &vtkDataObjectToDataSetFilter::GetUnstructuredGridOutput, emscripten::allow_raw_pointers())
    .function("GetRectilinearGridOutput", &vtkDataObjectToDataSetFilter::GetRectilinearGridOutput, emscripten::allow_raw_pointers())
    .function("SetPointComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, int, const std::string &, int, int, int, int)>([](vtkDataObjectToDataSetFilter& self, int arg_0, const std::string & arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetPointComponent( arg_0, arg_1.c_str(), arg_2, arg_3, arg_4, arg_5); }))
    .function("SetPointComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, int, const std::string &, int)>([](vtkDataObjectToDataSetFilter& self, int arg_0, const std::string & arg_1, int arg_2) -> void { return self.SetPointComponent( arg_0, arg_1.c_str(), arg_2); }))
    .function("GetPointComponentArrayName", emscripten::optional_override([](vtkDataObjectToDataSetFilter& self, int arg_0) -> std::string {  return self.GetPointComponentArrayName( arg_0);}))
    .function("GetPointComponentArrayComponent", &vtkDataObjectToDataSetFilter::GetPointComponentArrayComponent)
    .function("GetPointComponentMinRange", &vtkDataObjectToDataSetFilter::GetPointComponentMinRange)
    .function("GetPointComponentMaxRange", &vtkDataObjectToDataSetFilter::GetPointComponentMaxRange)
    .function("GetPointComponentNormailzeFlag", &vtkDataObjectToDataSetFilter::GetPointComponentNormailzeFlag)
    .function("SetVertsComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, const std::string &, int, int, int)>([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetVertsComponent( arg_0.c_str(), arg_1, arg_2, arg_3); }))
    .function("SetVertsComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, const std::string &, int)>([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0, int arg_1) -> void { return self.SetVertsComponent( arg_0.c_str(), arg_1); }))
    .function("GetVertsComponentArrayName", emscripten::optional_override([](vtkDataObjectToDataSetFilter& self) -> std::string {  return self.GetVertsComponentArrayName();}))
    .function("GetVertsComponentArrayComponent", &vtkDataObjectToDataSetFilter::GetVertsComponentArrayComponent)
    .function("GetVertsComponentMinRange", &vtkDataObjectToDataSetFilter::GetVertsComponentMinRange)
    .function("GetVertsComponentMaxRange", &vtkDataObjectToDataSetFilter::GetVertsComponentMaxRange)
    .function("SetLinesComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, const std::string &, int, int, int)>([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetLinesComponent( arg_0.c_str(), arg_1, arg_2, arg_3); }))
    .function("SetLinesComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, const std::string &, int)>([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0, int arg_1) -> void { return self.SetLinesComponent( arg_0.c_str(), arg_1); }))
    .function("GetLinesComponentArrayName", emscripten::optional_override([](vtkDataObjectToDataSetFilter& self) -> std::string {  return self.GetLinesComponentArrayName();}))
    .function("GetLinesComponentArrayComponent", &vtkDataObjectToDataSetFilter::GetLinesComponentArrayComponent)
    .function("GetLinesComponentMinRange", &vtkDataObjectToDataSetFilter::GetLinesComponentMinRange)
    .function("GetLinesComponentMaxRange", &vtkDataObjectToDataSetFilter::GetLinesComponentMaxRange)
    .function("SetPolysComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, const std::string &, int, int, int)>([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetPolysComponent( arg_0.c_str(), arg_1, arg_2, arg_3); }))
    .function("SetPolysComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, const std::string &, int)>([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0, int arg_1) -> void { return self.SetPolysComponent( arg_0.c_str(), arg_1); }))
    .function("GetPolysComponentArrayName", emscripten::optional_override([](vtkDataObjectToDataSetFilter& self) -> std::string {  return self.GetPolysComponentArrayName();}))
    .function("GetPolysComponentArrayComponent", &vtkDataObjectToDataSetFilter::GetPolysComponentArrayComponent)
    .function("GetPolysComponentMinRange", &vtkDataObjectToDataSetFilter::GetPolysComponentMinRange)
    .function("GetPolysComponentMaxRange", &vtkDataObjectToDataSetFilter::GetPolysComponentMaxRange)
    .function("SetStripsComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, const std::string &, int, int, int)>([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetStripsComponent( arg_0.c_str(), arg_1, arg_2, arg_3); }))
    .function("SetStripsComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, const std::string &, int)>([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0, int arg_1) -> void { return self.SetStripsComponent( arg_0.c_str(), arg_1); }))
    .function("GetStripsComponentArrayName", emscripten::optional_override([](vtkDataObjectToDataSetFilter& self) -> std::string {  return self.GetStripsComponentArrayName();}))
    .function("GetStripsComponentArrayComponent", &vtkDataObjectToDataSetFilter::GetStripsComponentArrayComponent)
    .function("GetStripsComponentMinRange", &vtkDataObjectToDataSetFilter::GetStripsComponentMinRange)
    .function("GetStripsComponentMaxRange", &vtkDataObjectToDataSetFilter::GetStripsComponentMaxRange)
    .function("SetCellTypeComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, const std::string &, int, int, int)>([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetCellTypeComponent( arg_0.c_str(), arg_1, arg_2, arg_3); }))
    .function("SetCellTypeComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, const std::string &, int)>([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0, int arg_1) -> void { return self.SetCellTypeComponent( arg_0.c_str(), arg_1); }))
    .function("GetCellTypeComponentArrayName", emscripten::optional_override([](vtkDataObjectToDataSetFilter& self) -> std::string {  return self.GetCellTypeComponentArrayName();}))
    .function("GetCellTypeComponentArrayComponent", &vtkDataObjectToDataSetFilter::GetCellTypeComponentArrayComponent)
    .function("GetCellTypeComponentMinRange", &vtkDataObjectToDataSetFilter::GetCellTypeComponentMinRange)
    .function("GetCellTypeComponentMaxRange", &vtkDataObjectToDataSetFilter::GetCellTypeComponentMaxRange)
    .function("SetCellConnectivityComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, const std::string &, int, int, int)>([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetCellConnectivityComponent( arg_0.c_str(), arg_1, arg_2, arg_3); }))
    .function("SetCellConnectivityComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, const std::string &, int)>([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0, int arg_1) -> void { return self.SetCellConnectivityComponent( arg_0.c_str(), arg_1); }))
    .function("GetCellConnectivityComponentArrayName", emscripten::optional_override([](vtkDataObjectToDataSetFilter& self) -> std::string {  return self.GetCellConnectivityComponentArrayName();}))
    .function("GetCellConnectivityComponentArrayComponent", &vtkDataObjectToDataSetFilter::GetCellConnectivityComponentArrayComponent)
    .function("GetCellConnectivityComponentMinRange", &vtkDataObjectToDataSetFilter::GetCellConnectivityComponentMinRange)
    .function("GetCellConnectivityComponentMaxRange", &vtkDataObjectToDataSetFilter::GetCellConnectivityComponentMaxRange)
    .function("SetDefaultNormalize", &vtkDataObjectToDataSetFilter::SetDefaultNormalize)
    .function("GetDefaultNormalize", &vtkDataObjectToDataSetFilter::GetDefaultNormalize)
    .function("DefaultNormalizeOn", &vtkDataObjectToDataSetFilter::DefaultNormalizeOn)
    .function("DefaultNormalizeOff", &vtkDataObjectToDataSetFilter::DefaultNormalizeOff)
    .function("SetDimensions", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, int, int, int)>([](vtkDataObjectToDataSetFilter& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetDimensions( arg_0, arg_1, arg_2); }))
    .function("SetOrigin", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, double, double, double)>([](vtkDataObjectToDataSetFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetSpacing", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, double, double, double)>([](vtkDataObjectToDataSetFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetSpacing( arg_0, arg_1, arg_2); }))
    .function("SetDimensionsComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, const std::string &, int, int, int)>([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetDimensionsComponent( arg_0.c_str(), arg_1, arg_2, arg_3); }))
    .function("SetDimensionsComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, const std::string &, int)>([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0, int arg_1) -> void { return self.SetDimensionsComponent( arg_0.c_str(), arg_1); }))
    .function("SetSpacingComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, const std::string &, int, int, int)>([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetSpacingComponent( arg_0.c_str(), arg_1, arg_2, arg_3); }))
    .function("SetSpacingComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, const std::string &, int)>([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0, int arg_1) -> void { return self.SetSpacingComponent( arg_0.c_str(), arg_1); }))
    .function("SetOriginComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, const std::string &, int, int, int)>([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetOriginComponent( arg_0.c_str(), arg_1, arg_2, arg_3); }))
    .function("SetOriginComponent", emscripten::select_overload<void(vtkDataObjectToDataSetFilter&, const std::string &, int)>([](vtkDataObjectToDataSetFilter& self, const std::string & arg_0, int arg_1) -> void { return self.SetOriginComponent( arg_0.c_str(), arg_1); }));
}
