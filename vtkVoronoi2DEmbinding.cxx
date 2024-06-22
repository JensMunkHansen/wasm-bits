// JavaScript wrapper for vtkVoronoi2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkVoronoi2DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkVoronoi2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractTransform.h"
#include "vtkStaticPointLocator2D.h"
#include "vtkSpheres.h"
#include "vtkVoronoi2D.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkVoronoi2D_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkVoronoi2D>(vtkVoronoi2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVoronoi2D_class) {
  using GenerateScalarsStrategy=vtkVoronoi2D::GenerateScalarsStrategy;
  using ProjectionPlaneStrategy=vtkVoronoi2D::ProjectionPlaneStrategy;
  emscripten::class_<vtkVoronoi2D, emscripten::base<vtkPolyDataAlgorithm>>("vtkVoronoi2D")
    .smart_ptr<vtkSmartPointer<vtkVoronoi2D>>("vtkSmartPointer<vtkVoronoi2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVoronoi2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVoronoi2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVoronoi2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVoronoi2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVoronoi2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVoronoi2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVoronoi2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPadding", &vtkVoronoi2D::SetPadding)
    .function("GetPaddingMinValue", &vtkVoronoi2D::GetPaddingMinValue)
    .function("GetPaddingMaxValue", &vtkVoronoi2D::GetPaddingMaxValue)
    .function("GetPadding", &vtkVoronoi2D::GetPadding)
    .function("SetGenerateScalars", &vtkVoronoi2D::SetGenerateScalars)
    .function("GetGenerateScalars", &vtkVoronoi2D::GetGenerateScalars)
    .function("SetGenerateScalarsToNone", &vtkVoronoi2D::SetGenerateScalarsToNone)
    .function("SetGenerateScalarsToPointIds", &vtkVoronoi2D::SetGenerateScalarsToPointIds)
    .function("SetGenerateScalarsToThreadIds", &vtkVoronoi2D::SetGenerateScalarsToThreadIds)
    .function("SetTransform", &vtkVoronoi2D::SetTransform, emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkVoronoi2D::GetTransform, emscripten::allow_raw_pointers())
    .function("SetProjectionPlaneMode", &vtkVoronoi2D::SetProjectionPlaneMode)
    .function("GetProjectionPlaneModeMinValue", &vtkVoronoi2D::GetProjectionPlaneModeMinValue)
    .function("GetProjectionPlaneModeMaxValue", &vtkVoronoi2D::GetProjectionPlaneModeMaxValue)
    .function("GetProjectionPlaneMode", &vtkVoronoi2D::GetProjectionPlaneMode)
    .function("SetProjectionPlaneModeToXYPlane", &vtkVoronoi2D::SetProjectionPlaneModeToXYPlane)
    .function("SetProjectionPlaneModeToSpecifiedTransformPlane", &vtkVoronoi2D::SetProjectionPlaneModeToSpecifiedTransformPlane)
    .function("SetProjectionPlaneModeToBestFittingPlane", &vtkVoronoi2D::SetProjectionPlaneModeToBestFittingPlane)
    .function("SetPointOfInterest", &vtkVoronoi2D::SetPointOfInterest)
    .function("GetPointOfInterestMinValue", &vtkVoronoi2D::GetPointOfInterestMinValue)
    .function("GetPointOfInterestMaxValue", &vtkVoronoi2D::GetPointOfInterestMaxValue)
    .function("GetPointOfInterest", &vtkVoronoi2D::GetPointOfInterest)
    .function("SetMaximumNumberOfTileClips", &vtkVoronoi2D::SetMaximumNumberOfTileClips)
    .function("GetMaximumNumberOfTileClipsMinValue", &vtkVoronoi2D::GetMaximumNumberOfTileClipsMinValue)
    .function("GetMaximumNumberOfTileClipsMaxValue", &vtkVoronoi2D::GetMaximumNumberOfTileClipsMaxValue)
    .function("GetMaximumNumberOfTileClips", &vtkVoronoi2D::GetMaximumNumberOfTileClips)
    .function("GetLocator", &vtkVoronoi2D::GetLocator, emscripten::allow_raw_pointers())
    .function("SetGenerateVoronoiFlower", &vtkVoronoi2D::SetGenerateVoronoiFlower)
    .function("GetGenerateVoronoiFlower", &vtkVoronoi2D::GetGenerateVoronoiFlower)
    .function("GenerateVoronoiFlowerOn", &vtkVoronoi2D::GenerateVoronoiFlowerOn)
    .function("GenerateVoronoiFlowerOff", &vtkVoronoi2D::GenerateVoronoiFlowerOff)
    .function("GetSpheres", &vtkVoronoi2D::GetSpheres, emscripten::allow_raw_pointers())
    .function("GetNumberOfThreadsUsed", &vtkVoronoi2D::GetNumberOfThreadsUsed)
    .function("GetMTime", &vtkVoronoi2D::GetMTime);
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkVoronoi2D_0_2_constants) {
    typedef vtkVoronoi2D::GenerateScalarsStrategy cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkVoronoi2D_GenerateScalarsStrategy_NONE", vtkVoronoi2D::NONE },
      { "vtkVoronoi2D_GenerateScalarsStrategy_POINT_IDS", vtkVoronoi2D::POINT_IDS },
      { "vtkVoronoi2D_GenerateScalarsStrategy_THREAD_IDS", vtkVoronoi2D::THREAD_IDS },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkVoronoi2D_1_2_constants) {
    typedef vtkVoronoi2D::ProjectionPlaneStrategy cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkVoronoi2D_ProjectionPlaneStrategy_XY_PLANE", vtkVoronoi2D::XY_PLANE },
      { "vtkVoronoi2D_ProjectionPlaneStrategy_SPECIFIED_TRANSFORM_PLANE", vtkVoronoi2D::SPECIFIED_TRANSFORM_PLANE },
      { "vtkVoronoi2D_ProjectionPlaneStrategy_BEST_FITTING_PLANE", vtkVoronoi2D::BEST_FITTING_PLANE },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
