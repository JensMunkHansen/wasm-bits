// JavaScript wrapper for vtkDelaunay2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkDelaunay2DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkDelaunay2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkAbstractTransform.h"
#include "vtkPointSet.h"
#include "vtkDelaunay2D.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkDelaunay2D_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_DELAUNAY_XY_PLANE", 0 },
      { "VTK_SET_TRANSFORM_PLANE", 1 },
      { "VTK_BEST_FITTING_PLANE", 2 },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkDelaunay2D>(vtkDelaunay2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDelaunay2D_class) {
  emscripten::class_<vtkDelaunay2D, emscripten::base<vtkPolyDataAlgorithm>>("vtkDelaunay2D")
    .smart_ptr<vtkSmartPointer<vtkDelaunay2D>>("vtkSmartPointer<vtkDelaunay2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDelaunay2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDelaunay2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDelaunay2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDelaunay2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDelaunay2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDelaunay2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDelaunay2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSourceData", &vtkDelaunay2D::SetSourceData, emscripten::allow_raw_pointers())
    .function("SetSourceConnection", &vtkDelaunay2D::SetSourceConnection, emscripten::allow_raw_pointers())
    .function("GetSource", &vtkDelaunay2D::GetSource, emscripten::allow_raw_pointers())
    .function("SetAlpha", &vtkDelaunay2D::SetAlpha)
    .function("GetAlphaMinValue", &vtkDelaunay2D::GetAlphaMinValue)
    .function("GetAlphaMaxValue", &vtkDelaunay2D::GetAlphaMaxValue)
    .function("GetAlpha", &vtkDelaunay2D::GetAlpha)
    .function("SetTolerance", &vtkDelaunay2D::SetTolerance)
    .function("GetToleranceMinValue", &vtkDelaunay2D::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkDelaunay2D::GetToleranceMaxValue)
    .function("GetTolerance", &vtkDelaunay2D::GetTolerance)
    .function("SetOffset", &vtkDelaunay2D::SetOffset)
    .function("GetOffsetMinValue", &vtkDelaunay2D::GetOffsetMinValue)
    .function("GetOffsetMaxValue", &vtkDelaunay2D::GetOffsetMaxValue)
    .function("GetOffset", &vtkDelaunay2D::GetOffset)
    .function("SetBoundingTriangulation", &vtkDelaunay2D::SetBoundingTriangulation)
    .function("GetBoundingTriangulation", &vtkDelaunay2D::GetBoundingTriangulation)
    .function("BoundingTriangulationOn", &vtkDelaunay2D::BoundingTriangulationOn)
    .function("BoundingTriangulationOff", &vtkDelaunay2D::BoundingTriangulationOff)
    .function("SetTransform", &vtkDelaunay2D::SetTransform, emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkDelaunay2D::GetTransform, emscripten::allow_raw_pointers())
    .function("SetProjectionPlaneMode", &vtkDelaunay2D::SetProjectionPlaneMode)
    .function("GetProjectionPlaneModeMinValue", &vtkDelaunay2D::GetProjectionPlaneModeMinValue)
    .function("GetProjectionPlaneModeMaxValue", &vtkDelaunay2D::GetProjectionPlaneModeMaxValue)
    .function("GetProjectionPlaneMode", &vtkDelaunay2D::GetProjectionPlaneMode)
    .class_function("ComputeBestFittingPlane", &vtkDelaunay2D::ComputeBestFittingPlane, emscripten::allow_raw_pointers())
    .function("SetRandomPointInsertion", &vtkDelaunay2D::SetRandomPointInsertion)
    .function("GetRandomPointInsertion", &vtkDelaunay2D::GetRandomPointInsertion)
    .function("RandomPointInsertionOn", &vtkDelaunay2D::RandomPointInsertionOn)
    .function("RandomPointInsertionOff", &vtkDelaunay2D::RandomPointInsertionOff);
}
