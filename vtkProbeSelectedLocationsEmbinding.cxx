// JavaScript wrapper for vtkProbeSelectedLocations with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkProbeSelectedLocationsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkProbeSelectedLocations.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProbeSelectedLocations.h"

template<> void emscripten::internal::raw_destructor<vtkProbeSelectedLocations>(vtkProbeSelectedLocations * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProbeSelectedLocations_class) {
  emscripten::class_<vtkProbeSelectedLocations, emscripten::base<vtkExtractSelectionBase>>("vtkProbeSelectedLocations")
    .smart_ptr<vtkSmartPointer<vtkProbeSelectedLocations>>("vtkSmartPointer<vtkProbeSelectedLocations>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkProbeSelectedLocations>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProbeSelectedLocations::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProbeSelectedLocations& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProbeSelectedLocations::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProbeSelectedLocations::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProbeSelectedLocations::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProbeSelectedLocations& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
