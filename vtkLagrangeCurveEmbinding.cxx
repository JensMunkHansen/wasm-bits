// JavaScript wrapper for vtkLagrangeCurve with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkLagrangeCurveEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkLagrangeCurve.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLagrangeCurve.h"

template<> void emscripten::internal::raw_destructor<vtkLagrangeCurve>(vtkLagrangeCurve * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLagrangeCurve_class) {
  emscripten::class_<vtkLagrangeCurve, emscripten::base<vtkHigherOrderCurve>>("vtkLagrangeCurve")
    .smart_ptr<vtkSmartPointer<vtkLagrangeCurve>>("vtkSmartPointer<vtkLagrangeCurve>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLagrangeCurve>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangeCurve::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLagrangeCurve& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLagrangeCurve::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLagrangeCurve::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangeCurve::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLagrangeCurve& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkLagrangeCurve::GetCellType);
}
