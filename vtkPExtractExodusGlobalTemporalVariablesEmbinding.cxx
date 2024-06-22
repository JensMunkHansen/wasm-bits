// JavaScript wrapper for vtkPExtractExodusGlobalTemporalVariables with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPExtractExodusGlobalTemporalVariablesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPExtractExodusGlobalTemporalVariables.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkPExtractExodusGlobalTemporalVariables.h"

template<> void emscripten::internal::raw_destructor<vtkPExtractExodusGlobalTemporalVariables>(vtkPExtractExodusGlobalTemporalVariables * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPExtractExodusGlobalTemporalVariables_class) {
  emscripten::class_<vtkPExtractExodusGlobalTemporalVariables, emscripten::base<vtkExtractExodusGlobalTemporalVariables>>("vtkPExtractExodusGlobalTemporalVariables")
    .smart_ptr<vtkSmartPointer<vtkPExtractExodusGlobalTemporalVariables>>("vtkSmartPointer<vtkPExtractExodusGlobalTemporalVariables>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPExtractExodusGlobalTemporalVariables>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPExtractExodusGlobalTemporalVariables::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPExtractExodusGlobalTemporalVariables& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPExtractExodusGlobalTemporalVariables::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPExtractExodusGlobalTemporalVariables::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPExtractExodusGlobalTemporalVariables::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPExtractExodusGlobalTemporalVariables& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkPExtractExodusGlobalTemporalVariables::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkPExtractExodusGlobalTemporalVariables::GetController, emscripten::allow_raw_pointers());
}
