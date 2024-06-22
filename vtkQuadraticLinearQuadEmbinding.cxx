// JavaScript wrapper for vtkQuadraticLinearQuad with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkQuadraticLinearQuadEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkQuadraticLinearQuad.h
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
#include "vtkQuadraticLinearQuad.h"

template<> void emscripten::internal::raw_destructor<vtkQuadraticLinearQuad>(vtkQuadraticLinearQuad * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuadraticLinearQuad_class) {
  emscripten::class_<vtkQuadraticLinearQuad, emscripten::base<vtkNonLinearCell>>("vtkQuadraticLinearQuad")
    .smart_ptr<vtkSmartPointer<vtkQuadraticLinearQuad>>("vtkSmartPointer<vtkQuadraticLinearQuad>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkQuadraticLinearQuad>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticLinearQuad::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuadraticLinearQuad& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuadraticLinearQuad::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuadraticLinearQuad::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticLinearQuad::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuadraticLinearQuad& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkQuadraticLinearQuad::GetCellType)
    .function("GetCellDimension", &vtkQuadraticLinearQuad::GetCellDimension)
    .function("GetNumberOfEdges", &vtkQuadraticLinearQuad::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkQuadraticLinearQuad::GetNumberOfFaces)
    .function("GetEdge", &vtkQuadraticLinearQuad::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkQuadraticLinearQuad::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkQuadraticLinearQuad::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkQuadraticLinearQuad::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("Clip", &vtkQuadraticLinearQuad::Clip, emscripten::allow_raw_pointers())
    .class_function("GetEdgeArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkQuadraticLinearQuad::GetEdgeArray( arg_0)) / sizeof(int);}));
}
