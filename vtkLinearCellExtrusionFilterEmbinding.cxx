// JavaScript wrapper for vtkLinearCellExtrusionFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkLinearCellExtrusionFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkLinearCellExtrusionFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkLinearCellExtrusionFilter.h"

template<> void emscripten::internal::raw_destructor<vtkLinearCellExtrusionFilter>(vtkLinearCellExtrusionFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLinearCellExtrusionFilter_class) {
  emscripten::class_<vtkLinearCellExtrusionFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkLinearCellExtrusionFilter")
    .smart_ptr<vtkSmartPointer<vtkLinearCellExtrusionFilter>>("vtkSmartPointer<vtkLinearCellExtrusionFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLinearCellExtrusionFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLinearCellExtrusionFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLinearCellExtrusionFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLinearCellExtrusionFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLinearCellExtrusionFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLinearCellExtrusionFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLinearCellExtrusionFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetScaleFactor", &vtkLinearCellExtrusionFilter::SetScaleFactor)
    .function("GetScaleFactor", &vtkLinearCellExtrusionFilter::GetScaleFactor)
    .function("SetUseUserVector", &vtkLinearCellExtrusionFilter::SetUseUserVector)
    .function("GetUseUserVector", &vtkLinearCellExtrusionFilter::GetUseUserVector)
    .function("UseUserVectorOn", &vtkLinearCellExtrusionFilter::UseUserVectorOn)
    .function("UseUserVectorOff", &vtkLinearCellExtrusionFilter::UseUserVectorOff)
    .function("SetUserVector", emscripten::select_overload<void(vtkLinearCellExtrusionFilter&, double, double, double)>([](vtkLinearCellExtrusionFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetUserVector( arg_0, arg_1, arg_2); }))
    .function("SetMergeDuplicatePoints", &vtkLinearCellExtrusionFilter::SetMergeDuplicatePoints)
    .function("GetMergeDuplicatePoints", &vtkLinearCellExtrusionFilter::GetMergeDuplicatePoints)
    .function("MergeDuplicatePointsOn", &vtkLinearCellExtrusionFilter::MergeDuplicatePointsOn)
    .function("MergeDuplicatePointsOff", &vtkLinearCellExtrusionFilter::MergeDuplicatePointsOff)
    .function("GetLocator", &vtkLinearCellExtrusionFilter::GetLocator, emscripten::allow_raw_pointers())
    .function("SetLocator", &vtkLinearCellExtrusionFilter::SetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkLinearCellExtrusionFilter::CreateDefaultLocator);
}
