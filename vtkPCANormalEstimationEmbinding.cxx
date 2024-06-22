// JavaScript wrapper for vtkPCANormalEstimation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkPCANormalEstimationEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkPCANormalEstimation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractPointLocator.h"
#include "vtkPCANormalEstimation.h"

EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkPCANormalEstimation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPCANormalEstimation>(vtkPCANormalEstimation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPCANormalEstimation_class) {
  using Style=vtkPCANormalEstimation::Style;
  emscripten::class_<vtkPCANormalEstimation, emscripten::base<vtkPolyDataAlgorithm>>("vtkPCANormalEstimation")
    .smart_ptr<vtkSmartPointer<vtkPCANormalEstimation>>("vtkSmartPointer<vtkPCANormalEstimation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPCANormalEstimation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPCANormalEstimation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPCANormalEstimation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPCANormalEstimation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPCANormalEstimation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPCANormalEstimation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPCANormalEstimation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSearchMode", &vtkPCANormalEstimation::SetSearchMode)
    .function("GetSearchMode", &vtkPCANormalEstimation::GetSearchMode)
    .function("SetSearchModeToKNN", &vtkPCANormalEstimation::SetSearchModeToKNN)
    .function("SetSearchModeToRadius", &vtkPCANormalEstimation::SetSearchModeToRadius)
    .function("SetSampleSize", &vtkPCANormalEstimation::SetSampleSize)
    .function("GetSampleSizeMinValue", &vtkPCANormalEstimation::GetSampleSizeMinValue)
    .function("GetSampleSizeMaxValue", &vtkPCANormalEstimation::GetSampleSizeMaxValue)
    .function("GetSampleSize", &vtkPCANormalEstimation::GetSampleSize)
    .function("SetRadius", &vtkPCANormalEstimation::SetRadius)
    .function("GetRadius", &vtkPCANormalEstimation::GetRadius)
    .function("SetNormalOrientation", &vtkPCANormalEstimation::SetNormalOrientation)
    .function("GetNormalOrientation", &vtkPCANormalEstimation::GetNormalOrientation)
    .function("SetNormalOrientationToAsComputed", &vtkPCANormalEstimation::SetNormalOrientationToAsComputed)
    .function("SetNormalOrientationToPoint", &vtkPCANormalEstimation::SetNormalOrientationToPoint)
    .function("SetNormalOrientationToGraphTraversal", &vtkPCANormalEstimation::SetNormalOrientationToGraphTraversal)
    .function("SetOrientationPoint", emscripten::select_overload<void(vtkPCANormalEstimation&, double, double, double)>([](vtkPCANormalEstimation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrientationPoint( arg_0, arg_1, arg_2); }))
    .function("SetFlipNormals", &vtkPCANormalEstimation::SetFlipNormals)
    .function("GetFlipNormals", &vtkPCANormalEstimation::GetFlipNormals)
    .function("FlipNormalsOn", &vtkPCANormalEstimation::FlipNormalsOn)
    .function("FlipNormalsOff", &vtkPCANormalEstimation::FlipNormalsOff)
    .function("SetLocator", &vtkPCANormalEstimation::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkPCANormalEstimation::GetLocator, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkPCANormalEstimation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkPCANormalEstimation_KNN", vtkPCANormalEstimation::KNN },
      { "vtkPCANormalEstimation_RADIUS", vtkPCANormalEstimation::RADIUS },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkPCANormalEstimation_1_2_constants) {
    typedef vtkPCANormalEstimation::Style cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkPCANormalEstimation_Style_AS_COMPUTED", vtkPCANormalEstimation::AS_COMPUTED },
      { "vtkPCANormalEstimation_Style_POINT", vtkPCANormalEstimation::POINT },
      { "vtkPCANormalEstimation_Style_GRAPH_TRAVERSAL", vtkPCANormalEstimation::GRAPH_TRAVERSAL },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
