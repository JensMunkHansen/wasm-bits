// JavaScript wrapper for vtkCylinderSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkCylinderSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkCylinderSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCylinderSource.h"

template<> void emscripten::internal::raw_destructor<vtkCylinderSource>(vtkCylinderSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCylinderSource_class) {
  emscripten::class_<vtkCylinderSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkCylinderSource")
    .smart_ptr<vtkSmartPointer<vtkCylinderSource>>("vtkSmartPointer<vtkCylinderSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCylinderSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCylinderSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCylinderSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCylinderSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCylinderSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCylinderSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCylinderSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetHeight", &vtkCylinderSource::SetHeight)
    .function("GetHeightMinValue", &vtkCylinderSource::GetHeightMinValue)
    .function("GetHeightMaxValue", &vtkCylinderSource::GetHeightMaxValue)
    .function("GetHeight", &vtkCylinderSource::GetHeight)
    .function("SetRadius", &vtkCylinderSource::SetRadius)
    .function("GetRadiusMinValue", &vtkCylinderSource::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkCylinderSource::GetRadiusMaxValue)
    .function("GetRadius", &vtkCylinderSource::GetRadius)
    .function("SetCenter", emscripten::select_overload<void(vtkCylinderSource&, double, double, double)>([](vtkCylinderSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetResolution", &vtkCylinderSource::SetResolution)
    .function("GetResolutionMinValue", &vtkCylinderSource::GetResolutionMinValue)
    .function("GetResolutionMaxValue", &vtkCylinderSource::GetResolutionMaxValue)
    .function("GetResolution", &vtkCylinderSource::GetResolution)
    .function("SetCapping", &vtkCylinderSource::SetCapping)
    .function("GetCapping", &vtkCylinderSource::GetCapping)
    .function("CappingOn", &vtkCylinderSource::CappingOn)
    .function("CappingOff", &vtkCylinderSource::CappingOff)
    .function("SetCapsuleCap", &vtkCylinderSource::SetCapsuleCap)
    .function("GetCapsuleCap", &vtkCylinderSource::GetCapsuleCap)
    .function("CapsuleCapOn", &vtkCylinderSource::CapsuleCapOn)
    .function("CapsuleCapOff", &vtkCylinderSource::CapsuleCapOff)
    .function("SetLatLongTessellation", &vtkCylinderSource::SetLatLongTessellation)
    .function("GetLatLongTessellation", &vtkCylinderSource::GetLatLongTessellation)
    .function("LatLongTessellationOn", &vtkCylinderSource::LatLongTessellationOn)
    .function("LatLongTessellationOff", &vtkCylinderSource::LatLongTessellationOff)
    .function("SetOutputPointsPrecision", &vtkCylinderSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkCylinderSource::GetOutputPointsPrecision);
}
