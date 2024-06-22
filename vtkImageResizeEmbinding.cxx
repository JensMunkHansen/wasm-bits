// JavaScript wrapper for vtkImageResize with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageResizeEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageResize.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractImageInterpolator.h"
#include "vtkImageResize.h"

template<> void emscripten::internal::raw_destructor<vtkImageResize>(vtkImageResize * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageResize_class) {
  emscripten::class_<vtkImageResize, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageResize")
    .smart_ptr<vtkSmartPointer<vtkImageResize>>("vtkSmartPointer<vtkImageResize>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageResize>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageResize::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageResize& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageResize::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageResize::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageResize::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageResize& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetResizeMethod", &vtkImageResize::SetResizeMethod)
    .function("GetResizeMethodMinValue", &vtkImageResize::GetResizeMethodMinValue)
    .function("GetResizeMethodMaxValue", &vtkImageResize::GetResizeMethodMaxValue)
    .function("GetResizeMethod", &vtkImageResize::GetResizeMethod)
    .function("SetResizeMethodToOutputDimensions", &vtkImageResize::SetResizeMethodToOutputDimensions)
    .function("SetResizeMethodToOutputSpacing", &vtkImageResize::SetResizeMethodToOutputSpacing)
    .function("SetResizeMethodToMagnificationFactors", &vtkImageResize::SetResizeMethodToMagnificationFactors)
    .function("GetResizeMethodAsString", emscripten::optional_override([](vtkImageResize& self) -> std::string {  return self.GetResizeMethodAsString();}))
    .function("SetOutputDimensions", emscripten::select_overload<void(vtkImageResize&, int, int, int)>([](vtkImageResize& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetOutputDimensions( arg_0, arg_1, arg_2); }))
    .function("SetOutputSpacing", emscripten::select_overload<void(vtkImageResize&, double, double, double)>([](vtkImageResize& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOutputSpacing( arg_0, arg_1, arg_2); }))
    .function("SetMagnificationFactors", emscripten::select_overload<void(vtkImageResize&, double, double, double)>([](vtkImageResize& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetMagnificationFactors( arg_0, arg_1, arg_2); }))
    .function("SetBorder", &vtkImageResize::SetBorder)
    .function("BorderOn", &vtkImageResize::BorderOn)
    .function("BorderOff", &vtkImageResize::BorderOff)
    .function("GetBorder", &vtkImageResize::GetBorder)
    .function("SetCropping", &vtkImageResize::SetCropping)
    .function("CroppingOn", &vtkImageResize::CroppingOn)
    .function("CroppingOff", &vtkImageResize::CroppingOff)
    .function("GetCropping", &vtkImageResize::GetCropping)
    .function("SetCroppingRegion", emscripten::select_overload<void(vtkImageResize&, double, double, double, double, double, double)>([](vtkImageResize& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetCroppingRegion( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetInterpolate", &vtkImageResize::SetInterpolate)
    .function("InterpolateOn", &vtkImageResize::InterpolateOn)
    .function("InterpolateOff", &vtkImageResize::InterpolateOff)
    .function("GetInterpolate", &vtkImageResize::GetInterpolate)
    .function("SetInterpolator", &vtkImageResize::SetInterpolator, emscripten::allow_raw_pointers())
    .function("GetInterpolator", &vtkImageResize::GetInterpolator, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkImageResize::GetMTime);
}
EMSCRIPTEN_BINDINGS(vtkImagingCore_vtkImageResize_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkImageResize_OUTPUT_DIMENSIONS", vtkImageResize::OUTPUT_DIMENSIONS },
      { "vtkImageResize_OUTPUT_SPACING", vtkImageResize::OUTPUT_SPACING },
      { "vtkImageResize_MAGNIFICATION_FACTORS", vtkImageResize::MAGNIFICATION_FACTORS },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
