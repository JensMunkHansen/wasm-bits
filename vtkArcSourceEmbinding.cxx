// JavaScript wrapper for vtkArcSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkArcSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkArcSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkArcSource.h"

template<> void emscripten::internal::raw_destructor<vtkArcSource>(vtkArcSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkArcSource_class) {
  emscripten::class_<vtkArcSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkArcSource")
    .smart_ptr<vtkSmartPointer<vtkArcSource>>("vtkSmartPointer<vtkArcSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkArcSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArcSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkArcSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkArcSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkArcSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArcSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkArcSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPoint1", emscripten::select_overload<void(vtkArcSource&, double, double, double)>([](vtkArcSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPoint1( arg_0, arg_1, arg_2); }))
    .function("SetPoint2", emscripten::select_overload<void(vtkArcSource&, double, double, double)>([](vtkArcSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPoint2( arg_0, arg_1, arg_2); }))
    .function("SetCenter", emscripten::select_overload<void(vtkArcSource&, double, double, double)>([](vtkArcSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetNormal", emscripten::select_overload<void(vtkArcSource&, double, double, double)>([](vtkArcSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormal( arg_0, arg_1, arg_2); }))
    .function("SetPolarVector", emscripten::select_overload<void(vtkArcSource&, double, double, double)>([](vtkArcSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPolarVector( arg_0, arg_1, arg_2); }))
    .function("SetAngle", &vtkArcSource::SetAngle)
    .function("GetAngleMinValue", &vtkArcSource::GetAngleMinValue)
    .function("GetAngleMaxValue", &vtkArcSource::GetAngleMaxValue)
    .function("GetAngle", &vtkArcSource::GetAngle)
    .function("SetResolution", &vtkArcSource::SetResolution)
    .function("GetResolutionMinValue", &vtkArcSource::GetResolutionMinValue)
    .function("GetResolutionMaxValue", &vtkArcSource::GetResolutionMaxValue)
    .function("GetResolution", &vtkArcSource::GetResolution)
    .function("SetNegative", &vtkArcSource::SetNegative)
    .function("GetNegative", &vtkArcSource::GetNegative)
    .function("NegativeOn", &vtkArcSource::NegativeOn)
    .function("NegativeOff", &vtkArcSource::NegativeOff)
    .function("SetUseNormalAndAngle", &vtkArcSource::SetUseNormalAndAngle)
    .function("GetUseNormalAndAngle", &vtkArcSource::GetUseNormalAndAngle)
    .function("UseNormalAndAngleOn", &vtkArcSource::UseNormalAndAngleOn)
    .function("UseNormalAndAngleOff", &vtkArcSource::UseNormalAndAngleOff)
    .function("SetOutputPointsPrecision", &vtkArcSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkArcSource::GetOutputPointsPrecision);
}
