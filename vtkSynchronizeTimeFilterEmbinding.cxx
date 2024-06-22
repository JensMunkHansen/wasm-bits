// JavaScript wrapper for vtkSynchronizeTimeFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkSynchronizeTimeFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkSynchronizeTimeFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkSynchronizeTimeFilter.h"

template<> void emscripten::internal::raw_destructor<vtkSynchronizeTimeFilter>(vtkSynchronizeTimeFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSynchronizeTimeFilter_class) {
  emscripten::class_<vtkSynchronizeTimeFilter, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkSynchronizeTimeFilter")
    .smart_ptr<vtkSmartPointer<vtkSynchronizeTimeFilter>>("vtkSmartPointer<vtkSynchronizeTimeFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSynchronizeTimeFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSynchronizeTimeFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSynchronizeTimeFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSynchronizeTimeFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSynchronizeTimeFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSynchronizeTimeFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSynchronizeTimeFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSourceConnection", &vtkSynchronizeTimeFilter::SetSourceConnection, emscripten::allow_raw_pointers())
    .function("SetRelativeTolerance", &vtkSynchronizeTimeFilter::SetRelativeTolerance)
    .function("GetRelativeToleranceMinValue", &vtkSynchronizeTimeFilter::GetRelativeToleranceMinValue)
    .function("GetRelativeToleranceMaxValue", &vtkSynchronizeTimeFilter::GetRelativeToleranceMaxValue)
    .function("GetRelativeTolerance", &vtkSynchronizeTimeFilter::GetRelativeTolerance);
}
