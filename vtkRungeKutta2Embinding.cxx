// JavaScript wrapper for vtkRungeKutta2 with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkCommonMath.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkRungeKutta2Embinding.cxx \
 /home/jmh/github/vtk/Common/Math/vtkRungeKutta2.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRungeKutta2.h"

template<> void emscripten::internal::raw_destructor<vtkRungeKutta2>(vtkRungeKutta2 * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRungeKutta2_class) {
  emscripten::class_<vtkRungeKutta2, emscripten::base<vtkInitialValueProblemSolver>>("vtkRungeKutta2")
    .smart_ptr<vtkSmartPointer<vtkRungeKutta2>>("vtkSmartPointer<vtkRungeKutta2>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRungeKutta2>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRungeKutta2::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRungeKutta2& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRungeKutta2::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRungeKutta2::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRungeKutta2::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRungeKutta2& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
