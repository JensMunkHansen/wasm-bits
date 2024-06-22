// JavaScript wrapper for vtkConeSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkConeSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkConeSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkConeSource.h"

template<> void emscripten::internal::raw_destructor<vtkConeSource>(vtkConeSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConeSource_class) {
  emscripten::class_<vtkConeSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkConeSource")
    .smart_ptr<vtkSmartPointer<vtkConeSource>>("vtkSmartPointer<vtkConeSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkConeSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConeSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConeSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConeSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConeSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConeSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConeSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetHeight", &vtkConeSource::SetHeight)
    .function("GetHeightMinValue", &vtkConeSource::GetHeightMinValue)
    .function("GetHeightMaxValue", &vtkConeSource::GetHeightMaxValue)
    .function("GetHeight", &vtkConeSource::GetHeight)
    .function("SetRadius", &vtkConeSource::SetRadius)
    .function("GetRadiusMinValue", &vtkConeSource::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkConeSource::GetRadiusMaxValue)
    .function("GetRadius", &vtkConeSource::GetRadius)
    .function("SetResolution", &vtkConeSource::SetResolution)
    .function("GetResolutionMinValue", &vtkConeSource::GetResolutionMinValue)
    .function("GetResolutionMaxValue", &vtkConeSource::GetResolutionMaxValue)
    .function("GetResolution", &vtkConeSource::GetResolution)
    .function("SetCenter", emscripten::select_overload<void(vtkConeSource&, double, double, double)>([](vtkConeSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetDirection", emscripten::select_overload<void(vtkConeSource&, double, double, double)>([](vtkConeSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDirection( arg_0, arg_1, arg_2); }))
    .function("SetAngle", &vtkConeSource::SetAngle)
    .function("GetAngle", &vtkConeSource::GetAngle)
    .function("SetCapping", &vtkConeSource::SetCapping)
    .function("GetCapping", &vtkConeSource::GetCapping)
    .function("CappingOn", &vtkConeSource::CappingOn)
    .function("CappingOff", &vtkConeSource::CappingOff)
    .function("SetOutputPointsPrecision", &vtkConeSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkConeSource::GetOutputPointsPrecision);
}
