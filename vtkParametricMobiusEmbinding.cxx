// JavaScript wrapper for vtkParametricMobius with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricMobiusEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricMobius.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricMobius.h"

template<> void emscripten::internal::raw_destructor<vtkParametricMobius>(vtkParametricMobius * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricMobius_class) {
  emscripten::class_<vtkParametricMobius, emscripten::base<vtkParametricFunction>>("vtkParametricMobius")
    .smart_ptr<vtkSmartPointer<vtkParametricMobius>>("vtkSmartPointer<vtkParametricMobius>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParametricMobius>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricMobius::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricMobius& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricMobius::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricMobius::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricMobius::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricMobius& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRadius", &vtkParametricMobius::SetRadius)
    .function("GetRadius", &vtkParametricMobius::GetRadius)
    .function("GetDimension", &vtkParametricMobius::GetDimension);
}
