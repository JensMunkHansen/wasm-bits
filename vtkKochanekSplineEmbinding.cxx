// JavaScript wrapper for vtkKochanekSpline with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkKochanekSplineEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkKochanekSpline.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSpline.h"
#include "vtkKochanekSpline.h"

template<> void emscripten::internal::raw_destructor<vtkKochanekSpline>(vtkKochanekSpline * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkKochanekSpline_class) {
  emscripten::class_<vtkKochanekSpline, emscripten::base<vtkSpline>>("vtkKochanekSpline")
    .smart_ptr<vtkSmartPointer<vtkKochanekSpline>>("vtkSmartPointer<vtkKochanekSpline>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkKochanekSpline>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKochanekSpline::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkKochanekSpline& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkKochanekSpline::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkKochanekSpline::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKochanekSpline::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkKochanekSpline& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Compute", &vtkKochanekSpline::Compute)
    .function("Evaluate", &vtkKochanekSpline::Evaluate)
    .function("SetDefaultBias", &vtkKochanekSpline::SetDefaultBias)
    .function("GetDefaultBias", &vtkKochanekSpline::GetDefaultBias)
    .function("SetDefaultTension", &vtkKochanekSpline::SetDefaultTension)
    .function("GetDefaultTension", &vtkKochanekSpline::GetDefaultTension)
    .function("SetDefaultContinuity", &vtkKochanekSpline::SetDefaultContinuity)
    .function("GetDefaultContinuity", &vtkKochanekSpline::GetDefaultContinuity)
    .function("DeepCopy", &vtkKochanekSpline::DeepCopy, emscripten::allow_raw_pointers());
}
