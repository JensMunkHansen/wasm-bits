// JavaScript wrapper for vtkOverlappingAMRLevelIdScalars with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkOverlappingAMRLevelIdScalarsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkOverlappingAMRLevelIdScalars.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOverlappingAMRLevelIdScalars.h"

template<> void emscripten::internal::raw_destructor<vtkOverlappingAMRLevelIdScalars>(vtkOverlappingAMRLevelIdScalars * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOverlappingAMRLevelIdScalars_class) {
  emscripten::class_<vtkOverlappingAMRLevelIdScalars, emscripten::base<vtkOverlappingAMRAlgorithm>>("vtkOverlappingAMRLevelIdScalars")
    .smart_ptr<vtkSmartPointer<vtkOverlappingAMRLevelIdScalars>>("vtkSmartPointer<vtkOverlappingAMRLevelIdScalars>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOverlappingAMRLevelIdScalars>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOverlappingAMRLevelIdScalars::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOverlappingAMRLevelIdScalars& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOverlappingAMRLevelIdScalars::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOverlappingAMRLevelIdScalars::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOverlappingAMRLevelIdScalars::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOverlappingAMRLevelIdScalars& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
