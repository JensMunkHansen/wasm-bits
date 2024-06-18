// JavaScript wrapper for vtkHigherOrderQuadrilateral with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHigherOrderQuadrilateralEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHigherOrderQuadrilateral.h
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
#include "vtkHigherOrderCurve.h"
#include "vtkHigherOrderQuadrilateral.h"

template<> void emscripten::internal::raw_destructor<vtkHigherOrderQuadrilateral>(vtkHigherOrderQuadrilateral * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHigherOrderQuadrilateral_class) {
  emscripten::class_<vtkHigherOrderQuadrilateral, emscripten::base<vtkNonLinearCell>>("vtkHigherOrderQuadrilateral")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHigherOrderQuadrilateral::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHigherOrderQuadrilateral& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHigherOrderQuadrilateral::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHigherOrderQuadrilateral::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHigherOrderQuadrilateral::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHigherOrderQuadrilateral& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellDimension", &vtkHigherOrderQuadrilateral::GetCellDimension)
    .function("RequiresInitialization", &vtkHigherOrderQuadrilateral::RequiresInitialization)
    .function("GetNumberOfEdges", &vtkHigherOrderQuadrilateral::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkHigherOrderQuadrilateral::GetNumberOfFaces)
    .function("GetFace", &vtkHigherOrderQuadrilateral::GetFace, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkHigherOrderQuadrilateral::Initialize)
    .function("Contour", &vtkHigherOrderQuadrilateral::Contour, emscripten::allow_raw_pointers())
    .function("Clip", &vtkHigherOrderQuadrilateral::Clip, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkHigherOrderQuadrilateral::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("SetParametricCoords", &vtkHigherOrderQuadrilateral::SetParametricCoords)
    .function("SetOrderFromCellData", emscripten::select_overload<void(vtkHigherOrderQuadrilateral&, vtkCellData*, int, int)>([](vtkHigherOrderQuadrilateral& self, vtkCellData* arg_0, int arg_1, int arg_2) -> void { return self.SetOrderFromCellData( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("SetOrderFromCellData", emscripten::select_overload<void( vtkCellData*, int, int, std::uintptr_t)>([]( vtkCellData* arg_0, int arg_1, int arg_2, std::uintptr_t arg_3) -> void { return vtkHigherOrderQuadrilateral::SetOrderFromCellData( arg_0, arg_1, arg_2,reinterpret_cast<int*>(arg_3 * sizeof(int))); }), emscripten::allow_raw_pointers())
    .function("SetUniformOrderFromNumPoints", &vtkHigherOrderQuadrilateral::SetUniformOrderFromNumPoints)
    .function("SetOrder", &vtkHigherOrderQuadrilateral::SetOrder)
    .function("GetOrder", emscripten::select_overload<std::uintptr_t(vtkHigherOrderQuadrilateral&)>([](vtkHigherOrderQuadrilateral& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetOrder()); }))
    .function("GetOrder", emscripten::select_overload<int(vtkHigherOrderQuadrilateral&, int)>([](vtkHigherOrderQuadrilateral& self, int arg_0) -> int { return self.GetOrder( arg_0); }))
    .class_function("PointCountSupportsUniformOrder", &vtkHigherOrderQuadrilateral::PointCountSupportsUniformOrder)
    .function("PointIndexFromIJK", emscripten::select_overload<int(vtkHigherOrderQuadrilateral&, int, int, int)>([](vtkHigherOrderQuadrilateral& self, int arg_0, int arg_1, int arg_2) -> int { return self.PointIndexFromIJK( arg_0, arg_1, arg_2); }))
    .class_function("PointIndexFromIJK", emscripten::select_overload<int( int, int, std::uintptr_t)>([]( int arg_0, int arg_1, std::uintptr_t arg_2) -> int { return vtkHigherOrderQuadrilateral::PointIndexFromIJK( arg_0, arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int))); }))
    .function("TransformApproxToCellParams", emscripten::optional_override([](vtkHigherOrderQuadrilateral& self, int arg_0, std::uintptr_t arg_1) -> bool {  return self.TransformApproxToCellParams( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}));
}
