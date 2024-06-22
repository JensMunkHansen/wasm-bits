// JavaScript wrapper for vtkHyperTreeGridAxisReflection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkFiltersHyperTree.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkHyperTreeGridAxisReflectionEmbinding.cxx \
 /home/jmh/github/vtk/Filters/HyperTree/vtkHyperTreeGridAxisReflection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridAxisReflection.h"

EMSCRIPTEN_BINDINGS(vtkFiltersHyperTree_vtkHyperTreeGridAxisReflection_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridAxisReflection>(vtkHyperTreeGridAxisReflection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridAxisReflection_class) {
  using AxisReflectionPlane=vtkHyperTreeGridAxisReflection::AxisReflectionPlane;
  emscripten::class_<vtkHyperTreeGridAxisReflection, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkHyperTreeGridAxisReflection")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridAxisReflection>>("vtkSmartPointer<vtkHyperTreeGridAxisReflection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHyperTreeGridAxisReflection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridAxisReflection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridAxisReflection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridAxisReflection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridAxisReflection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridAxisReflection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridAxisReflection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPlane", &vtkHyperTreeGridAxisReflection::SetPlane)
    .function("GetPlaneMinValue", &vtkHyperTreeGridAxisReflection::GetPlaneMinValue)
    .function("GetPlaneMaxValue", &vtkHyperTreeGridAxisReflection::GetPlaneMaxValue)
    .function("GetPlane", &vtkHyperTreeGridAxisReflection::GetPlane)
    .function("SetPlaneToX", &vtkHyperTreeGridAxisReflection::SetPlaneToX)
    .function("SetPlaneToY", &vtkHyperTreeGridAxisReflection::SetPlaneToY)
    .function("SetPlaneToZ", &vtkHyperTreeGridAxisReflection::SetPlaneToZ)
    .function("SetPlaneToXMin", &vtkHyperTreeGridAxisReflection::SetPlaneToXMin)
    .function("SetPlaneToYMin", &vtkHyperTreeGridAxisReflection::SetPlaneToYMin)
    .function("SetPlaneToZMin", &vtkHyperTreeGridAxisReflection::SetPlaneToZMin)
    .function("SetPlaneToXMax", &vtkHyperTreeGridAxisReflection::SetPlaneToXMax)
    .function("SetPlaneToYMax", &vtkHyperTreeGridAxisReflection::SetPlaneToYMax)
    .function("SetPlaneToZMax", &vtkHyperTreeGridAxisReflection::SetPlaneToZMax)
    .function("SetCenter", &vtkHyperTreeGridAxisReflection::SetCenter)
    .function("GetCenter", &vtkHyperTreeGridAxisReflection::GetCenter);
}
EMSCRIPTEN_BINDINGS(vtkFiltersHyperTree_vtkHyperTreeGridAxisReflection_0_2_constants) {
    typedef vtkHyperTreeGridAxisReflection::AxisReflectionPlane cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[9] = {
      { "vtkHyperTreeGridAxisReflection_AxisReflectionPlane_USE_X_MIN", vtkHyperTreeGridAxisReflection::USE_X_MIN },
      { "vtkHyperTreeGridAxisReflection_AxisReflectionPlane_USE_Y_MIN", vtkHyperTreeGridAxisReflection::USE_Y_MIN },
      { "vtkHyperTreeGridAxisReflection_AxisReflectionPlane_USE_Z_MIN", vtkHyperTreeGridAxisReflection::USE_Z_MIN },
      { "vtkHyperTreeGridAxisReflection_AxisReflectionPlane_USE_X_MAX", vtkHyperTreeGridAxisReflection::USE_X_MAX },
      { "vtkHyperTreeGridAxisReflection_AxisReflectionPlane_USE_Y_MAX", vtkHyperTreeGridAxisReflection::USE_Y_MAX },
      { "vtkHyperTreeGridAxisReflection_AxisReflectionPlane_USE_Z_MAX", vtkHyperTreeGridAxisReflection::USE_Z_MAX },
      { "vtkHyperTreeGridAxisReflection_AxisReflectionPlane_USE_X", vtkHyperTreeGridAxisReflection::USE_X },
      { "vtkHyperTreeGridAxisReflection_AxisReflectionPlane_USE_Y", vtkHyperTreeGridAxisReflection::USE_Y },
      { "vtkHyperTreeGridAxisReflection_AxisReflectionPlane_USE_Z", vtkHyperTreeGridAxisReflection::USE_Z },
  };
  for (int c = 0; c < 9; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
