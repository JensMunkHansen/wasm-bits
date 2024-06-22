// JavaScript wrapper for vtkRotationalExtrusionFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkRotationalExtrusionFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkRotationalExtrusionFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRotationalExtrusionFilter.h"

template<> void emscripten::internal::raw_destructor<vtkRotationalExtrusionFilter>(vtkRotationalExtrusionFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRotationalExtrusionFilter_class) {
  emscripten::class_<vtkRotationalExtrusionFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkRotationalExtrusionFilter")
    .smart_ptr<vtkSmartPointer<vtkRotationalExtrusionFilter>>("vtkSmartPointer<vtkRotationalExtrusionFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRotationalExtrusionFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRotationalExtrusionFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRotationalExtrusionFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRotationalExtrusionFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRotationalExtrusionFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRotationalExtrusionFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRotationalExtrusionFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetResolution", &vtkRotationalExtrusionFilter::SetResolution)
    .function("GetResolutionMinValue", &vtkRotationalExtrusionFilter::GetResolutionMinValue)
    .function("GetResolutionMaxValue", &vtkRotationalExtrusionFilter::GetResolutionMaxValue)
    .function("GetResolution", &vtkRotationalExtrusionFilter::GetResolution)
    .function("SetCapping", &vtkRotationalExtrusionFilter::SetCapping)
    .function("GetCapping", &vtkRotationalExtrusionFilter::GetCapping)
    .function("CappingOn", &vtkRotationalExtrusionFilter::CappingOn)
    .function("CappingOff", &vtkRotationalExtrusionFilter::CappingOff)
    .function("SetAngle", &vtkRotationalExtrusionFilter::SetAngle)
    .function("GetAngle", &vtkRotationalExtrusionFilter::GetAngle)
    .function("SetTranslation", &vtkRotationalExtrusionFilter::SetTranslation)
    .function("GetTranslation", &vtkRotationalExtrusionFilter::GetTranslation)
    .function("SetDeltaRadius", &vtkRotationalExtrusionFilter::SetDeltaRadius)
    .function("GetDeltaRadius", &vtkRotationalExtrusionFilter::GetDeltaRadius)
    .function("SetRotationAxis", emscripten::select_overload<void(vtkRotationalExtrusionFilter&, double, double, double)>([](vtkRotationalExtrusionFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetRotationAxis( arg_0, arg_1, arg_2); }));
}
