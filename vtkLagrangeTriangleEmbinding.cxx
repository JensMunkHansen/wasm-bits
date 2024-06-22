// JavaScript wrapper for vtkLagrangeTriangle with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkLagrangeTriangleEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkLagrangeTriangle.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCell.h"
#include "vtkHigherOrderCurve.h"
#include "vtkLagrangeTriangle.h"

template<> void emscripten::internal::raw_destructor<vtkLagrangeTriangle>(vtkLagrangeTriangle * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLagrangeTriangle_class) {
  emscripten::class_<vtkLagrangeTriangle, emscripten::base<vtkHigherOrderTriangle>>("vtkLagrangeTriangle")
    .smart_ptr<vtkSmartPointer<vtkLagrangeTriangle>>("vtkSmartPointer<vtkLagrangeTriangle>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLagrangeTriangle>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangeTriangle::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLagrangeTriangle& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLagrangeTriangle::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLagrangeTriangle::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangeTriangle::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLagrangeTriangle& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkLagrangeTriangle::GetCellType)
    .function("GetEdge", &vtkLagrangeTriangle::GetEdge, emscripten::allow_raw_pointers())
    .function("GetEdgeCell", &vtkLagrangeTriangle::GetEdgeCell, emscripten::allow_raw_pointers());
}
