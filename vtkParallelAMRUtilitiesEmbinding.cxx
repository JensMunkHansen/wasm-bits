// JavaScript wrapper for vtkParallelAMRUtilities with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersAMR.js/vtkFiltersAMR.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersAMR.js/vtkParallelAMRUtilitiesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/AMR/vtkParallelAMRUtilities.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOverlappingAMR.h"
#include "vtkMultiProcessController.h"
#include "vtkParallelAMRUtilities.h"

template<> void emscripten::internal::raw_destructor<vtkParallelAMRUtilities>(vtkParallelAMRUtilities * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParallelAMRUtilities_class) {
  emscripten::class_<vtkParallelAMRUtilities, emscripten::base<vtkAMRUtilities>>("vtkParallelAMRUtilities")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelAMRUtilities::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParallelAMRUtilities& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParallelAMRUtilities::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParallelAMRUtilities::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelAMRUtilities::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParallelAMRUtilities& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("StripGhostLayers", &vtkParallelAMRUtilities::StripGhostLayers, emscripten::allow_raw_pointers())
    .class_function("DistributeProcessInformation", emscripten::optional_override([]( vtkOverlappingAMR* arg_0, vtkMultiProcessController* arg_1, std::vector<int>& arg_2) -> void {  return vtkParallelAMRUtilities::DistributeProcessInformation( arg_0, arg_1, arg_2);}), emscripten::allow_raw_pointers())
    .class_function("BlankCells", &vtkParallelAMRUtilities::BlankCells, emscripten::allow_raw_pointers());
}
