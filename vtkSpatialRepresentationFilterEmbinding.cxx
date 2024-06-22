// JavaScript wrapper for vtkSpatialRepresentationFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkSpatialRepresentationFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkSpatialRepresentationFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLocator.h"
#include "vtkSpatialRepresentationFilter.h"

template<> void emscripten::internal::raw_destructor<vtkSpatialRepresentationFilter>(vtkSpatialRepresentationFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSpatialRepresentationFilter_class) {
  emscripten::class_<vtkSpatialRepresentationFilter, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkSpatialRepresentationFilter")
    .smart_ptr<vtkSmartPointer<vtkSpatialRepresentationFilter>>("vtkSmartPointer<vtkSpatialRepresentationFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSpatialRepresentationFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpatialRepresentationFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSpatialRepresentationFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSpatialRepresentationFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSpatialRepresentationFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpatialRepresentationFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSpatialRepresentationFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSpatialRepresentation", &vtkSpatialRepresentationFilter::SetSpatialRepresentation, emscripten::allow_raw_pointers())
    .function("GetSpatialRepresentation", &vtkSpatialRepresentationFilter::GetSpatialRepresentation, emscripten::allow_raw_pointers())
    .function("GetMaximumLevel", &vtkSpatialRepresentationFilter::GetMaximumLevel)
    .function("AddLevel", &vtkSpatialRepresentationFilter::AddLevel)
    .function("ResetLevels", &vtkSpatialRepresentationFilter::ResetLevels)
    .function("SetGenerateLeaves", &vtkSpatialRepresentationFilter::SetGenerateLeaves)
    .function("GetGenerateLeaves", &vtkSpatialRepresentationFilter::GetGenerateLeaves)
    .function("GenerateLeavesOn", &vtkSpatialRepresentationFilter::GenerateLeavesOn)
    .function("GenerateLeavesOff", &vtkSpatialRepresentationFilter::GenerateLeavesOff);
}
