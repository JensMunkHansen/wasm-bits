// JavaScript wrapper for vtkBezierCurve with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkBezierCurveEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkBezierCurve.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointData.h"
#include "vtkDoubleArray.h"
#include "vtkBezierCurve.h"

template<> void emscripten::internal::raw_destructor<vtkBezierCurve>(vtkBezierCurve * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBezierCurve_class) {
  emscripten::class_<vtkBezierCurve, emscripten::base<vtkHigherOrderCurve>>("vtkBezierCurve")
    .smart_ptr<vtkSmartPointer<vtkBezierCurve>>("vtkSmartPointer<vtkBezierCurve>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBezierCurve>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBezierCurve::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBezierCurve& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBezierCurve::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBezierCurve::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBezierCurve::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBezierCurve& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkBezierCurve::GetCellType)
    .function("SetRationalWeightsFromPointData", &vtkBezierCurve::SetRationalWeightsFromPointData, emscripten::allow_raw_pointers())
    .function("GetRationalWeights", &vtkBezierCurve::GetRationalWeights, emscripten::allow_raw_pointers());
}
