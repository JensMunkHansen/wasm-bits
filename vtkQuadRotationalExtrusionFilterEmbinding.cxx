// JavaScript wrapper for vtkQuadRotationalExtrusionFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkQuadRotationalExtrusionFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkQuadRotationalExtrusionFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkQuadRotationalExtrusionFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkQuadRotationalExtrusionFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkQuadRotationalExtrusionFilter>(vtkQuadRotationalExtrusionFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuadRotationalExtrusionFilter_class) {
  using RotationAxis=vtkQuadRotationalExtrusionFilter::RotationAxis;
  emscripten::class_<vtkQuadRotationalExtrusionFilter, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkQuadRotationalExtrusionFilter")
    .smart_ptr<vtkSmartPointer<vtkQuadRotationalExtrusionFilter>>("vtkSmartPointer<vtkQuadRotationalExtrusionFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkQuadRotationalExtrusionFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadRotationalExtrusionFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuadRotationalExtrusionFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuadRotationalExtrusionFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuadRotationalExtrusionFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadRotationalExtrusionFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuadRotationalExtrusionFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetAxis", &vtkQuadRotationalExtrusionFilter::SetAxis)
    .function("GetAxisMinValue", &vtkQuadRotationalExtrusionFilter::GetAxisMinValue)
    .function("GetAxisMaxValue", &vtkQuadRotationalExtrusionFilter::GetAxisMaxValue)
    .function("GetAxis", &vtkQuadRotationalExtrusionFilter::GetAxis)
    .function("SetAxisToX", &vtkQuadRotationalExtrusionFilter::SetAxisToX)
    .function("SetAxisToY", &vtkQuadRotationalExtrusionFilter::SetAxisToY)
    .function("SetAxisToZ", &vtkQuadRotationalExtrusionFilter::SetAxisToZ)
    .function("SetResolution", &vtkQuadRotationalExtrusionFilter::SetResolution)
    .function("GetResolutionMinValue", &vtkQuadRotationalExtrusionFilter::GetResolutionMinValue)
    .function("GetResolutionMaxValue", &vtkQuadRotationalExtrusionFilter::GetResolutionMaxValue)
    .function("GetResolution", &vtkQuadRotationalExtrusionFilter::GetResolution)
    .function("SetCapping", &vtkQuadRotationalExtrusionFilter::SetCapping)
    .function("GetCapping", &vtkQuadRotationalExtrusionFilter::GetCapping)
    .function("CappingOn", &vtkQuadRotationalExtrusionFilter::CappingOn)
    .function("CappingOff", &vtkQuadRotationalExtrusionFilter::CappingOff)
    .function("SetDefaultAngle", &vtkQuadRotationalExtrusionFilter::SetDefaultAngle)
    .function("GetDefaultAngle", &vtkQuadRotationalExtrusionFilter::GetDefaultAngle)
    .function("RemoveAllPerBlockAngles", &vtkQuadRotationalExtrusionFilter::RemoveAllPerBlockAngles)
    .function("AddPerBlockAngle", &vtkQuadRotationalExtrusionFilter::AddPerBlockAngle)
    .function("SetTranslation", &vtkQuadRotationalExtrusionFilter::SetTranslation)
    .function("GetTranslation", &vtkQuadRotationalExtrusionFilter::GetTranslation)
    .function("SetDeltaRadius", &vtkQuadRotationalExtrusionFilter::SetDeltaRadius)
    .function("GetDeltaRadius", &vtkQuadRotationalExtrusionFilter::GetDeltaRadius);
}
EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkQuadRotationalExtrusionFilter_0_2_constants) {
    typedef vtkQuadRotationalExtrusionFilter::RotationAxis cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkQuadRotationalExtrusionFilter_RotationAxis_USE_X", vtkQuadRotationalExtrusionFilter::USE_X },
      { "vtkQuadRotationalExtrusionFilter_RotationAxis_USE_Y", vtkQuadRotationalExtrusionFilter::USE_Y },
      { "vtkQuadRotationalExtrusionFilter_RotationAxis_USE_Z", vtkQuadRotationalExtrusionFilter::USE_Z },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
