// JavaScript wrapper for vtkSectorSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkSectorSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkSectorSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSectorSource.h"

template<> void emscripten::internal::raw_destructor<vtkSectorSource>(vtkSectorSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSectorSource_class) {
  emscripten::class_<vtkSectorSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkSectorSource")
    .smart_ptr<vtkSmartPointer<vtkSectorSource>>("vtkSmartPointer<vtkSectorSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSectorSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSectorSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSectorSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSectorSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSectorSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSectorSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSectorSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInnerRadius", &vtkSectorSource::SetInnerRadius)
    .function("GetInnerRadiusMinValue", &vtkSectorSource::GetInnerRadiusMinValue)
    .function("GetInnerRadiusMaxValue", &vtkSectorSource::GetInnerRadiusMaxValue)
    .function("GetInnerRadius", &vtkSectorSource::GetInnerRadius)
    .function("SetOuterRadius", &vtkSectorSource::SetOuterRadius)
    .function("GetOuterRadiusMinValue", &vtkSectorSource::GetOuterRadiusMinValue)
    .function("GetOuterRadiusMaxValue", &vtkSectorSource::GetOuterRadiusMaxValue)
    .function("GetOuterRadius", &vtkSectorSource::GetOuterRadius)
    .function("SetZCoord", &vtkSectorSource::SetZCoord)
    .function("GetZCoordMinValue", &vtkSectorSource::GetZCoordMinValue)
    .function("GetZCoordMaxValue", &vtkSectorSource::GetZCoordMaxValue)
    .function("GetZCoord", &vtkSectorSource::GetZCoord)
    .function("SetRadialResolution", &vtkSectorSource::SetRadialResolution)
    .function("GetRadialResolutionMinValue", &vtkSectorSource::GetRadialResolutionMinValue)
    .function("GetRadialResolutionMaxValue", &vtkSectorSource::GetRadialResolutionMaxValue)
    .function("GetRadialResolution", &vtkSectorSource::GetRadialResolution)
    .function("SetCircumferentialResolution", &vtkSectorSource::SetCircumferentialResolution)
    .function("GetCircumferentialResolutionMinValue", &vtkSectorSource::GetCircumferentialResolutionMinValue)
    .function("GetCircumferentialResolutionMaxValue", &vtkSectorSource::GetCircumferentialResolutionMaxValue)
    .function("GetCircumferentialResolution", &vtkSectorSource::GetCircumferentialResolution)
    .function("SetStartAngle", &vtkSectorSource::SetStartAngle)
    .function("GetStartAngleMinValue", &vtkSectorSource::GetStartAngleMinValue)
    .function("GetStartAngleMaxValue", &vtkSectorSource::GetStartAngleMaxValue)
    .function("GetStartAngle", &vtkSectorSource::GetStartAngle)
    .function("SetEndAngle", &vtkSectorSource::SetEndAngle)
    .function("GetEndAngleMinValue", &vtkSectorSource::GetEndAngleMinValue)
    .function("GetEndAngleMaxValue", &vtkSectorSource::GetEndAngleMaxValue)
    .function("GetEndAngle", &vtkSectorSource::GetEndAngle);
}
