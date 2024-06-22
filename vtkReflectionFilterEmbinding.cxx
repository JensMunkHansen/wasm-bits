// JavaScript wrapper for vtkReflectionFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkReflectionFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkReflectionFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkReflectionFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkReflectionFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkReflectionFilter>(vtkReflectionFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkReflectionFilter_class) {
  using ReflectionPlane=vtkReflectionFilter::ReflectionPlane;
  emscripten::class_<vtkReflectionFilter, emscripten::base<vtkDataObjectAlgorithm>>("vtkReflectionFilter")
    .smart_ptr<vtkSmartPointer<vtkReflectionFilter>>("vtkSmartPointer<vtkReflectionFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkReflectionFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkReflectionFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkReflectionFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkReflectionFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkReflectionFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkReflectionFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkReflectionFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPlane", &vtkReflectionFilter::SetPlane)
    .function("GetPlaneMinValue", &vtkReflectionFilter::GetPlaneMinValue)
    .function("GetPlaneMaxValue", &vtkReflectionFilter::GetPlaneMaxValue)
    .function("GetPlane", &vtkReflectionFilter::GetPlane)
    .function("SetPlaneToX", &vtkReflectionFilter::SetPlaneToX)
    .function("SetPlaneToY", &vtkReflectionFilter::SetPlaneToY)
    .function("SetPlaneToZ", &vtkReflectionFilter::SetPlaneToZ)
    .function("SetPlaneToXMin", &vtkReflectionFilter::SetPlaneToXMin)
    .function("SetPlaneToYMin", &vtkReflectionFilter::SetPlaneToYMin)
    .function("SetPlaneToZMin", &vtkReflectionFilter::SetPlaneToZMin)
    .function("SetPlaneToXMax", &vtkReflectionFilter::SetPlaneToXMax)
    .function("SetPlaneToYMax", &vtkReflectionFilter::SetPlaneToYMax)
    .function("SetPlaneToZMax", &vtkReflectionFilter::SetPlaneToZMax)
    .function("SetCenter", &vtkReflectionFilter::SetCenter)
    .function("GetCenter", &vtkReflectionFilter::GetCenter)
    .function("SetCopyInput", &vtkReflectionFilter::SetCopyInput)
    .function("GetCopyInput", &vtkReflectionFilter::GetCopyInput)
    .function("CopyInputOn", &vtkReflectionFilter::CopyInputOn)
    .function("CopyInputOff", &vtkReflectionFilter::CopyInputOff)
    .function("SetFlipAllInputArrays", &vtkReflectionFilter::SetFlipAllInputArrays)
    .function("GetFlipAllInputArrays", &vtkReflectionFilter::GetFlipAllInputArrays)
    .function("FlipAllInputArraysOn", &vtkReflectionFilter::FlipAllInputArraysOn)
    .function("FlipAllInputArraysOff", &vtkReflectionFilter::FlipAllInputArraysOff);
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkReflectionFilter_0_2_constants) {
    typedef vtkReflectionFilter::ReflectionPlane cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[9] = {
      { "vtkReflectionFilter_ReflectionPlane_USE_X_MIN", vtkReflectionFilter::USE_X_MIN },
      { "vtkReflectionFilter_ReflectionPlane_USE_Y_MIN", vtkReflectionFilter::USE_Y_MIN },
      { "vtkReflectionFilter_ReflectionPlane_USE_Z_MIN", vtkReflectionFilter::USE_Z_MIN },
      { "vtkReflectionFilter_ReflectionPlane_USE_X_MAX", vtkReflectionFilter::USE_X_MAX },
      { "vtkReflectionFilter_ReflectionPlane_USE_Y_MAX", vtkReflectionFilter::USE_Y_MAX },
      { "vtkReflectionFilter_ReflectionPlane_USE_Z_MAX", vtkReflectionFilter::USE_Z_MAX },
      { "vtkReflectionFilter_ReflectionPlane_USE_X", vtkReflectionFilter::USE_X },
      { "vtkReflectionFilter_ReflectionPlane_USE_Y", vtkReflectionFilter::USE_Y },
      { "vtkReflectionFilter_ReflectionPlane_USE_Z", vtkReflectionFilter::USE_Z },
  };
  for (int c = 0; c < 9; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
