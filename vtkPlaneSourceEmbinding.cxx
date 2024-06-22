// JavaScript wrapper for vtkPlaneSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkPlaneSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkPlaneSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkPlaneSource.h"

template<> void emscripten::internal::raw_destructor<vtkPlaneSource>(vtkPlaneSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlaneSource_class) {
  emscripten::class_<vtkPlaneSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkPlaneSource")
    .smart_ptr<vtkSmartPointer<vtkPlaneSource>>("vtkSmartPointer<vtkPlaneSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPlaneSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlaneSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlaneSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlaneSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlaneSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlaneSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlaneSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetXResolution", &vtkPlaneSource::SetXResolution)
    .function("GetXResolution", &vtkPlaneSource::GetXResolution)
    .function("SetYResolution", &vtkPlaneSource::SetYResolution)
    .function("GetYResolution", &vtkPlaneSource::GetYResolution)
    .function("SetResolution", &vtkPlaneSource::SetResolution)
    .function("SetOrigin", emscripten::select_overload<void(vtkPlaneSource&, double, double, double)>([](vtkPlaneSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetPoint1", emscripten::select_overload<void(vtkPlaneSource&, double, double, double)>([](vtkPlaneSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPoint1( arg_0, arg_1, arg_2); }))
    .function("SetPoint2", emscripten::select_overload<void(vtkPlaneSource&, double, double, double)>([](vtkPlaneSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPoint2( arg_0, arg_1, arg_2); }))
    .function("SetCenter", emscripten::select_overload<void(vtkPlaneSource&, double, double, double)>([](vtkPlaneSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetNormal", emscripten::select_overload<void(vtkPlaneSource&, double, double, double)>([](vtkPlaneSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormal( arg_0, arg_1, arg_2); }))
    .function("Push", &vtkPlaneSource::Push)
    .function("SetOutputPointsPrecision", &vtkPlaneSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkPlaneSource::GetOutputPointsPrecision);
}
