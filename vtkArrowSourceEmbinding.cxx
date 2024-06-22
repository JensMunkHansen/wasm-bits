// JavaScript wrapper for vtkArrowSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkArrowSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkArrowSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkArrowSource.h"

EMSCRIPTEN_BINDINGS(vtkFiltersSources_vtkArrowSource_class_enums) {
  emscripten::enum_<vtkArrowSource::ArrowOrigins>("vtkArrowSource_ArrowOrigins")
    .value("Default", vtkArrowSource::ArrowOrigins::Default)
    .value("Center", vtkArrowSource::ArrowOrigins::Center);
}
template<> void emscripten::internal::raw_destructor<vtkArrowSource>(vtkArrowSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkArrowSource_class) {
  using ArrowOrigins=vtkArrowSource::ArrowOrigins;
  emscripten::class_<vtkArrowSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkArrowSource")
    .smart_ptr<vtkSmartPointer<vtkArrowSource>>("vtkSmartPointer<vtkArrowSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkArrowSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrowSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkArrowSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkArrowSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkArrowSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrowSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkArrowSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTipLength", &vtkArrowSource::SetTipLength)
    .function("GetTipLengthMinValue", &vtkArrowSource::GetTipLengthMinValue)
    .function("GetTipLengthMaxValue", &vtkArrowSource::GetTipLengthMaxValue)
    .function("GetTipLength", &vtkArrowSource::GetTipLength)
    .function("SetTipRadius", &vtkArrowSource::SetTipRadius)
    .function("GetTipRadiusMinValue", &vtkArrowSource::GetTipRadiusMinValue)
    .function("GetTipRadiusMaxValue", &vtkArrowSource::GetTipRadiusMaxValue)
    .function("GetTipRadius", &vtkArrowSource::GetTipRadius)
    .function("SetTipResolution", &vtkArrowSource::SetTipResolution)
    .function("GetTipResolutionMinValue", &vtkArrowSource::GetTipResolutionMinValue)
    .function("GetTipResolutionMaxValue", &vtkArrowSource::GetTipResolutionMaxValue)
    .function("GetTipResolution", &vtkArrowSource::GetTipResolution)
    .function("SetShaftRadius", &vtkArrowSource::SetShaftRadius)
    .function("GetShaftRadiusMinValue", &vtkArrowSource::GetShaftRadiusMinValue)
    .function("GetShaftRadiusMaxValue", &vtkArrowSource::GetShaftRadiusMaxValue)
    .function("GetShaftRadius", &vtkArrowSource::GetShaftRadius)
    .function("SetShaftResolution", &vtkArrowSource::SetShaftResolution)
    .function("GetShaftResolutionMinValue", &vtkArrowSource::GetShaftResolutionMinValue)
    .function("GetShaftResolutionMaxValue", &vtkArrowSource::GetShaftResolutionMaxValue)
    .function("GetShaftResolution", &vtkArrowSource::GetShaftResolution)
    .function("InvertOn", &vtkArrowSource::InvertOn)
    .function("InvertOff", &vtkArrowSource::InvertOff)
    .function("SetInvert", &vtkArrowSource::SetInvert)
    .function("GetInvert", &vtkArrowSource::GetInvert)
    .function("SetArrowOrigin", &vtkArrowSource::SetArrowOrigin)
    .function("GetArrowOrigin", &vtkArrowSource::GetArrowOrigin)
    .function("SetArrowOriginToDefault", &vtkArrowSource::SetArrowOriginToDefault)
    .function("SetArrowOriginToCenter", &vtkArrowSource::SetArrowOriginToCenter)
    .function("GetArrowOriginAsString", &vtkArrowSource::GetArrowOriginAsString);
}
