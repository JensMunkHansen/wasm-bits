// JavaScript wrapper for vtkQuad with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkQuadEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkQuad.h
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
#include "vtkQuad.h"

template<> void emscripten::internal::raw_destructor<vtkQuad>(vtkQuad * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuad_class) {
  emscripten::class_<vtkQuad, emscripten::base<vtkCell>>("vtkQuad")
    .smart_ptr<vtkSmartPointer<vtkQuad>>("vtkSmartPointer<vtkQuad>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkQuad>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuad::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuad& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuad::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuad::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuad::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuad& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkQuad::GetCellType)
    .function("GetCellDimension", &vtkQuad::GetCellDimension)
    .function("GetNumberOfEdges", &vtkQuad::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkQuad::GetNumberOfFaces)
    .function("GetEdge", &vtkQuad::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkQuad::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkQuad::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkQuad::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("Clip", &vtkQuad::Clip, emscripten::allow_raw_pointers())
    .function("GetEdgeArray", emscripten::optional_override([](vtkQuad& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetEdgeArray( arg_0)) / sizeof(int);}));
}
