// JavaScript wrapper for vtkGridTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkGridTransformEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkGridTransform.h
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
#include "vtkGridTransform.h"

EMSCRIPTEN_BINDINGS(vtkFiltersHybrid_vtkGridTransform_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_GRID_NEAREST", VTK_NEAREST_INTERPOLATION },
      { "VTK_GRID_LINEAR", VTK_LINEAR_INTERPOLATION },
      { "VTK_GRID_CUBIC", VTK_CUBIC_INTERPOLATION },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkGridTransform>(vtkGridTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGridTransform_class) {
  emscripten::class_<vtkGridTransform, emscripten::base<vtkWarpTransform>>("vtkGridTransform")
    .smart_ptr<vtkSmartPointer<vtkGridTransform>>("vtkSmartPointer<vtkGridTransform>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGridTransform>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGridTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGridTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGridTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGridTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGridTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGridTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDisplacementGridConnection", &vtkGridTransform::SetDisplacementGridConnection, emscripten::allow_raw_pointers())
    .function("SetDisplacementGridData", &vtkGridTransform::SetDisplacementGridData, emscripten::allow_raw_pointers())
    .function("GetDisplacementGrid", &vtkGridTransform::GetDisplacementGrid, emscripten::allow_raw_pointers())
    .function("SetDisplacementScale", &vtkGridTransform::SetDisplacementScale)
    .function("GetDisplacementScale", &vtkGridTransform::GetDisplacementScale)
    .function("SetDisplacementShift", &vtkGridTransform::SetDisplacementShift)
    .function("GetDisplacementShift", &vtkGridTransform::GetDisplacementShift)
    .function("SetInterpolationMode", &vtkGridTransform::SetInterpolationMode)
    .function("GetInterpolationMode", &vtkGridTransform::GetInterpolationMode)
    .function("SetInterpolationModeToNearestNeighbor", &vtkGridTransform::SetInterpolationModeToNearestNeighbor)
    .function("SetInterpolationModeToLinear", &vtkGridTransform::SetInterpolationModeToLinear)
    .function("SetInterpolationModeToCubic", &vtkGridTransform::SetInterpolationModeToCubic)
    .function("GetInterpolationModeAsString", emscripten::optional_override([](vtkGridTransform& self) -> std::string {  return self.GetInterpolationModeAsString();}))
    .function("MakeTransform", &vtkGridTransform::MakeTransform, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkGridTransform::GetMTime);
}
