// JavaScript wrapper for vtkPartitionBalancer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPartitionBalancerEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPartitionBalancer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkPartitionBalancer.h"

EMSCRIPTEN_BINDINGS(vtkFiltersParallel_vtkPartitionBalancer_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPartitionBalancer>(vtkPartitionBalancer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPartitionBalancer_class) {
  emscripten::class_<vtkPartitionBalancer, emscripten::base<vtkPartitionedDataSetAlgorithm>>("vtkPartitionBalancer")
    .smart_ptr<vtkSmartPointer<vtkPartitionBalancer>>("vtkSmartPointer<vtkPartitionBalancer>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPartitionBalancer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPartitionBalancer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPartitionBalancer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPartitionBalancer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPartitionBalancer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPartitionBalancer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPartitionBalancer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkPartitionBalancer::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkPartitionBalancer::GetController, emscripten::allow_raw_pointers())
    .function("SetMode", &vtkPartitionBalancer::SetMode)
    .function("GetModeMinValue", &vtkPartitionBalancer::GetModeMinValue)
    .function("GetModeMaxValue", &vtkPartitionBalancer::GetModeMaxValue)
    .function("GetMode", &vtkPartitionBalancer::GetMode)
    .function("SetModeToExpand", &vtkPartitionBalancer::SetModeToExpand)
    .function("SetModeToSquash", &vtkPartitionBalancer::SetModeToSquash);
}
EMSCRIPTEN_BINDINGS(vtkFiltersParallel_vtkPartitionBalancer_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkPartitionBalancer_Expand", vtkPartitionBalancer::Expand },
      { "vtkPartitionBalancer_Squash", vtkPartitionBalancer::Squash },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
