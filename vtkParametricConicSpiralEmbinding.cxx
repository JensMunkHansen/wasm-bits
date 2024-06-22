// JavaScript wrapper for vtkParametricConicSpiral with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricConicSpiralEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricConicSpiral.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricConicSpiral.h"

template<> void emscripten::internal::raw_destructor<vtkParametricConicSpiral>(vtkParametricConicSpiral * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricConicSpiral_class) {
  emscripten::class_<vtkParametricConicSpiral, emscripten::base<vtkParametricFunction>>("vtkParametricConicSpiral")
    .smart_ptr<vtkSmartPointer<vtkParametricConicSpiral>>("vtkSmartPointer<vtkParametricConicSpiral>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkParametricConicSpiral>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricConicSpiral::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricConicSpiral& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricConicSpiral::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricConicSpiral::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricConicSpiral::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricConicSpiral& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDimension", &vtkParametricConicSpiral::GetDimension)
    .function("SetA", &vtkParametricConicSpiral::SetA)
    .function("GetA", &vtkParametricConicSpiral::GetA)
    .function("SetB", &vtkParametricConicSpiral::SetB)
    .function("GetB", &vtkParametricConicSpiral::GetB)
    .function("SetC", &vtkParametricConicSpiral::SetC)
    .function("GetC", &vtkParametricConicSpiral::GetC)
    .function("SetN", &vtkParametricConicSpiral::SetN)
    .function("GetN", &vtkParametricConicSpiral::GetN);
}
