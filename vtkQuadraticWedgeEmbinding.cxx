// JavaScript wrapper for vtkQuadraticWedge with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkQuadraticWedgeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkQuadraticWedge.h
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
#include "vtkQuadraticWedge.h"

template<> void emscripten::internal::raw_destructor<vtkQuadraticWedge>(vtkQuadraticWedge * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuadraticWedge_class) {
  emscripten::class_<vtkQuadraticWedge, emscripten::base<vtkNonLinearCell>>("vtkQuadraticWedge")
    .smart_ptr<vtkSmartPointer<vtkQuadraticWedge>>("vtkSmartPointer<vtkQuadraticWedge>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkQuadraticWedge>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticWedge::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuadraticWedge& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuadraticWedge::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuadraticWedge::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticWedge::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuadraticWedge& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkQuadraticWedge::GetCellType)
    .function("GetCellDimension", &vtkQuadraticWedge::GetCellDimension)
    .function("GetNumberOfEdges", &vtkQuadraticWedge::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkQuadraticWedge::GetNumberOfFaces)
    .function("GetEdge", &vtkQuadraticWedge::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkQuadraticWedge::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkQuadraticWedge::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkQuadraticWedge::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("Clip", &vtkQuadraticWedge::Clip, emscripten::allow_raw_pointers())
    .class_function("GetEdgeArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkQuadraticWedge::GetEdgeArray( arg_0)) / sizeof(int);}))
    .class_function("GetFaceArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkQuadraticWedge::GetFaceArray( arg_0)) / sizeof(int);}));
}
