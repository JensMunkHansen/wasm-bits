// JavaScript wrapper for vtkParametricBoy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricBoyEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricBoy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricBoy.h"

template<> void emscripten::internal::raw_destructor<vtkParametricBoy>(vtkParametricBoy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricBoy_class) {
  emscripten::class_<vtkParametricBoy, emscripten::base<vtkParametricFunction>>("vtkParametricBoy")
    .smart_ptr<vtkSmartPointer<vtkParametricBoy>>("vtkSmartPointer<vtkParametricBoy>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParametricBoy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricBoy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricBoy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricBoy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricBoy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricBoy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricBoy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDimension", &vtkParametricBoy::GetDimension)
    .function("SetZScale", &vtkParametricBoy::SetZScale)
    .function("GetZScale", &vtkParametricBoy::GetZScale);
}
