// JavaScript wrapper for vtkHigherOrderTriangle with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHigherOrderTriangleEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHigherOrderTriangle.h
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
#include "vtkHigherOrderCurve.h"
#include "vtkHigherOrderTriangle.h"

template<> void emscripten::internal::raw_destructor<vtkHigherOrderTriangle>(vtkHigherOrderTriangle * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHigherOrderTriangle_class) {
  emscripten::class_<vtkHigherOrderTriangle, emscripten::base<vtkNonLinearCell>>("vtkHigherOrderTriangle")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHigherOrderTriangle::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHigherOrderTriangle& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHigherOrderTriangle::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHigherOrderTriangle::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHigherOrderTriangle::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHigherOrderTriangle& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellDimension", &vtkHigherOrderTriangle::GetCellDimension)
    .function("RequiresInitialization", &vtkHigherOrderTriangle::RequiresInitialization)
    .function("GetNumberOfEdges", &vtkHigherOrderTriangle::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkHigherOrderTriangle::GetNumberOfFaces)
    .function("GetFace", &vtkHigherOrderTriangle::GetFace, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkHigherOrderTriangle::Initialize)
    .function("Contour", &vtkHigherOrderTriangle::Contour, emscripten::allow_raw_pointers())
    .function("Clip", &vtkHigherOrderTriangle::Clip, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkHigherOrderTriangle::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("SetParametricCoords", &vtkHigherOrderTriangle::SetParametricCoords)
    .function("GetOrder", &vtkHigherOrderTriangle::GetOrder)
    .function("ComputeOrder", &vtkHigherOrderTriangle::ComputeOrder)
    .class_function("PointCountSupportsUniformOrder", &vtkHigherOrderTriangle::PointCountSupportsUniformOrder)
    .function("ToBarycentricIndex", emscripten::optional_override([](vtkHigherOrderTriangle& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.ToBarycentricIndex( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)));}))
    .function("ToIndex", emscripten::optional_override([](vtkHigherOrderTriangle& self, std::uintptr_t arg_0) -> int {  return self.ToIndex(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .class_function("BarycentricIndex", emscripten::optional_override([]( int arg_0, std::uintptr_t arg_1, int arg_2) -> void {  return vtkHigherOrderTriangle::BarycentricIndex( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)), arg_2);}))
    .class_function("Index", emscripten::optional_override([]( std::uintptr_t arg_0, int arg_1) -> int {  return vtkHigherOrderTriangle::Index(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1);}))
    .class_function("Eta", &vtkHigherOrderTriangle::Eta)
    .class_function("Deta", &vtkHigherOrderTriangle::Deta);
}
