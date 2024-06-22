// JavaScript wrapper for vtkLookupTableWithEnabling with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkLookupTableWithEnablingEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkLookupTableWithEnabling.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkLookupTableWithEnabling.h"

template<> void emscripten::internal::raw_destructor<vtkLookupTableWithEnabling>(vtkLookupTableWithEnabling * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLookupTableWithEnabling_class) {
  emscripten::class_<vtkLookupTableWithEnabling, emscripten::base<vtkLookupTable>>("vtkLookupTableWithEnabling")
    .smart_ptr<vtkSmartPointer<vtkLookupTableWithEnabling>>("vtkSmartPointer<vtkLookupTableWithEnabling>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLookupTableWithEnabling>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLookupTableWithEnabling::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLookupTableWithEnabling& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLookupTableWithEnabling::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLookupTableWithEnabling::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLookupTableWithEnabling::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLookupTableWithEnabling& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetEnabledArray", &vtkLookupTableWithEnabling::GetEnabledArray, emscripten::allow_raw_pointers())
    .function("SetEnabledArray", &vtkLookupTableWithEnabling::SetEnabledArray, emscripten::allow_raw_pointers())
    .function("MapScalarsThroughTable2", emscripten::optional_override([](vtkLookupTableWithEnabling& self, std::uintptr_t arg_0, std::uintptr_t arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void {  return self.MapScalarsThroughTable2(reinterpret_cast<void*>(arg_0),reinterpret_cast<unsigned char*>(arg_1 * sizeof(unsigned char)), arg_2, arg_3, arg_4, arg_5);}))
    .function("DisableColor", emscripten::optional_override([](vtkLookupTableWithEnabling& self, unsigned char arg_0, unsigned char arg_1, unsigned char arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5) -> void {  return self.DisableColor( arg_0, arg_1, arg_2,reinterpret_cast<unsigned char*>(arg_3 * sizeof(unsigned char)),reinterpret_cast<unsigned char*>(arg_4 * sizeof(unsigned char)),reinterpret_cast<unsigned char*>(arg_5 * sizeof(unsigned char)));}));
}
