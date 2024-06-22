// JavaScript wrapper for vtkParametricBohemianDome with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricBohemianDomeEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricBohemianDome.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricBohemianDome.h"

template<> void emscripten::internal::raw_destructor<vtkParametricBohemianDome>(vtkParametricBohemianDome * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricBohemianDome_class) {
  emscripten::class_<vtkParametricBohemianDome, emscripten::base<vtkParametricFunction>>("vtkParametricBohemianDome")
    .smart_ptr<vtkSmartPointer<vtkParametricBohemianDome>>("vtkSmartPointer<vtkParametricBohemianDome>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkParametricBohemianDome>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricBohemianDome::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricBohemianDome& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricBohemianDome::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricBohemianDome::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricBohemianDome::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricBohemianDome& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetA", &vtkParametricBohemianDome::GetA)
    .function("SetA", &vtkParametricBohemianDome::SetA)
    .function("GetB", &vtkParametricBohemianDome::GetB)
    .function("SetB", &vtkParametricBohemianDome::SetB)
    .function("GetC", &vtkParametricBohemianDome::GetC)
    .function("SetC", &vtkParametricBohemianDome::SetC)
    .function("GetDimension", &vtkParametricBohemianDome::GetDimension);
}
