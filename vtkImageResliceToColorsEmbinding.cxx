// JavaScript wrapper for vtkImageResliceToColors with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageResliceToColorsEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageResliceToColors.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkScalarsToColors.h"
#include "vtkImageResliceToColors.h"

template<> void emscripten::internal::raw_destructor<vtkImageResliceToColors>(vtkImageResliceToColors * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageResliceToColors_class) {
  emscripten::class_<vtkImageResliceToColors, emscripten::base<vtkImageReslice>>("vtkImageResliceToColors")
    .smart_ptr<vtkSmartPointer<vtkImageResliceToColors>>("vtkSmartPointer<vtkImageResliceToColors>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageResliceToColors>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageResliceToColors::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageResliceToColors& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageResliceToColors::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageResliceToColors::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageResliceToColors::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageResliceToColors& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLookupTable", &vtkImageResliceToColors::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkImageResliceToColors::GetLookupTable, emscripten::allow_raw_pointers())
    .function("SetOutputFormat", &vtkImageResliceToColors::SetOutputFormat)
    .function("GetOutputFormatMinValue", &vtkImageResliceToColors::GetOutputFormatMinValue)
    .function("GetOutputFormatMaxValue", &vtkImageResliceToColors::GetOutputFormatMaxValue)
    .function("GetOutputFormat", &vtkImageResliceToColors::GetOutputFormat)
    .function("SetOutputFormatToRGBA", &vtkImageResliceToColors::SetOutputFormatToRGBA)
    .function("SetOutputFormatToRGB", &vtkImageResliceToColors::SetOutputFormatToRGB)
    .function("SetOutputFormatToLuminanceAlpha", &vtkImageResliceToColors::SetOutputFormatToLuminanceAlpha)
    .function("SetOutputFormatToLuminance", &vtkImageResliceToColors::SetOutputFormatToLuminance)
    .function("SetBypass", &vtkImageResliceToColors::SetBypass)
    .function("BypassOn", &vtkImageResliceToColors::BypassOn)
    .function("BypassOff", &vtkImageResliceToColors::BypassOff)
    .function("GetBypass", &vtkImageResliceToColors::GetBypass)
    .function("GetMTime", &vtkImageResliceToColors::GetMTime);
}
