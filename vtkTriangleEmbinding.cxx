// JavaScript wrapper for vtkTriangle with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkTriangleEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkTriangle.h
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
#include "vtkQuadric.h"
#include "vtkTriangle.h"

template<> void emscripten::internal::raw_destructor<vtkTriangle>(vtkTriangle * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTriangle_class) {
  emscripten::class_<vtkTriangle, emscripten::base<vtkCell>>("vtkTriangle")
    .smart_ptr<vtkSmartPointer<vtkTriangle>>("vtkSmartPointer<vtkTriangle>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTriangle>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTriangle::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTriangle& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTriangle::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTriangle::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTriangle::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTriangle& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetEdge", &vtkTriangle::GetEdge, emscripten::allow_raw_pointers())
    .function("GetCellType", &vtkTriangle::GetCellType)
    .function("GetCellDimension", &vtkTriangle::GetCellDimension)
    .function("GetNumberOfEdges", &vtkTriangle::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkTriangle::GetNumberOfFaces)
    .function("GetFace", &vtkTriangle::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkTriangle::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkTriangle::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("ComputeArea", &vtkTriangle::ComputeArea)
    .function("Clip", &vtkTriangle::Clip, emscripten::allow_raw_pointers())
    .function("GetEdgeArray", emscripten::optional_override([](vtkTriangle& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetEdgeArray( arg_0)) / sizeof(int);}));
}
