// JavaScript wrapper for vtkHyperTreeGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHyperTreeGridEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHyperTreeGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkInformationIntegerKey.h"
#include "vtkInformationDoubleVectorKey.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkDataArray.h"
#include "vtkBitArray.h"
#include "vtkHyperTreeGridOrientedCursor.h"
#include "vtkHyperTreeGridOrientedGeometryCursor.h"
#include "vtkHyperTreeGridNonOrientedCursor.h"
#include "vtkHyperTreeGridNonOrientedGeometryCursor.h"
#include "vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor.h"
#include "vtkHyperTreeGridNonOrientedVonNeumannSuperCursor.h"
#include "vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight.h"
#include "vtkHyperTreeGridNonOrientedMooreSuperCursor.h"
#include "vtkHyperTreeGridNonOrientedMooreSuperCursorLight.h"
#include "vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor.h"
#include "vtkHyperTree.h"
#include "vtkUnsignedCharArray.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkCellData.h"
#include "vtkFieldData.h"
#include "vtkHyperTreeGrid.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGrid>(vtkHyperTreeGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGrid_class) {
  emscripten::class_<vtkHyperTreeGrid, emscripten::base<vtkDataObject>>("vtkHyperTreeGrid")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGrid>>("vtkSmartPointer<vtkHyperTreeGrid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHyperTreeGrid>)
    .class_function("LEVELS", &vtkHyperTreeGrid::LEVELS, emscripten::allow_raw_pointers())
    .class_function("DIMENSION", &vtkHyperTreeGrid::DIMENSION, emscripten::allow_raw_pointers())
    .class_function("ORIENTATION", &vtkHyperTreeGrid::ORIENTATION, emscripten::allow_raw_pointers())
    .class_function("SIZES", &vtkHyperTreeGrid::SIZES, emscripten::allow_raw_pointers())
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetModeSqueeze", emscripten::optional_override([](vtkHyperTreeGrid& self, const std::string & arg_0) -> void {  return self.SetModeSqueeze( arg_0.c_str());}))
    .function("GetModeSqueeze", emscripten::optional_override([](vtkHyperTreeGrid& self) -> std::string {  return self.GetModeSqueeze();}))
    .function("Squeeze", &vtkHyperTreeGrid::Squeeze)
    .function("GetDataObjectType", &vtkHyperTreeGrid::GetDataObjectType)
    .function("CopyStructure", &vtkHyperTreeGrid::CopyStructure, emscripten::allow_raw_pointers())
    .function("CopyEmptyStructure", &vtkHyperTreeGrid::CopyEmptyStructure, emscripten::allow_raw_pointers())
    .function("SetDimensions", emscripten::select_overload<void(vtkHyperTreeGrid&, unsigned int, unsigned int, unsigned int)>([](vtkHyperTreeGrid& self, unsigned int arg_0, unsigned int arg_1, unsigned int arg_2) -> void { return self.SetDimensions( arg_0, arg_1, arg_2); }))
    .function("SetDimensions", emscripten::select_overload<void(vtkHyperTreeGrid&, int, int, int)>([](vtkHyperTreeGrid& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetDimensions( arg_0, arg_1, arg_2); }))
    .function("SetExtent", emscripten::select_overload<void(vtkHyperTreeGrid&, int, int, int, int, int, int)>([](vtkHyperTreeGrid& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetDimension", &vtkHyperTreeGrid::GetDimension)
    .function("GetAxes", emscripten::optional_override([](vtkHyperTreeGrid& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetAxes()) / sizeof(unsigned int);}))
    .function("GetNumberOfChildren", &vtkHyperTreeGrid::GetNumberOfChildren)
    .function("SetTransposedRootIndexing", &vtkHyperTreeGrid::SetTransposedRootIndexing)
    .function("GetTransposedRootIndexing", &vtkHyperTreeGrid::GetTransposedRootIndexing)
    .function("SetIndexingModeToKJI", &vtkHyperTreeGrid::SetIndexingModeToKJI)
    .function("SetIndexingModeToIJK", &vtkHyperTreeGrid::SetIndexingModeToIJK)
    .function("GetOrientation", &vtkHyperTreeGrid::GetOrientation)
    .function("GetFreezeState", &vtkHyperTreeGrid::GetFreezeState)
    .function("SetBranchFactor", &vtkHyperTreeGrid::SetBranchFactor)
    .function("GetBranchFactor", &vtkHyperTreeGrid::GetBranchFactor)
    .function("GetMaxNumberOfTrees", &vtkHyperTreeGrid::GetMaxNumberOfTrees)
    .function("GetNumberOfNonEmptyTrees", &vtkHyperTreeGrid::GetNumberOfNonEmptyTrees)
    .function("GetNumberOfLeaves", &vtkHyperTreeGrid::GetNumberOfLeaves)
    .function("GetNumberOfLevels", emscripten::select_overload<unsigned int(vtkHyperTreeGrid&, int)>([](vtkHyperTreeGrid& self, int arg_0) -> unsigned int { return self.GetNumberOfLevels( arg_0); }))
    .function("GetNumberOfLevels", emscripten::select_overload<unsigned int(vtkHyperTreeGrid&)>([](vtkHyperTreeGrid& self) -> unsigned int { return self.GetNumberOfLevels(); }))
    .function("SetXCoordinates", &vtkHyperTreeGrid::SetXCoordinates, emscripten::allow_raw_pointers())
    .function("GetXCoordinates", &vtkHyperTreeGrid::GetXCoordinates, emscripten::allow_raw_pointers())
    .function("SetYCoordinates", &vtkHyperTreeGrid::SetYCoordinates, emscripten::allow_raw_pointers())
    .function("GetYCoordinates", &vtkHyperTreeGrid::GetYCoordinates, emscripten::allow_raw_pointers())
    .function("SetZCoordinates", &vtkHyperTreeGrid::SetZCoordinates, emscripten::allow_raw_pointers())
    .function("GetZCoordinates", &vtkHyperTreeGrid::GetZCoordinates, emscripten::allow_raw_pointers())
    .function("CopyCoordinates", &vtkHyperTreeGrid::CopyCoordinates, emscripten::allow_raw_pointers())
    .function("SetFixedCoordinates", &vtkHyperTreeGrid::SetFixedCoordinates)
    .function("SetMask", &vtkHyperTreeGrid::SetMask, emscripten::allow_raw_pointers())
    .function("GetMask", &vtkHyperTreeGrid::GetMask, emscripten::allow_raw_pointers())
    .function("HasMask", &vtkHyperTreeGrid::HasMask)
    .function("SetHasInterface", &vtkHyperTreeGrid::SetHasInterface)
    .function("GetHasInterface", &vtkHyperTreeGrid::GetHasInterface)
    .function("HasInterfaceOn", &vtkHyperTreeGrid::HasInterfaceOn)
    .function("HasInterfaceOff", &vtkHyperTreeGrid::HasInterfaceOff)
    .function("SetInterfaceNormalsName", emscripten::optional_override([](vtkHyperTreeGrid& self, const std::string & arg_0) -> void {  return self.SetInterfaceNormalsName( arg_0.c_str());}))
    .function("GetInterfaceNormalsName", emscripten::optional_override([](vtkHyperTreeGrid& self) -> std::string {  return self.GetInterfaceNormalsName();}))
    .function("SetInterfaceInterceptsName", emscripten::optional_override([](vtkHyperTreeGrid& self, const std::string & arg_0) -> void {  return self.SetInterfaceInterceptsName( arg_0.c_str());}))
    .function("GetInterfaceInterceptsName", emscripten::optional_override([](vtkHyperTreeGrid& self) -> std::string {  return self.GetInterfaceInterceptsName();}))
    .function("SetDepthLimiter", &vtkHyperTreeGrid::SetDepthLimiter)
    .function("GetDepthLimiter", &vtkHyperTreeGrid::GetDepthLimiter)
    .function("InitializeOrientedCursor", &vtkHyperTreeGrid::InitializeOrientedCursor, emscripten::allow_raw_pointers())
    .function("NewOrientedCursor", &vtkHyperTreeGrid::NewOrientedCursor, emscripten::allow_raw_pointers())
    .function("InitializeOrientedGeometryCursor", &vtkHyperTreeGrid::InitializeOrientedGeometryCursor, emscripten::allow_raw_pointers())
    .function("NewOrientedGeometryCursor", &vtkHyperTreeGrid::NewOrientedGeometryCursor, emscripten::allow_raw_pointers())
    .function("InitializeNonOrientedCursor", &vtkHyperTreeGrid::InitializeNonOrientedCursor, emscripten::allow_raw_pointers())
    .function("NewNonOrientedCursor", &vtkHyperTreeGrid::NewNonOrientedCursor, emscripten::allow_raw_pointers())
    .function("InitializeNonOrientedGeometryCursor", &vtkHyperTreeGrid::InitializeNonOrientedGeometryCursor, emscripten::allow_raw_pointers())
    .function("NewNonOrientedGeometryCursor", &vtkHyperTreeGrid::NewNonOrientedGeometryCursor, emscripten::allow_raw_pointers())
    .function("InitializeNonOrientedUnlimitedGeometryCursor", &vtkHyperTreeGrid::InitializeNonOrientedUnlimitedGeometryCursor, emscripten::allow_raw_pointers())
    .function("NewNonOrientedUnlimitedGeometryCursor", &vtkHyperTreeGrid::NewNonOrientedUnlimitedGeometryCursor, emscripten::allow_raw_pointers())
    .function("FindDichotomicX", &vtkHyperTreeGrid::FindDichotomicX)
    .function("FindDichotomicY", &vtkHyperTreeGrid::FindDichotomicY)
    .function("FindDichotomicZ", &vtkHyperTreeGrid::FindDichotomicZ)
    .function("InitializeNonOrientedVonNeumannSuperCursor", &vtkHyperTreeGrid::InitializeNonOrientedVonNeumannSuperCursor, emscripten::allow_raw_pointers())
    .function("NewNonOrientedVonNeumannSuperCursor", &vtkHyperTreeGrid::NewNonOrientedVonNeumannSuperCursor, emscripten::allow_raw_pointers())
    .function("InitializeNonOrientedVonNeumannSuperCursorLight", &vtkHyperTreeGrid::InitializeNonOrientedVonNeumannSuperCursorLight, emscripten::allow_raw_pointers())
    .function("NewNonOrientedVonNeumannSuperCursorLight", &vtkHyperTreeGrid::NewNonOrientedVonNeumannSuperCursorLight, emscripten::allow_raw_pointers())
    .function("InitializeNonOrientedMooreSuperCursor", &vtkHyperTreeGrid::InitializeNonOrientedMooreSuperCursor, emscripten::allow_raw_pointers())
    .function("NewNonOrientedMooreSuperCursor", &vtkHyperTreeGrid::NewNonOrientedMooreSuperCursor, emscripten::allow_raw_pointers())
    .function("InitializeNonOrientedMooreSuperCursorLight", &vtkHyperTreeGrid::InitializeNonOrientedMooreSuperCursorLight, emscripten::allow_raw_pointers())
    .function("NewNonOrientedMooreSuperCursorLight", &vtkHyperTreeGrid::NewNonOrientedMooreSuperCursorLight, emscripten::allow_raw_pointers())
    .function("InitializeNonOrientedUnlimitedMooreSuperCursor", &vtkHyperTreeGrid::InitializeNonOrientedUnlimitedMooreSuperCursor, emscripten::allow_raw_pointers())
    .function("NewNonOrientedUnlimitedMooreSuperCursor", &vtkHyperTreeGrid::NewNonOrientedUnlimitedMooreSuperCursor, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkHyperTreeGrid::Initialize)
    .function("GetTree", &vtkHyperTreeGrid::GetTree, emscripten::allow_raw_pointers())
    .function("SetTree", &vtkHyperTreeGrid::SetTree, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkHyperTreeGrid::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkHyperTreeGrid::DeepCopy, emscripten::allow_raw_pointers())
    .function("GetExtentType", &vtkHyperTreeGrid::GetExtentType)
    .function("GetActualMemorySizeBytes", &vtkHyperTreeGrid::GetActualMemorySizeBytes)
    .function("GetActualMemorySize", &vtkHyperTreeGrid::GetActualMemorySize)
    .function("SupportsGhostArray", &vtkHyperTreeGrid::SupportsGhostArray)
    .function("GetPureMask", &vtkHyperTreeGrid::GetPureMask, emscripten::allow_raw_pointers())
    .function("GetChildMask", &vtkHyperTreeGrid::GetChildMask)
    .function("GetShiftedLevelZeroIndex", &vtkHyperTreeGrid::GetShiftedLevelZeroIndex)
    .function("GetLevelZeroOriginAndSizeFromIndex", emscripten::optional_override([](vtkHyperTreeGrid& self, int arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> void {  return self.GetLevelZeroOriginAndSizeFromIndex( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<double*>(arg_2 * sizeof(double)));}))
    .function("GetLevelZeroOriginFromIndex", emscripten::optional_override([](vtkHyperTreeGrid& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.GetLevelZeroOriginFromIndex( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("GetGlobalNodeIndexMax", &vtkHyperTreeGrid::GetGlobalNodeIndexMax)
    .function("InitializeLocalIndexNode", &vtkHyperTreeGrid::InitializeLocalIndexNode)
    .function("HasAnyGhostCells", &vtkHyperTreeGrid::HasAnyGhostCells)
    .function("GetGhostCells", &vtkHyperTreeGrid::GetGhostCells, emscripten::allow_raw_pointers())
    .function("GetTreeGhostArray", &vtkHyperTreeGrid::GetTreeGhostArray, emscripten::allow_raw_pointers())
    .function("AllocateTreeGhostArray", &vtkHyperTreeGrid::AllocateTreeGhostArray, emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkHyperTreeGrid*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkHyperTreeGrid* { return vtkHyperTreeGrid::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkHyperTreeGrid*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkHyperTreeGrid* { return vtkHyperTreeGrid::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ComputeBounds", &vtkHyperTreeGrid::ComputeBounds)
    .function("GetCellData", &vtkHyperTreeGrid::GetCellData, emscripten::allow_raw_pointers())
    .function("GetAttributesAsFieldData", &vtkHyperTreeGrid::GetAttributesAsFieldData, emscripten::allow_raw_pointers())
    .function("GetNumberOfElements", &vtkHyperTreeGrid::GetNumberOfElements)
    .function("GetNumberOfCells", &vtkHyperTreeGrid::GetNumberOfCells);
}
