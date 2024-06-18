// JavaScript wrapper for vtkCardinalSpline with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCardinalSplineEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkCardinalSpline.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSpline.h"
#include "vtkCardinalSpline.h"

template<> void emscripten::internal::raw_destructor<vtkCardinalSpline>(vtkCardinalSpline * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCardinalSpline_class) {
  emscripten::class_<vtkCardinalSpline, emscripten::base<vtkSpline>>("vtkCardinalSpline")
    .smart_ptr<vtkSmartPointer<vtkCardinalSpline>>("vtkSmartPointer<vtkCardinalSpline>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCardinalSpline>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCardinalSpline::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCardinalSpline& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCardinalSpline::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCardinalSpline::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCardinalSpline::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCardinalSpline& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Compute", &vtkCardinalSpline::Compute)
    .function("Evaluate", &vtkCardinalSpline::Evaluate)
    .function("DeepCopy", &vtkCardinalSpline::DeepCopy, emscripten::allow_raw_pointers());
}
