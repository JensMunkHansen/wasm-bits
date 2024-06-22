// JavaScript wrapper for vtkTriQuadraticPyramid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkTriQuadraticPyramidEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkTriQuadraticPyramid.h
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
#include "vtkTriQuadraticPyramid.h"

template<> void emscripten::internal::raw_destructor<vtkTriQuadraticPyramid>(vtkTriQuadraticPyramid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTriQuadraticPyramid_class) {
  emscripten::class_<vtkTriQuadraticPyramid, emscripten::base<vtkNonLinearCell>>("vtkTriQuadraticPyramid")
    .smart_ptr<vtkSmartPointer<vtkTriQuadraticPyramid>>("vtkSmartPointer<vtkTriQuadraticPyramid>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTriQuadraticPyramid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTriQuadraticPyramid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTriQuadraticPyramid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTriQuadraticPyramid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTriQuadraticPyramid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTriQuadraticPyramid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTriQuadraticPyramid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkTriQuadraticPyramid::GetCellType)
    .function("GetCellDimension", &vtkTriQuadraticPyramid::GetCellDimension)
    .function("GetNumberOfEdges", &vtkTriQuadraticPyramid::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkTriQuadraticPyramid::GetNumberOfFaces)
    .function("GetEdge", &vtkTriQuadraticPyramid::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkTriQuadraticPyramid::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkTriQuadraticPyramid::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkTriQuadraticPyramid::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("Clip", &vtkTriQuadraticPyramid::Clip, emscripten::allow_raw_pointers())
    .class_function("GetEdgeArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkTriQuadraticPyramid::GetEdgeArray( arg_0)) / sizeof(int);}))
    .class_function("GetFaceArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkTriQuadraticPyramid::GetFaceArray( arg_0)) / sizeof(int);}));
}
