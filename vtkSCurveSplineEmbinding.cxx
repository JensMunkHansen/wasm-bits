// JavaScript wrapper for vtkSCurveSpline with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkSCurveSplineEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkSCurveSpline.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSpline.h"
#include "vtkSCurveSpline.h"

template<> void emscripten::internal::raw_destructor<vtkSCurveSpline>(vtkSCurveSpline * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSCurveSpline_class) {
  emscripten::class_<vtkSCurveSpline, emscripten::base<vtkSpline>>("vtkSCurveSpline")
    .smart_ptr<vtkSmartPointer<vtkSCurveSpline>>("vtkSmartPointer<vtkSCurveSpline>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSCurveSpline>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSCurveSpline::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSCurveSpline& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSCurveSpline::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSCurveSpline::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSCurveSpline::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSCurveSpline& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Compute", &vtkSCurveSpline::Compute)
    .function("Evaluate", &vtkSCurveSpline::Evaluate)
    .function("DeepCopy", &vtkSCurveSpline::DeepCopy, emscripten::allow_raw_pointers())
    .function("SetNodeWeight", &vtkSCurveSpline::SetNodeWeight)
    .function("GetNodeWeight", &vtkSCurveSpline::GetNodeWeight);
}
