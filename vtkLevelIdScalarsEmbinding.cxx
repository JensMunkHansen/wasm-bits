// JavaScript wrapper for vtkLevelIdScalars with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkLevelIdScalarsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkLevelIdScalars.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLevelIdScalars.h"

template<> void emscripten::internal::raw_destructor<vtkLevelIdScalars>(vtkLevelIdScalars * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLevelIdScalars_class) {
  emscripten::class_<vtkLevelIdScalars, emscripten::base<vtkOverlappingAMRLevelIdScalars>>("vtkLevelIdScalars")
    .smart_ptr<vtkSmartPointer<vtkLevelIdScalars>>("vtkSmartPointer<vtkLevelIdScalars>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLevelIdScalars>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLevelIdScalars::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLevelIdScalars& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLevelIdScalars::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLevelIdScalars::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLevelIdScalars::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLevelIdScalars& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}