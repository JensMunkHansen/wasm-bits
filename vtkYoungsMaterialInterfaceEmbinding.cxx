// JavaScript wrapper for vtkYoungsMaterialInterface with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkYoungsMaterialInterfaceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkYoungsMaterialInterface.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkYoungsMaterialInterface.h"

template<> void emscripten::internal::raw_destructor<vtkYoungsMaterialInterface>(vtkYoungsMaterialInterface * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkYoungsMaterialInterface_class) {
  emscripten::class_<vtkYoungsMaterialInterface, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkYoungsMaterialInterface")
    .smart_ptr<vtkSmartPointer<vtkYoungsMaterialInterface>>("vtkSmartPointer<vtkYoungsMaterialInterface>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkYoungsMaterialInterface>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkYoungsMaterialInterface::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkYoungsMaterialInterface& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkYoungsMaterialInterface::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkYoungsMaterialInterface::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkYoungsMaterialInterface::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkYoungsMaterialInterface& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInverseNormal", &vtkYoungsMaterialInterface::SetInverseNormal)
    .function("GetInverseNormal", &vtkYoungsMaterialInterface::GetInverseNormal)
    .function("InverseNormalOn", &vtkYoungsMaterialInterface::InverseNormalOn)
    .function("InverseNormalOff", &vtkYoungsMaterialInterface::InverseNormalOff)
    .function("SetReverseMaterialOrder", &vtkYoungsMaterialInterface::SetReverseMaterialOrder)
    .function("GetReverseMaterialOrder", &vtkYoungsMaterialInterface::GetReverseMaterialOrder)
    .function("ReverseMaterialOrderOn", &vtkYoungsMaterialInterface::ReverseMaterialOrderOn)
    .function("ReverseMaterialOrderOff", &vtkYoungsMaterialInterface::ReverseMaterialOrderOff)
    .function("SetOnionPeel", &vtkYoungsMaterialInterface::SetOnionPeel)
    .function("GetOnionPeel", &vtkYoungsMaterialInterface::GetOnionPeel)
    .function("OnionPeelOn", &vtkYoungsMaterialInterface::OnionPeelOn)
    .function("OnionPeelOff", &vtkYoungsMaterialInterface::OnionPeelOff)
    .function("SetAxisSymetric", &vtkYoungsMaterialInterface::SetAxisSymetric)
    .function("GetAxisSymetric", &vtkYoungsMaterialInterface::GetAxisSymetric)
    .function("AxisSymetricOn", &vtkYoungsMaterialInterface::AxisSymetricOn)
    .function("AxisSymetricOff", &vtkYoungsMaterialInterface::AxisSymetricOff)
    .function("SetUseFractionAsDistance", &vtkYoungsMaterialInterface::SetUseFractionAsDistance)
    .function("GetUseFractionAsDistance", &vtkYoungsMaterialInterface::GetUseFractionAsDistance)
    .function("UseFractionAsDistanceOn", &vtkYoungsMaterialInterface::UseFractionAsDistanceOn)
    .function("UseFractionAsDistanceOff", &vtkYoungsMaterialInterface::UseFractionAsDistanceOff)
    .function("SetFillMaterial", &vtkYoungsMaterialInterface::SetFillMaterial)
    .function("GetFillMaterial", &vtkYoungsMaterialInterface::GetFillMaterial)
    .function("FillMaterialOn", &vtkYoungsMaterialInterface::FillMaterialOn)
    .function("FillMaterialOff", &vtkYoungsMaterialInterface::FillMaterialOff)
    .function("SetVolumeFractionRange", emscripten::select_overload<void(vtkYoungsMaterialInterface&, double, double)>([](vtkYoungsMaterialInterface& self, double arg_0, double arg_1) -> void { return self.SetVolumeFractionRange( arg_0, arg_1); }))
    .function("SetNumberOfMaterials", &vtkYoungsMaterialInterface::SetNumberOfMaterials)
    .function("GetNumberOfMaterials", &vtkYoungsMaterialInterface::GetNumberOfMaterials)
    .function("SetUseAllBlocks", &vtkYoungsMaterialInterface::SetUseAllBlocks)
    .function("GetUseAllBlocks", &vtkYoungsMaterialInterface::GetUseAllBlocks)
    .function("UseAllBlocksOn", &vtkYoungsMaterialInterface::UseAllBlocksOn)
    .function("UseAllBlocksOff", &vtkYoungsMaterialInterface::UseAllBlocksOff)
    .function("GetNumberOfDomains", &vtkYoungsMaterialInterface::GetNumberOfDomains)
    .function("SetMaterialArrays", emscripten::select_overload<void(vtkYoungsMaterialInterface&, int, const std::string &, const std::string &, const std::string &, const std::string &, const std::string &)>([](vtkYoungsMaterialInterface& self, int arg_0, const std::string & arg_1, const std::string & arg_2, const std::string & arg_3, const std::string & arg_4, const std::string & arg_5) -> void { return self.SetMaterialArrays( arg_0, arg_1.c_str(), arg_2.c_str(), arg_3.c_str(), arg_4.c_str(), arg_5.c_str()); }))
    .function("SetMaterialArrays", emscripten::select_overload<void(vtkYoungsMaterialInterface&, int, const std::string &, const std::string &, const std::string &)>([](vtkYoungsMaterialInterface& self, int arg_0, const std::string & arg_1, const std::string & arg_2, const std::string & arg_3) -> void { return self.SetMaterialArrays( arg_0, arg_1.c_str(), arg_2.c_str(), arg_3.c_str()); }))
    .function("SetMaterialVolumeFractionArray", emscripten::optional_override([](vtkYoungsMaterialInterface& self, int arg_0, const std::string & arg_1) -> void {  return self.SetMaterialVolumeFractionArray( arg_0, arg_1.c_str());}))
    .function("SetMaterialNormalArray", emscripten::select_overload<void(vtkYoungsMaterialInterface&, int, const std::string &)>([](vtkYoungsMaterialInterface& self, int arg_0, const std::string & arg_1) -> void { return self.SetMaterialNormalArray( arg_0, arg_1.c_str()); }))
    .function("SetMaterialNormalArray", emscripten::select_overload<void(vtkYoungsMaterialInterface&, const std::string &, const std::string &)>([](vtkYoungsMaterialInterface& self, const std::string & arg_0, const std::string & arg_1) -> void { return self.SetMaterialNormalArray( arg_0.c_str(), arg_1.c_str()); }))
    .function("SetMaterialOrderingArray", emscripten::select_overload<void(vtkYoungsMaterialInterface&, int, const std::string &)>([](vtkYoungsMaterialInterface& self, int arg_0, const std::string & arg_1) -> void { return self.SetMaterialOrderingArray( arg_0, arg_1.c_str()); }))
    .function("SetMaterialOrderingArray", emscripten::select_overload<void(vtkYoungsMaterialInterface&, const std::string &, const std::string &)>([](vtkYoungsMaterialInterface& self, const std::string & arg_0, const std::string & arg_1) -> void { return self.SetMaterialOrderingArray( arg_0.c_str(), arg_1.c_str()); }))
    .function("RemoveAllMaterials", &vtkYoungsMaterialInterface::RemoveAllMaterials)
    .function("RemoveAllMaterialBlockMappings", &vtkYoungsMaterialInterface::RemoveAllMaterialBlockMappings)
    .function("AddMaterialBlockMapping", &vtkYoungsMaterialInterface::AddMaterialBlockMapping);
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkYoungsMaterialInterface_0_2_constants) {
  emscripten::constant("MAX_CELL_POINTS", 256);
}
