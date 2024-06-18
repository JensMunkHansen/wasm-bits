// JavaScript wrapper for vtkExecutive with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkExecutiveEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkExecutive.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithm.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkDataObject.h"
#include "vtkInformationExecutivePortKey.h"
#include "vtkInformationExecutivePortVectorKey.h"
#include "vtkInformationIntegerKey.h"
#include "vtkInformationKeyVectorKey.h"
#include "vtkExecutive.h"

template<> void emscripten::internal::raw_destructor<vtkExecutive>(vtkExecutive * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExecutive_class) {
  emscripten::class_<vtkExecutive, emscripten::base<vtkObject>>("vtkExecutive")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExecutive::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExecutive& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExecutive::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExecutive::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExecutive::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExecutive& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetAlgorithm", &vtkExecutive::GetAlgorithm, emscripten::allow_raw_pointers())
    .function("UpdateInformation", &vtkExecutive::UpdateInformation)
    .function("Update", emscripten::select_overload<int(vtkExecutive&)>([](vtkExecutive& self) -> int { return self.Update(); }))
    .function("Update", emscripten::select_overload<int(vtkExecutive&, int)>([](vtkExecutive& self, int arg_0) -> int { return self.Update( arg_0); }))
    .function("GetNumberOfInputPorts", &vtkExecutive::GetNumberOfInputPorts)
    .function("GetNumberOfOutputPorts", &vtkExecutive::GetNumberOfOutputPorts)
    .function("GetNumberOfInputConnections", &vtkExecutive::GetNumberOfInputConnections)
    .function("GetOutputInformation", emscripten::select_overload<vtkInformation*(vtkExecutive&, int)>([](vtkExecutive& self, int arg_0) -> vtkInformation* { return self.GetOutputInformation( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetOutputInformation", emscripten::select_overload<vtkInformationVector*(vtkExecutive&)>([](vtkExecutive& self) -> vtkInformationVector* { return self.GetOutputInformation(); }), emscripten::allow_raw_pointers())
    .function("GetInputInformation", emscripten::select_overload<vtkInformation*(vtkExecutive&, int, int)>([](vtkExecutive& self, int arg_0, int arg_1) -> vtkInformation* { return self.GetInputInformation( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetInputInformation", emscripten::select_overload<vtkInformationVector*(vtkExecutive&, int)>([](vtkExecutive& self, int arg_0) -> vtkInformationVector* { return self.GetInputInformation( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInputExecutive", &vtkExecutive::GetInputExecutive, emscripten::allow_raw_pointers())
    .function("GetOutputData", &vtkExecutive::GetOutputData, emscripten::allow_raw_pointers())
    .function("SetOutputData", emscripten::select_overload<void(vtkExecutive&, int, vtkDataObject*, vtkInformation*)>([](vtkExecutive& self, int arg_0, vtkDataObject* arg_1, vtkInformation* arg_2) -> void { return self.SetOutputData( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetOutputData", emscripten::select_overload<void(vtkExecutive&, int, vtkDataObject*)>([](vtkExecutive& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetOutputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetInputData", emscripten::select_overload<vtkDataObject*(vtkExecutive&, int, int)>([](vtkExecutive& self, int arg_0, int arg_1) -> vtkDataObject* { return self.GetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetSharedOutputInformation", &vtkExecutive::SetSharedOutputInformation, emscripten::allow_raw_pointers())
    .function("UsesGarbageCollector", &vtkExecutive::UsesGarbageCollector)
    .class_function("PRODUCER", &vtkExecutive::PRODUCER, emscripten::allow_raw_pointers())
    .class_function("CONSUMERS", &vtkExecutive::CONSUMERS, emscripten::allow_raw_pointers())
    .class_function("FROM_OUTPUT_PORT", &vtkExecutive::FROM_OUTPUT_PORT, emscripten::allow_raw_pointers())
    .class_function("ALGORITHM_BEFORE_FORWARD", &vtkExecutive::ALGORITHM_BEFORE_FORWARD, emscripten::allow_raw_pointers())
    .class_function("ALGORITHM_AFTER_FORWARD", &vtkExecutive::ALGORITHM_AFTER_FORWARD, emscripten::allow_raw_pointers())
    .class_function("ALGORITHM_DIRECTION", &vtkExecutive::ALGORITHM_DIRECTION, emscripten::allow_raw_pointers())
    .class_function("FORWARD_DIRECTION", &vtkExecutive::FORWARD_DIRECTION, emscripten::allow_raw_pointers())
    .class_function("KEYS_TO_COPY", &vtkExecutive::KEYS_TO_COPY, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkCommonExecutionModel_vtkExecutive_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkExecutive_RequestUpstream", vtkExecutive::RequestUpstream },
      { "vtkExecutive_RequestDownstream", vtkExecutive::RequestDownstream },
      { "vtkExecutive_BeforeForward", vtkExecutive::BeforeForward },
      { "vtkExecutive_AfterForward", vtkExecutive::AfterForward },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
