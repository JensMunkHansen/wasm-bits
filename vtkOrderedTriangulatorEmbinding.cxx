// JavaScript wrapper for vtkOrderedTriangulator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkOrderedTriangulatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkOrderedTriangulator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGrid.h"
#include "vtkCellArray.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkPointData.h"
#include "vtkCellData.h"
#include "vtkIdList.h"
#include "vtkPoints.h"
#include "vtkTetra.h"
#include "vtkDataArray.h"
#include "vtkDoubleArray.h"
#include "vtkOrderedTriangulator.h"

template<> void emscripten::internal::raw_destructor<vtkOrderedTriangulator>(vtkOrderedTriangulator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOrderedTriangulator_class) {
  emscripten::class_<vtkOrderedTriangulator, emscripten::base<vtkObject>>("vtkOrderedTriangulator")
    .smart_ptr<vtkSmartPointer<vtkOrderedTriangulator>>("vtkSmartPointer<vtkOrderedTriangulator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOrderedTriangulator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOrderedTriangulator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOrderedTriangulator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOrderedTriangulator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOrderedTriangulator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOrderedTriangulator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOrderedTriangulator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("InitTriangulation", emscripten::select_overload<void(vtkOrderedTriangulator&, double, double, double, double, double, double, int)>([](vtkOrderedTriangulator& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5, int arg_6) -> void { return self.InitTriangulation( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6); }))
    .function("Triangulate", &vtkOrderedTriangulator::Triangulate)
    .function("TemplateTriangulate", &vtkOrderedTriangulator::TemplateTriangulate)
    .function("UpdatePointType", &vtkOrderedTriangulator::UpdatePointType)
    .function("GetPointPosition", emscripten::optional_override([](vtkOrderedTriangulator& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPointPosition( arg_0)) / sizeof(double);}))
    .function("GetPointLocation", emscripten::optional_override([](vtkOrderedTriangulator& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPointLocation( arg_0)) / sizeof(double);}))
    .function("GetPointId", &vtkOrderedTriangulator::GetPointId)
    .function("GetNumberOfPoints", &vtkOrderedTriangulator::GetNumberOfPoints)
    .function("SetUseTemplates", &vtkOrderedTriangulator::SetUseTemplates)
    .function("GetUseTemplates", &vtkOrderedTriangulator::GetUseTemplates)
    .function("UseTemplatesOn", &vtkOrderedTriangulator::UseTemplatesOn)
    .function("UseTemplatesOff", &vtkOrderedTriangulator::UseTemplatesOff)
    .function("SetPreSorted", &vtkOrderedTriangulator::SetPreSorted)
    .function("GetPreSorted", &vtkOrderedTriangulator::GetPreSorted)
    .function("PreSortedOn", &vtkOrderedTriangulator::PreSortedOn)
    .function("PreSortedOff", &vtkOrderedTriangulator::PreSortedOff)
    .function("SetUseTwoSortIds", &vtkOrderedTriangulator::SetUseTwoSortIds)
    .function("GetUseTwoSortIds", &vtkOrderedTriangulator::GetUseTwoSortIds)
    .function("UseTwoSortIdsOn", &vtkOrderedTriangulator::UseTwoSortIdsOn)
    .function("UseTwoSortIdsOff", &vtkOrderedTriangulator::UseTwoSortIdsOff)
    .function("GetTetras", &vtkOrderedTriangulator::GetTetras, emscripten::allow_raw_pointers())
    .function("AddTetras", emscripten::select_overload<int(vtkOrderedTriangulator&, int, vtkUnstructuredGrid*)>([](vtkOrderedTriangulator& self, int arg_0, vtkUnstructuredGrid* arg_1) -> int { return self.AddTetras( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddTetras", emscripten::select_overload<int(vtkOrderedTriangulator&, int, vtkCellArray*)>([](vtkOrderedTriangulator& self, int arg_0, vtkCellArray* arg_1) -> int { return self.AddTetras( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddTetras", emscripten::select_overload<int(vtkOrderedTriangulator&, int, vtkIdList*)>([](vtkOrderedTriangulator& self, int arg_0, vtkIdList* arg_1) -> int { return self.AddTetras( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddTetras", emscripten::select_overload<int(vtkOrderedTriangulator&, int, vtkIncrementalPointLocator*, vtkCellArray*, vtkPointData*, vtkPointData*, vtkCellData*, int, vtkCellData*)>([](vtkOrderedTriangulator& self, int arg_0, vtkIncrementalPointLocator* arg_1, vtkCellArray* arg_2, vtkPointData* arg_3, vtkPointData* arg_4, vtkCellData* arg_5, int arg_6, vtkCellData* arg_7) -> int { return self.AddTetras( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7); }), emscripten::allow_raw_pointers())
    .function("AddTetras", emscripten::select_overload<int(vtkOrderedTriangulator&, int, vtkIdList*, vtkPoints*)>([](vtkOrderedTriangulator& self, int arg_0, vtkIdList* arg_1, vtkPoints* arg_2) -> int { return self.AddTetras( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("AddTriangles", emscripten::select_overload<int(vtkOrderedTriangulator&, vtkCellArray*)>([](vtkOrderedTriangulator& self, vtkCellArray* arg_0) -> int { return self.AddTriangles( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddTriangles", emscripten::select_overload<int(vtkOrderedTriangulator&, int, vtkCellArray*)>([](vtkOrderedTriangulator& self, int arg_0, vtkCellArray* arg_1) -> int { return self.AddTriangles( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("InitTetraTraversal", &vtkOrderedTriangulator::InitTetraTraversal)
    .function("GetNextTetra", &vtkOrderedTriangulator::GetNextTetra, emscripten::allow_raw_pointers());
}
