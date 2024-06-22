// JavaScript wrapper for vtkEllipticalButtonSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkEllipticalButtonSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkEllipticalButtonSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkEllipticalButtonSource.h"

template<> void emscripten::internal::raw_destructor<vtkEllipticalButtonSource>(vtkEllipticalButtonSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEllipticalButtonSource_class) {
  emscripten::class_<vtkEllipticalButtonSource, emscripten::base<vtkButtonSource>>("vtkEllipticalButtonSource")
    .smart_ptr<vtkSmartPointer<vtkEllipticalButtonSource>>("vtkSmartPointer<vtkEllipticalButtonSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkEllipticalButtonSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEllipticalButtonSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEllipticalButtonSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEllipticalButtonSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEllipticalButtonSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEllipticalButtonSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEllipticalButtonSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWidth", &vtkEllipticalButtonSource::SetWidth)
    .function("GetWidthMinValue", &vtkEllipticalButtonSource::GetWidthMinValue)
    .function("GetWidthMaxValue", &vtkEllipticalButtonSource::GetWidthMaxValue)
    .function("GetWidth", &vtkEllipticalButtonSource::GetWidth)
    .function("SetHeight", &vtkEllipticalButtonSource::SetHeight)
    .function("GetHeightMinValue", &vtkEllipticalButtonSource::GetHeightMinValue)
    .function("GetHeightMaxValue", &vtkEllipticalButtonSource::GetHeightMaxValue)
    .function("GetHeight", &vtkEllipticalButtonSource::GetHeight)
    .function("SetDepth", &vtkEllipticalButtonSource::SetDepth)
    .function("GetDepthMinValue", &vtkEllipticalButtonSource::GetDepthMinValue)
    .function("GetDepthMaxValue", &vtkEllipticalButtonSource::GetDepthMaxValue)
    .function("GetDepth", &vtkEllipticalButtonSource::GetDepth)
    .function("SetCircumferentialResolution", &vtkEllipticalButtonSource::SetCircumferentialResolution)
    .function("GetCircumferentialResolutionMinValue", &vtkEllipticalButtonSource::GetCircumferentialResolutionMinValue)
    .function("GetCircumferentialResolutionMaxValue", &vtkEllipticalButtonSource::GetCircumferentialResolutionMaxValue)
    .function("GetCircumferentialResolution", &vtkEllipticalButtonSource::GetCircumferentialResolution)
    .function("SetTextureResolution", &vtkEllipticalButtonSource::SetTextureResolution)
    .function("GetTextureResolutionMinValue", &vtkEllipticalButtonSource::GetTextureResolutionMinValue)
    .function("GetTextureResolutionMaxValue", &vtkEllipticalButtonSource::GetTextureResolutionMaxValue)
    .function("GetTextureResolution", &vtkEllipticalButtonSource::GetTextureResolution)
    .function("SetShoulderResolution", &vtkEllipticalButtonSource::SetShoulderResolution)
    .function("GetShoulderResolutionMinValue", &vtkEllipticalButtonSource::GetShoulderResolutionMinValue)
    .function("GetShoulderResolutionMaxValue", &vtkEllipticalButtonSource::GetShoulderResolutionMaxValue)
    .function("GetShoulderResolution", &vtkEllipticalButtonSource::GetShoulderResolution)
    .function("SetRadialRatio", &vtkEllipticalButtonSource::SetRadialRatio)
    .function("GetRadialRatioMinValue", &vtkEllipticalButtonSource::GetRadialRatioMinValue)
    .function("GetRadialRatioMaxValue", &vtkEllipticalButtonSource::GetRadialRatioMaxValue)
    .function("GetRadialRatio", &vtkEllipticalButtonSource::GetRadialRatio)
    .function("SetOutputPointsPrecision", &vtkEllipticalButtonSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkEllipticalButtonSource::GetOutputPointsPrecision);
}
