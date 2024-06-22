// JavaScript wrapper for vtkSelectionNode with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkSelectionNodeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkSelectionNode.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkDataSetAttributes.h"
#include "vtkInformation.h"
#include "vtkInformationIntegerKey.h"
#include "vtkInformationDoubleKey.h"
#include "vtkInformationObjectBaseKey.h"
#include "vtkInformationStringKey.h"
#include "vtkInformationStringVectorKey.h"
#include "vtkSelectionNode.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkSelectionNode_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkSelectionNode>(vtkSelectionNode * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSelectionNode_class) {
  using SelectionContent=vtkSelectionNode::SelectionContent;
  using SelectionField=vtkSelectionNode::SelectionField;
  emscripten::class_<vtkSelectionNode, emscripten::base<vtkObject>>("vtkSelectionNode")
    .smart_ptr<vtkSmartPointer<vtkSelectionNode>>("vtkSmartPointer<vtkSelectionNode>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSelectionNode>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSelectionNode::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSelectionNode& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSelectionNode::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSelectionNode::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSelectionNode::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSelectionNode& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkSelectionNode::Initialize)
    .function("SetSelectionList", &vtkSelectionNode::SetSelectionList, emscripten::allow_raw_pointers())
    .function("GetSelectionList", &vtkSelectionNode::GetSelectionList, emscripten::allow_raw_pointers())
    .function("SetSelectionData", &vtkSelectionNode::SetSelectionData, emscripten::allow_raw_pointers())
    .function("GetSelectionData", &vtkSelectionNode::GetSelectionData, emscripten::allow_raw_pointers())
    .function("GetProperties", &vtkSelectionNode::GetProperties, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkSelectionNode::DeepCopy, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkSelectionNode::ShallowCopy, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkSelectionNode::GetMTime)
    .class_function("CONTENT_TYPE", &vtkSelectionNode::CONTENT_TYPE, emscripten::allow_raw_pointers())
    .function("SetContentType", &vtkSelectionNode::SetContentType)
    .function("GetContentType", &vtkSelectionNode::GetContentType)
    .class_function("GetContentTypeAsString", emscripten::optional_override([]( int arg_0) -> std::string {  return vtkSelectionNode::GetContentTypeAsString( arg_0);}))
    .class_function("FIELD_TYPE", &vtkSelectionNode::FIELD_TYPE, emscripten::allow_raw_pointers())
    .function("SetFieldType", &vtkSelectionNode::SetFieldType)
    .function("GetFieldType", &vtkSelectionNode::GetFieldType)
    .class_function("GetFieldTypeAsString", emscripten::optional_override([]( int arg_0) -> std::string {  return vtkSelectionNode::GetFieldTypeAsString( arg_0);}))
    .class_function("GetFieldTypeFromString", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSelectionNode::GetFieldTypeFromString( arg_0.c_str());}))
    .class_function("ConvertSelectionFieldToAttributeType", &vtkSelectionNode::ConvertSelectionFieldToAttributeType)
    .class_function("ConvertAttributeTypeToSelectionField", &vtkSelectionNode::ConvertAttributeTypeToSelectionField)
    .function("SetQueryString", emscripten::optional_override([](vtkSelectionNode& self, const std::string & arg_0) -> void {  return self.SetQueryString( arg_0.c_str());}))
    .function("GetQueryString", emscripten::optional_override([](vtkSelectionNode& self) -> std::string {  return self.GetQueryString();}))
    .class_function("EPSILON", &vtkSelectionNode::EPSILON, emscripten::allow_raw_pointers())
    .class_function("ZBUFFER_VALUE", &vtkSelectionNode::ZBUFFER_VALUE, emscripten::allow_raw_pointers())
    .class_function("CONTAINING_CELLS", &vtkSelectionNode::CONTAINING_CELLS, emscripten::allow_raw_pointers())
    .class_function("CONNECTED_LAYERS", &vtkSelectionNode::CONNECTED_LAYERS, emscripten::allow_raw_pointers())
    .class_function("CONNECTED_LAYERS_REMOVE_SEED", &vtkSelectionNode::CONNECTED_LAYERS_REMOVE_SEED, emscripten::allow_raw_pointers())
    .class_function("CONNECTED_LAYERS_REMOVE_INTERMEDIATE_LAYERS", &vtkSelectionNode::CONNECTED_LAYERS_REMOVE_INTERMEDIATE_LAYERS, emscripten::allow_raw_pointers())
    .class_function("COMPONENT_NUMBER", &vtkSelectionNode::COMPONENT_NUMBER, emscripten::allow_raw_pointers())
    .class_function("INVERSE", &vtkSelectionNode::INVERSE, emscripten::allow_raw_pointers())
    .class_function("PIXEL_COUNT", &vtkSelectionNode::PIXEL_COUNT, emscripten::allow_raw_pointers())
    .class_function("SOURCE", &vtkSelectionNode::SOURCE, emscripten::allow_raw_pointers())
    .class_function("SOURCE_ID", &vtkSelectionNode::SOURCE_ID, emscripten::allow_raw_pointers())
    .class_function("PROP", &vtkSelectionNode::PROP, emscripten::allow_raw_pointers())
    .class_function("PROP_ID", &vtkSelectionNode::PROP_ID, emscripten::allow_raw_pointers())
    .class_function("PROCESS_ID", &vtkSelectionNode::PROCESS_ID, emscripten::allow_raw_pointers())
    .class_function("ASSEMBLY_NAME", &vtkSelectionNode::ASSEMBLY_NAME, emscripten::allow_raw_pointers())
    .class_function("SELECTORS", &vtkSelectionNode::SELECTORS, emscripten::allow_raw_pointers())
    .class_function("COMPOSITE_INDEX", &vtkSelectionNode::COMPOSITE_INDEX, emscripten::allow_raw_pointers())
    .class_function("HIERARCHICAL_LEVEL", &vtkSelectionNode::HIERARCHICAL_LEVEL, emscripten::allow_raw_pointers())
    .class_function("HIERARCHICAL_INDEX", &vtkSelectionNode::HIERARCHICAL_INDEX, emscripten::allow_raw_pointers())
    .function("UnionSelectionList", &vtkSelectionNode::UnionSelectionList, emscripten::allow_raw_pointers())
    .function("SubtractSelectionList", &vtkSelectionNode::SubtractSelectionList, emscripten::allow_raw_pointers())
    .function("EqualProperties", &vtkSelectionNode::EqualProperties, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkSelectionNode_0_2_constants) {
    typedef vtkSelectionNode::SelectionContent cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[12] = {
      { "vtkSelectionNode_SelectionContent_GLOBALIDS", vtkSelectionNode::GLOBALIDS },
      { "vtkSelectionNode_SelectionContent_PEDIGREEIDS", vtkSelectionNode::PEDIGREEIDS },
      { "vtkSelectionNode_SelectionContent_VALUES", vtkSelectionNode::VALUES },
      { "vtkSelectionNode_SelectionContent_INDICES", vtkSelectionNode::INDICES },
      { "vtkSelectionNode_SelectionContent_FRUSTUM", vtkSelectionNode::FRUSTUM },
      { "vtkSelectionNode_SelectionContent_LOCATIONS", vtkSelectionNode::LOCATIONS },
      { "vtkSelectionNode_SelectionContent_THRESHOLDS", vtkSelectionNode::THRESHOLDS },
      { "vtkSelectionNode_SelectionContent_BLOCKS", vtkSelectionNode::BLOCKS },
      { "vtkSelectionNode_SelectionContent_BLOCK_SELECTORS", vtkSelectionNode::BLOCK_SELECTORS },
      { "vtkSelectionNode_SelectionContent_QUERY", vtkSelectionNode::QUERY },
      { "vtkSelectionNode_SelectionContent_USER", vtkSelectionNode::USER },
      { "vtkSelectionNode_SelectionContent_NUM_CONTENT_TYPES", vtkSelectionNode::NUM_CONTENT_TYPES },
  };
  for (int c = 0; c < 12; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkSelectionNode_1_2_constants) {
    typedef vtkSelectionNode::SelectionField cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[7] = {
      { "vtkSelectionNode_SelectionField_CELL", vtkSelectionNode::CELL },
      { "vtkSelectionNode_SelectionField_POINT", vtkSelectionNode::POINT },
      { "vtkSelectionNode_SelectionField_FIELD", vtkSelectionNode::FIELD },
      { "vtkSelectionNode_SelectionField_VERTEX", vtkSelectionNode::VERTEX },
      { "vtkSelectionNode_SelectionField_EDGE", vtkSelectionNode::EDGE },
      { "vtkSelectionNode_SelectionField_ROW", vtkSelectionNode::ROW },
      { "vtkSelectionNode_SelectionField_NUM_FIELD_TYPES", vtkSelectionNode::NUM_FIELD_TYPES },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
