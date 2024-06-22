// JavaScript wrapper for vtkYieldCriteria with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTensor.js/vtkFiltersTensor.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTensor.js/vtkYieldCriteriaEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Tensor/vtkYieldCriteria.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArraySelection.h"
#include "vtkYieldCriteria.h"

EMSCRIPTEN_BINDINGS(vtkFiltersTensor_vtkYieldCriteria_class_enums) {
  emscripten::enum_<vtkYieldCriteria::Criterion>("vtkYieldCriteria_Criterion")
    .value("PrincipalStress", vtkYieldCriteria::Criterion::PrincipalStress)
    .value("Tresca", vtkYieldCriteria::Criterion::Tresca)
    .value("VonMises", vtkYieldCriteria::Criterion::VonMises);
}
template<> void emscripten::internal::raw_destructor<vtkYieldCriteria>(vtkYieldCriteria * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkYieldCriteria_class) {
  using Criterion=vtkYieldCriteria::Criterion;
  emscripten::class_<vtkYieldCriteria, emscripten::base<vtkDataSetAlgorithm>>("vtkYieldCriteria")
    .smart_ptr<vtkSmartPointer<vtkYieldCriteria>>("vtkSmartPointer<vtkYieldCriteria>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkYieldCriteria>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkYieldCriteria::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkYieldCriteria& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkYieldCriteria::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkYieldCriteria::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkYieldCriteria::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkYieldCriteria& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetScaleVectors", &vtkYieldCriteria::GetScaleVectors)
    .function("SetScaleVectors", &vtkYieldCriteria::SetScaleVectors)
    .function("GetPointDataArraySelection", &vtkYieldCriteria::GetPointDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetCellDataArraySelection", &vtkYieldCriteria::GetCellDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetCriteriaSelection", &vtkYieldCriteria::GetCriteriaSelection, emscripten::allow_raw_pointers());
}
