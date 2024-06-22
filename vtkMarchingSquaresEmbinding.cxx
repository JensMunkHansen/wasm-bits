// JavaScript wrapper for vtkMarchingSquares with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkMarchingSquaresEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkMarchingSquares.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkMarchingSquares.h"

template<> void emscripten::internal::raw_destructor<vtkMarchingSquares>(vtkMarchingSquares * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMarchingSquares_class) {
  emscripten::class_<vtkMarchingSquares, emscripten::base<vtkPolyDataAlgorithm>>("vtkMarchingSquares")
    .smart_ptr<vtkSmartPointer<vtkMarchingSquares>>("vtkSmartPointer<vtkMarchingSquares>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMarchingSquares>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMarchingSquares::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMarchingSquares& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMarchingSquares::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMarchingSquares::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMarchingSquares::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMarchingSquares& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetImageRange", emscripten::select_overload<void(vtkMarchingSquares&, std::uintptr_t)>([](vtkMarchingSquares& self, std::uintptr_t arg_0) -> void { return self.SetImageRange(reinterpret_cast<int*>(arg_0 * sizeof(int))); }))
    .function("SetImageRange", emscripten::select_overload<void(vtkMarchingSquares&, int, int, int, int, int, int)>([](vtkMarchingSquares& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetImageRange( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetValue", &vtkMarchingSquares::SetValue)
    .function("GetValue", &vtkMarchingSquares::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkMarchingSquares&)>([](vtkMarchingSquares& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkMarchingSquares&, std::uintptr_t)>([](vtkMarchingSquares& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkMarchingSquares::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkMarchingSquares::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkMarchingSquares&, int, double, double)>([](vtkMarchingSquares& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("GetMTime", &vtkMarchingSquares::GetMTime)
    .function("SetLocator", &vtkMarchingSquares::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkMarchingSquares::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkMarchingSquares::CreateDefaultLocator);
}
