// JavaScript wrapper for vtkUnstructuredGridQuadricDecimation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkUnstructuredGridQuadricDecimationEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkUnstructuredGridQuadricDecimation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGridQuadricDecimation.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridQuadricDecimation>(vtkUnstructuredGridQuadricDecimation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridQuadricDecimation_class) {
  emscripten::class_<vtkUnstructuredGridQuadricDecimation, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkUnstructuredGridQuadricDecimation")
    .smart_ptr<vtkSmartPointer<vtkUnstructuredGridQuadricDecimation>>("vtkSmartPointer<vtkUnstructuredGridQuadricDecimation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkUnstructuredGridQuadricDecimation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridQuadricDecimation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridQuadricDecimation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridQuadricDecimation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridQuadricDecimation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridQuadricDecimation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridQuadricDecimation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTargetReduction", &vtkUnstructuredGridQuadricDecimation::SetTargetReduction)
    .function("GetTargetReduction", &vtkUnstructuredGridQuadricDecimation::GetTargetReduction)
    .function("SetNumberOfTetsOutput", &vtkUnstructuredGridQuadricDecimation::SetNumberOfTetsOutput)
    .function("GetNumberOfTetsOutput", &vtkUnstructuredGridQuadricDecimation::GetNumberOfTetsOutput)
    .function("SetNumberOfEdgesToDecimate", &vtkUnstructuredGridQuadricDecimation::SetNumberOfEdgesToDecimate)
    .function("GetNumberOfEdgesToDecimate", &vtkUnstructuredGridQuadricDecimation::GetNumberOfEdgesToDecimate)
    .function("SetNumberOfCandidates", &vtkUnstructuredGridQuadricDecimation::SetNumberOfCandidates)
    .function("GetNumberOfCandidates", &vtkUnstructuredGridQuadricDecimation::GetNumberOfCandidates)
    .function("SetAutoAddCandidates", &vtkUnstructuredGridQuadricDecimation::SetAutoAddCandidates)
    .function("GetAutoAddCandidates", &vtkUnstructuredGridQuadricDecimation::GetAutoAddCandidates)
    .function("SetAutoAddCandidatesThreshold", &vtkUnstructuredGridQuadricDecimation::SetAutoAddCandidatesThreshold)
    .function("GetAutoAddCandidatesThreshold", &vtkUnstructuredGridQuadricDecimation::GetAutoAddCandidatesThreshold)
    .function("SetBoundaryWeight", &vtkUnstructuredGridQuadricDecimation::SetBoundaryWeight)
    .function("GetBoundaryWeight", &vtkUnstructuredGridQuadricDecimation::GetBoundaryWeight)
    .function("SetScalarsName", emscripten::optional_override([](vtkUnstructuredGridQuadricDecimation& self, const std::string & arg_0) -> void {  return self.SetScalarsName( arg_0.c_str());}))
    .function("GetScalarsName", emscripten::optional_override([](vtkUnstructuredGridQuadricDecimation& self) -> std::string {  return self.GetScalarsName();}));
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkUnstructuredGridQuadricDecimation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkUnstructuredGridQuadricDecimation_NON_ERROR", vtkUnstructuredGridQuadricDecimation::NON_ERROR },
      { "vtkUnstructuredGridQuadricDecimation_NON_TETRAHEDRA", vtkUnstructuredGridQuadricDecimation::NON_TETRAHEDRA },
      { "vtkUnstructuredGridQuadricDecimation_NO_SCALARS", vtkUnstructuredGridQuadricDecimation::NO_SCALARS },
      { "vtkUnstructuredGridQuadricDecimation_NO_CELLS", vtkUnstructuredGridQuadricDecimation::NO_CELLS },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
