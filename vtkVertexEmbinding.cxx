// JavaScript wrapper for vtkVertex with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkVertexEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkVertex.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCell.h"
#include "vtkDataArray.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkCellArray.h"
#include "vtkPointData.h"
#include "vtkCellData.h"
#include "vtkIdList.h"
#include "vtkVertex.h"

template<> void emscripten::internal::raw_destructor<vtkVertex>(vtkVertex * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVertex_class) {
  emscripten::class_<vtkVertex, emscripten::base<vtkCell>>("vtkVertex")
    .smart_ptr<vtkSmartPointer<vtkVertex>>("vtkSmartPointer<vtkVertex>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkVertex>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVertex::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVertex& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVertex::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVertex::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVertex::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVertex& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkVertex::GetCellType)
    .function("GetCellDimension", &vtkVertex::GetCellDimension)
    .function("GetNumberOfEdges", &vtkVertex::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkVertex::GetNumberOfFaces)
    .function("GetEdge", &vtkVertex::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkVertex::GetFace, emscripten::allow_raw_pointers())
    .function("Clip", &vtkVertex::Clip, emscripten::allow_raw_pointers())
    .function("Inflate", &vtkVertex::Inflate)
    .function("Contour", &vtkVertex::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkVertex::TriangulateLocalIds, emscripten::allow_raw_pointers());
}
