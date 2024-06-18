// JavaScript wrapper for vtkGenericCutter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneric.js/vtkFiltersGeneric.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneric.js/vtkGenericCutterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Generic/vtkGenericCutter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitFunction.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkGenericCutter.h"

template<> void emscripten::internal::raw_destructor<vtkGenericCutter>(vtkGenericCutter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericCutter_class) {
  emscripten::class_<vtkGenericCutter, emscripten::base<vtkPolyDataAlgorithm>>("vtkGenericCutter")
    .smart_ptr<vtkSmartPointer<vtkGenericCutter>>("vtkSmartPointer<vtkGenericCutter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGenericCutter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericCutter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericCutter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericCutter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericCutter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericCutter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericCutter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetValue", &vtkGenericCutter::SetValue)
    .function("GetValue", &vtkGenericCutter::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkGenericCutter&)>([](vtkGenericCutter& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkGenericCutter&, std::uintptr_t)>([](vtkGenericCutter& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkGenericCutter::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkGenericCutter::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkGenericCutter&, int, double, double)>([](vtkGenericCutter& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("GetMTime", &vtkGenericCutter::GetMTime)
    .function("SetCutFunction", &vtkGenericCutter::SetCutFunction, emscripten::allow_raw_pointers())
    .function("GetCutFunction", &vtkGenericCutter::GetCutFunction, emscripten::allow_raw_pointers())
    .function("SetGenerateCutScalars", &vtkGenericCutter::SetGenerateCutScalars)
    .function("GetGenerateCutScalars", &vtkGenericCutter::GetGenerateCutScalars)
    .function("GenerateCutScalarsOn", &vtkGenericCutter::GenerateCutScalarsOn)
    .function("GenerateCutScalarsOff", &vtkGenericCutter::GenerateCutScalarsOff)
    .function("SetLocator", &vtkGenericCutter::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkGenericCutter::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkGenericCutter::CreateDefaultLocator);
}
