// JavaScript wrapper for vtkRuledSurfaceFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkRuledSurfaceFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkRuledSurfaceFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRuledSurfaceFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkRuledSurfaceFilter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_RULED_MODE_RESAMPLE", 0 },
      { "VTK_RULED_MODE_POINT_WALK", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkRuledSurfaceFilter>(vtkRuledSurfaceFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRuledSurfaceFilter_class) {
  emscripten::class_<vtkRuledSurfaceFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkRuledSurfaceFilter")
    .smart_ptr<vtkSmartPointer<vtkRuledSurfaceFilter>>("vtkSmartPointer<vtkRuledSurfaceFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRuledSurfaceFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRuledSurfaceFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRuledSurfaceFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRuledSurfaceFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRuledSurfaceFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRuledSurfaceFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRuledSurfaceFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDistanceFactor", &vtkRuledSurfaceFilter::SetDistanceFactor)
    .function("GetDistanceFactorMinValue", &vtkRuledSurfaceFilter::GetDistanceFactorMinValue)
    .function("GetDistanceFactorMaxValue", &vtkRuledSurfaceFilter::GetDistanceFactorMaxValue)
    .function("GetDistanceFactor", &vtkRuledSurfaceFilter::GetDistanceFactor)
    .function("SetOnRatio", &vtkRuledSurfaceFilter::SetOnRatio)
    .function("GetOnRatioMinValue", &vtkRuledSurfaceFilter::GetOnRatioMinValue)
    .function("GetOnRatioMaxValue", &vtkRuledSurfaceFilter::GetOnRatioMaxValue)
    .function("GetOnRatio", &vtkRuledSurfaceFilter::GetOnRatio)
    .function("SetOffset", &vtkRuledSurfaceFilter::SetOffset)
    .function("GetOffsetMinValue", &vtkRuledSurfaceFilter::GetOffsetMinValue)
    .function("GetOffsetMaxValue", &vtkRuledSurfaceFilter::GetOffsetMaxValue)
    .function("GetOffset", &vtkRuledSurfaceFilter::GetOffset)
    .function("SetCloseSurface", &vtkRuledSurfaceFilter::SetCloseSurface)
    .function("GetCloseSurface", &vtkRuledSurfaceFilter::GetCloseSurface)
    .function("CloseSurfaceOn", &vtkRuledSurfaceFilter::CloseSurfaceOn)
    .function("CloseSurfaceOff", &vtkRuledSurfaceFilter::CloseSurfaceOff)
    .function("SetRuledMode", &vtkRuledSurfaceFilter::SetRuledMode)
    .function("GetRuledModeMinValue", &vtkRuledSurfaceFilter::GetRuledModeMinValue)
    .function("GetRuledModeMaxValue", &vtkRuledSurfaceFilter::GetRuledModeMaxValue)
    .function("GetRuledMode", &vtkRuledSurfaceFilter::GetRuledMode)
    .function("SetRuledModeToResample", &vtkRuledSurfaceFilter::SetRuledModeToResample)
    .function("SetRuledModeToPointWalk", &vtkRuledSurfaceFilter::SetRuledModeToPointWalk)
    .function("GetRuledModeAsString", emscripten::optional_override([](vtkRuledSurfaceFilter& self) -> std::string {  return self.GetRuledModeAsString();}))
    .function("SetResolution", emscripten::select_overload<void(vtkRuledSurfaceFilter&, int, int)>([](vtkRuledSurfaceFilter& self, int arg_0, int arg_1) -> void { return self.SetResolution( arg_0, arg_1); }))
    .function("SetPassLines", &vtkRuledSurfaceFilter::SetPassLines)
    .function("GetPassLines", &vtkRuledSurfaceFilter::GetPassLines)
    .function("PassLinesOn", &vtkRuledSurfaceFilter::PassLinesOn)
    .function("PassLinesOff", &vtkRuledSurfaceFilter::PassLinesOff)
    .function("SetOrientLoops", &vtkRuledSurfaceFilter::SetOrientLoops)
    .function("GetOrientLoops", &vtkRuledSurfaceFilter::GetOrientLoops)
    .function("OrientLoopsOn", &vtkRuledSurfaceFilter::OrientLoopsOn)
    .function("OrientLoopsOff", &vtkRuledSurfaceFilter::OrientLoopsOff);
}
