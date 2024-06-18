// JavaScript wrapper for vtkBezierWedge with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkBezierWedgeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkBezierWedge.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCell.h"
#include "vtkPointData.h"
#include "vtkHigherOrderQuadrilateral.h"
#include "vtkHigherOrderTriangle.h"
#include "vtkHigherOrderCurve.h"
#include "vtkHigherOrderInterpolation.h"
#include "vtkDoubleArray.h"
#include "vtkBezierWedge.h"

template<> void emscripten::internal::raw_destructor<vtkBezierWedge>(vtkBezierWedge * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBezierWedge_class) {
  emscripten::class_<vtkBezierWedge, emscripten::base<vtkHigherOrderWedge>>("vtkBezierWedge")
    .smart_ptr<vtkSmartPointer<vtkBezierWedge>>("vtkSmartPointer<vtkBezierWedge>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBezierWedge>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBezierWedge::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBezierWedge& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBezierWedge::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBezierWedge::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBezierWedge::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBezierWedge& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkBezierWedge::GetCellType)
    .function("GetEdge", &vtkBezierWedge::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkBezierWedge::GetFace, emscripten::allow_raw_pointers())
    .function("SetRationalWeightsFromPointData", &vtkBezierWedge::SetRationalWeightsFromPointData, emscripten::allow_raw_pointers())
    .function("GetBoundaryQuad", &vtkBezierWedge::GetBoundaryQuad, emscripten::allow_raw_pointers())
    .function("GetBoundaryTri", &vtkBezierWedge::GetBoundaryTri, emscripten::allow_raw_pointers())
    .function("GetEdgeCell", &vtkBezierWedge::GetEdgeCell, emscripten::allow_raw_pointers())
    .function("GetInterpolation", &vtkBezierWedge::GetInterpolation, emscripten::allow_raw_pointers())
    .function("GetRationalWeights", &vtkBezierWedge::GetRationalWeights, emscripten::allow_raw_pointers());
}
