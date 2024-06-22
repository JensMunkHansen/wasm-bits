// JavaScript wrapper for vtkEarthSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkEarthSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkEarthSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkEarthSource.h"

template<> void emscripten::internal::raw_destructor<vtkEarthSource>(vtkEarthSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEarthSource_class) {
  emscripten::class_<vtkEarthSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkEarthSource")
    .smart_ptr<vtkSmartPointer<vtkEarthSource>>("vtkSmartPointer<vtkEarthSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkEarthSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEarthSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEarthSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEarthSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEarthSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEarthSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEarthSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRadius", &vtkEarthSource::SetRadius)
    .function("GetRadiusMinValue", &vtkEarthSource::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkEarthSource::GetRadiusMaxValue)
    .function("GetRadius", &vtkEarthSource::GetRadius)
    .function("SetOnRatio", &vtkEarthSource::SetOnRatio)
    .function("GetOnRatioMinValue", &vtkEarthSource::GetOnRatioMinValue)
    .function("GetOnRatioMaxValue", &vtkEarthSource::GetOnRatioMaxValue)
    .function("GetOnRatio", &vtkEarthSource::GetOnRatio)
    .function("SetOutline", &vtkEarthSource::SetOutline)
    .function("GetOutline", &vtkEarthSource::GetOutline)
    .function("OutlineOn", &vtkEarthSource::OutlineOn)
    .function("OutlineOff", &vtkEarthSource::OutlineOff);
}
