// JavaScript wrapper for vtkExtractExodusGlobalTemporalVariables with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractExodusGlobalTemporalVariablesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractExodusGlobalTemporalVariables.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractExodusGlobalTemporalVariables.h"

template<> void emscripten::internal::raw_destructor<vtkExtractExodusGlobalTemporalVariables>(vtkExtractExodusGlobalTemporalVariables * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractExodusGlobalTemporalVariables_class) {
  emscripten::class_<vtkExtractExodusGlobalTemporalVariables, emscripten::base<vtkTableAlgorithm>>("vtkExtractExodusGlobalTemporalVariables")
    .smart_ptr<vtkSmartPointer<vtkExtractExodusGlobalTemporalVariables>>("vtkSmartPointer<vtkExtractExodusGlobalTemporalVariables>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractExodusGlobalTemporalVariables>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractExodusGlobalTemporalVariables::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractExodusGlobalTemporalVariables& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractExodusGlobalTemporalVariables::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractExodusGlobalTemporalVariables::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractExodusGlobalTemporalVariables::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractExodusGlobalTemporalVariables& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetAutoDetectGlobalTemporalDataArrays", &vtkExtractExodusGlobalTemporalVariables::SetAutoDetectGlobalTemporalDataArrays)
    .function("GetAutoDetectGlobalTemporalDataArrays", &vtkExtractExodusGlobalTemporalVariables::GetAutoDetectGlobalTemporalDataArrays)
    .function("AutoDetectGlobalTemporalDataArraysOn", &vtkExtractExodusGlobalTemporalVariables::AutoDetectGlobalTemporalDataArraysOn)
    .function("AutoDetectGlobalTemporalDataArraysOff", &vtkExtractExodusGlobalTemporalVariables::AutoDetectGlobalTemporalDataArraysOff);
}
