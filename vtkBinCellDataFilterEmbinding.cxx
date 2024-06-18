// JavaScript wrapper for vtkBinCellDataFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkBinCellDataFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkBinCellDataFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkAlgorithmOutput.h"
#include "vtkAbstractCellLocator.h"
#include "vtkBinCellDataFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkBinCellDataFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkBinCellDataFilter>(vtkBinCellDataFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBinCellDataFilter_class) {
  using CellOverlapCriterion=vtkBinCellDataFilter::CellOverlapCriterion;
  emscripten::class_<vtkBinCellDataFilter, emscripten::base<vtkDataSetAlgorithm>>("vtkBinCellDataFilter")
    .smart_ptr<vtkSmartPointer<vtkBinCellDataFilter>>("vtkSmartPointer<vtkBinCellDataFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBinCellDataFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBinCellDataFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBinCellDataFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBinCellDataFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBinCellDataFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBinCellDataFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBinCellDataFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetValue", &vtkBinCellDataFilter::SetValue)
    .function("GetValue", &vtkBinCellDataFilter::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkBinCellDataFilter&)>([](vtkBinCellDataFilter& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkBinCellDataFilter&, std::uintptr_t)>([](vtkBinCellDataFilter& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfBins", &vtkBinCellDataFilter::SetNumberOfBins)
    .function("GetNumberOfBins", &vtkBinCellDataFilter::GetNumberOfBins)
    .function("GenerateValues", emscripten::select_overload<void(vtkBinCellDataFilter&, int, double, double)>([](vtkBinCellDataFilter& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("SetSourceData", &vtkBinCellDataFilter::SetSourceData, emscripten::allow_raw_pointers())
    .function("GetSource", &vtkBinCellDataFilter::GetSource, emscripten::allow_raw_pointers())
    .function("SetSourceConnection", &vtkBinCellDataFilter::SetSourceConnection, emscripten::allow_raw_pointers())
    .function("SetSpatialMatch", &vtkBinCellDataFilter::SetSpatialMatch)
    .function("GetSpatialMatch", &vtkBinCellDataFilter::GetSpatialMatch)
    .function("SpatialMatchOn", &vtkBinCellDataFilter::SpatialMatchOn)
    .function("SpatialMatchOff", &vtkBinCellDataFilter::SpatialMatchOff)
    .function("SetStoreNumberOfNonzeroBins", &vtkBinCellDataFilter::SetStoreNumberOfNonzeroBins)
    .function("StoreNumberOfNonzeroBinsOn", &vtkBinCellDataFilter::StoreNumberOfNonzeroBinsOn)
    .function("StoreNumberOfNonzeroBinsOff", &vtkBinCellDataFilter::StoreNumberOfNonzeroBinsOff)
    .function("GetStoreNumberOfNonzeroBins", &vtkBinCellDataFilter::GetStoreNumberOfNonzeroBins)
    .function("SetNumberOfNonzeroBinsArrayName", emscripten::optional_override([](vtkBinCellDataFilter& self, const std::string & arg_0) -> void {  return self.SetNumberOfNonzeroBinsArrayName( arg_0.c_str());}))
    .function("GetNumberOfNonzeroBinsArrayName", emscripten::optional_override([](vtkBinCellDataFilter& self) -> std::string {  return self.GetNumberOfNonzeroBinsArrayName();}))
    .function("SetTolerance", &vtkBinCellDataFilter::SetTolerance)
    .function("GetTolerance", &vtkBinCellDataFilter::GetTolerance)
    .function("SetComputeTolerance", &vtkBinCellDataFilter::SetComputeTolerance)
    .function("ComputeToleranceOn", &vtkBinCellDataFilter::ComputeToleranceOn)
    .function("ComputeToleranceOff", &vtkBinCellDataFilter::ComputeToleranceOff)
    .function("GetComputeTolerance", &vtkBinCellDataFilter::GetComputeTolerance)
    .function("SetArrayComponent", &vtkBinCellDataFilter::SetArrayComponent)
    .function("GetArrayComponent", &vtkBinCellDataFilter::GetArrayComponent)
    .function("SetCellOverlapMethod", &vtkBinCellDataFilter::SetCellOverlapMethod)
    .function("GetCellOverlapMethodMinValue", &vtkBinCellDataFilter::GetCellOverlapMethodMinValue)
    .function("GetCellOverlapMethodMaxValue", &vtkBinCellDataFilter::GetCellOverlapMethodMaxValue)
    .function("GetCellOverlapMethod", &vtkBinCellDataFilter::GetCellOverlapMethod)
    .function("SetCellLocator", &vtkBinCellDataFilter::SetCellLocator, emscripten::allow_raw_pointers())
    .function("GetCellLocator", &vtkBinCellDataFilter::GetCellLocator, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkBinCellDataFilter_0_2_constants) {
    typedef vtkBinCellDataFilter::CellOverlapCriterion cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkBinCellDataFilter_CellOverlapCriterion_CELL_CENTROID", vtkBinCellDataFilter::CELL_CENTROID },
      { "vtkBinCellDataFilter_CellOverlapCriterion_CELL_POINTS", vtkBinCellDataFilter::CELL_POINTS },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
