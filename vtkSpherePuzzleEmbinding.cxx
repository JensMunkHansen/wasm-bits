// JavaScript wrapper for vtkSpherePuzzle with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkSpherePuzzleEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkSpherePuzzle.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSpherePuzzle.h"

EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkSpherePuzzle_0_1_constants) {
  emscripten::constant("VTK_MAX_SPHERE_RESOLUTION", 1024);
}
template<> void emscripten::internal::raw_destructor<vtkSpherePuzzle>(vtkSpherePuzzle * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSpherePuzzle_class) {
  emscripten::class_<vtkSpherePuzzle, emscripten::base<vtkPolyDataAlgorithm>>("vtkSpherePuzzle")
    .smart_ptr<vtkSmartPointer<vtkSpherePuzzle>>("vtkSmartPointer<vtkSpherePuzzle>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSpherePuzzle>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpherePuzzle::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSpherePuzzle& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSpherePuzzle::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSpherePuzzle::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpherePuzzle::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSpherePuzzle& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Reset", &vtkSpherePuzzle::Reset)
    .function("MoveHorizontal", &vtkSpherePuzzle::MoveHorizontal)
    .function("MoveVertical", &vtkSpherePuzzle::MoveVertical)
    .function("SetPoint", &vtkSpherePuzzle::SetPoint)
    .function("MovePoint", &vtkSpherePuzzle::MovePoint)
    .function("GetState", emscripten::optional_override([](vtkSpherePuzzle& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetState()) / sizeof(int);}));
}
