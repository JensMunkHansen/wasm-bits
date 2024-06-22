// JavaScript wrapper for vtkPolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPolyData.h
*/
#include "vtkEmbindSmartPointerTraits.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkCell.h"
#include "vtkGenericCell.h"
#include "vtkIdList.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkCellArray.h"
#include "vtkAbstractCellLinks.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkDataArray.h"
#include "vtkPolyData.h"

template<> void emscripten::internal::raw_destructor<vtkPolyData>(vtkPolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyData_class) {
  emscripten::class_<vtkPolyData, emscripten::base<vtkPointSet>>("vtkPolyData")
    .smart_ptr<vtkSmartPointer<vtkPolyData>>("vtkSmartPointer<vtkPolyData>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPolyData>)
    .class_function("ExtendedNew", &vtkPolyData::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkPolyData::GetDataObjectType)
    .function("CopyStructure", &vtkPolyData::CopyStructure, emscripten::allow_raw_pointers())
    .function("GetNumberOfCells", &vtkPolyData::GetNumberOfCells)
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkPolyData&, int)>([](vtkPolyData& self, int arg_0) -> vtkCell* { return self.GetCell( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<void(vtkPolyData&, int, vtkGenericCell*)>([](vtkPolyData& self, int arg_0, vtkGenericCell* arg_1) -> void { return self.GetCell( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkPolyData&, int, int, int)>([](vtkPolyData& self, int arg_0, int arg_1, int arg_2) -> vtkCell* { return self.GetCell( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetCellType", &vtkPolyData::GetCellType)
    .function("GetCellSize", &vtkPolyData::GetCellSize)
    .function("GetCellNeighbors", &vtkPolyData::GetCellNeighbors, emscripten::allow_raw_pointers())
    .function("CopyCells", &vtkPolyData::CopyCells, emscripten::allow_raw_pointers())
    .function("GetCellPoints", emscripten::select_overload<void(vtkPolyData&, int, vtkIdList*)>([](vtkPolyData& self, int arg_0, vtkIdList* arg_1) -> void { return self.GetCellPoints( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetPointCells", emscripten::select_overload<void(vtkPolyData&, int, vtkIdList*)>([](vtkPolyData& self, int arg_0, vtkIdList* arg_1) -> void { return self.GetPointCells( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ComputeCellsBounds", &vtkPolyData::ComputeCellsBounds)
    .function("Squeeze", &vtkPolyData::Squeeze)
    .function("GetMaxCellSize", &vtkPolyData::GetMaxCellSize)
    .function("GetMaxSpatialDimension", &vtkPolyData::GetMaxSpatialDimension)
    .function("GetCellIdRelativeToCellArray", &vtkPolyData::GetCellIdRelativeToCellArray)
    .function("SetVerts", &vtkPolyData::SetVerts, emscripten::allow_raw_pointers())
    .function("GetVerts", &vtkPolyData::GetVerts, emscripten::allow_raw_pointers())
    .function("SetLines", &vtkPolyData::SetLines, emscripten::allow_raw_pointers())
    .function("GetLines", &vtkPolyData::GetLines, emscripten::allow_raw_pointers())
    .function("SetPolys", &vtkPolyData::SetPolys, emscripten::allow_raw_pointers())
    .function("GetPolys", &vtkPolyData::GetPolys, emscripten::allow_raw_pointers())
    .function("SetStrips", &vtkPolyData::SetStrips, emscripten::allow_raw_pointers())
    .function("GetStrips", &vtkPolyData::GetStrips, emscripten::allow_raw_pointers())
    .function("GetNumberOfVerts", &vtkPolyData::GetNumberOfVerts)
    .function("GetNumberOfLines", &vtkPolyData::GetNumberOfLines)
    .function("GetNumberOfPolys", &vtkPolyData::GetNumberOfPolys)
    .function("GetNumberOfStrips", &vtkPolyData::GetNumberOfStrips)
    .function("AllocateEstimate", emscripten::select_overload<bool(vtkPolyData&, int, int)>([](vtkPolyData& self, int arg_0, int arg_1) -> bool { return self.AllocateEstimate( arg_0, arg_1); }))
    .function("AllocateEstimate", emscripten::select_overload<bool(vtkPolyData&, int, int, int, int, int, int, int, int)>([](vtkPolyData& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7) -> bool { return self.AllocateEstimate( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7); }))
    .function("AllocateExact", emscripten::select_overload<bool(vtkPolyData&, int, int)>([](vtkPolyData& self, int arg_0, int arg_1) -> bool { return self.AllocateExact( arg_0, arg_1); }))
    .function("AllocateExact", emscripten::select_overload<bool(vtkPolyData&, int, int, int, int, int, int, int, int)>([](vtkPolyData& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7) -> bool { return self.AllocateExact( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7); }))
    .function("AllocateCopy", &vtkPolyData::AllocateCopy, emscripten::allow_raw_pointers())
    .function("AllocateProportional", &vtkPolyData::AllocateProportional, emscripten::allow_raw_pointers())
    .function("Allocate", emscripten::select_overload<void(vtkPolyData&, int, int)>([](vtkPolyData& self, int arg_0, int arg_1) -> void { return self.Allocate( arg_0, arg_1); }))
    .function("Allocate", emscripten::select_overload<void(vtkPolyData&, vtkPolyData*, int, int)>([](vtkPolyData& self, vtkPolyData* arg_0, int arg_1, int arg_2) -> void { return self.Allocate( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("InsertNextCell", emscripten::select_overload<int(vtkPolyData&, int, vtkIdList*)>([](vtkPolyData& self, int arg_0, vtkIdList* arg_1) -> int { return self.InsertNextCell( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Reset", &vtkPolyData::Reset)
    .function("BuildCells", &vtkPolyData::BuildCells)
    .function("NeedToBuildCells", &vtkPolyData::NeedToBuildCells)
    .function("BuildLinks", &vtkPolyData::BuildLinks)
    .function("SetLinks", &vtkPolyData::SetLinks, emscripten::allow_raw_pointers())
    .function("GetLinks", &vtkPolyData::GetLinks, emscripten::allow_raw_pointers())
    .function("DeleteCells", &vtkPolyData::DeleteCells)
    .function("DeleteLinks", &vtkPolyData::DeleteLinks)
    .function("GetCellEdgeNeighbors", &vtkPolyData::GetCellEdgeNeighbors, emscripten::allow_raw_pointers())
    .function("IsTriangle", &vtkPolyData::IsTriangle)
    .function("IsEdge", &vtkPolyData::IsEdge)
    .function("IsPointUsedByCell", &vtkPolyData::IsPointUsedByCell)
    .function("ReplaceCell", emscripten::select_overload<void(vtkPolyData&, int, vtkIdList*)>([](vtkPolyData& self, int arg_0, vtkIdList* arg_1) -> void { return self.ReplaceCell( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ReplaceCellPoint", emscripten::select_overload<void(vtkPolyData&, int, int, int)>([](vtkPolyData& self, int arg_0, int arg_1, int arg_2) -> void { return self.ReplaceCellPoint( arg_0, arg_1, arg_2); }))
    .function("ReplaceCellPoint", emscripten::select_overload<void(vtkPolyData&, int, int, int, vtkIdList*)>([](vtkPolyData& self, int arg_0, int arg_1, int arg_2, vtkIdList* arg_3) -> void { return self.ReplaceCellPoint( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("ReverseCell", &vtkPolyData::ReverseCell)
    .function("DeletePoint", &vtkPolyData::DeletePoint)
    .function("DeleteCell", &vtkPolyData::DeleteCell)
    .function("RemoveDeletedCells", &vtkPolyData::RemoveDeletedCells)
    .function("InsertNextLinkedPoint", emscripten::select_overload<int(vtkPolyData&, int)>([](vtkPolyData& self, int arg_0) -> int { return self.InsertNextLinkedPoint( arg_0); }))
    .function("RemoveCellReference", &vtkPolyData::RemoveCellReference)
    .function("AddCellReference", &vtkPolyData::AddCellReference)
    .function("RemoveReferenceToCell", &vtkPolyData::RemoveReferenceToCell)
    .function("AddReferenceToCell", &vtkPolyData::AddReferenceToCell)
    .function("ResizeCellList", &vtkPolyData::ResizeCellList)
    .function("Initialize", &vtkPolyData::Initialize)
    .function("GetPiece", &vtkPolyData::GetPiece)
    .function("GetNumberOfPieces", &vtkPolyData::GetNumberOfPieces)
    .function("GetGhostLevel", &vtkPolyData::GetGhostLevel)
    .function("GetActualMemorySize", &vtkPolyData::GetActualMemorySize)
    .function("ShallowCopy", &vtkPolyData::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkPolyData::DeepCopy, emscripten::allow_raw_pointers())
    .function("RemoveGhostCells", &vtkPolyData::RemoveGhostCells)
    .class_function("GetData", emscripten::select_overload<vtkPolyData*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkPolyData* { return vtkPolyData::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkPolyData*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkPolyData* { return vtkPolyData::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetScalarFieldCriticalIndex", emscripten::select_overload<int(vtkPolyData&, int, vtkDataArray*)>([](vtkPolyData& self, int arg_0, vtkDataArray* arg_1) -> int { return self.GetScalarFieldCriticalIndex( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetScalarFieldCriticalIndex", emscripten::select_overload<int(vtkPolyData&, int, int)>([](vtkPolyData& self, int arg_0, int arg_1) -> int { return self.GetScalarFieldCriticalIndex( arg_0, arg_1); }))
    .function("GetScalarFieldCriticalIndex", emscripten::select_overload<int(vtkPolyData&, int, const std::string &)>([](vtkPolyData& self, int arg_0, const std::string & arg_1) -> int { return self.GetScalarFieldCriticalIndex( arg_0, arg_1.c_str()); }))
    .function("GetMeshMTime", &vtkPolyData::GetMeshMTime)
    .function("GetMTime", &vtkPolyData::GetMTime);
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkPolyData_0_2_constants) {
  const struct { const char *name; int value; }
    constants[7] = {
      { "vtkPolyData_ERR_NO_SUCH_FIELD", vtkPolyData::ERR_NO_SUCH_FIELD },
      { "vtkPolyData_ERR_INCORRECT_FIELD", vtkPolyData::ERR_INCORRECT_FIELD },
      { "vtkPolyData_ERR_NON_MANIFOLD_STAR", vtkPolyData::ERR_NON_MANIFOLD_STAR },
      { "vtkPolyData_REGULAR_POINT", vtkPolyData::REGULAR_POINT },
      { "vtkPolyData_MINIMUM", vtkPolyData::MINIMUM },
      { "vtkPolyData_SADDLE", vtkPolyData::SADDLE },
      { "vtkPolyData_MAXIMUM", vtkPolyData::MAXIMUM },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
