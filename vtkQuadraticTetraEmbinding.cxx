// JavaScript wrapper for vtkQuadraticTetra with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkQuadraticTetraEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkQuadraticTetra.h
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
#include "vtkQuadraticTetra.h"

template<> void emscripten::internal::raw_destructor<vtkQuadraticTetra>(vtkQuadraticTetra * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuadraticTetra_class) {
  emscripten::class_<vtkQuadraticTetra, emscripten::base<vtkNonLinearCell>>("vtkQuadraticTetra")
    .smart_ptr<vtkSmartPointer<vtkQuadraticTetra>>("vtkSmartPointer<vtkQuadraticTetra>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkQuadraticTetra>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticTetra::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuadraticTetra& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuadraticTetra::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuadraticTetra::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadraticTetra::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuadraticTetra& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkQuadraticTetra::GetCellType)
    .function("GetCellDimension", &vtkQuadraticTetra::GetCellDimension)
    .function("GetNumberOfEdges", &vtkQuadraticTetra::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkQuadraticTetra::GetNumberOfFaces)
    .function("GetEdge", &vtkQuadraticTetra::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkQuadraticTetra::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkQuadraticTetra::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkQuadraticTetra::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("Clip", &vtkQuadraticTetra::Clip, emscripten::allow_raw_pointers())
    .function("StableClip", &vtkQuadraticTetra::StableClip, emscripten::allow_raw_pointers())
    .class_function("GetEdgeArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkQuadraticTetra::GetEdgeArray( arg_0)) / sizeof(int);}))
    .class_function("GetFaceArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkQuadraticTetra::GetFaceArray( arg_0)) / sizeof(int);}));
}
