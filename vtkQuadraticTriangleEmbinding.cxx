// JavaScript wrapper for vtkQuadraticTriangle with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkQuadraticTriangleEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkQuadraticTriangle.h
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
#include "vtkQuadraticTriangle.h"

template<> void emscripten::internal::raw_destructor<vtkQuadraticTriangle>(vtkQuadraticTriangle * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuadraticTriangle_class) {
  emscripten::class_<vtkQuadraticTriangle, emscripten::base<vtkNonLinearCell>>("vtkQuadraticTriangle")
    .smart_ptr<vtkSmartPointer<vtkQuadraticTriangle>>("vtkSmartPointer<vtkQuadraticTriangle>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkQuadraticTriangle>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticTriangle::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuadraticTriangle& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuadraticTriangle::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuadraticTriangle::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticTriangle::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuadraticTriangle& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkQuadraticTriangle::GetCellType)
    .function("GetCellDimension", &vtkQuadraticTriangle::GetCellDimension)
    .function("GetNumberOfEdges", &vtkQuadraticTriangle::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkQuadraticTriangle::GetNumberOfFaces)
    .function("GetEdge", &vtkQuadraticTriangle::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkQuadraticTriangle::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkQuadraticTriangle::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkQuadraticTriangle::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("Clip", &vtkQuadraticTriangle::Clip, emscripten::allow_raw_pointers());
}
