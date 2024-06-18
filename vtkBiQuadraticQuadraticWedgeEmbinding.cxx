// JavaScript wrapper for vtkBiQuadraticQuadraticWedge with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkBiQuadraticQuadraticWedgeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkBiQuadraticQuadraticWedge.h
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
#include "vtkBiQuadraticQuadraticWedge.h"

template<> void emscripten::internal::raw_destructor<vtkBiQuadraticQuadraticWedge>(vtkBiQuadraticQuadraticWedge * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBiQuadraticQuadraticWedge_class) {
  emscripten::class_<vtkBiQuadraticQuadraticWedge, emscripten::base<vtkNonLinearCell>>("vtkBiQuadraticQuadraticWedge")
    .smart_ptr<vtkSmartPointer<vtkBiQuadraticQuadraticWedge>>("vtkSmartPointer<vtkBiQuadraticQuadraticWedge>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBiQuadraticQuadraticWedge>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBiQuadraticQuadraticWedge::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBiQuadraticQuadraticWedge& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBiQuadraticQuadraticWedge::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBiQuadraticQuadraticWedge::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBiQuadraticQuadraticWedge::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBiQuadraticQuadraticWedge& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkBiQuadraticQuadraticWedge::GetCellType)
    .function("GetCellDimension", &vtkBiQuadraticQuadraticWedge::GetCellDimension)
    .function("GetNumberOfEdges", &vtkBiQuadraticQuadraticWedge::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkBiQuadraticQuadraticWedge::GetNumberOfFaces)
    .function("GetEdge", &vtkBiQuadraticQuadraticWedge::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkBiQuadraticQuadraticWedge::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkBiQuadraticQuadraticWedge::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkBiQuadraticQuadraticWedge::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("Clip", &vtkBiQuadraticQuadraticWedge::Clip, emscripten::allow_raw_pointers())
    .class_function("GetEdgeArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkBiQuadraticQuadraticWedge::GetEdgeArray( arg_0)) / sizeof(int);}))
    .class_function("GetFaceArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkBiQuadraticQuadraticWedge::GetFaceArray( arg_0)) / sizeof(int);}));
}
