// JavaScript wrapper for vtkParametricEnneper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricEnneperEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricEnneper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricEnneper.h"

template<> void emscripten::internal::raw_destructor<vtkParametricEnneper>(vtkParametricEnneper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricEnneper_class) {
  emscripten::class_<vtkParametricEnneper, emscripten::base<vtkParametricFunction>>("vtkParametricEnneper")
    .smart_ptr<vtkSmartPointer<vtkParametricEnneper>>("vtkSmartPointer<vtkParametricEnneper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParametricEnneper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricEnneper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricEnneper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricEnneper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricEnneper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricEnneper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricEnneper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDimension", &vtkParametricEnneper::GetDimension);
}
