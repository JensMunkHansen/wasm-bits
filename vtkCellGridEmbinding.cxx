// JavaScript wrapper for vtkCellGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellGridEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkDataSetAttributes.h"
#include "vtkStringToken.h"
#include "vtkUnsignedCharArray.h"
#include "vtkAbstractArray.h"
#include "vtkCellMetadata.h"
#include "vtkCellAttribute.h"
#include "vtkCellGridQuery.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkDataArray.h"
#include "vtkInformationIntegerVectorKey.h"
#include "vtkCellGrid.h"

template<> void emscripten::internal::raw_destructor<vtkCellGrid>(vtkCellGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellGrid_class) {
  emscripten::class_<vtkCellGrid, emscripten::base<vtkDataObject>>("vtkCellGrid")
    .smart_ptr<vtkSmartPointer<vtkCellGrid>>("vtkSmartPointer<vtkCellGrid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkCellGrid::Initialize)
    .function("GetDataObjectType", &vtkCellGrid::GetDataObjectType)
    .function("GetActualMemorySize", &vtkCellGrid::GetActualMemorySize)
    .function("ShallowCopy", &vtkCellGrid::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkCellGrid::DeepCopy, emscripten::allow_raw_pointers())
    .function("CopyStructure", &vtkCellGrid::CopyStructure, emscripten::allow_raw_pointers())
    .function("GetAttributes", emscripten::select_overload<vtkDataSetAttributes*(vtkCellGrid&, int)>([](vtkCellGrid& self, int arg_0) -> vtkDataSetAttributes* { return self.GetAttributes( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetAttributes", emscripten::select_overload<vtkDataSetAttributes*(vtkCellGrid&, vtkStringToken)>([](vtkCellGrid& self, vtkStringToken arg_0) -> vtkDataSetAttributes* { return self.GetAttributes( arg_0); }), emscripten::allow_raw_pointers())
    .function("FindAttributes", emscripten::select_overload<vtkDataSetAttributes*(vtkCellGrid&, int)>([](vtkCellGrid& self, int arg_0) -> vtkDataSetAttributes* { return self.FindAttributes( arg_0); }), emscripten::allow_raw_pointers())
    .function("FindAttributes", emscripten::select_overload<vtkDataSetAttributes*(vtkCellGrid&, vtkStringToken)>([](vtkCellGrid& self, vtkStringToken arg_0) -> vtkDataSetAttributes* { return self.FindAttributes( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetGhostArray", &vtkCellGrid::GetGhostArray, emscripten::allow_raw_pointers())
    .function("SupportsGhostArray", &vtkCellGrid::SupportsGhostArray)
    .function("GetAttributeTypeForArray", &vtkCellGrid::GetAttributeTypeForArray, emscripten::allow_raw_pointers())
    .function("GetNumberOfElements", &vtkCellGrid::GetNumberOfElements)
    .function("GetNumberOfCells", &vtkCellGrid::GetNumberOfCells)
    .function("AddCellMetadata", emscripten::select_overload<vtkCellMetadata*(vtkCellGrid&, vtkCellMetadata*)>([](vtkCellGrid& self, vtkCellMetadata* arg_0) -> vtkCellMetadata* { return self.AddCellMetadata( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddAllCellMetadata", &vtkCellGrid::AddAllCellMetadata)
    .function("RemoveCellMetadata", emscripten::select_overload<bool(vtkCellGrid&, vtkCellMetadata*)>([](vtkCellGrid& self, vtkCellMetadata* arg_0) -> bool { return self.RemoveCellMetadata( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveUnusedCellMetadata", &vtkCellGrid::RemoveUnusedCellMetadata)
    .function("GetCellTypes", &vtkCellGrid::GetCellTypes)
    .function("GetCellType", emscripten::select_overload<vtkCellMetadata*(vtkCellGrid&, vtkStringToken)>([](vtkCellGrid& self, vtkStringToken arg_0) -> vtkCellMetadata* { return self.GetCellType( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetCellType", emscripten::select_overload<vtkCellMetadata*(vtkCellGrid&, vtkStringToken)>([](vtkCellGrid& self, vtkStringToken arg_0) -> vtkCellMetadata* { return self.GetCellType( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddCellAttribute", &vtkCellGrid::AddCellAttribute, emscripten::allow_raw_pointers())
    .function("RemoveCellAttribute", &vtkCellGrid::RemoveCellAttribute, emscripten::allow_raw_pointers())
    .function("GetUnorderedCellAttributeIds", &vtkCellGrid::GetUnorderedCellAttributeIds)
    .function("GetCellAttributeList", &vtkCellGrid::GetCellAttributeList)
    .function("GetCellAttributeById", &vtkCellGrid::GetCellAttributeById, emscripten::allow_raw_pointers())
    .function("GetCellAttributeByName", &vtkCellGrid::GetCellAttributeByName, emscripten::allow_raw_pointers())
    .function("GetShapeAttribute", &vtkCellGrid::GetShapeAttribute, emscripten::allow_raw_pointers())
    .function("SetShapeAttribute", &vtkCellGrid::SetShapeAttribute, emscripten::allow_raw_pointers())
    .function("Query", &vtkCellGrid::Query, emscripten::allow_raw_pointers())
    .function("SetSchema", &vtkCellGrid::SetSchema)
    .function("GetSchemaName", &vtkCellGrid::GetSchemaName)
    .function("GetSchemaVersion", &vtkCellGrid::GetSchemaVersion)
    .function("SetContentVersion", &vtkCellGrid::SetContentVersion)
    .function("GetContentVersion", &vtkCellGrid::GetContentVersion)
    .class_function("GetData", emscripten::select_overload<vtkCellGrid*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkCellGrid* { return vtkCellGrid::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkCellGrid*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkCellGrid* { return vtkCellGrid::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("CorrespondingArray", &vtkCellGrid::CorrespondingArray, emscripten::allow_raw_pointers())
    .class_function("ARRAY_GROUP_IDS", &vtkCellGrid::ARRAY_GROUP_IDS, emscripten::allow_raw_pointers());
}
