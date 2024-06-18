// JavaScript wrapper for vtkHigherOrderHexahedron with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHigherOrderHexahedronEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHigherOrderHexahedron.h
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
#include "vtkVector.h"
#include "vtkHigherOrderCurve.h"
#include "vtkHigherOrderQuadrilateral.h"
#include "vtkHigherOrderInterpolation.h"
#include "vtkHigherOrderHexahedron.h"

template<> void emscripten::internal::raw_destructor<vtkHigherOrderHexahedron>(vtkHigherOrderHexahedron * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHigherOrderHexahedron_class) {
  emscripten::class_<vtkHigherOrderHexahedron, emscripten::base<vtkNonLinearCell>>("vtkHigherOrderHexahedron")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHigherOrderHexahedron::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHigherOrderHexahedron& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHigherOrderHexahedron::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHigherOrderHexahedron::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHigherOrderHexahedron::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHigherOrderHexahedron& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellDimension", &vtkHigherOrderHexahedron::GetCellDimension)
    .function("RequiresInitialization", &vtkHigherOrderHexahedron::RequiresInitialization)
    .function("GetNumberOfEdges", &vtkHigherOrderHexahedron::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkHigherOrderHexahedron::GetNumberOfFaces)
    .function("Initialize", &vtkHigherOrderHexahedron::Initialize)
    .function("Contour", &vtkHigherOrderHexahedron::Contour, emscripten::allow_raw_pointers())
    .function("Clip", &vtkHigherOrderHexahedron::Clip, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkHigherOrderHexahedron::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("SetParametricCoords", &vtkHigherOrderHexahedron::SetParametricCoords)
    .function("SetOrderFromCellData", emscripten::select_overload<void(vtkHigherOrderHexahedron&, vtkCellData*, int, int)>([](vtkHigherOrderHexahedron& self, vtkCellData* arg_0, int arg_1, int arg_2) -> void { return self.SetOrderFromCellData( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("SetOrderFromCellData", emscripten::select_overload<void( vtkCellData*, int, int, std::uintptr_t)>([]( vtkCellData* arg_0, int arg_1, int arg_2, std::uintptr_t arg_3) -> void { return vtkHigherOrderHexahedron::SetOrderFromCellData( arg_0, arg_1, arg_2,reinterpret_cast<int*>(arg_3 * sizeof(int))); }), emscripten::allow_raw_pointers())
    .function("SetUniformOrderFromNumPoints", &vtkHigherOrderHexahedron::SetUniformOrderFromNumPoints)
    .function("SetOrder", &vtkHigherOrderHexahedron::SetOrder)
    .function("GetOrder", emscripten::select_overload<std::uintptr_t(vtkHigherOrderHexahedron&)>([](vtkHigherOrderHexahedron& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetOrder()); }))
    .function("GetOrder", emscripten::select_overload<int(vtkHigherOrderHexahedron&, int)>([](vtkHigherOrderHexahedron& self, int arg_0) -> int { return self.GetOrder( arg_0); }))
    .class_function("PointCountSupportsUniformOrder", &vtkHigherOrderHexahedron::PointCountSupportsUniformOrder)
    .class_function("PointIndexFromIJK", emscripten::select_overload<int( int, int, int, std::uintptr_t)>([]( int arg_0, int arg_1, int arg_2, std::uintptr_t arg_3) -> int { return vtkHigherOrderHexahedron::PointIndexFromIJK( arg_0, arg_1, arg_2,reinterpret_cast<int*>(arg_3 * sizeof(int))); }))
    .function("PointIndexFromIJK", emscripten::select_overload<int(vtkHigherOrderHexahedron&, int, int, int)>([](vtkHigherOrderHexahedron& self, int arg_0, int arg_1, int arg_2) -> int { return self.PointIndexFromIJK( arg_0, arg_1, arg_2); }))
    .function("TransformApproxToCellParams", emscripten::optional_override([](vtkHigherOrderHexahedron& self, int arg_0, std::uintptr_t arg_1) -> bool {  return self.TransformApproxToCellParams( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("TransformFaceToCellParams", emscripten::optional_override([](vtkHigherOrderHexahedron& self, int arg_0, std::uintptr_t arg_1) -> bool {  return self.TransformFaceToCellParams( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}));
}
