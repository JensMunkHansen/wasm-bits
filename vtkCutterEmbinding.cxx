// JavaScript wrapper for vtkCutter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkCutterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkCutter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitFunction.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkCutter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkCutter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_SORT_BY_VALUE", 0 },
      { "VTK_SORT_BY_CELL", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkCutter>(vtkCutter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCutter_class) {
  emscripten::class_<vtkCutter, emscripten::base<vtkPolyDataAlgorithm>>("vtkCutter")
    .smart_ptr<vtkSmartPointer<vtkCutter>>("vtkSmartPointer<vtkCutter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCutter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCutter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCutter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCutter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCutter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCutter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCutter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetValue", &vtkCutter::SetValue)
    .function("GetValue", &vtkCutter::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkCutter&)>([](vtkCutter& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkCutter&, std::uintptr_t)>([](vtkCutter& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkCutter::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkCutter::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkCutter&, int, double, double)>([](vtkCutter& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("GetMTime", &vtkCutter::GetMTime)
    .function("SetCutFunction", &vtkCutter::SetCutFunction, emscripten::allow_raw_pointers())
    .function("GetCutFunction", &vtkCutter::GetCutFunction, emscripten::allow_raw_pointers())
    .function("SetGenerateCutScalars", &vtkCutter::SetGenerateCutScalars)
    .function("GetGenerateCutScalars", &vtkCutter::GetGenerateCutScalars)
    .function("GenerateCutScalarsOn", &vtkCutter::GenerateCutScalarsOn)
    .function("GenerateCutScalarsOff", &vtkCutter::GenerateCutScalarsOff)
    .function("SetGenerateTriangles", &vtkCutter::SetGenerateTriangles)
    .function("GetGenerateTriangles", &vtkCutter::GetGenerateTriangles)
    .function("GenerateTrianglesOn", &vtkCutter::GenerateTrianglesOn)
    .function("GenerateTrianglesOff", &vtkCutter::GenerateTrianglesOff)
    .function("SetLocator", &vtkCutter::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkCutter::GetLocator, emscripten::allow_raw_pointers())
    .function("SetSortBy", &vtkCutter::SetSortBy)
    .function("GetSortByMinValue", &vtkCutter::GetSortByMinValue)
    .function("GetSortByMaxValue", &vtkCutter::GetSortByMaxValue)
    .function("GetSortBy", &vtkCutter::GetSortBy)
    .function("SetSortByToSortByValue", &vtkCutter::SetSortByToSortByValue)
    .function("SetSortByToSortByCell", &vtkCutter::SetSortByToSortByCell)
    .function("GetSortByAsString", emscripten::optional_override([](vtkCutter& self) -> std::string {  return self.GetSortByAsString();}))
    .function("CreateDefaultLocator", &vtkCutter::CreateDefaultLocator)
    .function("SetOutputPointsPrecision", &vtkCutter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecisionMinValue", &vtkCutter::GetOutputPointsPrecisionMinValue)
    .function("GetOutputPointsPrecisionMaxValue", &vtkCutter::GetOutputPointsPrecisionMaxValue)
    .function("GetOutputPointsPrecision", &vtkCutter::GetOutputPointsPrecision);
}
