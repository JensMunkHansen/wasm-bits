// JavaScript wrapper for vtkImageToPolyDataFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkImageToPolyDataFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkImageToPolyDataFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkScalarsToColors.h"
#include "vtkImageToPolyDataFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersHybrid_vtkImageToPolyDataFilter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "VTK_STYLE_PIXELIZE", 0 },
      { "VTK_STYLE_POLYGONALIZE", 1 },
      { "VTK_STYLE_RUN_LENGTH", 2 },
      { "VTK_COLOR_MODE_LUT", 0 },
      { "VTK_COLOR_MODE_LINEAR_256", 1 },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkImageToPolyDataFilter>(vtkImageToPolyDataFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageToPolyDataFilter_class) {
  emscripten::class_<vtkImageToPolyDataFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkImageToPolyDataFilter")
    .smart_ptr<vtkSmartPointer<vtkImageToPolyDataFilter>>("vtkSmartPointer<vtkImageToPolyDataFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageToPolyDataFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageToPolyDataFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageToPolyDataFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageToPolyDataFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageToPolyDataFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageToPolyDataFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageToPolyDataFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutputStyle", &vtkImageToPolyDataFilter::SetOutputStyle)
    .function("GetOutputStyleMinValue", &vtkImageToPolyDataFilter::GetOutputStyleMinValue)
    .function("GetOutputStyleMaxValue", &vtkImageToPolyDataFilter::GetOutputStyleMaxValue)
    .function("GetOutputStyle", &vtkImageToPolyDataFilter::GetOutputStyle)
    .function("SetOutputStyleToPixelize", &vtkImageToPolyDataFilter::SetOutputStyleToPixelize)
    .function("SetOutputStyleToPolygonalize", &vtkImageToPolyDataFilter::SetOutputStyleToPolygonalize)
    .function("SetOutputStyleToRunLength", &vtkImageToPolyDataFilter::SetOutputStyleToRunLength)
    .function("SetColorMode", &vtkImageToPolyDataFilter::SetColorMode)
    .function("GetColorModeMinValue", &vtkImageToPolyDataFilter::GetColorModeMinValue)
    .function("GetColorModeMaxValue", &vtkImageToPolyDataFilter::GetColorModeMaxValue)
    .function("GetColorMode", &vtkImageToPolyDataFilter::GetColorMode)
    .function("SetColorModeToLUT", &vtkImageToPolyDataFilter::SetColorModeToLUT)
    .function("SetColorModeToLinear256", &vtkImageToPolyDataFilter::SetColorModeToLinear256)
    .function("SetLookupTable", &vtkImageToPolyDataFilter::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkImageToPolyDataFilter::GetLookupTable, emscripten::allow_raw_pointers())
    .function("SetSmoothing", &vtkImageToPolyDataFilter::SetSmoothing)
    .function("GetSmoothing", &vtkImageToPolyDataFilter::GetSmoothing)
    .function("SmoothingOn", &vtkImageToPolyDataFilter::SmoothingOn)
    .function("SmoothingOff", &vtkImageToPolyDataFilter::SmoothingOff)
    .function("SetNumberOfSmoothingIterations", &vtkImageToPolyDataFilter::SetNumberOfSmoothingIterations)
    .function("GetNumberOfSmoothingIterationsMinValue", &vtkImageToPolyDataFilter::GetNumberOfSmoothingIterationsMinValue)
    .function("GetNumberOfSmoothingIterationsMaxValue", &vtkImageToPolyDataFilter::GetNumberOfSmoothingIterationsMaxValue)
    .function("GetNumberOfSmoothingIterations", &vtkImageToPolyDataFilter::GetNumberOfSmoothingIterations)
    .function("SetDecimation", &vtkImageToPolyDataFilter::SetDecimation)
    .function("GetDecimation", &vtkImageToPolyDataFilter::GetDecimation)
    .function("DecimationOn", &vtkImageToPolyDataFilter::DecimationOn)
    .function("DecimationOff", &vtkImageToPolyDataFilter::DecimationOff)
    .function("SetDecimationError", &vtkImageToPolyDataFilter::SetDecimationError)
    .function("GetDecimationErrorMinValue", &vtkImageToPolyDataFilter::GetDecimationErrorMinValue)
    .function("GetDecimationErrorMaxValue", &vtkImageToPolyDataFilter::GetDecimationErrorMaxValue)
    .function("GetDecimationError", &vtkImageToPolyDataFilter::GetDecimationError)
    .function("SetError", &vtkImageToPolyDataFilter::SetError)
    .function("GetErrorMinValue", &vtkImageToPolyDataFilter::GetErrorMinValue)
    .function("GetErrorMaxValue", &vtkImageToPolyDataFilter::GetErrorMaxValue)
    .function("GetError", &vtkImageToPolyDataFilter::GetError)
    .function("SetSubImageSize", &vtkImageToPolyDataFilter::SetSubImageSize)
    .function("GetSubImageSizeMinValue", &vtkImageToPolyDataFilter::GetSubImageSizeMinValue)
    .function("GetSubImageSizeMaxValue", &vtkImageToPolyDataFilter::GetSubImageSizeMaxValue)
    .function("GetSubImageSize", &vtkImageToPolyDataFilter::GetSubImageSize);
}
