// JavaScript wrapper for vtkCellDerivatives with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkCellDerivativesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkCellDerivatives.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellDerivatives.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkCellDerivatives_0_1_constants) {
  const struct { const char *name; int value; }
    constants[7] = {
      { "VTK_VECTOR_MODE_PASS_VECTORS", 0 },
      { "VTK_VECTOR_MODE_COMPUTE_GRADIENT", 1 },
      { "VTK_VECTOR_MODE_COMPUTE_VORTICITY", 2 },
      { "VTK_TENSOR_MODE_PASS_TENSORS", 0 },
      { "VTK_TENSOR_MODE_COMPUTE_GRADIENT", 1 },
      { "VTK_TENSOR_MODE_COMPUTE_STRAIN", 2 },
      { "VTK_TENSOR_MODE_COMPUTE_GREEN_LAGRANGE_STRAIN", 3 },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkCellDerivatives>(vtkCellDerivatives * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellDerivatives_class) {
  emscripten::class_<vtkCellDerivatives, emscripten::base<vtkDataSetAlgorithm>>("vtkCellDerivatives")
    .smart_ptr<vtkSmartPointer<vtkCellDerivatives>>("vtkSmartPointer<vtkCellDerivatives>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCellDerivatives>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellDerivatives::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellDerivatives& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellDerivatives::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellDerivatives::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellDerivatives::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellDerivatives& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetVectorMode", &vtkCellDerivatives::SetVectorMode)
    .function("GetVectorMode", &vtkCellDerivatives::GetVectorMode)
    .function("SetVectorModeToPassVectors", &vtkCellDerivatives::SetVectorModeToPassVectors)
    .function("SetVectorModeToComputeGradient", &vtkCellDerivatives::SetVectorModeToComputeGradient)
    .function("SetVectorModeToComputeVorticity", &vtkCellDerivatives::SetVectorModeToComputeVorticity)
    .function("GetVectorModeAsString", emscripten::optional_override([](vtkCellDerivatives& self) -> std::string {  return self.GetVectorModeAsString();}))
    .function("SetTensorMode", &vtkCellDerivatives::SetTensorMode)
    .function("GetTensorMode", &vtkCellDerivatives::GetTensorMode)
    .function("SetTensorModeToPassTensors", &vtkCellDerivatives::SetTensorModeToPassTensors)
    .function("SetTensorModeToComputeGradient", &vtkCellDerivatives::SetTensorModeToComputeGradient)
    .function("SetTensorModeToComputeStrain", &vtkCellDerivatives::SetTensorModeToComputeStrain)
    .function("SetTensorModeToComputeGreenLagrangeStrain", &vtkCellDerivatives::SetTensorModeToComputeGreenLagrangeStrain)
    .function("GetTensorModeAsString", emscripten::optional_override([](vtkCellDerivatives& self) -> std::string {  return self.GetTensorModeAsString();}));
}
