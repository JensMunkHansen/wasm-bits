// JavaScript wrapper for vtkHyperTreeGridThreshold with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkFiltersHyperTree.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkHyperTreeGridThresholdEmbinding.cxx \
 /home/jmh/github/vtk/Filters/HyperTree/vtkHyperTreeGridThreshold.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridThreshold.h"

EMSCRIPTEN_BINDINGS(vtkFiltersHyperTree_vtkHyperTreeGridThreshold_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridThreshold>(vtkHyperTreeGridThreshold * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridThreshold_class) {
  using MemoryStrategyChoice=vtkHyperTreeGridThreshold::MemoryStrategyChoice;
  emscripten::class_<vtkHyperTreeGridThreshold, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkHyperTreeGridThreshold")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridThreshold>>("vtkSmartPointer<vtkHyperTreeGridThreshold>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHyperTreeGridThreshold>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridThreshold::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridThreshold& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridThreshold::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridThreshold::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridThreshold::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridThreshold& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLowerThreshold", &vtkHyperTreeGridThreshold::SetLowerThreshold)
    .function("GetLowerThreshold", &vtkHyperTreeGridThreshold::GetLowerThreshold)
    .function("SetUpperThreshold", &vtkHyperTreeGridThreshold::SetUpperThreshold)
    .function("GetUpperThreshold", &vtkHyperTreeGridThreshold::GetUpperThreshold)
    .function("ThresholdBetween", &vtkHyperTreeGridThreshold::ThresholdBetween)
    .function("GetMemoryStrategy", &vtkHyperTreeGridThreshold::GetMemoryStrategy)
    .function("SetMemoryStrategy", &vtkHyperTreeGridThreshold::SetMemoryStrategy)
    .function("GetMemoryStrategyMinValue", &vtkHyperTreeGridThreshold::GetMemoryStrategyMinValue)
    .function("GetMemoryStrategyMaxValue", &vtkHyperTreeGridThreshold::GetMemoryStrategyMaxValue);
}
EMSCRIPTEN_BINDINGS(vtkFiltersHyperTree_vtkHyperTreeGridThreshold_0_2_constants) {
    typedef vtkHyperTreeGridThreshold::MemoryStrategyChoice cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkHyperTreeGridThreshold_MemoryStrategyChoice_MaskInput", vtkHyperTreeGridThreshold::MaskInput },
      { "vtkHyperTreeGridThreshold_MemoryStrategyChoice_CopyStructureAndIndexArrays", vtkHyperTreeGridThreshold::CopyStructureAndIndexArrays },
      { "vtkHyperTreeGridThreshold_MemoryStrategyChoice_DeepThreshold", vtkHyperTreeGridThreshold::DeepThreshold },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
