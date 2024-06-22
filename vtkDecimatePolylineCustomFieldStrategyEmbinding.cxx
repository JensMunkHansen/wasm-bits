// JavaScript wrapper for vtkDecimatePolylineCustomFieldStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkDecimatePolylineCustomFieldStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkDecimatePolylineCustomFieldStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkPointSet.h"
#include "vtkDecimatePolylineCustomFieldStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkDecimatePolylineCustomFieldStrategy>(vtkDecimatePolylineCustomFieldStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDecimatePolylineCustomFieldStrategy_class) {
  emscripten::class_<vtkDecimatePolylineCustomFieldStrategy, emscripten::base<vtkDecimatePolylineStrategy>>("vtkDecimatePolylineCustomFieldStrategy")
    .smart_ptr<vtkSmartPointer<vtkDecimatePolylineCustomFieldStrategy>>("vtkSmartPointer<vtkDecimatePolylineCustomFieldStrategy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDecimatePolylineCustomFieldStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDecimatePolylineCustomFieldStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDecimatePolylineCustomFieldStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDecimatePolylineCustomFieldStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDecimatePolylineCustomFieldStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDecimatePolylineCustomFieldStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDecimatePolylineCustomFieldStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ComputeError", &vtkDecimatePolylineCustomFieldStrategy::ComputeError, emscripten::allow_raw_pointers())
    .function("SetFieldName", &vtkDecimatePolylineCustomFieldStrategy::SetFieldName)
    .function("GetFieldName", &vtkDecimatePolylineCustomFieldStrategy::GetFieldName);
}
