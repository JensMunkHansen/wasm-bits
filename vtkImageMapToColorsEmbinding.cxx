// JavaScript wrapper for vtkImageMapToColors with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageMapToColorsEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageMapToColors.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkScalarsToColors.h"
#include "vtkImageMapToColors.h"

template<> void emscripten::internal::raw_destructor<vtkImageMapToColors>(vtkImageMapToColors * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageMapToColors_class) {
  emscripten::class_<vtkImageMapToColors, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageMapToColors")
    .smart_ptr<vtkSmartPointer<vtkImageMapToColors>>("vtkSmartPointer<vtkImageMapToColors>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageMapToColors>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMapToColors::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageMapToColors& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageMapToColors::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageMapToColors::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMapToColors::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageMapToColors& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLookupTable", &vtkImageMapToColors::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkImageMapToColors::GetLookupTable, emscripten::allow_raw_pointers())
    .function("SetOutputFormat", &vtkImageMapToColors::SetOutputFormat)
    .function("GetOutputFormat", &vtkImageMapToColors::GetOutputFormat)
    .function("SetOutputFormatToRGBA", &vtkImageMapToColors::SetOutputFormatToRGBA)
    .function("SetOutputFormatToRGB", &vtkImageMapToColors::SetOutputFormatToRGB)
    .function("SetOutputFormatToLuminanceAlpha", &vtkImageMapToColors::SetOutputFormatToLuminanceAlpha)
    .function("SetOutputFormatToLuminance", &vtkImageMapToColors::SetOutputFormatToLuminance)
    .function("SetActiveComponent", &vtkImageMapToColors::SetActiveComponent)
    .function("GetActiveComponent", &vtkImageMapToColors::GetActiveComponent)
    .function("SetPassAlphaToOutput", &vtkImageMapToColors::SetPassAlphaToOutput)
    .function("PassAlphaToOutputOn", &vtkImageMapToColors::PassAlphaToOutputOn)
    .function("PassAlphaToOutputOff", &vtkImageMapToColors::PassAlphaToOutputOff)
    .function("GetPassAlphaToOutput", &vtkImageMapToColors::GetPassAlphaToOutput)
    .function("GetMTime", &vtkImageMapToColors::GetMTime)
    .function("SetNaNColor", emscripten::select_overload<void(vtkImageMapToColors&, unsigned char, unsigned char, unsigned char, unsigned char)>([](vtkImageMapToColors& self, unsigned char arg_0, unsigned char arg_1, unsigned char arg_2, unsigned char arg_3) -> void { return self.SetNaNColor( arg_0, arg_1, arg_2, arg_3); }));
}
