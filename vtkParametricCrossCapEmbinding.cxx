// JavaScript wrapper for vtkParametricCrossCap with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricCrossCapEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricCrossCap.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricCrossCap.h"

template<> void emscripten::internal::raw_destructor<vtkParametricCrossCap>(vtkParametricCrossCap * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricCrossCap_class) {
  emscripten::class_<vtkParametricCrossCap, emscripten::base<vtkParametricFunction>>("vtkParametricCrossCap")
    .smart_ptr<vtkSmartPointer<vtkParametricCrossCap>>("vtkSmartPointer<vtkParametricCrossCap>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParametricCrossCap>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricCrossCap::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricCrossCap& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricCrossCap::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricCrossCap::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricCrossCap::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricCrossCap& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDimension", &vtkParametricCrossCap::GetDimension);
}
