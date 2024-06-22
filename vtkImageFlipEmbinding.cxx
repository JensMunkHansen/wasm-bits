// JavaScript wrapper for vtkImageFlip with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageFlipEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageFlip.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageFlip.h"

template<> void emscripten::internal::raw_destructor<vtkImageFlip>(vtkImageFlip * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageFlip_class) {
  emscripten::class_<vtkImageFlip, emscripten::base<vtkImageReslice>>("vtkImageFlip")
    .smart_ptr<vtkSmartPointer<vtkImageFlip>>("vtkSmartPointer<vtkImageFlip>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageFlip>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageFlip::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageFlip& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageFlip::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageFlip::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageFlip::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageFlip& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFilteredAxis", &vtkImageFlip::SetFilteredAxis)
    .function("GetFilteredAxis", &vtkImageFlip::GetFilteredAxis)
    .function("SetFlipAboutOrigin", &vtkImageFlip::SetFlipAboutOrigin)
    .function("GetFlipAboutOrigin", &vtkImageFlip::GetFlipAboutOrigin)
    .function("FlipAboutOriginOn", &vtkImageFlip::FlipAboutOriginOn)
    .function("FlipAboutOriginOff", &vtkImageFlip::FlipAboutOriginOff)
    .function("SetFilteredAxes", &vtkImageFlip::SetFilteredAxes)
    .function("GetFilteredAxes", &vtkImageFlip::GetFilteredAxes)
    .function("SetPreserveImageExtent", &vtkImageFlip::SetPreserveImageExtent)
    .function("GetPreserveImageExtent", &vtkImageFlip::GetPreserveImageExtent)
    .function("PreserveImageExtentOn", &vtkImageFlip::PreserveImageExtentOn)
    .function("PreserveImageExtentOff", &vtkImageFlip::PreserveImageExtentOff);
}
