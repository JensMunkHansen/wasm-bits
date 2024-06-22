// JavaScript wrapper for vtkTrimmedExtrusionFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkTrimmedExtrusionFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkTrimmedExtrusionFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkInformationVector.h"
#include "vtkAbstractCellLocator.h"
#include "vtkTrimmedExtrusionFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkTrimmedExtrusionFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkTrimmedExtrusionFilter>(vtkTrimmedExtrusionFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTrimmedExtrusionFilter_class) {
  emscripten::class_<vtkTrimmedExtrusionFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkTrimmedExtrusionFilter")
    .smart_ptr<vtkSmartPointer<vtkTrimmedExtrusionFilter>>("vtkSmartPointer<vtkTrimmedExtrusionFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTrimmedExtrusionFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTrimmedExtrusionFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTrimmedExtrusionFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTrimmedExtrusionFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTrimmedExtrusionFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTrimmedExtrusionFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTrimmedExtrusionFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetExtrusionDirection", emscripten::select_overload<void(vtkTrimmedExtrusionFilter&, double, double, double)>([](vtkTrimmedExtrusionFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetExtrusionDirection( arg_0, arg_1, arg_2); }))
    .function("SetTrimSurfaceData", &vtkTrimmedExtrusionFilter::SetTrimSurfaceData, emscripten::allow_raw_pointers())
    .function("SetTrimSurfaceConnection", &vtkTrimmedExtrusionFilter::SetTrimSurfaceConnection, emscripten::allow_raw_pointers())
    .function("GetTrimSurface", emscripten::select_overload<vtkPolyData*(vtkTrimmedExtrusionFilter&)>([](vtkTrimmedExtrusionFilter& self) -> vtkPolyData* { return self.GetTrimSurface(); }), emscripten::allow_raw_pointers())
    .function("GetTrimSurface", emscripten::select_overload<vtkPolyData*(vtkTrimmedExtrusionFilter&, vtkInformationVector*)>([](vtkTrimmedExtrusionFilter& self, vtkInformationVector* arg_0) -> vtkPolyData* { return self.GetTrimSurface( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetCapping", &vtkTrimmedExtrusionFilter::SetCapping)
    .function("GetCapping", &vtkTrimmedExtrusionFilter::GetCapping)
    .function("CappingOn", &vtkTrimmedExtrusionFilter::CappingOn)
    .function("CappingOff", &vtkTrimmedExtrusionFilter::CappingOff)
    .function("SetExtrusionStrategy", &vtkTrimmedExtrusionFilter::SetExtrusionStrategy)
    .function("GetExtrusionStrategy", &vtkTrimmedExtrusionFilter::GetExtrusionStrategy)
    .function("SetExtrusionStrategyToBoundaryEdges", &vtkTrimmedExtrusionFilter::SetExtrusionStrategyToBoundaryEdges)
    .function("SetExtrusionStrategyToAllEdges", &vtkTrimmedExtrusionFilter::SetExtrusionStrategyToAllEdges)
    .function("SetCappingStrategy", &vtkTrimmedExtrusionFilter::SetCappingStrategy)
    .function("GetCappingStrategy", &vtkTrimmedExtrusionFilter::GetCappingStrategy)
    .function("SetCappingStrategyToIntersection", &vtkTrimmedExtrusionFilter::SetCappingStrategyToIntersection)
    .function("SetCappingStrategyToMinimumDistance", &vtkTrimmedExtrusionFilter::SetCappingStrategyToMinimumDistance)
    .function("SetCappingStrategyToMaximumDistance", &vtkTrimmedExtrusionFilter::SetCappingStrategyToMaximumDistance)
    .function("SetCappingStrategyToAverageDistance", &vtkTrimmedExtrusionFilter::SetCappingStrategyToAverageDistance)
    .function("SetLocator", &vtkTrimmedExtrusionFilter::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkTrimmedExtrusionFilter::GetLocator, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkTrimmedExtrusionFilter_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkTrimmedExtrusionFilter_BOUNDARY_EDGES", vtkTrimmedExtrusionFilter::BOUNDARY_EDGES },
      { "vtkTrimmedExtrusionFilter_ALL_EDGES", vtkTrimmedExtrusionFilter::ALL_EDGES },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkTrimmedExtrusionFilter_1_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkTrimmedExtrusionFilter_INTERSECTION", vtkTrimmedExtrusionFilter::INTERSECTION },
      { "vtkTrimmedExtrusionFilter_MINIMUM_DISTANCE", vtkTrimmedExtrusionFilter::MINIMUM_DISTANCE },
      { "vtkTrimmedExtrusionFilter_MAXIMUM_DISTANCE", vtkTrimmedExtrusionFilter::MAXIMUM_DISTANCE },
      { "vtkTrimmedExtrusionFilter_AVERAGE_DISTANCE", vtkTrimmedExtrusionFilter::AVERAGE_DISTANCE },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
