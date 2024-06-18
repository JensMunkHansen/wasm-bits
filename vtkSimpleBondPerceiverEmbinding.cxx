// JavaScript wrapper for vtkSimpleBondPerceiver with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkDomainsChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkSimpleBondPerceiverEmbinding.cxx \
 /home/jmh/github/vtk/Domains/Chemistry/vtkSimpleBondPerceiver.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSimpleBondPerceiver.h"

template<> void emscripten::internal::raw_destructor<vtkSimpleBondPerceiver>(vtkSimpleBondPerceiver * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSimpleBondPerceiver_class) {
  emscripten::class_<vtkSimpleBondPerceiver, emscripten::base<vtkMoleculeAlgorithm>>("vtkSimpleBondPerceiver")
    .smart_ptr<vtkSmartPointer<vtkSimpleBondPerceiver>>("vtkSmartPointer<vtkSimpleBondPerceiver>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSimpleBondPerceiver>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimpleBondPerceiver::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSimpleBondPerceiver& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSimpleBondPerceiver::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSimpleBondPerceiver::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimpleBondPerceiver::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSimpleBondPerceiver& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTolerance", &vtkSimpleBondPerceiver::SetTolerance)
    .function("GetTolerance", &vtkSimpleBondPerceiver::GetTolerance)
    .function("GetIsToleranceAbsolute", &vtkSimpleBondPerceiver::GetIsToleranceAbsolute)
    .function("SetIsToleranceAbsolute", &vtkSimpleBondPerceiver::SetIsToleranceAbsolute);
}
