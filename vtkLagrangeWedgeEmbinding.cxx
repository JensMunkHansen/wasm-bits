// JavaScript wrapper for vtkLagrangeWedge with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkLagrangeWedgeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkLagrangeWedge.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCell.h"
#include "vtkHigherOrderQuadrilateral.h"
#include "vtkHigherOrderTriangle.h"
#include "vtkHigherOrderCurve.h"
#include "vtkHigherOrderInterpolation.h"
#include "vtkLagrangeWedge.h"

template<> void emscripten::internal::raw_destructor<vtkLagrangeWedge>(vtkLagrangeWedge * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLagrangeWedge_class) {
  emscripten::class_<vtkLagrangeWedge, emscripten::base<vtkHigherOrderWedge>>("vtkLagrangeWedge")
    .smart_ptr<vtkSmartPointer<vtkLagrangeWedge>>("vtkSmartPointer<vtkLagrangeWedge>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLagrangeWedge>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangeWedge::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLagrangeWedge& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLagrangeWedge::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLagrangeWedge::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangeWedge::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLagrangeWedge& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkLagrangeWedge::GetCellType)
    .function("GetEdge", &vtkLagrangeWedge::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkLagrangeWedge::GetFace, emscripten::allow_raw_pointers())
    .function("GetBoundaryQuad", &vtkLagrangeWedge::GetBoundaryQuad, emscripten::allow_raw_pointers())
    .function("GetBoundaryTri", &vtkLagrangeWedge::GetBoundaryTri, emscripten::allow_raw_pointers())
    .function("GetEdgeCell", &vtkLagrangeWedge::GetEdgeCell, emscripten::allow_raw_pointers())
    .function("GetInterpolation", &vtkLagrangeWedge::GetInterpolation, emscripten::allow_raw_pointers());
}
