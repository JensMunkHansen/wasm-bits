// JavaScript wrapper for vtkRungeKutta45 with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkCommonMath.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkRungeKutta45Embinding.cxx \
 /home/jmh/github/vtk/Common/Math/vtkRungeKutta45.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRungeKutta45.h"

template<> void emscripten::internal::raw_destructor<vtkRungeKutta45>(vtkRungeKutta45 * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRungeKutta45_class) {
  emscripten::class_<vtkRungeKutta45, emscripten::base<vtkInitialValueProblemSolver>>("vtkRungeKutta45")
    .smart_ptr<vtkSmartPointer<vtkRungeKutta45>>("vtkSmartPointer<vtkRungeKutta45>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRungeKutta45>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRungeKutta45::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRungeKutta45& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRungeKutta45::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRungeKutta45::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRungeKutta45::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRungeKutta45& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
