// JavaScript wrapper for vtkComputeHistogram2DOutliers with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersImaging.js/vtkFiltersImaging.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersImaging.js/vtkComputeHistogram2DOutliersEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Imaging/vtkComputeHistogram2DOutliers.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTable.h"
#include "vtkAlgorithmOutput.h"
#include "vtkComputeHistogram2DOutliers.h"

EMSCRIPTEN_BINDINGS(vtkFiltersImaging_vtkComputeHistogram2DOutliers_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkComputeHistogram2DOutliers>(vtkComputeHistogram2DOutliers * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkComputeHistogram2DOutliers_class) {
  using InputPorts=vtkComputeHistogram2DOutliers::InputPorts;
  using OutputPorts=vtkComputeHistogram2DOutliers::OutputPorts;
  emscripten::class_<vtkComputeHistogram2DOutliers, emscripten::base<vtkSelectionAlgorithm>>("vtkComputeHistogram2DOutliers")
    .smart_ptr<vtkSmartPointer<vtkComputeHistogram2DOutliers>>("vtkSmartPointer<vtkComputeHistogram2DOutliers>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkComputeHistogram2DOutliers>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkComputeHistogram2DOutliers::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkComputeHistogram2DOutliers& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkComputeHistogram2DOutliers::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkComputeHistogram2DOutliers::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkComputeHistogram2DOutliers::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkComputeHistogram2DOutliers& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPreferredNumberOfOutliers", &vtkComputeHistogram2DOutliers::SetPreferredNumberOfOutliers)
    .function("GetPreferredNumberOfOutliers", &vtkComputeHistogram2DOutliers::GetPreferredNumberOfOutliers)
    .function("GetOutputTable", &vtkComputeHistogram2DOutliers::GetOutputTable, emscripten::allow_raw_pointers())
    .function("SetInputTableConnection", &vtkComputeHistogram2DOutliers::SetInputTableConnection, emscripten::allow_raw_pointers())
    .function("SetInputHistogramImageDataConnection", &vtkComputeHistogram2DOutliers::SetInputHistogramImageDataConnection, emscripten::allow_raw_pointers())
    .function("SetInputHistogramMultiBlockConnection", &vtkComputeHistogram2DOutliers::SetInputHistogramMultiBlockConnection, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersImaging_vtkComputeHistogram2DOutliers_0_2_constants) {
    typedef vtkComputeHistogram2DOutliers::InputPorts cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkComputeHistogram2DOutliers_InputPorts_INPUT_TABLE_DATA", vtkComputeHistogram2DOutliers::INPUT_TABLE_DATA },
      { "vtkComputeHistogram2DOutliers_InputPorts_INPUT_HISTOGRAMS_IMAGE_DATA", vtkComputeHistogram2DOutliers::INPUT_HISTOGRAMS_IMAGE_DATA },
      { "vtkComputeHistogram2DOutliers_InputPorts_INPUT_HISTOGRAMS_MULTIBLOCK", vtkComputeHistogram2DOutliers::INPUT_HISTOGRAMS_MULTIBLOCK },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersImaging_vtkComputeHistogram2DOutliers_1_2_constants) {
    typedef vtkComputeHistogram2DOutliers::OutputPorts cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkComputeHistogram2DOutliers_OutputPorts_OUTPUT_SELECTED_ROWS", vtkComputeHistogram2DOutliers::OUTPUT_SELECTED_ROWS },
      { "vtkComputeHistogram2DOutliers_OutputPorts_OUTPUT_SELECTED_TABLE_DATA", vtkComputeHistogram2DOutliers::OUTPUT_SELECTED_TABLE_DATA },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
