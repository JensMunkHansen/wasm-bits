// JavaScript wrapper for vtkContourValues with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMisc.js/vtkCommonMisc.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMisc.js/vtkContourValuesEmbinding.cxx \
 /home/jmh/github/vtk/Common/Misc/vtkContourValues.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContourValues.h"

template<> void emscripten::internal::raw_destructor<vtkContourValues>(vtkContourValues * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContourValues_class) {
  emscripten::class_<vtkContourValues, emscripten::base<vtkObject>>("vtkContourValues")
    .smart_ptr<vtkSmartPointer<vtkContourValues>>("vtkSmartPointer<vtkContourValues>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkContourValues>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContourValues::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContourValues& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContourValues::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContourValues::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContourValues::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContourValues& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetValue", &vtkContourValues::SetValue)
    .function("GetValue", &vtkContourValues::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkContourValues&)>([](vtkContourValues& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkContourValues&, std::uintptr_t)>([](vtkContourValues& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkContourValues::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkContourValues::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkContourValues&, int, double, double)>([](vtkContourValues& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("DeepCopy", &vtkContourValues::DeepCopy, emscripten::allow_raw_pointers());
}
