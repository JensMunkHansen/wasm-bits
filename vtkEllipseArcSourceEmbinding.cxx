// JavaScript wrapper for vtkEllipseArcSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkEllipseArcSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkEllipseArcSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkEllipseArcSource.h"

template<> void emscripten::internal::raw_destructor<vtkEllipseArcSource>(vtkEllipseArcSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEllipseArcSource_class) {
  emscripten::class_<vtkEllipseArcSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkEllipseArcSource")
    .smart_ptr<vtkSmartPointer<vtkEllipseArcSource>>("vtkSmartPointer<vtkEllipseArcSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkEllipseArcSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEllipseArcSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEllipseArcSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEllipseArcSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEllipseArcSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEllipseArcSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEllipseArcSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCenter", emscripten::select_overload<void(vtkEllipseArcSource&, double, double, double)>([](vtkEllipseArcSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetNormal", emscripten::select_overload<void(vtkEllipseArcSource&, double, double, double)>([](vtkEllipseArcSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormal( arg_0, arg_1, arg_2); }))
    .function("SetMajorRadiusVector", emscripten::select_overload<void(vtkEllipseArcSource&, double, double, double)>([](vtkEllipseArcSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetMajorRadiusVector( arg_0, arg_1, arg_2); }))
    .function("SetStartAngle", &vtkEllipseArcSource::SetStartAngle)
    .function("GetStartAngleMinValue", &vtkEllipseArcSource::GetStartAngleMinValue)
    .function("GetStartAngleMaxValue", &vtkEllipseArcSource::GetStartAngleMaxValue)
    .function("GetStartAngle", &vtkEllipseArcSource::GetStartAngle)
    .function("SetSegmentAngle", &vtkEllipseArcSource::SetSegmentAngle)
    .function("GetSegmentAngleMinValue", &vtkEllipseArcSource::GetSegmentAngleMinValue)
    .function("GetSegmentAngleMaxValue", &vtkEllipseArcSource::GetSegmentAngleMaxValue)
    .function("GetSegmentAngle", &vtkEllipseArcSource::GetSegmentAngle)
    .function("SetResolution", &vtkEllipseArcSource::SetResolution)
    .function("GetResolutionMinValue", &vtkEllipseArcSource::GetResolutionMinValue)
    .function("GetResolutionMaxValue", &vtkEllipseArcSource::GetResolutionMaxValue)
    .function("GetResolution", &vtkEllipseArcSource::GetResolution)
    .function("SetClose", &vtkEllipseArcSource::SetClose)
    .function("GetClose", &vtkEllipseArcSource::GetClose)
    .function("CloseOn", &vtkEllipseArcSource::CloseOn)
    .function("CloseOff", &vtkEllipseArcSource::CloseOff)
    .function("SetOutputPointsPrecision", &vtkEllipseArcSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkEllipseArcSource::GetOutputPointsPrecision)
    .function("SetRatio", &vtkEllipseArcSource::SetRatio)
    .function("GetRatioMinValue", &vtkEllipseArcSource::GetRatioMinValue)
    .function("GetRatioMaxValue", &vtkEllipseArcSource::GetRatioMaxValue)
    .function("GetRatio", &vtkEllipseArcSource::GetRatio);
}
