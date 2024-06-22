// JavaScript wrapper for vtkBiQuadraticQuad with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkBiQuadraticQuadEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkBiQuadraticQuad.h
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
#include "vtkBiQuadraticQuad.h"

template<> void emscripten::internal::raw_destructor<vtkBiQuadraticQuad>(vtkBiQuadraticQuad * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBiQuadraticQuad_class) {
  emscripten::class_<vtkBiQuadraticQuad, emscripten::base<vtkNonLinearCell>>("vtkBiQuadraticQuad")
    .smart_ptr<vtkSmartPointer<vtkBiQuadraticQuad>>("vtkSmartPointer<vtkBiQuadraticQuad>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBiQuadraticQuad>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBiQuadraticQuad::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBiQuadraticQuad& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBiQuadraticQuad::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBiQuadraticQuad::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBiQuadraticQuad::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBiQuadraticQuad& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkBiQuadraticQuad::GetCellType)
    .function("GetCellDimension", &vtkBiQuadraticQuad::GetCellDimension)
    .function("GetNumberOfEdges", &vtkBiQuadraticQuad::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkBiQuadraticQuad::GetNumberOfFaces)
    .function("GetEdge", &vtkBiQuadraticQuad::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkBiQuadraticQuad::GetFace, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkBiQuadraticQuad::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("Contour", &vtkBiQuadraticQuad::Contour, emscripten::allow_raw_pointers())
    .function("Clip", &vtkBiQuadraticQuad::Clip, emscripten::allow_raw_pointers());
}
