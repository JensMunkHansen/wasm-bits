// JavaScript wrapper for vtkStructuredGridClip with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkStructuredGridClipEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkStructuredGridClip.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkStructuredGridClip.h"

template<> void emscripten::internal::raw_destructor<vtkStructuredGridClip>(vtkStructuredGridClip * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStructuredGridClip_class) {
  emscripten::class_<vtkStructuredGridClip, emscripten::base<vtkStructuredGridAlgorithm>>("vtkStructuredGridClip")
    .smart_ptr<vtkSmartPointer<vtkStructuredGridClip>>("vtkSmartPointer<vtkStructuredGridClip>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkStructuredGridClip>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGridClip::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStructuredGridClip& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStructuredGridClip::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStructuredGridClip::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGridClip::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStructuredGridClip& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutputWholeExtent", emscripten::select_overload<void(vtkStructuredGridClip&, int, int, int, int, int, int)>([](vtkStructuredGridClip& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetOutputWholeExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetOutputWholeExtent", emscripten::select_overload<std::uintptr_t(vtkStructuredGridClip&)>([](vtkStructuredGridClip& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetOutputWholeExtent()); }))
    .function("ResetOutputWholeExtent", &vtkStructuredGridClip::ResetOutputWholeExtent)
    .function("SetClipData", &vtkStructuredGridClip::SetClipData)
    .function("GetClipData", &vtkStructuredGridClip::GetClipData)
    .function("ClipDataOn", &vtkStructuredGridClip::ClipDataOn)
    .function("ClipDataOff", &vtkStructuredGridClip::ClipDataOff);
}
