// JavaScript wrapper for vtkHigherOrderInterpolation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHigherOrderInterpolationEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHigherOrderInterpolation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkPoints.h"
#include "vtkHigherOrderTriangle.h"
#include "vtkVector.h"
#include "vtkSmartPointer.h"
#include "vtkHigherOrderInterpolation.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkHigherOrderInterpolation_0_1_constants) {
  emscripten::constant("VTK_21_POINT_WEDGE", true);
}
template<> void emscripten::internal::raw_destructor<vtkHigherOrderInterpolation>(vtkHigherOrderInterpolation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHigherOrderInterpolation_class) {
  emscripten::class_<vtkHigherOrderInterpolation, emscripten::base<vtkObject>>("vtkHigherOrderInterpolation")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHigherOrderInterpolation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHigherOrderInterpolation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHigherOrderInterpolation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHigherOrderInterpolation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHigherOrderInterpolation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHigherOrderInterpolation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("GetParametricHexCoordinates", &vtkHigherOrderInterpolation::GetParametricHexCoordinates)
    .class_function("GetPointIndicesBoundingHexEdge", &vtkHigherOrderInterpolation::GetPointIndicesBoundingHexEdge)
    .class_function("GetVaryingParameterOfHexEdge", &vtkHigherOrderInterpolation::GetVaryingParameterOfHexEdge)
    .class_function("GetFixedParametersOfHexEdge", &vtkHigherOrderInterpolation::GetFixedParametersOfHexEdge)
    .class_function("GetVaryingParametersOfHexFace", &vtkHigherOrderInterpolation::GetVaryingParametersOfHexFace)
    .class_function("GetFixedParameterOfHexFace", &vtkHigherOrderInterpolation::GetFixedParameterOfHexFace)
    .class_function("GetParametricWedgeCoordinates", &vtkHigherOrderInterpolation::GetParametricWedgeCoordinates)
    .class_function("GetPointIndicesBoundingWedgeEdge", &vtkHigherOrderInterpolation::GetPointIndicesBoundingWedgeEdge)
    .class_function("GetVaryingParameterOfWedgeEdge", &vtkHigherOrderInterpolation::GetVaryingParameterOfWedgeEdge)
    .class_function("GetFixedParametersOfWedgeEdge", &vtkHigherOrderInterpolation::GetFixedParametersOfWedgeEdge)
    .class_function("GetVaryingParametersOfWedgeFace", &vtkHigherOrderInterpolation::GetVaryingParametersOfWedgeFace)
    .class_function("GetFixedParameterOfWedgeFace", &vtkHigherOrderInterpolation::GetFixedParameterOfWedgeFace);
}
