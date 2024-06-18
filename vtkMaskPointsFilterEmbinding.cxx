// JavaScript wrapper for vtkMaskPointsFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkMaskPointsFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkMaskPointsFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkAlgorithmOutput.h"
#include "vtkMaskPointsFilter.h"

template<> void emscripten::internal::raw_destructor<vtkMaskPointsFilter>(vtkMaskPointsFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMaskPointsFilter_class) {
  emscripten::class_<vtkMaskPointsFilter, emscripten::base<vtkPointCloudFilter>>("vtkMaskPointsFilter")
    .smart_ptr<vtkSmartPointer<vtkMaskPointsFilter>>("vtkSmartPointer<vtkMaskPointsFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMaskPointsFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMaskPointsFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMaskPointsFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMaskPointsFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMaskPointsFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMaskPointsFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMaskPointsFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMaskData", &vtkMaskPointsFilter::SetMaskData, emscripten::allow_raw_pointers())
    .function("GetMask", &vtkMaskPointsFilter::GetMask, emscripten::allow_raw_pointers())
    .function("SetMaskConnection", &vtkMaskPointsFilter::SetMaskConnection, emscripten::allow_raw_pointers())
    .function("SetEmptyValue", &vtkMaskPointsFilter::SetEmptyValue)
    .function("GetEmptyValue", &vtkMaskPointsFilter::GetEmptyValue);
}
