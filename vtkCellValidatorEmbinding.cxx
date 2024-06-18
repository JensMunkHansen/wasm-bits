// JavaScript wrapper for vtkCellValidator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkCellValidatorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkCellValidator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericCell.h"
#include "vtkCell.h"
#include "vtkEmptyCell.h"
#include "vtkVertex.h"
#include "vtkPolyVertex.h"
#include "vtkLine.h"
#include "vtkPolyLine.h"
#include "vtkTriangle.h"
#include "vtkTriangleStrip.h"
#include "vtkPolygon.h"
#include "vtkPixel.h"
#include "vtkQuad.h"
#include "vtkTetra.h"
#include "vtkVoxel.h"
#include "vtkHexahedron.h"
#include "vtkWedge.h"
#include "vtkPyramid.h"
#include "vtkPentagonalPrism.h"
#include "vtkHexagonalPrism.h"
#include "vtkQuadraticEdge.h"
#include "vtkQuadraticTriangle.h"
#include "vtkQuadraticQuad.h"
#include "vtkQuadraticPolygon.h"
#include "vtkQuadraticTetra.h"
#include "vtkQuadraticHexahedron.h"
#include "vtkQuadraticWedge.h"
#include "vtkQuadraticPyramid.h"
#include "vtkBiQuadraticQuad.h"
#include "vtkTriQuadraticHexahedron.h"
#include "vtkTriQuadraticPyramid.h"
#include "vtkQuadraticLinearQuad.h"
#include "vtkQuadraticLinearWedge.h"
#include "vtkBiQuadraticQuadraticWedge.h"
#include "vtkBiQuadraticQuadraticHexahedron.h"
#include "vtkBiQuadraticTriangle.h"
#include "vtkCubicLine.h"
#include "vtkConvexPointSet.h"
#include "vtkPolyhedron.h"
#include "vtkLagrangeCurve.h"
#include "vtkLagrangeTriangle.h"
#include "vtkLagrangeQuadrilateral.h"
#include "vtkLagrangeTetra.h"
#include "vtkLagrangeHexahedron.h"
#include "vtkLagrangeWedge.h"
#include "vtkBezierCurve.h"
#include "vtkBezierTriangle.h"
#include "vtkBezierQuadrilateral.h"
#include "vtkBezierTetra.h"
#include "vtkBezierHexahedron.h"
#include "vtkBezierWedge.h"
#include "vtkCellValidator.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkCellValidator_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCellValidator>(vtkCellValidator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellValidator_class) {
  using State=vtkCellValidator::State;
  emscripten::class_<vtkCellValidator, emscripten::base<vtkDataSetAlgorithm>>("vtkCellValidator")
    .smart_ptr<vtkSmartPointer<vtkCellValidator>>("vtkSmartPointer<vtkCellValidator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellValidator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellValidator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellValidator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellValidator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellValidator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellValidator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellValidator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("Check", emscripten::select_overload<State( vtkGenericCell*, double)>([]( vtkGenericCell* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkCell*, double)>([]( vtkCell* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkEmptyCell*, double)>([]( vtkEmptyCell* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkVertex*, double)>([]( vtkVertex* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkPolyVertex*, double)>([]( vtkPolyVertex* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkLine*, double)>([]( vtkLine* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkPolyLine*, double)>([]( vtkPolyLine* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkTriangle*, double)>([]( vtkTriangle* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkTriangleStrip*, double)>([]( vtkTriangleStrip* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkPolygon*, double)>([]( vtkPolygon* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkPixel*, double)>([]( vtkPixel* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkQuad*, double)>([]( vtkQuad* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkTetra*, double)>([]( vtkTetra* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkVoxel*, double)>([]( vtkVoxel* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkHexahedron*, double)>([]( vtkHexahedron* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkWedge*, double)>([]( vtkWedge* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkPyramid*, double)>([]( vtkPyramid* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkPentagonalPrism*, double)>([]( vtkPentagonalPrism* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkHexagonalPrism*, double)>([]( vtkHexagonalPrism* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkQuadraticEdge*, double)>([]( vtkQuadraticEdge* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkQuadraticTriangle*, double)>([]( vtkQuadraticTriangle* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkQuadraticQuad*, double)>([]( vtkQuadraticQuad* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkQuadraticPolygon*, double)>([]( vtkQuadraticPolygon* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkQuadraticTetra*, double)>([]( vtkQuadraticTetra* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkQuadraticHexahedron*, double)>([]( vtkQuadraticHexahedron* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkQuadraticWedge*, double)>([]( vtkQuadraticWedge* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkQuadraticPyramid*, double)>([]( vtkQuadraticPyramid* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkBiQuadraticQuad*, double)>([]( vtkBiQuadraticQuad* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkTriQuadraticHexahedron*, double)>([]( vtkTriQuadraticHexahedron* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkTriQuadraticPyramid*, double)>([]( vtkTriQuadraticPyramid* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkQuadraticLinearQuad*, double)>([]( vtkQuadraticLinearQuad* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkQuadraticLinearWedge*, double)>([]( vtkQuadraticLinearWedge* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkBiQuadraticQuadraticWedge*, double)>([]( vtkBiQuadraticQuadraticWedge* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkBiQuadraticQuadraticHexahedron*, double)>([]( vtkBiQuadraticQuadraticHexahedron* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkBiQuadraticTriangle*, double)>([]( vtkBiQuadraticTriangle* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkCubicLine*, double)>([]( vtkCubicLine* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkConvexPointSet*, double)>([]( vtkConvexPointSet* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkPolyhedron*, double)>([]( vtkPolyhedron* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkLagrangeCurve*, double)>([]( vtkLagrangeCurve* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkLagrangeTriangle*, double)>([]( vtkLagrangeTriangle* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkLagrangeQuadrilateral*, double)>([]( vtkLagrangeQuadrilateral* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkLagrangeTetra*, double)>([]( vtkLagrangeTetra* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkLagrangeHexahedron*, double)>([]( vtkLagrangeHexahedron* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkLagrangeWedge*, double)>([]( vtkLagrangeWedge* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkBezierCurve*, double)>([]( vtkBezierCurve* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkBezierTriangle*, double)>([]( vtkBezierTriangle* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkBezierQuadrilateral*, double)>([]( vtkBezierQuadrilateral* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkBezierTetra*, double)>([]( vtkBezierTetra* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkBezierHexahedron*, double)>([]( vtkBezierHexahedron* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Check", emscripten::select_overload<State( vtkBezierWedge*, double)>([]( vtkBezierWedge* arg_0, double arg_1) -> State { return vtkCellValidator::Check( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetTolerance", &vtkCellValidator::SetTolerance)
    .function("GetToleranceMinValue", &vtkCellValidator::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkCellValidator::GetToleranceMaxValue)
    .function("GetTolerance", &vtkCellValidator::GetTolerance);
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkCellValidator_0_2_constants) {
    typedef vtkCellValidator::State cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[7] = {
      { "vtkCellValidator_State_Valid", vtkCellValidator::Valid },
      { "vtkCellValidator_State_WrongNumberOfPoints", vtkCellValidator::WrongNumberOfPoints },
      { "vtkCellValidator_State_IntersectingEdges", vtkCellValidator::IntersectingEdges },
      { "vtkCellValidator_State_IntersectingFaces", vtkCellValidator::IntersectingFaces },
      { "vtkCellValidator_State_NoncontiguousEdges", vtkCellValidator::NoncontiguousEdges },
      { "vtkCellValidator_State_Nonconvex", vtkCellValidator::Nonconvex },
      { "vtkCellValidator_State_FacesAreOrientedIncorrectly", vtkCellValidator::FacesAreOrientedIncorrectly },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
