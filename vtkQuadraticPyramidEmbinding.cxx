// JavaScript wrapper for vtkQuadraticPyramid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkQuadraticPyramidEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkQuadraticPyramid.h
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
#include "vtkQuadraticPyramid.h"

template<> void emscripten::internal::raw_destructor<vtkQuadraticPyramid>(vtkQuadraticPyramid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuadraticPyramid_class) {
  emscripten::class_<vtkQuadraticPyramid, emscripten::base<vtkNonLinearCell>>("vtkQuadraticPyramid")
    .smart_ptr<vtkSmartPointer<vtkQuadraticPyramid>>("vtkSmartPointer<vtkQuadraticPyramid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkQuadraticPyramid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticPyramid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuadraticPyramid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuadraticPyramid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuadraticPyramid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticPyramid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuadraticPyramid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkQuadraticPyramid::GetCellType)
    .function("GetCellDimension", &vtkQuadraticPyramid::GetCellDimension)
    .function("GetNumberOfEdges", &vtkQuadraticPyramid::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkQuadraticPyramid::GetNumberOfFaces)
    .function("GetEdge", &vtkQuadraticPyramid::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkQuadraticPyramid::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkQuadraticPyramid::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkQuadraticPyramid::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("Clip", &vtkQuadraticPyramid::Clip, emscripten::allow_raw_pointers())
    .class_function("GetEdgeArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkQuadraticPyramid::GetEdgeArray( arg_0)) / sizeof(int);}))
    .class_function("GetFaceArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkQuadraticPyramid::GetFaceArray( arg_0)) / sizeof(int);}));
}
