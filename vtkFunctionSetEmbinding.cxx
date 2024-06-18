// JavaScript wrapper for vtkFunctionSet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkCommonMath.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkFunctionSetEmbinding.cxx \
 /home/jmh/github/vtk/Common/Math/vtkFunctionSet.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFunctionSet.h"

template<> void emscripten::internal::raw_destructor<vtkFunctionSet>(vtkFunctionSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFunctionSet_class) {
  emscripten::class_<vtkFunctionSet, emscripten::base<vtkObject>>("vtkFunctionSet")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFunctionSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFunctionSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFunctionSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFunctionSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFunctionSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFunctionSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("FunctionValues", emscripten::select_overload<int(vtkFunctionSet&, std::uintptr_t, std::uintptr_t)>([](vtkFunctionSet& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> int { return self.FunctionValues(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double))); }))
    .function("FunctionValues", emscripten::select_overload<int(vtkFunctionSet&, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([](vtkFunctionSet& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> int { return self.FunctionValues(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<void*>(arg_2)); }))
    .function("GetNumberOfFunctions", &vtkFunctionSet::GetNumberOfFunctions)
    .function("GetNumberOfIndependentVariables", &vtkFunctionSet::GetNumberOfIndependentVariables);
}
