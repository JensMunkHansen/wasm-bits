// JavaScript wrapper for vtkBezierHexahedron with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkBezierHexahedronEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkBezierHexahedron.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCell.h"
#include "vtkPointData.h"
#include "vtkDoubleArray.h"
#include "vtkHigherOrderCurve.h"
#include "vtkHigherOrderQuadrilateral.h"
#include "vtkHigherOrderInterpolation.h"
#include "vtkBezierHexahedron.h"

template<> void emscripten::internal::raw_destructor<vtkBezierHexahedron>(vtkBezierHexahedron * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBezierHexahedron_class) {
  emscripten::class_<vtkBezierHexahedron, emscripten::base<vtkHigherOrderHexahedron>>("vtkBezierHexahedron")
    .smart_ptr<vtkSmartPointer<vtkBezierHexahedron>>("vtkSmartPointer<vtkBezierHexahedron>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBezierHexahedron>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBezierHexahedron::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBezierHexahedron& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBezierHexahedron::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBezierHexahedron::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBezierHexahedron::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBezierHexahedron& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkBezierHexahedron::GetCellType)
    .function("GetEdge", &vtkBezierHexahedron::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkBezierHexahedron::GetFace, emscripten::allow_raw_pointers())
    .function("SetRationalWeightsFromPointData", &vtkBezierHexahedron::SetRationalWeightsFromPointData, emscripten::allow_raw_pointers())
    .function("GetRationalWeights", &vtkBezierHexahedron::GetRationalWeights, emscripten::allow_raw_pointers())
    .function("GetEdgeCell", &vtkBezierHexahedron::GetEdgeCell, emscripten::allow_raw_pointers())
    .function("GetFaceCell", &vtkBezierHexahedron::GetFaceCell, emscripten::allow_raw_pointers())
    .function("GetInterpolation", &vtkBezierHexahedron::GetInterpolation, emscripten::allow_raw_pointers());
}
