// JavaScript wrapper for vtkAppendLocationAttributes with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkAppendLocationAttributesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkAppendLocationAttributes.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAppendLocationAttributes.h"

template<> void emscripten::internal::raw_destructor<vtkAppendLocationAttributes>(vtkAppendLocationAttributes * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAppendLocationAttributes_class) {
  emscripten::class_<vtkAppendLocationAttributes, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkAppendLocationAttributes")
    .smart_ptr<vtkSmartPointer<vtkAppendLocationAttributes>>("vtkSmartPointer<vtkAppendLocationAttributes>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAppendLocationAttributes>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAppendLocationAttributes::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAppendLocationAttributes& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAppendLocationAttributes::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAppendLocationAttributes::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAppendLocationAttributes::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAppendLocationAttributes& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetAppendPointLocations", &vtkAppendLocationAttributes::SetAppendPointLocations)
    .function("GetAppendPointLocations", &vtkAppendLocationAttributes::GetAppendPointLocations)
    .function("AppendPointLocationsOn", &vtkAppendLocationAttributes::AppendPointLocationsOn)
    .function("AppendPointLocationsOff", &vtkAppendLocationAttributes::AppendPointLocationsOff)
    .function("SetAppendCellCenters", &vtkAppendLocationAttributes::SetAppendCellCenters)
    .function("GetAppendCellCenters", &vtkAppendLocationAttributes::GetAppendCellCenters)
    .function("AppendCellCentersOn", &vtkAppendLocationAttributes::AppendCellCentersOn)
    .function("AppendCellCentersOff", &vtkAppendLocationAttributes::AppendCellCentersOff);
}
