// JavaScript wrapper for vtkIntegrateAttributes with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkIntegrateAttributesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkIntegrateAttributes.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkIntegrateAttributes.h"

EMSCRIPTEN_BINDINGS(vtkFiltersParallel_vtkIntegrateAttributes_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkIntegrateAttributes>(vtkIntegrateAttributes * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIntegrateAttributes_class) {
  using CommunicationIds=vtkIntegrateAttributes::CommunicationIds;
  emscripten::class_<vtkIntegrateAttributes, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkIntegrateAttributes")
    .smart_ptr<vtkSmartPointer<vtkIntegrateAttributes>>("vtkSmartPointer<vtkIntegrateAttributes>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkIntegrateAttributes>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIntegrateAttributes::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIntegrateAttributes& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIntegrateAttributes::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIntegrateAttributes::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIntegrateAttributes::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIntegrateAttributes& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkIntegrateAttributes::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkIntegrateAttributes::GetController, emscripten::allow_raw_pointers())
    .function("SetDivideAllCellDataByVolume", &vtkIntegrateAttributes::SetDivideAllCellDataByVolume)
    .function("GetDivideAllCellDataByVolume", &vtkIntegrateAttributes::GetDivideAllCellDataByVolume);
}
EMSCRIPTEN_BINDINGS(vtkFiltersParallel_vtkIntegrateAttributes_0_2_constants) {
    typedef vtkIntegrateAttributes::CommunicationIds cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkIntegrateAttributes_CommunicationIds_IntegrateAttrInfo", vtkIntegrateAttributes::IntegrateAttrInfo },
      { "vtkIntegrateAttributes_CommunicationIds_IntegrateAttrData", vtkIntegrateAttributes::IntegrateAttrData },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
