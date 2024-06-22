// JavaScript wrapper for vtkRectilinearGridClip with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkRectilinearGridClipEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkRectilinearGridClip.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkRectilinearGridClip.h"

template<> void emscripten::internal::raw_destructor<vtkRectilinearGridClip>(vtkRectilinearGridClip * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRectilinearGridClip_class) {
  emscripten::class_<vtkRectilinearGridClip, emscripten::base<vtkRectilinearGridAlgorithm>>("vtkRectilinearGridClip")
    .smart_ptr<vtkSmartPointer<vtkRectilinearGridClip>>("vtkSmartPointer<vtkRectilinearGridClip>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRectilinearGridClip>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearGridClip::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRectilinearGridClip& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRectilinearGridClip::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRectilinearGridClip::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearGridClip::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRectilinearGridClip& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutputWholeExtent", emscripten::select_overload<void(vtkRectilinearGridClip&, int, int, int, int, int, int)>([](vtkRectilinearGridClip& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetOutputWholeExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetOutputWholeExtent", emscripten::select_overload<std::uintptr_t(vtkRectilinearGridClip&)>([](vtkRectilinearGridClip& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetOutputWholeExtent()); }))
    .function("ResetOutputWholeExtent", &vtkRectilinearGridClip::ResetOutputWholeExtent)
    .function("SetClipData", &vtkRectilinearGridClip::SetClipData)
    .function("GetClipData", &vtkRectilinearGridClip::GetClipData)
    .function("ClipDataOn", &vtkRectilinearGridClip::ClipDataOn)
    .function("ClipDataOff", &vtkRectilinearGridClip::ClipDataOff);
}
