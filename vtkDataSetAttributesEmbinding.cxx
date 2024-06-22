// JavaScript wrapper for vtkDataSetAttributes with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkDataSetAttributesEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkDataSetAttributes.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFieldData.h"
#include "vtkDataArray.h"
#include "vtkAbstractArray.h"
#include "vtkIdList.h"
#include "vtkDataSetAttributesFieldList.h"
#include "vtkDataSetAttributes.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkDataSetAttributes_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkDataSetAttributes>(vtkDataSetAttributes * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataSetAttributes_class) {
  using AttributeTypes=vtkDataSetAttributes::AttributeTypes;
  using AttributeLimitTypes=vtkDataSetAttributes::AttributeLimitTypes;
  using CellGhostTypes=vtkDataSetAttributes::CellGhostTypes;
  using PointGhostTypes=vtkDataSetAttributes::PointGhostTypes;
  using AttributeCopyOperations=vtkDataSetAttributes::AttributeCopyOperations;
  emscripten::class_<vtkDataSetAttributes, emscripten::base<vtkFieldData>>("vtkDataSetAttributes")
    .smart_ptr<vtkSmartPointer<vtkDataSetAttributes>>("vtkSmartPointer<vtkDataSetAttributes>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDataSetAttributes>)
    .class_function("ExtendedNew", &vtkDataSetAttributes::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetAttributes::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataSetAttributes& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataSetAttributes::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataSetAttributes::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetAttributes::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataSetAttributes& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkDataSetAttributes::Initialize)
    .function("Update", &vtkDataSetAttributes::Update)
    .function("DeepCopy", &vtkDataSetAttributes::DeepCopy, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkDataSetAttributes::ShallowCopy, emscripten::allow_raw_pointers())
    .class_function("GhostArrayName", emscripten::optional_override([]() -> std::string {  return vtkDataSetAttributes::GhostArrayName();}))
    .function("SetScalars", &vtkDataSetAttributes::SetScalars, emscripten::allow_raw_pointers())
    .function("SetActiveScalars", emscripten::optional_override([](vtkDataSetAttributes& self, const std::string & arg_0) -> int {  return self.SetActiveScalars( arg_0.c_str());}))
    .function("GetScalars", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&)>([](vtkDataSetAttributes& self) -> vtkDataArray* { return self.GetScalars(); }), emscripten::allow_raw_pointers())
    .function("GetScalars", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&, const std::string &)>([](vtkDataSetAttributes& self, const std::string & arg_0) -> vtkDataArray* { return self.GetScalars( arg_0.c_str()); }), emscripten::allow_raw_pointers())
    .function("SetVectors", &vtkDataSetAttributes::SetVectors, emscripten::allow_raw_pointers())
    .function("SetActiveVectors", emscripten::optional_override([](vtkDataSetAttributes& self, const std::string & arg_0) -> int {  return self.SetActiveVectors( arg_0.c_str());}))
    .function("GetVectors", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&)>([](vtkDataSetAttributes& self) -> vtkDataArray* { return self.GetVectors(); }), emscripten::allow_raw_pointers())
    .function("GetVectors", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&, const std::string &)>([](vtkDataSetAttributes& self, const std::string & arg_0) -> vtkDataArray* { return self.GetVectors( arg_0.c_str()); }), emscripten::allow_raw_pointers())
    .function("SetNormals", &vtkDataSetAttributes::SetNormals, emscripten::allow_raw_pointers())
    .function("SetActiveNormals", emscripten::optional_override([](vtkDataSetAttributes& self, const std::string & arg_0) -> int {  return self.SetActiveNormals( arg_0.c_str());}))
    .function("GetNormals", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&)>([](vtkDataSetAttributes& self) -> vtkDataArray* { return self.GetNormals(); }), emscripten::allow_raw_pointers())
    .function("GetNormals", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&, const std::string &)>([](vtkDataSetAttributes& self, const std::string & arg_0) -> vtkDataArray* { return self.GetNormals( arg_0.c_str()); }), emscripten::allow_raw_pointers())
    .function("SetTangents", &vtkDataSetAttributes::SetTangents, emscripten::allow_raw_pointers())
    .function("SetActiveTangents", emscripten::optional_override([](vtkDataSetAttributes& self, const std::string & arg_0) -> int {  return self.SetActiveTangents( arg_0.c_str());}))
    .function("GetTangents", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&)>([](vtkDataSetAttributes& self) -> vtkDataArray* { return self.GetTangents(); }), emscripten::allow_raw_pointers())
    .function("GetTangents", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&, const std::string &)>([](vtkDataSetAttributes& self, const std::string & arg_0) -> vtkDataArray* { return self.GetTangents( arg_0.c_str()); }), emscripten::allow_raw_pointers())
    .function("SetTCoords", &vtkDataSetAttributes::SetTCoords, emscripten::allow_raw_pointers())
    .function("SetActiveTCoords", emscripten::optional_override([](vtkDataSetAttributes& self, const std::string & arg_0) -> int {  return self.SetActiveTCoords( arg_0.c_str());}))
    .function("GetTCoords", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&)>([](vtkDataSetAttributes& self) -> vtkDataArray* { return self.GetTCoords(); }), emscripten::allow_raw_pointers())
    .function("GetTCoords", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&, const std::string &)>([](vtkDataSetAttributes& self, const std::string & arg_0) -> vtkDataArray* { return self.GetTCoords( arg_0.c_str()); }), emscripten::allow_raw_pointers())
    .function("SetTensors", &vtkDataSetAttributes::SetTensors, emscripten::allow_raw_pointers())
    .function("SetActiveTensors", emscripten::optional_override([](vtkDataSetAttributes& self, const std::string & arg_0) -> int {  return self.SetActiveTensors( arg_0.c_str());}))
    .function("GetTensors", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&)>([](vtkDataSetAttributes& self) -> vtkDataArray* { return self.GetTensors(); }), emscripten::allow_raw_pointers())
    .function("GetTensors", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&, const std::string &)>([](vtkDataSetAttributes& self, const std::string & arg_0) -> vtkDataArray* { return self.GetTensors( arg_0.c_str()); }), emscripten::allow_raw_pointers())
    .function("SetGlobalIds", &vtkDataSetAttributes::SetGlobalIds, emscripten::allow_raw_pointers())
    .function("SetActiveGlobalIds", emscripten::optional_override([](vtkDataSetAttributes& self, const std::string & arg_0) -> int {  return self.SetActiveGlobalIds( arg_0.c_str());}))
    .function("GetGlobalIds", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&)>([](vtkDataSetAttributes& self) -> vtkDataArray* { return self.GetGlobalIds(); }), emscripten::allow_raw_pointers())
    .function("GetGlobalIds", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&, const std::string &)>([](vtkDataSetAttributes& self, const std::string & arg_0) -> vtkDataArray* { return self.GetGlobalIds( arg_0.c_str()); }), emscripten::allow_raw_pointers())
    .function("SetPedigreeIds", &vtkDataSetAttributes::SetPedigreeIds, emscripten::allow_raw_pointers())
    .function("SetActivePedigreeIds", emscripten::optional_override([](vtkDataSetAttributes& self, const std::string & arg_0) -> int {  return self.SetActivePedigreeIds( arg_0.c_str());}))
    .function("GetPedigreeIds", emscripten::select_overload<vtkAbstractArray*(vtkDataSetAttributes&)>([](vtkDataSetAttributes& self) -> vtkAbstractArray* { return self.GetPedigreeIds(); }), emscripten::allow_raw_pointers())
    .function("GetPedigreeIds", emscripten::select_overload<vtkAbstractArray*(vtkDataSetAttributes&, const std::string &)>([](vtkDataSetAttributes& self, const std::string & arg_0) -> vtkAbstractArray* { return self.GetPedigreeIds( arg_0.c_str()); }), emscripten::allow_raw_pointers())
    .function("SetRationalWeights", &vtkDataSetAttributes::SetRationalWeights, emscripten::allow_raw_pointers())
    .function("SetActiveRationalWeights", emscripten::optional_override([](vtkDataSetAttributes& self, const std::string & arg_0) -> int {  return self.SetActiveRationalWeights( arg_0.c_str());}))
    .function("GetRationalWeights", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&)>([](vtkDataSetAttributes& self) -> vtkDataArray* { return self.GetRationalWeights(); }), emscripten::allow_raw_pointers())
    .function("GetRationalWeights", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&, const std::string &)>([](vtkDataSetAttributes& self, const std::string & arg_0) -> vtkDataArray* { return self.GetRationalWeights( arg_0.c_str()); }), emscripten::allow_raw_pointers())
    .function("SetHigherOrderDegrees", &vtkDataSetAttributes::SetHigherOrderDegrees, emscripten::allow_raw_pointers())
    .function("SetActiveHigherOrderDegrees", emscripten::optional_override([](vtkDataSetAttributes& self, const std::string & arg_0) -> int {  return self.SetActiveHigherOrderDegrees( arg_0.c_str());}))
    .function("GetHigherOrderDegrees", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&)>([](vtkDataSetAttributes& self) -> vtkDataArray* { return self.GetHigherOrderDegrees(); }), emscripten::allow_raw_pointers())
    .function("GetHigherOrderDegrees", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&, const std::string &)>([](vtkDataSetAttributes& self, const std::string & arg_0) -> vtkDataArray* { return self.GetHigherOrderDegrees( arg_0.c_str()); }), emscripten::allow_raw_pointers())
    .function("SetProcessIds", &vtkDataSetAttributes::SetProcessIds, emscripten::allow_raw_pointers())
    .function("SetActiveProcessIds", emscripten::optional_override([](vtkDataSetAttributes& self, const std::string & arg_0) -> int {  return self.SetActiveProcessIds( arg_0.c_str());}))
    .function("GetProcessIds", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&)>([](vtkDataSetAttributes& self) -> vtkDataArray* { return self.GetProcessIds(); }), emscripten::allow_raw_pointers())
    .function("GetProcessIds", emscripten::select_overload<vtkDataArray*(vtkDataSetAttributes&, const std::string &)>([](vtkDataSetAttributes& self, const std::string & arg_0) -> vtkDataArray* { return self.GetProcessIds( arg_0.c_str()); }), emscripten::allow_raw_pointers())
    .function("SetActiveAttribute", emscripten::select_overload<int(vtkDataSetAttributes&, const std::string &, int)>([](vtkDataSetAttributes& self, const std::string & arg_0, int arg_1) -> int { return self.SetActiveAttribute( arg_0.c_str(), arg_1); }))
    .function("SetActiveAttribute", emscripten::select_overload<int(vtkDataSetAttributes&, int, int)>([](vtkDataSetAttributes& self, int arg_0, int arg_1) -> int { return self.SetActiveAttribute( arg_0, arg_1); }))
    .function("GetAttributeIndices", emscripten::optional_override([](vtkDataSetAttributes& self, std::uintptr_t arg_0) -> void {  return self.GetAttributeIndices(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .function("IsArrayAnAttribute", &vtkDataSetAttributes::IsArrayAnAttribute)
    .function("SetAttribute", &vtkDataSetAttributes::SetAttribute, emscripten::allow_raw_pointers())
    .function("GetAttribute", &vtkDataSetAttributes::GetAttribute, emscripten::allow_raw_pointers())
    .function("GetAbstractAttribute", &vtkDataSetAttributes::GetAbstractAttribute, emscripten::allow_raw_pointers())
    .function("RemoveArray", emscripten::select_overload<void(vtkDataSetAttributes&, int)>([](vtkDataSetAttributes& self, int arg_0) -> void { return self.RemoveArray( arg_0); }))
    .function("RemoveArray", emscripten::select_overload<void(vtkDataSetAttributes&, const std::string &)>([](vtkDataSetAttributes& self, const std::string & arg_0) -> void { return self.RemoveArray( arg_0.c_str()); }))
    .class_function("GetAttributeTypeAsString", emscripten::optional_override([]( int arg_0) -> std::string {  return vtkDataSetAttributes::GetAttributeTypeAsString( arg_0);}))
    .class_function("GetLongAttributeTypeAsString", emscripten::optional_override([]( int arg_0) -> std::string {  return vtkDataSetAttributes::GetLongAttributeTypeAsString( arg_0);}))
    .function("SetCopyAttribute", &vtkDataSetAttributes::SetCopyAttribute)
    .function("GetCopyAttribute", &vtkDataSetAttributes::GetCopyAttribute)
    .function("SetCopyScalars", &vtkDataSetAttributes::SetCopyScalars)
    .function("GetCopyScalars", &vtkDataSetAttributes::GetCopyScalars)
    .function("CopyScalarsOn", &vtkDataSetAttributes::CopyScalarsOn)
    .function("CopyScalarsOff", &vtkDataSetAttributes::CopyScalarsOff)
    .function("SetCopyVectors", &vtkDataSetAttributes::SetCopyVectors)
    .function("GetCopyVectors", &vtkDataSetAttributes::GetCopyVectors)
    .function("CopyVectorsOn", &vtkDataSetAttributes::CopyVectorsOn)
    .function("CopyVectorsOff", &vtkDataSetAttributes::CopyVectorsOff)
    .function("SetCopyNormals", &vtkDataSetAttributes::SetCopyNormals)
    .function("GetCopyNormals", &vtkDataSetAttributes::GetCopyNormals)
    .function("CopyNormalsOn", &vtkDataSetAttributes::CopyNormalsOn)
    .function("CopyNormalsOff", &vtkDataSetAttributes::CopyNormalsOff)
    .function("SetCopyTangents", &vtkDataSetAttributes::SetCopyTangents)
    .function("GetCopyTangents", &vtkDataSetAttributes::GetCopyTangents)
    .function("CopyTangentsOn", &vtkDataSetAttributes::CopyTangentsOn)
    .function("CopyTangentsOff", &vtkDataSetAttributes::CopyTangentsOff)
    .function("SetCopyTCoords", &vtkDataSetAttributes::SetCopyTCoords)
    .function("GetCopyTCoords", &vtkDataSetAttributes::GetCopyTCoords)
    .function("CopyTCoordsOn", &vtkDataSetAttributes::CopyTCoordsOn)
    .function("CopyTCoordsOff", &vtkDataSetAttributes::CopyTCoordsOff)
    .function("SetCopyTensors", &vtkDataSetAttributes::SetCopyTensors)
    .function("GetCopyTensors", &vtkDataSetAttributes::GetCopyTensors)
    .function("CopyTensorsOn", &vtkDataSetAttributes::CopyTensorsOn)
    .function("CopyTensorsOff", &vtkDataSetAttributes::CopyTensorsOff)
    .function("SetCopyGlobalIds", &vtkDataSetAttributes::SetCopyGlobalIds)
    .function("GetCopyGlobalIds", &vtkDataSetAttributes::GetCopyGlobalIds)
    .function("CopyGlobalIdsOn", &vtkDataSetAttributes::CopyGlobalIdsOn)
    .function("CopyGlobalIdsOff", &vtkDataSetAttributes::CopyGlobalIdsOff)
    .function("SetCopyPedigreeIds", &vtkDataSetAttributes::SetCopyPedigreeIds)
    .function("GetCopyPedigreeIds", &vtkDataSetAttributes::GetCopyPedigreeIds)
    .function("CopyPedigreeIdsOn", &vtkDataSetAttributes::CopyPedigreeIdsOn)
    .function("CopyPedigreeIdsOff", &vtkDataSetAttributes::CopyPedigreeIdsOff)
    .function("SetCopyRationalWeights", &vtkDataSetAttributes::SetCopyRationalWeights)
    .function("GetCopyRationalWeights", &vtkDataSetAttributes::GetCopyRationalWeights)
    .function("CopyRationalWeightsOn", &vtkDataSetAttributes::CopyRationalWeightsOn)
    .function("CopyRationalWeightsOff", &vtkDataSetAttributes::CopyRationalWeightsOff)
    .function("SetCopyHigherOrderDegrees", &vtkDataSetAttributes::SetCopyHigherOrderDegrees)
    .function("GetCopyHigherOrderDegrees", &vtkDataSetAttributes::GetCopyHigherOrderDegrees)
    .function("CopyHigherOrderDegreesOn", &vtkDataSetAttributes::CopyHigherOrderDegreesOn)
    .function("CopyHigherOrderDegreesOff", &vtkDataSetAttributes::CopyHigherOrderDegreesOff)
    .function("SetCopyProcessIds", &vtkDataSetAttributes::SetCopyProcessIds)
    .function("GetCopyProcessIds", &vtkDataSetAttributes::GetCopyProcessIds)
    .function("CopyProcessIdsOn", &vtkDataSetAttributes::CopyProcessIdsOn)
    .function("CopyProcessIdsOff", &vtkDataSetAttributes::CopyProcessIdsOff)
    .function("CopyAllOn", &vtkDataSetAttributes::CopyAllOn)
    .function("CopyAllOff", &vtkDataSetAttributes::CopyAllOff)
    .function("PassData", &vtkDataSetAttributes::PassData, emscripten::allow_raw_pointers())
    .function("CopyAllocate", emscripten::select_overload<void(vtkDataSetAttributes&, vtkDataSetAttributes*, int, int)>([](vtkDataSetAttributes& self, vtkDataSetAttributes* arg_0, int arg_1, int arg_2) -> void { return self.CopyAllocate( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("CopyAllocate", emscripten::select_overload<void(vtkDataSetAttributes&, vtkDataSetAttributes*, int, int, int)>([](vtkDataSetAttributes& self, vtkDataSetAttributes* arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.CopyAllocate( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("SetupForCopy", &vtkDataSetAttributes::SetupForCopy, emscripten::allow_raw_pointers())
    .function("CopyStructuredData", emscripten::optional_override([](vtkDataSetAttributes& self, vtkDataSetAttributes* arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2, bool arg_3) -> void {  return self.CopyStructuredData( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)),reinterpret_cast<int*>(arg_2 * sizeof(int)), arg_3);}), emscripten::allow_raw_pointers())
    .function("CopyData", emscripten::select_overload<void(vtkDataSetAttributes&, vtkDataSetAttributes*, int, int)>([](vtkDataSetAttributes& self, vtkDataSetAttributes* arg_0, int arg_1, int arg_2) -> void { return self.CopyData( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("CopyData", emscripten::select_overload<void(vtkDataSetAttributes&, vtkDataSetAttributes*, vtkIdList*, vtkIdList*)>([](vtkDataSetAttributes& self, vtkDataSetAttributes* arg_0, vtkIdList* arg_1, vtkIdList* arg_2) -> void { return self.CopyData( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("CopyData", emscripten::select_overload<void(vtkDataSetAttributes&, vtkDataSetAttributes*, vtkIdList*, int)>([](vtkDataSetAttributes& self, vtkDataSetAttributes* arg_0, vtkIdList* arg_1, int arg_2) -> void { return self.CopyData( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("CopyData", emscripten::select_overload<void(vtkDataSetAttributes&, vtkDataSetAttributes*, int, int, int)>([](vtkDataSetAttributes& self, vtkDataSetAttributes* arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.CopyData( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("CopyTuple", &vtkDataSetAttributes::CopyTuple, emscripten::allow_raw_pointers())
    .function("CopyTuples", emscripten::select_overload<void(vtkDataSetAttributes&, vtkAbstractArray*, vtkAbstractArray*, vtkIdList*, vtkIdList*)>([](vtkDataSetAttributes& self, vtkAbstractArray* arg_0, vtkAbstractArray* arg_1, vtkIdList* arg_2, vtkIdList* arg_3) -> void { return self.CopyTuples( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("CopyTuples", emscripten::select_overload<void(vtkDataSetAttributes&, vtkAbstractArray*, vtkAbstractArray*, int, int, int)>([](vtkDataSetAttributes& self, vtkAbstractArray* arg_0, vtkAbstractArray* arg_1, int arg_2, int arg_3, int arg_4) -> void { return self.CopyTuples( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("InterpolateAllocate", emscripten::select_overload<void(vtkDataSetAttributes&, vtkDataSetAttributes*, int, int)>([](vtkDataSetAttributes& self, vtkDataSetAttributes* arg_0, int arg_1, int arg_2) -> void { return self.InterpolateAllocate( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("InterpolateAllocate", emscripten::select_overload<void(vtkDataSetAttributes&, vtkDataSetAttributes*, int, int, int)>([](vtkDataSetAttributes& self, vtkDataSetAttributes* arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.InterpolateAllocate( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("InterpolatePoint", emscripten::select_overload<void(vtkDataSetAttributes&, vtkDataSetAttributes*, int, vtkIdList*, std::uintptr_t)>([](vtkDataSetAttributes& self, vtkDataSetAttributes* arg_0, int arg_1, vtkIdList* arg_2, std::uintptr_t arg_3) -> void { return self.InterpolatePoint( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double))); }), emscripten::allow_raw_pointers())
    .function("InterpolateEdge", &vtkDataSetAttributes::InterpolateEdge, emscripten::allow_raw_pointers())
    .function("InterpolateTime", &vtkDataSetAttributes::InterpolateTime, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkDataSetAttributes_0_2_constants) {
    typedef vtkDataSetAttributes::AttributeTypes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[13] = {
      { "vtkDataSetAttributes_AttributeTypes_SCALARS", vtkDataSetAttributes::SCALARS },
      { "vtkDataSetAttributes_AttributeTypes_VECTORS", vtkDataSetAttributes::VECTORS },
      { "vtkDataSetAttributes_AttributeTypes_NORMALS", vtkDataSetAttributes::NORMALS },
      { "vtkDataSetAttributes_AttributeTypes_TCOORDS", vtkDataSetAttributes::TCOORDS },
      { "vtkDataSetAttributes_AttributeTypes_TENSORS", vtkDataSetAttributes::TENSORS },
      { "vtkDataSetAttributes_AttributeTypes_GLOBALIDS", vtkDataSetAttributes::GLOBALIDS },
      { "vtkDataSetAttributes_AttributeTypes_PEDIGREEIDS", vtkDataSetAttributes::PEDIGREEIDS },
      { "vtkDataSetAttributes_AttributeTypes_EDGEFLAG", vtkDataSetAttributes::EDGEFLAG },
      { "vtkDataSetAttributes_AttributeTypes_TANGENTS", vtkDataSetAttributes::TANGENTS },
      { "vtkDataSetAttributes_AttributeTypes_RATIONALWEIGHTS", vtkDataSetAttributes::RATIONALWEIGHTS },
      { "vtkDataSetAttributes_AttributeTypes_HIGHERORDERDEGREES", vtkDataSetAttributes::HIGHERORDERDEGREES },
      { "vtkDataSetAttributes_AttributeTypes_PROCESSIDS", vtkDataSetAttributes::PROCESSIDS },
      { "vtkDataSetAttributes_AttributeTypes_NUM_ATTRIBUTES", vtkDataSetAttributes::NUM_ATTRIBUTES },
  };
  for (int c = 0; c < 13; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkDataSetAttributes_1_2_constants) {
    typedef vtkDataSetAttributes::AttributeLimitTypes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkDataSetAttributes_AttributeLimitTypes_MAX", vtkDataSetAttributes::MAX },
      { "vtkDataSetAttributes_AttributeLimitTypes_EXACT", vtkDataSetAttributes::EXACT },
      { "vtkDataSetAttributes_AttributeLimitTypes_NOLIMIT", vtkDataSetAttributes::NOLIMIT },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkDataSetAttributes_2_2_constants) {
    typedef vtkDataSetAttributes::CellGhostTypes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[6] = {
      { "vtkDataSetAttributes_CellGhostTypes_DUPLICATECELL", vtkDataSetAttributes::DUPLICATECELL },
      { "vtkDataSetAttributes_CellGhostTypes_HIGHCONNECTIVITYCELL", vtkDataSetAttributes::HIGHCONNECTIVITYCELL },
      { "vtkDataSetAttributes_CellGhostTypes_LOWCONNECTIVITYCELL", vtkDataSetAttributes::LOWCONNECTIVITYCELL },
      { "vtkDataSetAttributes_CellGhostTypes_REFINEDCELL", vtkDataSetAttributes::REFINEDCELL },
      { "vtkDataSetAttributes_CellGhostTypes_EXTERIORCELL", vtkDataSetAttributes::EXTERIORCELL },
      { "vtkDataSetAttributes_CellGhostTypes_HIDDENCELL", vtkDataSetAttributes::HIDDENCELL },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkDataSetAttributes_3_2_constants) {
    typedef vtkDataSetAttributes::PointGhostTypes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkDataSetAttributes_PointGhostTypes_DUPLICATEPOINT", vtkDataSetAttributes::DUPLICATEPOINT },
      { "vtkDataSetAttributes_PointGhostTypes_HIDDENPOINT", vtkDataSetAttributes::HIDDENPOINT },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkDataSetAttributes_4_2_constants) {
    typedef vtkDataSetAttributes::AttributeCopyOperations cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkDataSetAttributes_AttributeCopyOperations_COPYTUPLE", vtkDataSetAttributes::COPYTUPLE },
      { "vtkDataSetAttributes_AttributeCopyOperations_INTERPOLATE", vtkDataSetAttributes::INTERPOLATE },
      { "vtkDataSetAttributes_AttributeCopyOperations_PASSDATA", vtkDataSetAttributes::PASSDATA },
      { "vtkDataSetAttributes_AttributeCopyOperations_ALLCOPY", vtkDataSetAttributes::ALLCOPY },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
