// JavaScript wrapper for vtkDataObject with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkDataObjectEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkDataObject.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkFieldData.h"
#include "vtkDataSetAttributes.h"
#include "vtkUnsignedCharArray.h"
#include "vtkAbstractArray.h"
#include "vtkInformationStringKey.h"
#include "vtkInformationDataObjectKey.h"
#include "vtkInformationIntegerKey.h"
#include "vtkInformationIntegerPointerKey.h"
#include "vtkInformationIntegerVectorKey.h"
#include "vtkInformationDoubleKey.h"
#include "vtkInformationInformationVectorKey.h"
#include "vtkInformationDoubleVectorKey.h"
#include "vtkInformationVector.h"
#include "vtkDataObject.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkDataObject_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_PIECES_EXTENT", 0 },
      { "VTK_3D_EXTENT", 1 },
      { "VTK_TIME_EXTENT", 2 },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkDataObject_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkDataObject>(vtkDataObject * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataObject_class) {
  using FieldAssociations=vtkDataObject::FieldAssociations;
  using AttributeTypes=vtkDataObject::AttributeTypes;
  using FieldOperations=vtkDataObject::FieldOperations;
  emscripten::class_<vtkDataObject, emscripten::base<vtkObject>>("vtkDataObject")
    .smart_ptr<vtkSmartPointer<vtkDataObject>>("vtkSmartPointer<vtkDataObject>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDataObject>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObject::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataObject& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataObject::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataObject::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObject::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataObject& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInformation", &vtkDataObject::GetInformation, emscripten::allow_raw_pointers())
    .function("SetInformation", &vtkDataObject::SetInformation, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkDataObject::GetMTime)
    .function("Initialize", &vtkDataObject::Initialize)
    .function("ReleaseData", &vtkDataObject::ReleaseData)
    .function("GetDataReleased", &vtkDataObject::GetDataReleased)
    .class_function("SetGlobalReleaseDataFlag", &vtkDataObject::SetGlobalReleaseDataFlag)
    .function("GlobalReleaseDataFlagOn", &vtkDataObject::GlobalReleaseDataFlagOn)
    .function("GlobalReleaseDataFlagOff", &vtkDataObject::GlobalReleaseDataFlagOff)
    .class_function("GetGlobalReleaseDataFlag", &vtkDataObject::GetGlobalReleaseDataFlag)
    .function("SetFieldData", &vtkDataObject::SetFieldData, emscripten::allow_raw_pointers())
    .function("GetFieldData", &vtkDataObject::GetFieldData, emscripten::allow_raw_pointers())
    .function("GetDataObjectType", &vtkDataObject::GetDataObjectType)
    .function("GetUpdateTime", &vtkDataObject::GetUpdateTime)
    .function("GetActualMemorySize", &vtkDataObject::GetActualMemorySize)
    .function("CopyInformationFromPipeline", &vtkDataObject::CopyInformationFromPipeline, emscripten::allow_raw_pointers())
    .function("CopyInformationToPipeline", &vtkDataObject::CopyInformationToPipeline, emscripten::allow_raw_pointers())
    .class_function("GetActiveFieldInformation", &vtkDataObject::GetActiveFieldInformation, emscripten::allow_raw_pointers())
    .class_function("GetNamedFieldInformation", emscripten::optional_override([]( vtkInformation* arg_0, int arg_1, const std::string & arg_2) -> vtkInformation* {  return vtkDataObject::GetNamedFieldInformation( arg_0, arg_1, arg_2.c_str());}), emscripten::allow_raw_pointers())
    .class_function("RemoveNamedFieldInformation", emscripten::optional_override([]( vtkInformation* arg_0, int arg_1, const std::string & arg_2) -> void {  return vtkDataObject::RemoveNamedFieldInformation( arg_0, arg_1, arg_2.c_str());}), emscripten::allow_raw_pointers())
    .class_function("SetActiveAttribute", emscripten::optional_override([]( vtkInformation* arg_0, int arg_1, const std::string & arg_2, int arg_3) -> vtkInformation* {  return vtkDataObject::SetActiveAttribute( arg_0, arg_1, arg_2.c_str(), arg_3);}), emscripten::allow_raw_pointers())
    .class_function("SetActiveAttributeInfo", emscripten::optional_override([]( vtkInformation* arg_0, int arg_1, int arg_2, const std::string & arg_3, int arg_4, int arg_5, int arg_6) -> void {  return vtkDataObject::SetActiveAttributeInfo( arg_0, arg_1, arg_2, arg_3.c_str(), arg_4, arg_5, arg_6);}), emscripten::allow_raw_pointers())
    .class_function("SetPointDataActiveScalarInfo", &vtkDataObject::SetPointDataActiveScalarInfo, emscripten::allow_raw_pointers())
    .function("DataHasBeenGenerated", &vtkDataObject::DataHasBeenGenerated)
    .function("PrepareForNewData", &vtkDataObject::PrepareForNewData)
    .function("ShallowCopy", &vtkDataObject::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkDataObject::DeepCopy, emscripten::allow_raw_pointers())
    .function("GetExtentType", &vtkDataObject::GetExtentType)
    .function("Crop", emscripten::optional_override([](vtkDataObject& self, std::uintptr_t arg_0) -> void {  return self.Crop(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .function("GetAttributes", &vtkDataObject::GetAttributes, emscripten::allow_raw_pointers())
    .function("GetGhostArray", &vtkDataObject::GetGhostArray, emscripten::allow_raw_pointers())
    .function("SupportsGhostArray", &vtkDataObject::SupportsGhostArray)
    .function("GetAttributesAsFieldData", &vtkDataObject::GetAttributesAsFieldData, emscripten::allow_raw_pointers())
    .function("GetAttributeTypeForArray", &vtkDataObject::GetAttributeTypeForArray, emscripten::allow_raw_pointers())
    .function("GetNumberOfElements", &vtkDataObject::GetNumberOfElements)
    .class_function("GetAssociationTypeAsString", emscripten::optional_override([]( int arg_0) -> std::string {  return vtkDataObject::GetAssociationTypeAsString( arg_0);}))
    .class_function("GetAssociationTypeFromString", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObject::GetAssociationTypeFromString( arg_0.c_str());}))
    .class_function("DATA_TYPE_NAME", &vtkDataObject::DATA_TYPE_NAME, emscripten::allow_raw_pointers())
    .class_function("DATA_OBJECT", &vtkDataObject::DATA_OBJECT, emscripten::allow_raw_pointers())
    .class_function("DATA_EXTENT_TYPE", &vtkDataObject::DATA_EXTENT_TYPE, emscripten::allow_raw_pointers())
    .class_function("DATA_EXTENT", &vtkDataObject::DATA_EXTENT, emscripten::allow_raw_pointers())
    .class_function("ALL_PIECES_EXTENT", &vtkDataObject::ALL_PIECES_EXTENT, emscripten::allow_raw_pointers())
    .class_function("DATA_PIECE_NUMBER", &vtkDataObject::DATA_PIECE_NUMBER, emscripten::allow_raw_pointers())
    .class_function("DATA_NUMBER_OF_PIECES", &vtkDataObject::DATA_NUMBER_OF_PIECES, emscripten::allow_raw_pointers())
    .class_function("DATA_NUMBER_OF_GHOST_LEVELS", &vtkDataObject::DATA_NUMBER_OF_GHOST_LEVELS, emscripten::allow_raw_pointers())
    .class_function("DATA_TIME_STEP", &vtkDataObject::DATA_TIME_STEP, emscripten::allow_raw_pointers())
    .class_function("POINT_DATA_VECTOR", &vtkDataObject::POINT_DATA_VECTOR, emscripten::allow_raw_pointers())
    .class_function("CELL_DATA_VECTOR", &vtkDataObject::CELL_DATA_VECTOR, emscripten::allow_raw_pointers())
    .class_function("VERTEX_DATA_VECTOR", &vtkDataObject::VERTEX_DATA_VECTOR, emscripten::allow_raw_pointers())
    .class_function("EDGE_DATA_VECTOR", &vtkDataObject::EDGE_DATA_VECTOR, emscripten::allow_raw_pointers())
    .class_function("FIELD_ARRAY_TYPE", &vtkDataObject::FIELD_ARRAY_TYPE, emscripten::allow_raw_pointers())
    .class_function("FIELD_ASSOCIATION", &vtkDataObject::FIELD_ASSOCIATION, emscripten::allow_raw_pointers())
    .class_function("FIELD_ATTRIBUTE_TYPE", &vtkDataObject::FIELD_ATTRIBUTE_TYPE, emscripten::allow_raw_pointers())
    .class_function("FIELD_ACTIVE_ATTRIBUTE", &vtkDataObject::FIELD_ACTIVE_ATTRIBUTE, emscripten::allow_raw_pointers())
    .class_function("FIELD_NUMBER_OF_COMPONENTS", &vtkDataObject::FIELD_NUMBER_OF_COMPONENTS, emscripten::allow_raw_pointers())
    .class_function("FIELD_NUMBER_OF_TUPLES", &vtkDataObject::FIELD_NUMBER_OF_TUPLES, emscripten::allow_raw_pointers())
    .class_function("FIELD_OPERATION", &vtkDataObject::FIELD_OPERATION, emscripten::allow_raw_pointers())
    .class_function("FIELD_RANGE", &vtkDataObject::FIELD_RANGE, emscripten::allow_raw_pointers())
    .class_function("PIECE_EXTENT", &vtkDataObject::PIECE_EXTENT, emscripten::allow_raw_pointers())
    .class_function("FIELD_NAME", &vtkDataObject::FIELD_NAME, emscripten::allow_raw_pointers())
    .class_function("ORIGIN", &vtkDataObject::ORIGIN, emscripten::allow_raw_pointers())
    .class_function("SPACING", &vtkDataObject::SPACING, emscripten::allow_raw_pointers())
    .class_function("DIRECTION", &vtkDataObject::DIRECTION, emscripten::allow_raw_pointers())
    .class_function("BOUNDING_BOX", &vtkDataObject::BOUNDING_BOX, emscripten::allow_raw_pointers())
    .class_function("SIL", &vtkDataObject::SIL, emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkDataObject*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkDataObject* { return vtkDataObject::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkDataObject*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkDataObject* { return vtkDataObject::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkDataObject_0_2_constants) {
    typedef vtkDataObject::FieldAssociations cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[8] = {
      { "vtkDataObject_FieldAssociations_FIELD_ASSOCIATION_POINTS", vtkDataObject::FIELD_ASSOCIATION_POINTS },
      { "vtkDataObject_FieldAssociations_FIELD_ASSOCIATION_CELLS", vtkDataObject::FIELD_ASSOCIATION_CELLS },
      { "vtkDataObject_FieldAssociations_FIELD_ASSOCIATION_NONE", vtkDataObject::FIELD_ASSOCIATION_NONE },
      { "vtkDataObject_FieldAssociations_FIELD_ASSOCIATION_POINTS_THEN_CELLS", vtkDataObject::FIELD_ASSOCIATION_POINTS_THEN_CELLS },
      { "vtkDataObject_FieldAssociations_FIELD_ASSOCIATION_VERTICES", vtkDataObject::FIELD_ASSOCIATION_VERTICES },
      { "vtkDataObject_FieldAssociations_FIELD_ASSOCIATION_EDGES", vtkDataObject::FIELD_ASSOCIATION_EDGES },
      { "vtkDataObject_FieldAssociations_FIELD_ASSOCIATION_ROWS", vtkDataObject::FIELD_ASSOCIATION_ROWS },
      { "vtkDataObject_FieldAssociations_NUMBER_OF_ASSOCIATIONS", vtkDataObject::NUMBER_OF_ASSOCIATIONS },
  };
  for (int c = 0; c < 8; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkDataObject_1_2_constants) {
    typedef vtkDataObject::AttributeTypes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[8] = {
      { "vtkDataObject_AttributeTypes_POINT", vtkDataObject::POINT },
      { "vtkDataObject_AttributeTypes_CELL", vtkDataObject::CELL },
      { "vtkDataObject_AttributeTypes_FIELD", vtkDataObject::FIELD },
      { "vtkDataObject_AttributeTypes_POINT_THEN_CELL", vtkDataObject::POINT_THEN_CELL },
      { "vtkDataObject_AttributeTypes_VERTEX", vtkDataObject::VERTEX },
      { "vtkDataObject_AttributeTypes_EDGE", vtkDataObject::EDGE },
      { "vtkDataObject_AttributeTypes_ROW", vtkDataObject::ROW },
      { "vtkDataObject_AttributeTypes_NUMBER_OF_ATTRIBUTE_TYPES", vtkDataObject::NUMBER_OF_ATTRIBUTE_TYPES },
  };
  for (int c = 0; c < 8; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkDataObject_2_2_constants) {
    typedef vtkDataObject::FieldOperations cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkDataObject_FieldOperations_FIELD_OPERATION_PRESERVED", vtkDataObject::FIELD_OPERATION_PRESERVED },
      { "vtkDataObject_FieldOperations_FIELD_OPERATION_REINTERPOLATED", vtkDataObject::FIELD_OPERATION_REINTERPOLATED },
      { "vtkDataObject_FieldOperations_FIELD_OPERATION_MODIFIED", vtkDataObject::FIELD_OPERATION_MODIFIED },
      { "vtkDataObject_FieldOperations_FIELD_OPERATION_REMOVED", vtkDataObject::FIELD_OPERATION_REMOVED },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
