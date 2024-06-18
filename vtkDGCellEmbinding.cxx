// JavaScript wrapper for vtkDGCell with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkDGCellEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkDGCell.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellMetadata.h"
#include "vtkVector.h"
#include "vtkStringToken.h"
#include "vtkTypeFloat32Array.h"
#include "vtkTypeInt32Array.h"
#include "vtkCellAttribute.h"
#include "vtkDGOperatorEntry.h"
#include "vtkDGCell.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCellGrid_vtkDGCell_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkDGCell>(vtkDGCell * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDGCell_class) {
  using Shape=vtkDGCell::Shape;
  emscripten::class_<vtkDGCell, emscripten::base<vtkCellMetadata>>("vtkDGCell")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGCell::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDGCell& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDGCell::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDGCell::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGCell::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDGCell& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfCells", &vtkDGCell::GetNumberOfCells)
    .function("ShallowCopy", &vtkDGCell::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkDGCell::DeepCopy, emscripten::allow_raw_pointers())
    .class_function("GetShapeCornerCount", &vtkDGCell::GetShapeCornerCount)
    .class_function("GetShapeDimension", &vtkDGCell::GetShapeDimension)
    .class_function("GetShapeName", &vtkDGCell::GetShapeName)
    .class_function("GetShapeEnum", &vtkDGCell::GetShapeEnum)
    .function("GetDimension", &vtkDGCell::GetDimension)
    .function("GetNumberOfCorners", &vtkDGCell::GetNumberOfCorners)
    .function("GetParametricCenterOfSide", &vtkDGCell::GetParametricCenterOfSide)
    .function("GetSideTypeForShape", &vtkDGCell::GetSideTypeForShape)
    .function("FillReferencePoints", &vtkDGCell::FillReferencePoints, emscripten::allow_raw_pointers())
    .function("FillSideConnectivity", &vtkDGCell::FillSideConnectivity, emscripten::allow_raw_pointers())
    .function("FillSideOffsetsAndShapes", &vtkDGCell::FillSideOffsetsAndShapes, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersCellGrid_vtkDGCell_0_2_constants) {
    typedef vtkDGCell::Shape cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[9] = {
      { "vtkDGCell_Shape_Vertex", vtkDGCell::Vertex },
      { "vtkDGCell_Shape_Edge", vtkDGCell::Edge },
      { "vtkDGCell_Shape_Triangle", vtkDGCell::Triangle },
      { "vtkDGCell_Shape_Quadrilateral", vtkDGCell::Quadrilateral },
      { "vtkDGCell_Shape_Tetrahedron", vtkDGCell::Tetrahedron },
      { "vtkDGCell_Shape_Hexahedron", vtkDGCell::Hexahedron },
      { "vtkDGCell_Shape_Wedge", vtkDGCell::Wedge },
      { "vtkDGCell_Shape_Pyramid", vtkDGCell::Pyramid },
      { "vtkDGCell_Shape_None", vtkDGCell::None },
  };
  for (int c = 0; c < 9; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
