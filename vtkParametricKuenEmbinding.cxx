// JavaScript wrapper for vtkParametricKuen with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricKuenEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricKuen.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricKuen.h"

template<> void emscripten::internal::raw_destructor<vtkParametricKuen>(vtkParametricKuen * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricKuen_class) {
  emscripten::class_<vtkParametricKuen, emscripten::base<vtkParametricFunction>>("vtkParametricKuen")
    .smart_ptr<vtkSmartPointer<vtkParametricKuen>>("vtkSmartPointer<vtkParametricKuen>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParametricKuen>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricKuen::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricKuen& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricKuen::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricKuen::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricKuen::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricKuen& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDimension", &vtkParametricKuen::GetDimension)
    .function("SetDeltaV0", &vtkParametricKuen::SetDeltaV0)
    .function("GetDeltaV0", &vtkParametricKuen::GetDeltaV0);
}
