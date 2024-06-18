// JavaScript wrapper for vtkPentagonalPrism with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPentagonalPrismEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPentagonalPrism.h
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
#include "vtkPentagonalPrism.h"

template<> void emscripten::internal::raw_destructor<vtkPentagonalPrism>(vtkPentagonalPrism * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPentagonalPrism_class) {
  emscripten::class_<vtkPentagonalPrism, emscripten::base<vtkCell3D>>("vtkPentagonalPrism")
    .smart_ptr<vtkSmartPointer<vtkPentagonalPrism>>("vtkSmartPointer<vtkPentagonalPrism>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPentagonalPrism>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPentagonalPrism::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPentagonalPrism& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPentagonalPrism::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPentagonalPrism::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPentagonalPrism::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPentagonalPrism& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsInsideOut", &vtkPentagonalPrism::IsInsideOut)
    .function("GetCellType", &vtkPentagonalPrism::GetCellType)
    .function("GetCellDimension", &vtkPentagonalPrism::GetCellDimension)
    .function("GetNumberOfEdges", &vtkPentagonalPrism::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkPentagonalPrism::GetNumberOfFaces)
    .function("GetEdge", &vtkPentagonalPrism::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkPentagonalPrism::GetFace, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkPentagonalPrism::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .class_function("GetEdgeArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkPentagonalPrism::GetEdgeArray( arg_0)) / sizeof(int);}))
    .class_function("GetFaceArray", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkPentagonalPrism::GetFaceArray( arg_0)) / sizeof(int);}));
}
