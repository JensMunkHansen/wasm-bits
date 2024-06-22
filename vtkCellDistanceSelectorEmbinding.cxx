// JavaScript wrapper for vtkCellDistanceSelector with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSelection.js/vtkFiltersSelection.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSelection.js/vtkCellDistanceSelectorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Selection/vtkCellDistanceSelector.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataObject.h"
#include "vtkSelection.h"
#include "vtkCellDistanceSelector.h"

EMSCRIPTEN_BINDINGS(vtkFiltersSelection_vtkCellDistanceSelector_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCellDistanceSelector>(vtkCellDistanceSelector * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellDistanceSelector_class) {
  using InputPorts=vtkCellDistanceSelector::InputPorts;
  emscripten::class_<vtkCellDistanceSelector, emscripten::base<vtkSelectionAlgorithm>>("vtkCellDistanceSelector")
    .smart_ptr<vtkSmartPointer<vtkCellDistanceSelector>>("vtkSmartPointer<vtkCellDistanceSelector>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCellDistanceSelector>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellDistanceSelector::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellDistanceSelector& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellDistanceSelector::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellDistanceSelector::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellDistanceSelector::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellDistanceSelector& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputMeshConnection", &vtkCellDistanceSelector::SetInputMeshConnection, emscripten::allow_raw_pointers())
    .function("SetInputMesh", &vtkCellDistanceSelector::SetInputMesh, emscripten::allow_raw_pointers())
    .function("SetInputSelectionConnection", &vtkCellDistanceSelector::SetInputSelectionConnection, emscripten::allow_raw_pointers())
    .function("SetInputSelection", &vtkCellDistanceSelector::SetInputSelection, emscripten::allow_raw_pointers())
    .function("SetDistance", &vtkCellDistanceSelector::SetDistance)
    .function("GetDistance", &vtkCellDistanceSelector::GetDistance)
    .function("SetIncludeSeed", &vtkCellDistanceSelector::SetIncludeSeed)
    .function("GetIncludeSeed", &vtkCellDistanceSelector::GetIncludeSeed)
    .function("IncludeSeedOn", &vtkCellDistanceSelector::IncludeSeedOn)
    .function("IncludeSeedOff", &vtkCellDistanceSelector::IncludeSeedOff)
    .function("SetAddIntermediate", &vtkCellDistanceSelector::SetAddIntermediate)
    .function("GetAddIntermediate", &vtkCellDistanceSelector::GetAddIntermediate)
    .function("AddIntermediateOn", &vtkCellDistanceSelector::AddIntermediateOn)
    .function("AddIntermediateOff", &vtkCellDistanceSelector::AddIntermediateOff);
}
EMSCRIPTEN_BINDINGS(vtkFiltersSelection_vtkCellDistanceSelector_0_2_constants) {
    typedef vtkCellDistanceSelector::InputPorts cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkCellDistanceSelector_InputPorts_INPUT_MESH", vtkCellDistanceSelector::INPUT_MESH },
      { "vtkCellDistanceSelector_InputPorts_INPUT_SELECTION", vtkCellDistanceSelector::INPUT_SELECTION },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
