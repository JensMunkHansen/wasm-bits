// JavaScript wrapper for vtkDataSetEdgeSubdivisionCriterion with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkDataSetEdgeSubdivisionCriterionEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkDataSetEdgeSubdivisionCriterion.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkCell.h"
#include "vtkDataSetEdgeSubdivisionCriterion.h"

template<> void emscripten::internal::raw_destructor<vtkDataSetEdgeSubdivisionCriterion>(vtkDataSetEdgeSubdivisionCriterion * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataSetEdgeSubdivisionCriterion_class) {
  emscripten::class_<vtkDataSetEdgeSubdivisionCriterion, emscripten::base<vtkEdgeSubdivisionCriterion>>("vtkDataSetEdgeSubdivisionCriterion")
    .smart_ptr<vtkSmartPointer<vtkDataSetEdgeSubdivisionCriterion>>("vtkSmartPointer<vtkDataSetEdgeSubdivisionCriterion>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDataSetEdgeSubdivisionCriterion>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetEdgeSubdivisionCriterion::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataSetEdgeSubdivisionCriterion& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataSetEdgeSubdivisionCriterion::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataSetEdgeSubdivisionCriterion::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetEdgeSubdivisionCriterion::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataSetEdgeSubdivisionCriterion& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMesh", &vtkDataSetEdgeSubdivisionCriterion::SetMesh, emscripten::allow_raw_pointers())
    .function("GetMesh", emscripten::select_overload<vtkDataSet*(vtkDataSetEdgeSubdivisionCriterion&)>([](vtkDataSetEdgeSubdivisionCriterion& self) -> vtkDataSet* { return self.GetMesh(); }), emscripten::allow_raw_pointers())
    .function("GetMesh", emscripten::select_overload<vtkDataSet*(vtkDataSetEdgeSubdivisionCriterion&)>([](vtkDataSetEdgeSubdivisionCriterion& self) -> vtkDataSet* { return self.GetMesh(); }), emscripten::allow_raw_pointers())
    .function("SetCellId", &vtkDataSetEdgeSubdivisionCriterion::SetCellId)
    .function("GetCellId", emscripten::select_overload<int(vtkDataSetEdgeSubdivisionCriterion&)>([](vtkDataSetEdgeSubdivisionCriterion& self) -> int { return self.GetCellId(); }))
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkDataSetEdgeSubdivisionCriterion&)>([](vtkDataSetEdgeSubdivisionCriterion& self) -> vtkCell* { return self.GetCell(); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkDataSetEdgeSubdivisionCriterion&)>([](vtkDataSetEdgeSubdivisionCriterion& self) -> vtkCell* { return self.GetCell(); }), emscripten::allow_raw_pointers())
    .function("EvaluateLocationAndFields", emscripten::optional_override([](vtkDataSetEdgeSubdivisionCriterion& self, std::uintptr_t arg_0, int arg_1) -> bool {  return self.EvaluateLocationAndFields(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1);}))
    .function("EvaluateFields", emscripten::optional_override([](vtkDataSetEdgeSubdivisionCriterion& self, std::uintptr_t arg_0, std::uintptr_t arg_1, int arg_2) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.EvaluateFields(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)), arg_2)) / sizeof(double);}))
    .function("EvaluatePointDataField", emscripten::optional_override([](vtkDataSetEdgeSubdivisionCriterion& self, std::uintptr_t arg_0, std::uintptr_t arg_1, int arg_2) -> void {  return self.EvaluatePointDataField(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)), arg_2);}))
    .function("EvaluateCellDataField", emscripten::optional_override([](vtkDataSetEdgeSubdivisionCriterion& self, std::uintptr_t arg_0, std::uintptr_t arg_1, int arg_2) -> void {  return self.EvaluateCellDataField(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)), arg_2);}))
    .function("SetChordError2", &vtkDataSetEdgeSubdivisionCriterion::SetChordError2)
    .function("GetChordError2", &vtkDataSetEdgeSubdivisionCriterion::GetChordError2)
    .function("SetFieldError2", &vtkDataSetEdgeSubdivisionCriterion::SetFieldError2)
    .function("GetFieldError2", &vtkDataSetEdgeSubdivisionCriterion::GetFieldError2)
    .function("ResetFieldError2", &vtkDataSetEdgeSubdivisionCriterion::ResetFieldError2)
    .function("GetActiveFieldCriteria", emscripten::select_overload<int(vtkDataSetEdgeSubdivisionCriterion&)>([](vtkDataSetEdgeSubdivisionCriterion& self) -> int { return self.GetActiveFieldCriteria(); }))
    .function("GetActiveFieldCriteria", emscripten::select_overload<int(vtkDataSetEdgeSubdivisionCriterion&)>([](vtkDataSetEdgeSubdivisionCriterion& self) -> int { return self.GetActiveFieldCriteria(); }));
}
