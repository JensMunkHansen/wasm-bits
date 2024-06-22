// JavaScript wrapper for vtkBSplineTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkBSplineTransformEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkBSplineTransform.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkImageData.h"
#include "vtkAbstractTransform.h"
#include "vtkBSplineTransform.h"

EMSCRIPTEN_BINDINGS(vtkFiltersHybrid_vtkBSplineTransform_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_BSPLINE_EDGE", 0 },
      { "VTK_BSPLINE_ZERO", 1 },
      { "VTK_BSPLINE_ZERO_AT_BORDER", 2 },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkBSplineTransform>(vtkBSplineTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBSplineTransform_class) {
  emscripten::class_<vtkBSplineTransform, emscripten::base<vtkWarpTransform>>("vtkBSplineTransform")
    .smart_ptr<vtkSmartPointer<vtkBSplineTransform>>("vtkSmartPointer<vtkBSplineTransform>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBSplineTransform>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBSplineTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBSplineTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBSplineTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBSplineTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBSplineTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBSplineTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCoefficientConnection", &vtkBSplineTransform::SetCoefficientConnection, emscripten::allow_raw_pointers())
    .function("SetCoefficientData", &vtkBSplineTransform::SetCoefficientData, emscripten::allow_raw_pointers())
    .function("GetCoefficientData", &vtkBSplineTransform::GetCoefficientData, emscripten::allow_raw_pointers())
    .function("SetDisplacementScale", &vtkBSplineTransform::SetDisplacementScale)
    .function("GetDisplacementScale", &vtkBSplineTransform::GetDisplacementScale)
    .function("SetBorderMode", &vtkBSplineTransform::SetBorderMode)
    .function("GetBorderModeMinValue", &vtkBSplineTransform::GetBorderModeMinValue)
    .function("GetBorderModeMaxValue", &vtkBSplineTransform::GetBorderModeMaxValue)
    .function("SetBorderModeToEdge", &vtkBSplineTransform::SetBorderModeToEdge)
    .function("SetBorderModeToZero", &vtkBSplineTransform::SetBorderModeToZero)
    .function("SetBorderModeToZeroAtBorder", &vtkBSplineTransform::SetBorderModeToZeroAtBorder)
    .function("GetBorderMode", &vtkBSplineTransform::GetBorderMode)
    .function("GetBorderModeAsString", emscripten::optional_override([](vtkBSplineTransform& self) -> std::string {  return self.GetBorderModeAsString();}))
    .function("MakeTransform", &vtkBSplineTransform::MakeTransform, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkBSplineTransform::GetMTime);
}
