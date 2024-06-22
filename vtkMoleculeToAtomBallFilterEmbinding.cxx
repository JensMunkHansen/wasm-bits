// JavaScript wrapper for vtkMoleculeToAtomBallFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkDomainsChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkMoleculeToAtomBallFilterEmbinding.cxx \
 /home/jmh/github/vtk/Domains/Chemistry/vtkMoleculeToAtomBallFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMoleculeToAtomBallFilter.h"

template<> void emscripten::internal::raw_destructor<vtkMoleculeToAtomBallFilter>(vtkMoleculeToAtomBallFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMoleculeToAtomBallFilter_class) {
  emscripten::class_<vtkMoleculeToAtomBallFilter, emscripten::base<vtkMoleculeToPolyDataFilter>>("vtkMoleculeToAtomBallFilter")
    .smart_ptr<vtkSmartPointer<vtkMoleculeToAtomBallFilter>>("vtkSmartPointer<vtkMoleculeToAtomBallFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMoleculeToAtomBallFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMoleculeToAtomBallFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMoleculeToAtomBallFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMoleculeToAtomBallFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMoleculeToAtomBallFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMoleculeToAtomBallFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMoleculeToAtomBallFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetRadiusSource", &vtkMoleculeToAtomBallFilter::GetRadiusSource)
    .function("SetRadiusSource", &vtkMoleculeToAtomBallFilter::SetRadiusSource)
    .function("GetResolution", &vtkMoleculeToAtomBallFilter::GetResolution)
    .function("SetResolution", &vtkMoleculeToAtomBallFilter::SetResolution)
    .function("GetRadiusScale", &vtkMoleculeToAtomBallFilter::GetRadiusScale)
    .function("SetRadiusScale", &vtkMoleculeToAtomBallFilter::SetRadiusScale);
}
EMSCRIPTEN_BINDINGS(vtkDomainsChemistry_vtkMoleculeToAtomBallFilter_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkMoleculeToAtomBallFilter_CovalentRadius", vtkMoleculeToAtomBallFilter::CovalentRadius },
      { "vtkMoleculeToAtomBallFilter_VDWRadius", vtkMoleculeToAtomBallFilter::VDWRadius },
      { "vtkMoleculeToAtomBallFilter_UnitRadius", vtkMoleculeToAtomBallFilter::UnitRadius },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
