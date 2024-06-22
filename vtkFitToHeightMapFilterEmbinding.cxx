// JavaScript wrapper for vtkFitToHeightMapFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFitToHeightMapFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkFitToHeightMapFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkInformationVector.h"
#include "vtkFitToHeightMapFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkFitToHeightMapFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkFitToHeightMapFilter>(vtkFitToHeightMapFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFitToHeightMapFilter_class) {
  emscripten::class_<vtkFitToHeightMapFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkFitToHeightMapFilter")
    .smart_ptr<vtkSmartPointer<vtkFitToHeightMapFilter>>("vtkSmartPointer<vtkFitToHeightMapFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFitToHeightMapFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFitToHeightMapFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFitToHeightMapFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFitToHeightMapFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFitToHeightMapFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFitToHeightMapFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFitToHeightMapFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetHeightMapData", &vtkFitToHeightMapFilter::SetHeightMapData, emscripten::allow_raw_pointers())
    .function("SetHeightMapConnection", &vtkFitToHeightMapFilter::SetHeightMapConnection, emscripten::allow_raw_pointers())
    .function("GetHeightMap", emscripten::select_overload<vtkImageData*(vtkFitToHeightMapFilter&)>([](vtkFitToHeightMapFilter& self) -> vtkImageData* { return self.GetHeightMap(); }), emscripten::allow_raw_pointers())
    .function("GetHeightMap", emscripten::select_overload<vtkImageData*(vtkFitToHeightMapFilter&, vtkInformationVector*)>([](vtkFitToHeightMapFilter& self, vtkInformationVector* arg_0) -> vtkImageData* { return self.GetHeightMap( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetFittingStrategy", &vtkFitToHeightMapFilter::SetFittingStrategy)
    .function("GetFittingStrategy", &vtkFitToHeightMapFilter::GetFittingStrategy)
    .function("SetFittingStrategyToPointProjection", &vtkFitToHeightMapFilter::SetFittingStrategyToPointProjection)
    .function("SetFittingStrategyToPointMinimumHeight", &vtkFitToHeightMapFilter::SetFittingStrategyToPointMinimumHeight)
    .function("SetFittingStrategyToPointMaximumHeight", &vtkFitToHeightMapFilter::SetFittingStrategyToPointMaximumHeight)
    .function("SetFittingStrategyToAverageHeight", &vtkFitToHeightMapFilter::SetFittingStrategyToAverageHeight)
    .function("SetFittingStrategyToCellMinimumHeight", &vtkFitToHeightMapFilter::SetFittingStrategyToCellMinimumHeight)
    .function("SetFittingStrategyToCellMaximumHeight", &vtkFitToHeightMapFilter::SetFittingStrategyToCellMaximumHeight)
    .function("SetFittingStrategyToCellAverageHeight", &vtkFitToHeightMapFilter::SetFittingStrategyToCellAverageHeight)
    .function("SetUseHeightMapOffset", &vtkFitToHeightMapFilter::SetUseHeightMapOffset)
    .function("GetUseHeightMapOffset", &vtkFitToHeightMapFilter::GetUseHeightMapOffset)
    .function("UseHeightMapOffsetOn", &vtkFitToHeightMapFilter::UseHeightMapOffsetOn)
    .function("UseHeightMapOffsetOff", &vtkFitToHeightMapFilter::UseHeightMapOffsetOff);
}
EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkFitToHeightMapFilter_0_2_constants) {
  const struct { const char *name; int value; }
    constants[7] = {
      { "vtkFitToHeightMapFilter_POINT_PROJECTION", vtkFitToHeightMapFilter::POINT_PROJECTION },
      { "vtkFitToHeightMapFilter_POINT_MINIMUM_HEIGHT", vtkFitToHeightMapFilter::POINT_MINIMUM_HEIGHT },
      { "vtkFitToHeightMapFilter_POINT_MAXIMUM_HEIGHT", vtkFitToHeightMapFilter::POINT_MAXIMUM_HEIGHT },
      { "vtkFitToHeightMapFilter_POINT_AVERAGE_HEIGHT", vtkFitToHeightMapFilter::POINT_AVERAGE_HEIGHT },
      { "vtkFitToHeightMapFilter_CELL_MINIMUM_HEIGHT", vtkFitToHeightMapFilter::CELL_MINIMUM_HEIGHT },
      { "vtkFitToHeightMapFilter_CELL_MAXIMUM_HEIGHT", vtkFitToHeightMapFilter::CELL_MAXIMUM_HEIGHT },
      { "vtkFitToHeightMapFilter_CELL_AVERAGE_HEIGHT", vtkFitToHeightMapFilter::CELL_AVERAGE_HEIGHT },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
