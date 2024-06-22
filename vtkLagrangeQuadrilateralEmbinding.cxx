// JavaScript wrapper for vtkLagrangeQuadrilateral with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkLagrangeQuadrilateralEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkLagrangeQuadrilateral.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCell.h"
#include "vtkHigherOrderCurve.h"
#include "vtkLagrangeQuadrilateral.h"

template<> void emscripten::internal::raw_destructor<vtkLagrangeQuadrilateral>(vtkLagrangeQuadrilateral * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLagrangeQuadrilateral_class) {
  emscripten::class_<vtkLagrangeQuadrilateral, emscripten::base<vtkHigherOrderQuadrilateral>>("vtkLagrangeQuadrilateral")
    .smart_ptr<vtkSmartPointer<vtkLagrangeQuadrilateral>>("vtkSmartPointer<vtkLagrangeQuadrilateral>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLagrangeQuadrilateral>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangeQuadrilateral::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLagrangeQuadrilateral& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLagrangeQuadrilateral::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLagrangeQuadrilateral::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangeQuadrilateral::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLagrangeQuadrilateral& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkLagrangeQuadrilateral::GetCellType)
    .function("GetEdge", &vtkLagrangeQuadrilateral::GetEdge, emscripten::allow_raw_pointers())
    .function("GetEdgeCell", &vtkLagrangeQuadrilateral::GetEdgeCell, emscripten::allow_raw_pointers());
}
