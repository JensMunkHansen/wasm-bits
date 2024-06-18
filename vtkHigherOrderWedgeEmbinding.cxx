// JavaScript wrapper for vtkHigherOrderWedge with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHigherOrderWedgeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHigherOrderWedge.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCell.h"
#include "vtkIdList.h"
#include "vtkDataArray.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkCellArray.h"
#include "vtkPointData.h"
#include "vtkCellData.h"
#include "vtkVector.h"
#include "vtkHigherOrderQuadrilateral.h"
#include "vtkHigherOrderTriangle.h"
#include "vtkHigherOrderCurve.h"
#include "vtkHigherOrderInterpolation.h"
#include "vtkHigherOrderWedge.h"

template<> void emscripten::internal::raw_destructor<vtkHigherOrderWedge>(vtkHigherOrderWedge * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHigherOrderWedge_class) {
  emscripten::class_<vtkHigherOrderWedge, emscripten::base<vtkNonLinearCell>>("vtkHigherOrderWedge")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHigherOrderWedge::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHigherOrderWedge& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHigherOrderWedge::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHigherOrderWedge::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHigherOrderWedge::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHigherOrderWedge& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellDimension", &vtkHigherOrderWedge::GetCellDimension)
    .function("RequiresInitialization", &vtkHigherOrderWedge::RequiresInitialization)
    .function("GetNumberOfEdges", &vtkHigherOrderWedge::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkHigherOrderWedge::GetNumberOfFaces)
    .function("Initialize", &vtkHigherOrderWedge::Initialize)
    .function("Contour", &vtkHigherOrderWedge::Contour, emscripten::allow_raw_pointers())
    .function("Clip", &vtkHigherOrderWedge::Clip, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkHigherOrderWedge::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("SetParametricCoords", &vtkHigherOrderWedge::SetParametricCoords)
    .function("SetOrderFromCellData", emscripten::select_overload<void(vtkHigherOrderWedge&, vtkCellData*, int, int)>([](vtkHigherOrderWedge& self, vtkCellData* arg_0, int arg_1, int arg_2) -> void { return self.SetOrderFromCellData( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("SetOrderFromCellData", emscripten::select_overload<void( vtkCellData*, int, int, std::uintptr_t)>([]( vtkCellData* arg_0, int arg_1, int arg_2, std::uintptr_t arg_3) -> void { return vtkHigherOrderWedge::SetOrderFromCellData( arg_0, arg_1, arg_2,reinterpret_cast<int*>(arg_3 * sizeof(int))); }), emscripten::allow_raw_pointers())
    .function("SetUniformOrderFromNumPoints", &vtkHigherOrderWedge::SetUniformOrderFromNumPoints)
    .function("SetOrder", &vtkHigherOrderWedge::SetOrder)
    .function("GetOrder", emscripten::select_overload<std::uintptr_t(vtkHigherOrderWedge&)>([](vtkHigherOrderWedge& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetOrder()); }))
    .function("GetOrder", emscripten::select_overload<int(vtkHigherOrderWedge&, int)>([](vtkHigherOrderWedge& self, int arg_0) -> int { return self.GetOrder( arg_0); }))
    .class_function("PointCountSupportsUniformOrder", &vtkHigherOrderWedge::PointCountSupportsUniformOrder)
    .class_function("PointIndexFromIJK", emscripten::select_overload<int( int, int, int, std::uintptr_t)>([]( int arg_0, int arg_1, int arg_2, std::uintptr_t arg_3) -> int { return vtkHigherOrderWedge::PointIndexFromIJK( arg_0, arg_1, arg_2,reinterpret_cast<int*>(arg_3 * sizeof(int))); }))
    .function("PointIndexFromIJK", emscripten::select_overload<int(vtkHigherOrderWedge&, int, int, int)>([](vtkHigherOrderWedge& self, int arg_0, int arg_1, int arg_2) -> int { return self.PointIndexFromIJK( arg_0, arg_1, arg_2); }))
    .function("TransformApproxToCellParams", emscripten::optional_override([](vtkHigherOrderWedge& self, int arg_0, std::uintptr_t arg_1) -> bool {  return self.TransformApproxToCellParams( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("TransformFaceToCellParams", emscripten::optional_override([](vtkHigherOrderWedge& self, int arg_0, std::uintptr_t arg_1) -> bool {  return self.TransformFaceToCellParams( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .class_function("GetNumberOfApproximatingWedges", emscripten::select_overload<int( std::uintptr_t)>([]( std::uintptr_t arg_0) -> int { return vtkHigherOrderWedge::GetNumberOfApproximatingWedges(reinterpret_cast<int*>(arg_0 * sizeof(int))); }))
    .function("GetNumberOfApproximatingWedges", emscripten::select_overload<int(vtkHigherOrderWedge&)>([](vtkHigherOrderWedge& self) -> int { return self.GetNumberOfApproximatingWedges(); }));
}
