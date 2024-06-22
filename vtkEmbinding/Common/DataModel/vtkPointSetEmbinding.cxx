// JavaScript wrapper for vtkPointSet with embind 
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
#include "vtkCellIterator.h"
#include "vtkAbstractPointLocator.h"
#include "vtkAbstractCellLocator.h"
#include "vtkPoints.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkPointSet.h"

template<> void emscripten::internal::raw_destructor<vtkPointSet>(vtkPointSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointSet_class) {
  emscripten::class_<vtkPointSet, emscripten::base<vtkDataSet>>("vtkPointSet")
    .smart_ptr<vtkSmartPointer<vtkPointSet>>("vtkSmartPointer<vtkPointSet>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPointSet>)
    .class_function("ExtendedNew", &vtkPointSet::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkPointSet::GetDataObjectType)
    .function("SetEditable", &vtkPointSet::SetEditable)
    .function("GetEditable", &vtkPointSet::GetEditable)
    .function("EditableOn", &vtkPointSet::EditableOn)
    .function("EditableOff", &vtkPointSet::EditableOff)
    .function("Initialize", &vtkPointSet::Initialize)
    .function("CopyStructure", &vtkPointSet::CopyStructure, emscripten::allow_raw_pointers())
    .function("GetNumberOfPoints", &vtkPointSet::GetNumberOfPoints)
    .function("GetNumberOfCells", &vtkPointSet::GetNumberOfCells)
    .function("GetMaxCellSize", &vtkPointSet::GetMaxCellSize)
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkPointSet&, int)>([](vtkPointSet& self, int arg_0) -> vtkCell* { return self.GetCell( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<void(vtkPointSet&, int, vtkGenericCell*)>([](vtkPointSet& self, int arg_0, vtkGenericCell* arg_1) -> void { return self.GetCell( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkPointSet&, int, int, int)>([](vtkPointSet& self, int arg_0, int arg_1, int arg_2) -> vtkCell* { return self.GetCell( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetCellPoints", emscripten::select_overload<void(vtkPointSet&, int, vtkIdList*)>([](vtkPointSet& self, int arg_0, vtkIdList* arg_1) -> void { return self.GetCellPoints( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetPointCells", &vtkPointSet::GetPointCells, emscripten::allow_raw_pointers())
    .function("GetCellType", &vtkPointSet::GetCellType)
    .function("GetCellSize", &vtkPointSet::GetCellSize)
    .function("NewCellIterator", &vtkPointSet::NewCellIterator, emscripten::allow_raw_pointers())
    .function("BuildPointLocator", &vtkPointSet::BuildPointLocator)
    .function("BuildLocator", &vtkPointSet::BuildLocator)
    .function("BuildCellLocator", &vtkPointSet::BuildCellLocator)
    .function("SetPointLocator", &vtkPointSet::SetPointLocator, emscripten::allow_raw_pointers())
    .function("GetPointLocator", &vtkPointSet::GetPointLocator, emscripten::allow_raw_pointers())
    .function("SetCellLocator", &vtkPointSet::SetCellLocator, emscripten::allow_raw_pointers())
    .function("GetCellLocator", &vtkPointSet::GetCellLocator, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkPointSet::GetMTime)
    .function("ComputeBounds", &vtkPointSet::ComputeBounds)
    .function("Squeeze", &vtkPointSet::Squeeze)
    .function("SetPoints", &vtkPointSet::SetPoints, emscripten::allow_raw_pointers())
    .function("GetPoints", &vtkPointSet::GetPoints, emscripten::allow_raw_pointers())
    .function("GetActualMemorySize", &vtkPointSet::GetActualMemorySize)
    .function("ShallowCopy", &vtkPointSet::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkPointSet::DeepCopy, emscripten::allow_raw_pointers())
    .function("UsesGarbageCollector", &vtkPointSet::UsesGarbageCollector)
    .class_function("GetData", emscripten::select_overload<vtkPointSet*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkPointSet* { return vtkPointSet::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkPointSet*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkPointSet* { return vtkPointSet::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
