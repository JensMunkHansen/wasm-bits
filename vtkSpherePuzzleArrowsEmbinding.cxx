// JavaScript wrapper for vtkSpherePuzzleArrows with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkSpherePuzzleArrowsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkSpherePuzzleArrows.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSpherePuzzle.h"
#include "vtkSpherePuzzleArrows.h"

template<> void emscripten::internal::raw_destructor<vtkSpherePuzzleArrows>(vtkSpherePuzzleArrows * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSpherePuzzleArrows_class) {
  emscripten::class_<vtkSpherePuzzleArrows, emscripten::base<vtkPolyDataAlgorithm>>("vtkSpherePuzzleArrows")
    .smart_ptr<vtkSmartPointer<vtkSpherePuzzleArrows>>("vtkSmartPointer<vtkSpherePuzzleArrows>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSpherePuzzleArrows>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpherePuzzleArrows::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSpherePuzzleArrows& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSpherePuzzleArrows::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSpherePuzzleArrows::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpherePuzzleArrows::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSpherePuzzleArrows& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPermutation", emscripten::select_overload<void(vtkSpherePuzzleArrows&, std::uintptr_t)>([](vtkSpherePuzzleArrows& self, std::uintptr_t arg_0) -> void { return self.SetPermutation(reinterpret_cast<int*>(arg_0 * sizeof(int))); }))
    .function("SetPermutation", emscripten::select_overload<void(vtkSpherePuzzleArrows&, vtkSpherePuzzle*)>([](vtkSpherePuzzleArrows& self, vtkSpherePuzzle* arg_0) -> void { return self.SetPermutation( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetPermutationComponent", &vtkSpherePuzzleArrows::SetPermutationComponent);
}
