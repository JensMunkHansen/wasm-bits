// JavaScript wrapper for vtkWedge with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkWedgeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkWedge.h
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
#include "vtkPoints.h"
#include "vtkWedge.h"

template<> void emscripten::internal::raw_destructor<vtkWedge>(vtkWedge * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWedge_class) {
  emscripten::class_<vtkWedge, emscripten::base<vtkCell3D>>("vtkWedge")
    .smart_ptr<vtkSmartPointer<vtkWedge>>("vtkSmartPointer<vtkWedge>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkWedge>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWedge::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWedge& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWedge::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWedge::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWedge::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWedge& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsInsideOut", &vtkWedge::IsInsideOut)
    .function("GetCellType", &vtkWedge::GetCellType)
    .function("GetCellDimension", &vtkWedge::GetCellDimension)
    .function("GetNumberOfEdges", &vtkWedge::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkWedge::GetNumberOfFaces)
    .function("GetEdge", &vtkWedge::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkWedge::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkWedge::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkWedge::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .class_function("GetTriangleCases", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkWedge::GetTriangleCases( arg_0)) / sizeof(int);}));
}
