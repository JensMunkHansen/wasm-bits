// JavaScript wrapper for vtkQuadraticPolygon with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkQuadraticPolygonEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkQuadraticPolygon.h
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
#include "vtkIdTypeArray.h"
#include "vtkPoints.h"
#include "vtkQuadraticPolygon.h"

template<> void emscripten::internal::raw_destructor<vtkQuadraticPolygon>(vtkQuadraticPolygon * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuadraticPolygon_class) {
  emscripten::class_<vtkQuadraticPolygon, emscripten::base<vtkNonLinearCell>>("vtkQuadraticPolygon")
    .smart_ptr<vtkSmartPointer<vtkQuadraticPolygon>>("vtkSmartPointer<vtkQuadraticPolygon>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkQuadraticPolygon>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticPolygon::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuadraticPolygon& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuadraticPolygon::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuadraticPolygon::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticPolygon::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuadraticPolygon& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkQuadraticPolygon::GetCellType)
    .function("GetCellDimension", &vtkQuadraticPolygon::GetCellDimension)
    .function("GetNumberOfEdges", &vtkQuadraticPolygon::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkQuadraticPolygon::GetNumberOfFaces)
    .function("GetEdge", &vtkQuadraticPolygon::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkQuadraticPolygon::GetFace, emscripten::allow_raw_pointers())
    .function("IsPrimaryCell", &vtkQuadraticPolygon::IsPrimaryCell)
    .function("Contour", &vtkQuadraticPolygon::Contour, emscripten::allow_raw_pointers())
    .function("Clip", &vtkQuadraticPolygon::Clip, emscripten::allow_raw_pointers())
    .function("Triangulate", emscripten::select_overload<int(vtkQuadraticPolygon&, int, vtkIdList*, vtkPoints*)>([](vtkQuadraticPolygon& self, int arg_0, vtkIdList* arg_1, vtkPoints* arg_2) -> int { return self.Triangulate( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkQuadraticPolygon::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("NonDegenerateTriangulate", &vtkQuadraticPolygon::NonDegenerateTriangulate, emscripten::allow_raw_pointers())
    .function("GetUseMVCInterpolation", &vtkQuadraticPolygon::GetUseMVCInterpolation)
    .function("SetUseMVCInterpolation", &vtkQuadraticPolygon::SetUseMVCInterpolation);
}
