// JavaScript wrapper for vtkSeedRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkSeedRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkSeedRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHandleRepresentation.h"
#include "vtkPropCollection.h"
#include "vtkSeedRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkSeedRepresentation>(vtkSeedRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSeedRepresentation_class) {
  emscripten::class_<vtkSeedRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkSeedRepresentation")
    .smart_ptr<vtkSmartPointer<vtkSeedRepresentation>>("vtkSmartPointer<vtkSeedRepresentation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSeedRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSeedRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSeedRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSeedRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSeedRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSeedRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSeedRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfSeeds", &vtkSeedRepresentation::GetNumberOfSeeds)
    .function("SetHandleRepresentation", &vtkSeedRepresentation::SetHandleRepresentation, emscripten::allow_raw_pointers())
    .function("GetHandleRepresentation", emscripten::select_overload<vtkHandleRepresentation*(vtkSeedRepresentation&, unsigned int)>([](vtkSeedRepresentation& self, unsigned int arg_0) -> vtkHandleRepresentation* { return self.GetHandleRepresentation( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetHandleRepresentation", emscripten::select_overload<vtkHandleRepresentation*(vtkSeedRepresentation&)>([](vtkSeedRepresentation& self) -> vtkHandleRepresentation* { return self.GetHandleRepresentation(); }), emscripten::allow_raw_pointers())
    .function("SetTolerance", &vtkSeedRepresentation::SetTolerance)
    .function("GetToleranceMinValue", &vtkSeedRepresentation::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkSeedRepresentation::GetToleranceMaxValue)
    .function("GetTolerance", &vtkSeedRepresentation::GetTolerance)
    .function("GetActiveHandle", &vtkSeedRepresentation::GetActiveHandle)
    .function("SetActiveHandle", &vtkSeedRepresentation::SetActiveHandle)
    .function("RemoveLastHandle", &vtkSeedRepresentation::RemoveLastHandle)
    .function("RemoveActiveHandle", &vtkSeedRepresentation::RemoveActiveHandle)
    .function("RemoveHandle", &vtkSeedRepresentation::RemoveHandle)
    .function("BuildRepresentation", &vtkSeedRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkSeedRepresentation::ComputeInteractionState)
    .function("GetActors", &vtkSeedRepresentation::GetActors, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkSeedRepresentation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkSeedRepresentation_Outside", vtkSeedRepresentation::Outside },
      { "vtkSeedRepresentation_NearSeed", vtkSeedRepresentation::NearSeed },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
