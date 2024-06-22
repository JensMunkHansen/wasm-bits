// JavaScript wrapper for vtkQuadraticQuad with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkQuadraticQuadEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkQuadraticQuad.h
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
#include "vtkQuadraticQuad.h"

template<> void emscripten::internal::raw_destructor<vtkQuadraticQuad>(vtkQuadraticQuad * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuadraticQuad_class) {
  emscripten::class_<vtkQuadraticQuad, emscripten::base<vtkNonLinearCell>>("vtkQuadraticQuad")
    .smart_ptr<vtkSmartPointer<vtkQuadraticQuad>>("vtkSmartPointer<vtkQuadraticQuad>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkQuadraticQuad>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticQuad::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuadraticQuad& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuadraticQuad::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuadraticQuad::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticQuad::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuadraticQuad& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkQuadraticQuad::GetCellType)
    .function("GetCellDimension", &vtkQuadraticQuad::GetCellDimension)
    .function("GetNumberOfEdges", &vtkQuadraticQuad::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkQuadraticQuad::GetNumberOfFaces)
    .function("GetEdge", &vtkQuadraticQuad::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkQuadraticQuad::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkQuadraticQuad::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkQuadraticQuad::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("Clip", &vtkQuadraticQuad::Clip, emscripten::allow_raw_pointers());
}
