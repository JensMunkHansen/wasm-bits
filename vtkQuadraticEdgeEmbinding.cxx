// JavaScript wrapper for vtkQuadraticEdge with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkQuadraticEdgeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkQuadraticEdge.h
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
#include "vtkQuadraticEdge.h"

template<> void emscripten::internal::raw_destructor<vtkQuadraticEdge>(vtkQuadraticEdge * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuadraticEdge_class) {
  emscripten::class_<vtkQuadraticEdge, emscripten::base<vtkNonLinearCell>>("vtkQuadraticEdge")
    .smart_ptr<vtkSmartPointer<vtkQuadraticEdge>>("vtkSmartPointer<vtkQuadraticEdge>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkQuadraticEdge>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticEdge::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuadraticEdge& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuadraticEdge::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuadraticEdge::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticEdge::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuadraticEdge& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkQuadraticEdge::GetCellType)
    .function("GetCellDimension", &vtkQuadraticEdge::GetCellDimension)
    .function("GetNumberOfEdges", &vtkQuadraticEdge::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkQuadraticEdge::GetNumberOfFaces)
    .function("GetEdge", &vtkQuadraticEdge::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkQuadraticEdge::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkQuadraticEdge::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkQuadraticEdge::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("Clip", &vtkQuadraticEdge::Clip, emscripten::allow_raw_pointers());
}
