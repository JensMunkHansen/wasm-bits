// JavaScript wrapper for vtkRegularPolygonSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkRegularPolygonSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkRegularPolygonSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRegularPolygonSource.h"

template<> void emscripten::internal::raw_destructor<vtkRegularPolygonSource>(vtkRegularPolygonSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRegularPolygonSource_class) {
  emscripten::class_<vtkRegularPolygonSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkRegularPolygonSource")
    .smart_ptr<vtkSmartPointer<vtkRegularPolygonSource>>("vtkSmartPointer<vtkRegularPolygonSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRegularPolygonSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRegularPolygonSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRegularPolygonSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRegularPolygonSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRegularPolygonSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRegularPolygonSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRegularPolygonSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfSides", &vtkRegularPolygonSource::SetNumberOfSides)
    .function("GetNumberOfSidesMinValue", &vtkRegularPolygonSource::GetNumberOfSidesMinValue)
    .function("GetNumberOfSidesMaxValue", &vtkRegularPolygonSource::GetNumberOfSidesMaxValue)
    .function("GetNumberOfSides", &vtkRegularPolygonSource::GetNumberOfSides)
    .function("SetCenter", emscripten::select_overload<void(vtkRegularPolygonSource&, double, double, double)>([](vtkRegularPolygonSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetNormal", emscripten::select_overload<void(vtkRegularPolygonSource&, double, double, double)>([](vtkRegularPolygonSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormal( arg_0, arg_1, arg_2); }))
    .function("SetRadius", &vtkRegularPolygonSource::SetRadius)
    .function("GetRadius", &vtkRegularPolygonSource::GetRadius)
    .function("SetGeneratePolygon", &vtkRegularPolygonSource::SetGeneratePolygon)
    .function("GetGeneratePolygon", &vtkRegularPolygonSource::GetGeneratePolygon)
    .function("GeneratePolygonOn", &vtkRegularPolygonSource::GeneratePolygonOn)
    .function("GeneratePolygonOff", &vtkRegularPolygonSource::GeneratePolygonOff)
    .function("SetGeneratePolyline", &vtkRegularPolygonSource::SetGeneratePolyline)
    .function("GetGeneratePolyline", &vtkRegularPolygonSource::GetGeneratePolyline)
    .function("GeneratePolylineOn", &vtkRegularPolygonSource::GeneratePolylineOn)
    .function("GeneratePolylineOff", &vtkRegularPolygonSource::GeneratePolylineOff)
    .function("SetOutputPointsPrecision", &vtkRegularPolygonSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkRegularPolygonSource::GetOutputPointsPrecision);
}
