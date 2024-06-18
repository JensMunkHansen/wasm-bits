// JavaScript wrapper for vtkParametricTorus with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricTorusEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricTorus.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricTorus.h"

template<> void emscripten::internal::raw_destructor<vtkParametricTorus>(vtkParametricTorus * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricTorus_class) {
  emscripten::class_<vtkParametricTorus, emscripten::base<vtkParametricFunction>>("vtkParametricTorus")
    .smart_ptr<vtkSmartPointer<vtkParametricTorus>>("vtkSmartPointer<vtkParametricTorus>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParametricTorus>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricTorus::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricTorus& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricTorus::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricTorus::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricTorus::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricTorus& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRingRadius", &vtkParametricTorus::SetRingRadius)
    .function("GetRingRadius", &vtkParametricTorus::GetRingRadius)
    .function("SetCrossSectionRadius", &vtkParametricTorus::SetCrossSectionRadius)
    .function("GetCrossSectionRadius", &vtkParametricTorus::GetCrossSectionRadius)
    .function("GetDimension", &vtkParametricTorus::GetDimension);
}
