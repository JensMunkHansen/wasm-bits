// JavaScript wrapper for vtkGenericCell with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkGenericCellEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkGenericCell.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkIdList.h"
#include "vtkCell.h"
#include "vtkCellArray.h"
#include "vtkDataArray.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkPointData.h"
#include "vtkCellData.h"
#include "vtkGenericCell.h"

template<> void emscripten::internal::raw_destructor<vtkGenericCell>(vtkGenericCell * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericCell_class) {
  emscripten::class_<vtkGenericCell, emscripten::base<vtkCell>>("vtkGenericCell")
    .smart_ptr<vtkSmartPointer<vtkGenericCell>>("vtkSmartPointer<vtkGenericCell>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGenericCell>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericCell::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericCell& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericCell::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericCell::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericCell::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericCell& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPoints", &vtkGenericCell::SetPoints, emscripten::allow_raw_pointers())
    .function("SetPointIds", &vtkGenericCell::SetPointIds, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkGenericCell::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkGenericCell::DeepCopy, emscripten::allow_raw_pointers())
    .function("GetCellType", &vtkGenericCell::GetCellType)
    .function("GetCellDimension", &vtkGenericCell::GetCellDimension)
    .function("IsLinear", &vtkGenericCell::IsLinear)
    .function("RequiresInitialization", &vtkGenericCell::RequiresInitialization)
    .function("Initialize", &vtkGenericCell::Initialize)
    .function("RequiresExplicitFaceRepresentation", &vtkGenericCell::RequiresExplicitFaceRepresentation)
    .function("SetCellFaces", &vtkGenericCell::SetCellFaces, emscripten::allow_raw_pointers())
    .function("GetCellFaces", emscripten::select_overload<vtkCellArray*(vtkGenericCell&)>([](vtkGenericCell& self) -> vtkCellArray* { return self.GetCellFaces(); }), emscripten::allow_raw_pointers())
    .function("GetCellFaces", emscripten::select_overload<void(vtkGenericCell&, vtkCellArray*)>([](vtkGenericCell& self, vtkCellArray* arg_0) -> void { return self.GetCellFaces( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNumberOfEdges", &vtkGenericCell::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkGenericCell::GetNumberOfFaces)
    .function("GetEdge", &vtkGenericCell::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkGenericCell::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkGenericCell::Contour, emscripten::allow_raw_pointers())
    .function("Clip", &vtkGenericCell::Clip, emscripten::allow_raw_pointers())
    .function("Triangulate", &vtkGenericCell::Triangulate, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkGenericCell::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("TriangulateIds", &vtkGenericCell::TriangulateIds, emscripten::allow_raw_pointers())
    .function("IsPrimaryCell", &vtkGenericCell::IsPrimaryCell)
    .function("SetCellType", &vtkGenericCell::SetCellType)
    .function("SetCellTypeToEmptyCell", &vtkGenericCell::SetCellTypeToEmptyCell)
    .function("SetCellTypeToVertex", &vtkGenericCell::SetCellTypeToVertex)
    .function("SetCellTypeToPolyVertex", &vtkGenericCell::SetCellTypeToPolyVertex)
    .function("SetCellTypeToLine", &vtkGenericCell::SetCellTypeToLine)
    .function("SetCellTypeToPolyLine", &vtkGenericCell::SetCellTypeToPolyLine)
    .function("SetCellTypeToTriangle", &vtkGenericCell::SetCellTypeToTriangle)
    .function("SetCellTypeToTriangleStrip", &vtkGenericCell::SetCellTypeToTriangleStrip)
    .function("SetCellTypeToPolygon", &vtkGenericCell::SetCellTypeToPolygon)
    .function("SetCellTypeToPixel", &vtkGenericCell::SetCellTypeToPixel)
    .function("SetCellTypeToQuad", &vtkGenericCell::SetCellTypeToQuad)
    .function("SetCellTypeToTetra", &vtkGenericCell::SetCellTypeToTetra)
    .function("SetCellTypeToVoxel", &vtkGenericCell::SetCellTypeToVoxel)
    .function("SetCellTypeToHexahedron", &vtkGenericCell::SetCellTypeToHexahedron)
    .function("SetCellTypeToWedge", &vtkGenericCell::SetCellTypeToWedge)
    .function("SetCellTypeToPyramid", &vtkGenericCell::SetCellTypeToPyramid)
    .function("SetCellTypeToPentagonalPrism", &vtkGenericCell::SetCellTypeToPentagonalPrism)
    .function("SetCellTypeToHexagonalPrism", &vtkGenericCell::SetCellTypeToHexagonalPrism)
    .function("SetCellTypeToPolyhedron", &vtkGenericCell::SetCellTypeToPolyhedron)
    .function("SetCellTypeToConvexPointSet", &vtkGenericCell::SetCellTypeToConvexPointSet)
    .function("SetCellTypeToQuadraticEdge", &vtkGenericCell::SetCellTypeToQuadraticEdge)
    .function("SetCellTypeToCubicLine", &vtkGenericCell::SetCellTypeToCubicLine)
    .function("SetCellTypeToQuadraticTriangle", &vtkGenericCell::SetCellTypeToQuadraticTriangle)
    .function("SetCellTypeToBiQuadraticTriangle", &vtkGenericCell::SetCellTypeToBiQuadraticTriangle)
    .function("SetCellTypeToQuadraticQuad", &vtkGenericCell::SetCellTypeToQuadraticQuad)
    .function("SetCellTypeToQuadraticPolygon", &vtkGenericCell::SetCellTypeToQuadraticPolygon)
    .function("SetCellTypeToQuadraticTetra", &vtkGenericCell::SetCellTypeToQuadraticTetra)
    .function("SetCellTypeToQuadraticHexahedron", &vtkGenericCell::SetCellTypeToQuadraticHexahedron)
    .function("SetCellTypeToQuadraticWedge", &vtkGenericCell::SetCellTypeToQuadraticWedge)
    .function("SetCellTypeToQuadraticPyramid", &vtkGenericCell::SetCellTypeToQuadraticPyramid)
    .function("SetCellTypeToQuadraticLinearQuad", &vtkGenericCell::SetCellTypeToQuadraticLinearQuad)
    .function("SetCellTypeToBiQuadraticQuad", &vtkGenericCell::SetCellTypeToBiQuadraticQuad)
    .function("SetCellTypeToQuadraticLinearWedge", &vtkGenericCell::SetCellTypeToQuadraticLinearWedge)
    .function("SetCellTypeToBiQuadraticQuadraticWedge", &vtkGenericCell::SetCellTypeToBiQuadraticQuadraticWedge)
    .function("SetCellTypeToTriQuadraticHexahedron", &vtkGenericCell::SetCellTypeToTriQuadraticHexahedron)
    .function("SetCellTypeToTriQuadraticPyramid", &vtkGenericCell::SetCellTypeToTriQuadraticPyramid)
    .function("SetCellTypeToBiQuadraticQuadraticHexahedron", &vtkGenericCell::SetCellTypeToBiQuadraticQuadraticHexahedron)
    .function("SetCellTypeToLagrangeTriangle", &vtkGenericCell::SetCellTypeToLagrangeTriangle)
    .function("SetCellTypeToLagrangeTetra", &vtkGenericCell::SetCellTypeToLagrangeTetra)
    .function("SetCellTypeToLagrangeCurve", &vtkGenericCell::SetCellTypeToLagrangeCurve)
    .function("SetCellTypeToLagrangeQuadrilateral", &vtkGenericCell::SetCellTypeToLagrangeQuadrilateral)
    .function("SetCellTypeToLagrangeHexahedron", &vtkGenericCell::SetCellTypeToLagrangeHexahedron)
    .function("SetCellTypeToLagrangeWedge", &vtkGenericCell::SetCellTypeToLagrangeWedge)
    .function("SetCellTypeToBezierTriangle", &vtkGenericCell::SetCellTypeToBezierTriangle)
    .function("SetCellTypeToBezierTetra", &vtkGenericCell::SetCellTypeToBezierTetra)
    .function("SetCellTypeToBezierCurve", &vtkGenericCell::SetCellTypeToBezierCurve)
    .function("SetCellTypeToBezierQuadrilateral", &vtkGenericCell::SetCellTypeToBezierQuadrilateral)
    .function("SetCellTypeToBezierHexahedron", &vtkGenericCell::SetCellTypeToBezierHexahedron)
    .function("SetCellTypeToBezierWedge", &vtkGenericCell::SetCellTypeToBezierWedge)
    .class_function("InstantiateCell", &vtkGenericCell::InstantiateCell, emscripten::allow_raw_pointers())
    .function("GetRepresentativeCell", &vtkGenericCell::GetRepresentativeCell, emscripten::allow_raw_pointers());
}
