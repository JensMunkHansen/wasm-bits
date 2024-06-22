// JavaScript wrapper for vtkBandedPolyDataContourFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkBandedPolyDataContourFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkBandedPolyDataContourFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkBandedPolyDataContourFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkBandedPolyDataContourFilter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_SCALAR_MODE_INDEX", 0 },
      { "VTK_SCALAR_MODE_VALUE", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkBandedPolyDataContourFilter>(vtkBandedPolyDataContourFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBandedPolyDataContourFilter_class) {
  emscripten::class_<vtkBandedPolyDataContourFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkBandedPolyDataContourFilter")
    .smart_ptr<vtkSmartPointer<vtkBandedPolyDataContourFilter>>("vtkSmartPointer<vtkBandedPolyDataContourFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBandedPolyDataContourFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBandedPolyDataContourFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBandedPolyDataContourFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBandedPolyDataContourFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBandedPolyDataContourFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBandedPolyDataContourFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBandedPolyDataContourFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetValue", &vtkBandedPolyDataContourFilter::SetValue)
    .function("GetValue", &vtkBandedPolyDataContourFilter::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkBandedPolyDataContourFilter&)>([](vtkBandedPolyDataContourFilter& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkBandedPolyDataContourFilter&, std::uintptr_t)>([](vtkBandedPolyDataContourFilter& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkBandedPolyDataContourFilter::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkBandedPolyDataContourFilter::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkBandedPolyDataContourFilter&, int, double, double)>([](vtkBandedPolyDataContourFilter& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("SetClipping", &vtkBandedPolyDataContourFilter::SetClipping)
    .function("GetClipping", &vtkBandedPolyDataContourFilter::GetClipping)
    .function("ClippingOn", &vtkBandedPolyDataContourFilter::ClippingOn)
    .function("ClippingOff", &vtkBandedPolyDataContourFilter::ClippingOff)
    .function("SetScalarMode", &vtkBandedPolyDataContourFilter::SetScalarMode)
    .function("GetScalarModeMinValue", &vtkBandedPolyDataContourFilter::GetScalarModeMinValue)
    .function("GetScalarModeMaxValue", &vtkBandedPolyDataContourFilter::GetScalarModeMaxValue)
    .function("GetScalarMode", &vtkBandedPolyDataContourFilter::GetScalarMode)
    .function("SetScalarModeToIndex", &vtkBandedPolyDataContourFilter::SetScalarModeToIndex)
    .function("SetScalarModeToValue", &vtkBandedPolyDataContourFilter::SetScalarModeToValue)
    .function("SetGenerateContourEdges", &vtkBandedPolyDataContourFilter::SetGenerateContourEdges)
    .function("GetGenerateContourEdges", &vtkBandedPolyDataContourFilter::GetGenerateContourEdges)
    .function("GenerateContourEdgesOn", &vtkBandedPolyDataContourFilter::GenerateContourEdgesOn)
    .function("GenerateContourEdgesOff", &vtkBandedPolyDataContourFilter::GenerateContourEdgesOff)
    .function("SetClipTolerance", &vtkBandedPolyDataContourFilter::SetClipTolerance)
    .function("GetClipTolerance", &vtkBandedPolyDataContourFilter::GetClipTolerance)
    .function("SetComponent", &vtkBandedPolyDataContourFilter::SetComponent)
    .function("GetComponent", &vtkBandedPolyDataContourFilter::GetComponent)
    .function("GetContourEdgesOutput", &vtkBandedPolyDataContourFilter::GetContourEdgesOutput, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkBandedPolyDataContourFilter::GetMTime);
}
