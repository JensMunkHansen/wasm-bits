// JavaScript wrapper for vtkDiskSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkDiskSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkDiskSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDiskSource.h"

template<> void emscripten::internal::raw_destructor<vtkDiskSource>(vtkDiskSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDiskSource_class) {
  emscripten::class_<vtkDiskSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkDiskSource")
    .smart_ptr<vtkSmartPointer<vtkDiskSource>>("vtkSmartPointer<vtkDiskSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDiskSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDiskSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDiskSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDiskSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDiskSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDiskSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDiskSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInnerRadius", &vtkDiskSource::SetInnerRadius)
    .function("GetInnerRadiusMinValue", &vtkDiskSource::GetInnerRadiusMinValue)
    .function("GetInnerRadiusMaxValue", &vtkDiskSource::GetInnerRadiusMaxValue)
    .function("GetInnerRadius", &vtkDiskSource::GetInnerRadius)
    .function("SetOuterRadius", &vtkDiskSource::SetOuterRadius)
    .function("GetOuterRadiusMinValue", &vtkDiskSource::GetOuterRadiusMinValue)
    .function("GetOuterRadiusMaxValue", &vtkDiskSource::GetOuterRadiusMaxValue)
    .function("GetOuterRadius", &vtkDiskSource::GetOuterRadius)
    .function("SetRadialResolution", &vtkDiskSource::SetRadialResolution)
    .function("GetRadialResolutionMinValue", &vtkDiskSource::GetRadialResolutionMinValue)
    .function("GetRadialResolutionMaxValue", &vtkDiskSource::GetRadialResolutionMaxValue)
    .function("GetRadialResolution", &vtkDiskSource::GetRadialResolution)
    .function("SetCircumferentialResolution", &vtkDiskSource::SetCircumferentialResolution)
    .function("GetCircumferentialResolutionMinValue", &vtkDiskSource::GetCircumferentialResolutionMinValue)
    .function("GetCircumferentialResolutionMaxValue", &vtkDiskSource::GetCircumferentialResolutionMaxValue)
    .function("GetCircumferentialResolution", &vtkDiskSource::GetCircumferentialResolution)
    .function("SetCenter", emscripten::select_overload<void(vtkDiskSource&, double, double, double)>([](vtkDiskSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetNormal", emscripten::select_overload<void(vtkDiskSource&, double, double, double)>([](vtkDiskSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormal( arg_0, arg_1, arg_2); }))
    .function("SetOutputPointsPrecision", &vtkDiskSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkDiskSource::GetOutputPointsPrecision);
}
