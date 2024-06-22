// JavaScript wrapper for vtkRungeKutta4 with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkCommonMath.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkRungeKutta4Embinding.cxx \
 /home/jmh/github/vtk/Common/Math/vtkRungeKutta4.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRungeKutta4.h"

template<> void emscripten::internal::raw_destructor<vtkRungeKutta4>(vtkRungeKutta4 * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRungeKutta4_class) {
  emscripten::class_<vtkRungeKutta4, emscripten::base<vtkInitialValueProblemSolver>>("vtkRungeKutta4")
    .smart_ptr<vtkSmartPointer<vtkRungeKutta4>>("vtkSmartPointer<vtkRungeKutta4>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRungeKutta4>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRungeKutta4::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRungeKutta4& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRungeKutta4::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRungeKutta4::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRungeKutta4::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRungeKutta4& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
