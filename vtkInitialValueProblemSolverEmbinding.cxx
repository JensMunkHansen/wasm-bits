// JavaScript wrapper for vtkInitialValueProblemSolver with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkCommonMath.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkInitialValueProblemSolverEmbinding.cxx \
 /home/jmh/github/vtk/Common/Math/vtkInitialValueProblemSolver.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFunctionSet.h"
#include "vtkInitialValueProblemSolver.h"

EMSCRIPTEN_BINDINGS(vtkCommonMath_vtkInitialValueProblemSolver_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkInitialValueProblemSolver>(vtkInitialValueProblemSolver * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInitialValueProblemSolver_class) {
  using ErrorCodes=vtkInitialValueProblemSolver::ErrorCodes;
  emscripten::class_<vtkInitialValueProblemSolver, emscripten::base<vtkObject>>("vtkInitialValueProblemSolver")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInitialValueProblemSolver::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInitialValueProblemSolver& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInitialValueProblemSolver::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInitialValueProblemSolver::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInitialValueProblemSolver::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInitialValueProblemSolver& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFunctionSet", &vtkInitialValueProblemSolver::SetFunctionSet, emscripten::allow_raw_pointers())
    .function("GetFunctionSet", &vtkInitialValueProblemSolver::GetFunctionSet, emscripten::allow_raw_pointers())
    .function("IsAdaptive", &vtkInitialValueProblemSolver::IsAdaptive);
}
EMSCRIPTEN_BINDINGS(vtkCommonMath_vtkInitialValueProblemSolver_0_2_constants) {
    typedef vtkInitialValueProblemSolver::ErrorCodes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkInitialValueProblemSolver_ErrorCodes_OUT_OF_DOMAIN", vtkInitialValueProblemSolver::OUT_OF_DOMAIN },
      { "vtkInitialValueProblemSolver_ErrorCodes_NOT_INITIALIZED", vtkInitialValueProblemSolver::NOT_INITIALIZED },
      { "vtkInitialValueProblemSolver_ErrorCodes_UNEXPECTED_VALUE", vtkInitialValueProblemSolver::UNEXPECTED_VALUE },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
