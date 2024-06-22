// JavaScript wrapper for vtkMoleculeMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkDomainsChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkMoleculeMapperEmbinding.cxx \
 /home/jmh/github/vtk/Domains/Chemistry/vtkMoleculeMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMolecule.h"
#include "vtkSelection.h"
#include "vtkIdTypeArray.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkWindow.h"
#include "vtkInformation.h"
#include "vtkPeriodicTable.h"
#include "vtkMoleculeMapper.h"

template<> void emscripten::internal::raw_destructor<vtkMoleculeMapper>(vtkMoleculeMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMoleculeMapper_class) {
  emscripten::class_<vtkMoleculeMapper, emscripten::base<vtkMapper>>("vtkMoleculeMapper")
    .smart_ptr<vtkSmartPointer<vtkMoleculeMapper>>("vtkSmartPointer<vtkMoleculeMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMoleculeMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMoleculeMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMoleculeMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMoleculeMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMoleculeMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMoleculeMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMoleculeMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputData", &vtkMoleculeMapper::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkMoleculeMapper::GetInput, emscripten::allow_raw_pointers())
    .function("UseBallAndStickSettings", &vtkMoleculeMapper::UseBallAndStickSettings)
    .function("UseVDWSpheresSettings", &vtkMoleculeMapper::UseVDWSpheresSettings)
    .function("UseLiquoriceStickSettings", &vtkMoleculeMapper::UseLiquoriceStickSettings)
    .function("UseFastSettings", &vtkMoleculeMapper::UseFastSettings)
    .function("GetRenderAtoms", &vtkMoleculeMapper::GetRenderAtoms)
    .function("SetRenderAtoms", &vtkMoleculeMapper::SetRenderAtoms)
    .function("RenderAtomsOn", &vtkMoleculeMapper::RenderAtomsOn)
    .function("RenderAtomsOff", &vtkMoleculeMapper::RenderAtomsOff)
    .function("GetRenderBonds", &vtkMoleculeMapper::GetRenderBonds)
    .function("SetRenderBonds", &vtkMoleculeMapper::SetRenderBonds)
    .function("RenderBondsOn", &vtkMoleculeMapper::RenderBondsOn)
    .function("RenderBondsOff", &vtkMoleculeMapper::RenderBondsOff)
    .function("GetRenderLattice", &vtkMoleculeMapper::GetRenderLattice)
    .function("SetRenderLattice", &vtkMoleculeMapper::SetRenderLattice)
    .function("RenderLatticeOn", &vtkMoleculeMapper::RenderLatticeOn)
    .function("RenderLatticeOff", &vtkMoleculeMapper::RenderLatticeOff)
    .function("GetAtomicRadiusType", &vtkMoleculeMapper::GetAtomicRadiusType)
    .function("SetAtomicRadiusType", &vtkMoleculeMapper::SetAtomicRadiusType)
    .function("GetAtomicRadiusTypeAsString", emscripten::optional_override([](vtkMoleculeMapper& self) -> std::string {  return self.GetAtomicRadiusTypeAsString();}))
    .function("SetAtomicRadiusTypeToCovalentRadius", &vtkMoleculeMapper::SetAtomicRadiusTypeToCovalentRadius)
    .function("SetAtomicRadiusTypeToVDWRadius", &vtkMoleculeMapper::SetAtomicRadiusTypeToVDWRadius)
    .function("SetAtomicRadiusTypeToUnitRadius", &vtkMoleculeMapper::SetAtomicRadiusTypeToUnitRadius)
    .function("SetAtomicRadiusTypeToCustomArrayRadius", &vtkMoleculeMapper::SetAtomicRadiusTypeToCustomArrayRadius)
    .function("GetAtomicRadiusScaleFactor", &vtkMoleculeMapper::GetAtomicRadiusScaleFactor)
    .function("SetAtomicRadiusScaleFactor", &vtkMoleculeMapper::SetAtomicRadiusScaleFactor)
    .function("GetUseMultiCylindersForBonds", &vtkMoleculeMapper::GetUseMultiCylindersForBonds)
    .function("SetUseMultiCylindersForBonds", &vtkMoleculeMapper::SetUseMultiCylindersForBonds)
    .function("UseMultiCylindersForBondsOn", &vtkMoleculeMapper::UseMultiCylindersForBondsOn)
    .function("UseMultiCylindersForBondsOff", &vtkMoleculeMapper::UseMultiCylindersForBondsOff)
    .function("GetBondColorMode", &vtkMoleculeMapper::GetBondColorMode)
    .function("SetBondColorMode", &vtkMoleculeMapper::SetBondColorMode)
    .function("GetBondColorModeMinValue", &vtkMoleculeMapper::GetBondColorModeMinValue)
    .function("GetBondColorModeMaxValue", &vtkMoleculeMapper::GetBondColorModeMaxValue)
    .function("SetBondColorModeToSingleColor", &vtkMoleculeMapper::SetBondColorModeToSingleColor)
    .function("SetBondColorModeToDiscreteByAtom", &vtkMoleculeMapper::SetBondColorModeToDiscreteByAtom)
    .function("GetBondColorModeAsString", emscripten::optional_override([](vtkMoleculeMapper& self) -> std::string {  return self.GetBondColorModeAsString();}))
    .function("GetAtomColorMode", &vtkMoleculeMapper::GetAtomColorMode)
    .function("SetAtomColorMode", &vtkMoleculeMapper::SetAtomColorMode)
    .function("GetAtomColorModeMinValue", &vtkMoleculeMapper::GetAtomColorModeMinValue)
    .function("GetAtomColorModeMaxValue", &vtkMoleculeMapper::GetAtomColorModeMaxValue)
    .function("SetAtomColor", emscripten::select_overload<void(vtkMoleculeMapper&, unsigned char, unsigned char, unsigned char)>([](vtkMoleculeMapper& self, unsigned char arg_0, unsigned char arg_1, unsigned char arg_2) -> void { return self.SetAtomColor( arg_0, arg_1, arg_2); }))
    .function("SetBondColor", emscripten::select_overload<void(vtkMoleculeMapper&, unsigned char, unsigned char, unsigned char)>([](vtkMoleculeMapper& self, unsigned char arg_0, unsigned char arg_1, unsigned char arg_2) -> void { return self.SetBondColor( arg_0, arg_1, arg_2); }))
    .function("GetBondRadius", &vtkMoleculeMapper::GetBondRadius)
    .function("SetBondRadius", &vtkMoleculeMapper::SetBondRadius)
    .function("SetLatticeColor", emscripten::select_overload<void(vtkMoleculeMapper&, unsigned char, unsigned char, unsigned char)>([](vtkMoleculeMapper& self, unsigned char arg_0, unsigned char arg_1, unsigned char arg_2) -> void { return self.SetLatticeColor( arg_0, arg_1, arg_2); }))
    .function("GetSelectedAtomsAndBonds", &vtkMoleculeMapper::GetSelectedAtomsAndBonds, emscripten::allow_raw_pointers())
    .function("GetSelectedAtoms", &vtkMoleculeMapper::GetSelectedAtoms, emscripten::allow_raw_pointers())
    .function("GetSelectedBonds", &vtkMoleculeMapper::GetSelectedBonds, emscripten::allow_raw_pointers())
    .function("Render", &vtkMoleculeMapper::Render, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkMoleculeMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("FillInputPortInformation", &vtkMoleculeMapper::FillInputPortInformation, emscripten::allow_raw_pointers())
    .function("GetSupportsSelection", &vtkMoleculeMapper::GetSupportsSelection)
    .function("GetAtomicRadiusArrayName", emscripten::optional_override([](vtkMoleculeMapper& self) -> std::string {  return self.GetAtomicRadiusArrayName();}))
    .function("SetAtomicRadiusArrayName", emscripten::optional_override([](vtkMoleculeMapper& self, const std::string & arg_0) -> void {  return self.SetAtomicRadiusArrayName( arg_0.c_str());}))
    .function("SetMapScalars", &vtkMoleculeMapper::SetMapScalars)
    .function("GetPeriodicTable", &vtkMoleculeMapper::GetPeriodicTable, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkDomainsChemistry_vtkMoleculeMapper_0_2_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "vtkMoleculeMapper_CovalentRadius", vtkMoleculeMapper::CovalentRadius },
      { "vtkMoleculeMapper_VDWRadius", vtkMoleculeMapper::VDWRadius },
      { "vtkMoleculeMapper_UnitRadius", vtkMoleculeMapper::UnitRadius },
      { "vtkMoleculeMapper_CustomArrayRadius", vtkMoleculeMapper::CustomArrayRadius },
      { "vtkMoleculeMapper_SingleColor", vtkMoleculeMapper::SingleColor },
      { "vtkMoleculeMapper_DiscreteByAtom", vtkMoleculeMapper::DiscreteByAtom },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
