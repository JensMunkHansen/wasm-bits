// JavaScript wrapper for vtkHexagonalPrism with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHexagonalPrismEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHexagonalPrism.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCell.h"
#include "vtkIdList.h"
#include "vtkPoints.h"
#include "vtkHexagonalPrism.h"

template<> void emscripten::internal::raw_destructor<vtkHexagonalPrism>(vtkHexagonalPrism * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHexagonalPrism_class) {
  emscripten::class_<vtkHexagonalPrism, emscripten::base<vtkCell3D>>("vtkHexagonalPrism")
    .smart_ptr<vtkSmartPointer<vtkHexagonalPrism>>("vtkSmartPointer<vtkHexagonalPrism>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHexagonalPrism>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHexagonalPrism::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHexagonalPrism& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHexagonalPrism::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHexagonalPrism::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHexagonalPrism::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHexagonalPrism& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsInsideOut", &vtkHexagonalPrism::IsInsideOut)
    .function("GetCellType", &vtkHexagonalPrism::GetCellType)
    .function("GetCellDimension", &vtkHexagonalPrism::GetCellDimension)
    .function("GetNumberOfEdges", &vtkHexagonalPrism::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkHexagonalPrism::GetNumberOfFaces)
    .function("GetEdge", &vtkHexagonalPrism::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkHexagonalPrism::GetFace, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkHexagonalPrism::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .class_function("GetEdgeArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkHexagonalPrism::GetEdgeArray( arg_0)) / sizeof(int);}))
    .class_function("GetFaceArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkHexagonalPrism::GetFaceArray( arg_0)) / sizeof(int);}));
}
