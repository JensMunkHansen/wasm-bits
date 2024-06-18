// JavaScript wrapper for vtkImageClip with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageClipEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageClip.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkImageClip.h"

template<> void emscripten::internal::raw_destructor<vtkImageClip>(vtkImageClip * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageClip_class) {
  emscripten::class_<vtkImageClip, emscripten::base<vtkImageAlgorithm>>("vtkImageClip")
    .smart_ptr<vtkSmartPointer<vtkImageClip>>("vtkSmartPointer<vtkImageClip>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageClip>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageClip::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageClip& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageClip::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageClip::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageClip::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageClip& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutputWholeExtent", emscripten::select_overload<void(vtkImageClip&, int, int, int, int, int, int)>([](vtkImageClip& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetOutputWholeExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("ResetOutputWholeExtent", &vtkImageClip::ResetOutputWholeExtent)
    .function("SetClipData", &vtkImageClip::SetClipData)
    .function("GetClipData", &vtkImageClip::GetClipData)
    .function("ClipDataOn", &vtkImageClip::ClipDataOn)
    .function("ClipDataOff", &vtkImageClip::ClipDataOff);
}
