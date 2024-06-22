// JavaScript wrapper for vtkQuadraticLinearWedge with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkQuadraticLinearWedgeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkQuadraticLinearWedge.h
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
#include "vtkQuadraticLinearWedge.h"

template<> void emscripten::internal::raw_destructor<vtkQuadraticLinearWedge>(vtkQuadraticLinearWedge * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuadraticLinearWedge_class) {
  emscripten::class_<vtkQuadraticLinearWedge, emscripten::base<vtkNonLinearCell>>("vtkQuadraticLinearWedge")
    .smart_ptr<vtkSmartPointer<vtkQuadraticLinearWedge>>("vtkSmartPointer<vtkQuadraticLinearWedge>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkQuadraticLinearWedge>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticLinearWedge::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuadraticLinearWedge& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuadraticLinearWedge::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuadraticLinearWedge::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticLinearWedge::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuadraticLinearWedge& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkQuadraticLinearWedge::GetCellType)
    .function("GetCellDimension", &vtkQuadraticLinearWedge::GetCellDimension)
    .function("GetNumberOfEdges", &vtkQuadraticLinearWedge::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkQuadraticLinearWedge::GetNumberOfFaces)
    .function("GetEdge", &vtkQuadraticLinearWedge::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkQuadraticLinearWedge::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkQuadraticLinearWedge::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkQuadraticLinearWedge::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("Clip", &vtkQuadraticLinearWedge::Clip, emscripten::allow_raw_pointers())
    .class_function("GetEdgeArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkQuadraticLinearWedge::GetEdgeArray( arg_0)) / sizeof(int);}))
    .class_function("GetFaceArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkQuadraticLinearWedge::GetFaceArray( arg_0)) / sizeof(int);}));
}
