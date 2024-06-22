// JavaScript wrapper for vtkLagrangeHexahedron with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkLagrangeHexahedronEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkLagrangeHexahedron.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCell.h"
#include "vtkHigherOrderCurve.h"
#include "vtkHigherOrderQuadrilateral.h"
#include "vtkHigherOrderInterpolation.h"
#include "vtkLagrangeHexahedron.h"

template<> void emscripten::internal::raw_destructor<vtkLagrangeHexahedron>(vtkLagrangeHexahedron * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLagrangeHexahedron_class) {
  emscripten::class_<vtkLagrangeHexahedron, emscripten::base<vtkHigherOrderHexahedron>>("vtkLagrangeHexahedron")
    .smart_ptr<vtkSmartPointer<vtkLagrangeHexahedron>>("vtkSmartPointer<vtkLagrangeHexahedron>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLagrangeHexahedron>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangeHexahedron::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLagrangeHexahedron& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLagrangeHexahedron::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLagrangeHexahedron::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangeHexahedron::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLagrangeHexahedron& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkLagrangeHexahedron::GetCellType)
    .function("GetEdge", &vtkLagrangeHexahedron::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkLagrangeHexahedron::GetFace, emscripten::allow_raw_pointers())
    .function("GetEdgeCell", &vtkLagrangeHexahedron::GetEdgeCell, emscripten::allow_raw_pointers())
    .function("GetFaceCell", &vtkLagrangeHexahedron::GetFaceCell, emscripten::allow_raw_pointers())
    .function("GetInterpolation", &vtkLagrangeHexahedron::GetInterpolation, emscripten::allow_raw_pointers());
}
