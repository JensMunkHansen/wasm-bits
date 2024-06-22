// JavaScript wrapper for vtkTensorPrincipalInvariants with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTensor.js/vtkFiltersTensor.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTensor.js/vtkTensorPrincipalInvariantsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Tensor/vtkTensorPrincipalInvariants.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArraySelection.h"
#include "vtkTensorPrincipalInvariants.h"

template<> void emscripten::internal::raw_destructor<vtkTensorPrincipalInvariants>(vtkTensorPrincipalInvariants * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTensorPrincipalInvariants_class) {
  emscripten::class_<vtkTensorPrincipalInvariants, emscripten::base<vtkDataSetAlgorithm>>("vtkTensorPrincipalInvariants")
    .smart_ptr<vtkSmartPointer<vtkTensorPrincipalInvariants>>("vtkSmartPointer<vtkTensorPrincipalInvariants>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTensorPrincipalInvariants>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTensorPrincipalInvariants::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTensorPrincipalInvariants& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTensorPrincipalInvariants::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTensorPrincipalInvariants::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTensorPrincipalInvariants::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTensorPrincipalInvariants& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetScaleVectors", &vtkTensorPrincipalInvariants::GetScaleVectors)
    .function("SetScaleVectors", &vtkTensorPrincipalInvariants::SetScaleVectors)
    .function("GetPointDataArraySelection", &vtkTensorPrincipalInvariants::GetPointDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetCellDataArraySelection", &vtkTensorPrincipalInvariants::GetCellDataArraySelection, emscripten::allow_raw_pointers())
    .class_function("GetSigmaValueArrayName", &vtkTensorPrincipalInvariants::GetSigmaValueArrayName)
    .class_function("GetSigmaVectorArrayName", &vtkTensorPrincipalInvariants::GetSigmaVectorArrayName);
}
