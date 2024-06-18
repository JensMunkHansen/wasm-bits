// JavaScript wrapper for vtkHyperTreeGridProbeFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkHyperTreeGridProbeFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkHyperTreeGridProbeFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGrid.h"
#include "vtkAlgorithmOutput.h"
#include "vtkHyperTreeGridLocator.h"
#include "vtkIdTypeArray.h"
#include "vtkHyperTreeGridProbeFilter.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridProbeFilter>(vtkHyperTreeGridProbeFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridProbeFilter_class) {
  emscripten::class_<vtkHyperTreeGridProbeFilter, emscripten::base<vtkDataSetAlgorithm>>("vtkHyperTreeGridProbeFilter")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridProbeFilter>>("vtkSmartPointer<vtkHyperTreeGridProbeFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHyperTreeGridProbeFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridProbeFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridProbeFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridProbeFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridProbeFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridProbeFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridProbeFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSourceData", &vtkHyperTreeGridProbeFilter::SetSourceData, emscripten::allow_raw_pointers())
    .function("GetSource", &vtkHyperTreeGridProbeFilter::GetSource, emscripten::allow_raw_pointers())
    .function("SetSourceConnection", &vtkHyperTreeGridProbeFilter::SetSourceConnection, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkHyperTreeGridProbeFilter::GetLocator, emscripten::allow_raw_pointers())
    .function("SetLocator", &vtkHyperTreeGridProbeFilter::SetLocator, emscripten::allow_raw_pointers())
    .function("SetPassCellArrays", &vtkHyperTreeGridProbeFilter::SetPassCellArrays)
    .function("PassCellArraysOn", &vtkHyperTreeGridProbeFilter::PassCellArraysOn)
    .function("PassCellArraysOff", &vtkHyperTreeGridProbeFilter::PassCellArraysOff)
    .function("GetPassCellArrays", &vtkHyperTreeGridProbeFilter::GetPassCellArrays)
    .function("SetPassPointArrays", &vtkHyperTreeGridProbeFilter::SetPassPointArrays)
    .function("PassPointArraysOn", &vtkHyperTreeGridProbeFilter::PassPointArraysOn)
    .function("PassPointArraysOff", &vtkHyperTreeGridProbeFilter::PassPointArraysOff)
    .function("GetPassPointArrays", &vtkHyperTreeGridProbeFilter::GetPassPointArrays)
    .function("SetPassFieldArrays", &vtkHyperTreeGridProbeFilter::SetPassFieldArrays)
    .function("PassFieldArraysOn", &vtkHyperTreeGridProbeFilter::PassFieldArraysOn)
    .function("PassFieldArraysOff", &vtkHyperTreeGridProbeFilter::PassFieldArraysOff)
    .function("GetPassFieldArrays", &vtkHyperTreeGridProbeFilter::GetPassFieldArrays)
    .function("SetValidPointMaskArrayName", &vtkHyperTreeGridProbeFilter::SetValidPointMaskArrayName)
    .function("GetValidPointMaskArrayName", &vtkHyperTreeGridProbeFilter::GetValidPointMaskArrayName)
    .function("GetValidPoints", &vtkHyperTreeGridProbeFilter::GetValidPoints, emscripten::allow_raw_pointers())
    .function("SetTolerance", &vtkHyperTreeGridProbeFilter::SetTolerance)
    .function("GetTolerance", &vtkHyperTreeGridProbeFilter::GetTolerance)
    .function("SetComputeTolerance", &vtkHyperTreeGridProbeFilter::SetComputeTolerance)
    .function("GetComputeTolerance", &vtkHyperTreeGridProbeFilter::GetComputeTolerance)
    .function("SetUseImplicitArrays", &vtkHyperTreeGridProbeFilter::SetUseImplicitArrays)
    .function("GetUseImplicitArrays", &vtkHyperTreeGridProbeFilter::GetUseImplicitArrays)
    .function("UseImplicitArraysOn", &vtkHyperTreeGridProbeFilter::UseImplicitArraysOn)
    .function("UseImplicitArraysOff", &vtkHyperTreeGridProbeFilter::UseImplicitArraysOff);
}
