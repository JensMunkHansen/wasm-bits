// JavaScript wrapper for vtkDataSet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkDataSetEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkDataSet.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkCellIterator.h"
#include "vtkCell.h"
#include "vtkGenericCell.h"
#include "vtkCellTypes.h"
#include "vtkIdList.h"
#include "vtkCellData.h"
#include "vtkPointData.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkFieldData.h"
#include "vtkUnsignedCharArray.h"
#include "vtkDataSet.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkDataSet_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkDataSet>(vtkDataSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataSet_class) {
  using FieldDataType=vtkDataSet::FieldDataType;
  emscripten::class_<vtkDataSet, emscripten::base<vtkDataObject>>("vtkDataSet")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CopyAttributes", &vtkDataSet::CopyAttributes, emscripten::allow_raw_pointers())
    .function("GetPoints", &vtkDataSet::GetPoints, emscripten::allow_raw_pointers())
    .function("NewCellIterator", &vtkDataSet::NewCellIterator, emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkDataSet&, int, int, int)>([](vtkDataSet& self, int arg_0, int arg_1, int arg_2) -> vtkCell* { return self.GetCell( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetCellOrderAndRationalWeights", &vtkDataSet::SetCellOrderAndRationalWeights, emscripten::allow_raw_pointers())
    .function("GetCellSize", &vtkDataSet::GetCellSize)
    .function("GetCellTypes", &vtkDataSet::GetCellTypes, emscripten::allow_raw_pointers())
    .function("GetCellNeighbors", &vtkDataSet::GetCellNeighbors, emscripten::allow_raw_pointers())
    .function("FindPoint", emscripten::select_overload<int(vtkDataSet&, double, double, double)>([](vtkDataSet& self, double arg_0, double arg_1, double arg_2) -> int { return self.FindPoint( arg_0, arg_1, arg_2); }))
    .function("GetMTime", &vtkDataSet::GetMTime)
    .function("GetCellData", &vtkDataSet::GetCellData, emscripten::allow_raw_pointers())
    .function("GetPointData", &vtkDataSet::GetPointData, emscripten::allow_raw_pointers())
    .function("Squeeze", &vtkDataSet::Squeeze)
    .function("ComputeBounds", &vtkDataSet::ComputeBounds)
    .function("GetLength", &vtkDataSet::GetLength)
    .function("GetLength2", &vtkDataSet::GetLength2)
    .function("Initialize", &vtkDataSet::Initialize)
    .function("GetMaxSpatialDimension", &vtkDataSet::GetMaxSpatialDimension)
    .function("GetActualMemorySize", &vtkDataSet::GetActualMemorySize)
    .function("GetDataObjectType", &vtkDataSet::GetDataObjectType)
    .function("ShallowCopy", &vtkDataSet::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkDataSet::DeepCopy, emscripten::allow_raw_pointers())
    .function("CheckAttributes", &vtkDataSet::CheckAttributes)
    .class_function("GetData", emscripten::select_overload<vtkDataSet*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkDataSet* { return vtkDataSet::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkDataSet*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkDataSet* { return vtkDataSet::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetAttributesAsFieldData", &vtkDataSet::GetAttributesAsFieldData, emscripten::allow_raw_pointers())
    .function("GetNumberOfElements", &vtkDataSet::GetNumberOfElements)
    .function("HasAnyGhostCells", &vtkDataSet::HasAnyGhostCells)
    .function("HasAnyGhostPoints", &vtkDataSet::HasAnyGhostPoints)
    .function("HasAnyBlankCells", &vtkDataSet::HasAnyBlankCells)
    .function("HasAnyBlankPoints", &vtkDataSet::HasAnyBlankPoints)
    .function("GetPointGhostArray", &vtkDataSet::GetPointGhostArray, emscripten::allow_raw_pointers())
    .function("AllocatePointGhostArray", &vtkDataSet::AllocatePointGhostArray, emscripten::allow_raw_pointers())
    .function("GetCellGhostArray", &vtkDataSet::GetCellGhostArray, emscripten::allow_raw_pointers())
    .function("AllocateCellGhostArray", &vtkDataSet::AllocateCellGhostArray, emscripten::allow_raw_pointers())
    .function("GetGhostArray", &vtkDataSet::GetGhostArray, emscripten::allow_raw_pointers())
    .function("SupportsGhostArray", &vtkDataSet::SupportsGhostArray);
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkDataSet_0_2_constants) {
    typedef vtkDataSet::FieldDataType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkDataSet_FieldDataType_DATA_OBJECT_FIELD", vtkDataSet::DATA_OBJECT_FIELD },
      { "vtkDataSet_FieldDataType_POINT_DATA_FIELD", vtkDataSet::POINT_DATA_FIELD },
      { "vtkDataSet_FieldDataType_CELL_DATA_FIELD", vtkDataSet::CELL_DATA_FIELD },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
