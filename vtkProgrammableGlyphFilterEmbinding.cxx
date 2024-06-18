// JavaScript wrapper for vtkProgrammableGlyphFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersProgrammable.js/vtkFiltersProgrammable.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersProgrammable.js/vtkProgrammableGlyphFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Programmable/vtkProgrammableGlyphFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkPolyData.h"
#include "vtkPointData.h"
#include "vtkProgrammableGlyphFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersProgrammable_vtkProgrammableGlyphFilter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_COLOR_BY_INPUT", 0 },
      { "VTK_COLOR_BY_SOURCE", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkProgrammableGlyphFilter>(vtkProgrammableGlyphFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProgrammableGlyphFilter_class) {
  emscripten::class_<vtkProgrammableGlyphFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkProgrammableGlyphFilter")
    .smart_ptr<vtkSmartPointer<vtkProgrammableGlyphFilter>>("vtkSmartPointer<vtkProgrammableGlyphFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkProgrammableGlyphFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProgrammableGlyphFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProgrammableGlyphFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProgrammableGlyphFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProgrammableGlyphFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProgrammableGlyphFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProgrammableGlyphFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSourceConnection", &vtkProgrammableGlyphFilter::SetSourceConnection, emscripten::allow_raw_pointers())
    .function("SetSourceData", &vtkProgrammableGlyphFilter::SetSourceData, emscripten::allow_raw_pointers())
    .function("GetSource", &vtkProgrammableGlyphFilter::GetSource, emscripten::allow_raw_pointers())
    .function("SetGlyphMethod", emscripten::optional_override([](vtkProgrammableGlyphFilter& self, emscripten::val arg_0, std::uintptr_t arg_1) -> void {  return self.SetGlyphMethod( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()),reinterpret_cast<void*>(arg_1));}))
    .function("SetGlyphMethodArgDelete", emscripten::optional_override([](vtkProgrammableGlyphFilter& self, emscripten::val arg_0) -> void {  return self.SetGlyphMethodArgDelete( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()));}))
    .function("GetPointId", &vtkProgrammableGlyphFilter::GetPointId)
    .function("GetPointData", &vtkProgrammableGlyphFilter::GetPointData, emscripten::allow_raw_pointers())
    .function("SetColorMode", &vtkProgrammableGlyphFilter::SetColorMode)
    .function("GetColorMode", &vtkProgrammableGlyphFilter::GetColorMode)
    .function("SetColorModeToColorByInput", &vtkProgrammableGlyphFilter::SetColorModeToColorByInput)
    .function("SetColorModeToColorBySource", &vtkProgrammableGlyphFilter::SetColorModeToColorBySource)
    .function("GetColorModeAsString", emscripten::optional_override([](vtkProgrammableGlyphFilter& self) -> std::string {  return self.GetColorModeAsString();}));
}
