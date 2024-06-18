// JavaScript wrapper for vtkHigherOrderTetra with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHigherOrderTetraEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHigherOrderTetra.h
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
#include "vtkHigherOrderTetra.h"

template<> void emscripten::internal::raw_destructor<vtkHigherOrderTetra>(vtkHigherOrderTetra * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHigherOrderTetra_class) {
  emscripten::class_<vtkHigherOrderTetra, emscripten::base<vtkNonLinearCell>>("vtkHigherOrderTetra")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHigherOrderTetra::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHigherOrderTetra& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHigherOrderTetra::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHigherOrderTetra::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHigherOrderTetra::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHigherOrderTetra& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellDimension", &vtkHigherOrderTetra::GetCellDimension)
    .function("RequiresInitialization", &vtkHigherOrderTetra::RequiresInitialization)
    .function("GetNumberOfEdges", &vtkHigherOrderTetra::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkHigherOrderTetra::GetNumberOfFaces)
    .function("Initialize", &vtkHigherOrderTetra::Initialize)
    .function("Contour", &vtkHigherOrderTetra::Contour, emscripten::allow_raw_pointers())
    .function("Clip", &vtkHigherOrderTetra::Clip, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkHigherOrderTetra::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("SetParametricCoords", &vtkHigherOrderTetra::SetParametricCoords)
    .function("GetOrder", &vtkHigherOrderTetra::GetOrder)
    .function("ComputeOrder", emscripten::select_overload<int(vtkHigherOrderTetra&)>([](vtkHigherOrderTetra& self) -> int { return self.ComputeOrder(); }))
    .class_function("ComputeOrder", emscripten::select_overload<int( int)>([]( int arg_0) -> int { return vtkHigherOrderTetra::ComputeOrder( arg_0); }))
    .class_function("PointCountSupportsUniformOrder", &vtkHigherOrderTetra::PointCountSupportsUniformOrder)
    .function("ToBarycentricIndex", emscripten::optional_override([](vtkHigherOrderTetra& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.ToBarycentricIndex( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)));}))
    .function("ToIndex", emscripten::optional_override([](vtkHigherOrderTetra& self, std::uintptr_t arg_0) -> int {  return self.ToIndex(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .class_function("BarycentricIndex", emscripten::optional_override([]( int arg_0, std::uintptr_t arg_1, int arg_2) -> void {  return vtkHigherOrderTetra::BarycentricIndex( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)), arg_2);}))
    .class_function("Index", emscripten::optional_override([]( std::uintptr_t arg_0, int arg_1) -> int {  return vtkHigherOrderTetra::Index(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1);}));
}
