// JavaScript wrapper for vtkBezierTriangle with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkBezierTriangleEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkBezierTriangle.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCell.h"
#include "vtkPointData.h"
#include "vtkHigherOrderCurve.h"
#include "vtkDoubleArray.h"
#include "vtkBezierTriangle.h"

template<> void emscripten::internal::raw_destructor<vtkBezierTriangle>(vtkBezierTriangle * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBezierTriangle_class) {
  emscripten::class_<vtkBezierTriangle, emscripten::base<vtkHigherOrderTriangle>>("vtkBezierTriangle")
    .smart_ptr<vtkSmartPointer<vtkBezierTriangle>>("vtkSmartPointer<vtkBezierTriangle>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBezierTriangle>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBezierTriangle::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBezierTriangle& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBezierTriangle::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBezierTriangle::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBezierTriangle::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBezierTriangle& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkBezierTriangle::GetCellType)
    .function("GetEdge", &vtkBezierTriangle::GetEdge, emscripten::allow_raw_pointers())
    .function("SetRationalWeightsFromPointData", &vtkBezierTriangle::SetRationalWeightsFromPointData, emscripten::allow_raw_pointers())
    .function("GetEdgeCell", &vtkBezierTriangle::GetEdgeCell, emscripten::allow_raw_pointers())
    .function("GetRationalWeights", &vtkBezierTriangle::GetRationalWeights, emscripten::allow_raw_pointers());
}
