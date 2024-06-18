// JavaScript wrapper for vtkTextSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkTextSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkTextSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextSource.h"

template<> void emscripten::internal::raw_destructor<vtkTextSource>(vtkTextSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTextSource_class) {
  emscripten::class_<vtkTextSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkTextSource")
    .smart_ptr<vtkSmartPointer<vtkTextSource>>("vtkSmartPointer<vtkTextSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTextSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTextSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTextSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTextSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTextSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetText", emscripten::optional_override([](vtkTextSource& self, const std::string & arg_0) -> void {  return self.SetText( arg_0.c_str());}))
    .function("GetText", emscripten::optional_override([](vtkTextSource& self) -> std::string {  return self.GetText();}))
    .function("SetBacking", &vtkTextSource::SetBacking)
    .function("GetBacking", &vtkTextSource::GetBacking)
    .function("BackingOn", &vtkTextSource::BackingOn)
    .function("BackingOff", &vtkTextSource::BackingOff)
    .function("SetForegroundColor", emscripten::select_overload<void(vtkTextSource&, double, double, double)>([](vtkTextSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetForegroundColor( arg_0, arg_1, arg_2); }))
    .function("SetBackgroundColor", emscripten::select_overload<void(vtkTextSource&, double, double, double)>([](vtkTextSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetBackgroundColor( arg_0, arg_1, arg_2); }))
    .function("SetOutputPointsPrecision", &vtkTextSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkTextSource::GetOutputPointsPrecision);
}
