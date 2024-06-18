// JavaScript wrapper for vtkHigherOrderCurve with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHigherOrderCurveEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHigherOrderCurve.h
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

template<> void emscripten::internal::raw_destructor<vtkHigherOrderCurve>(vtkHigherOrderCurve * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHigherOrderCurve_class) {
  emscripten::class_<vtkHigherOrderCurve, emscripten::base<vtkNonLinearCell>>("vtkHigherOrderCurve")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHigherOrderCurve::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHigherOrderCurve& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHigherOrderCurve::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHigherOrderCurve::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHigherOrderCurve::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHigherOrderCurve& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellDimension", &vtkHigherOrderCurve::GetCellDimension)
    .function("RequiresInitialization", &vtkHigherOrderCurve::RequiresInitialization)
    .function("GetNumberOfEdges", &vtkHigherOrderCurve::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkHigherOrderCurve::GetNumberOfFaces)
    .function("GetEdge", &vtkHigherOrderCurve::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkHigherOrderCurve::GetFace, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkHigherOrderCurve::Initialize)
    .function("Contour", &vtkHigherOrderCurve::Contour, emscripten::allow_raw_pointers())
    .function("Clip", &vtkHigherOrderCurve::Clip, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkHigherOrderCurve::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("SetParametricCoords", &vtkHigherOrderCurve::SetParametricCoords)
    .function("GetOrder", emscripten::select_overload<std::uintptr_t(vtkHigherOrderCurve&)>([](vtkHigherOrderCurve& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetOrder()); }))
    .function("GetOrder", emscripten::select_overload<int(vtkHigherOrderCurve&, int)>([](vtkHigherOrderCurve& self, int arg_0) -> int { return self.GetOrder( arg_0); }))
    .class_function("PointCountSupportsUniformOrder", &vtkHigherOrderCurve::PointCountSupportsUniformOrder)
    .function("PointIndexFromIJK", &vtkHigherOrderCurve::PointIndexFromIJK)
    .function("TransformApproxToCellParams", emscripten::optional_override([](vtkHigherOrderCurve& self, int arg_0, std::uintptr_t arg_1) -> bool {  return self.TransformApproxToCellParams( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}));
}
