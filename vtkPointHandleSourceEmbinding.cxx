// JavaScript wrapper for vtkPointHandleSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkPointHandleSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkPointHandleSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointHandleSource.h"

template<> void emscripten::internal::raw_destructor<vtkPointHandleSource>(vtkPointHandleSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointHandleSource_class) {
  emscripten::class_<vtkPointHandleSource, emscripten::base<vtkHandleSource>>("vtkPointHandleSource")
    .smart_ptr<vtkSmartPointer<vtkPointHandleSource>>("vtkSmartPointer<vtkPointHandleSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPointHandleSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointHandleSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointHandleSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointHandleSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointHandleSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointHandleSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointHandleSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPosition", emscripten::select_overload<void(vtkPointHandleSource&, double, double, double)>([](vtkPointHandleSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPosition( arg_0, arg_1, arg_2); }))
    .function("GetPosition", emscripten::select_overload<std::uintptr_t(vtkPointHandleSource&)>([](vtkPointHandleSource& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetPosition()); }))
    .function("SetDirection", emscripten::select_overload<void(vtkPointHandleSource&, double, double, double)>([](vtkPointHandleSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDirection( arg_0, arg_1, arg_2); }))
    .function("GetDirection", emscripten::select_overload<std::uintptr_t(vtkPointHandleSource&)>([](vtkPointHandleSource& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetDirection()); }));
}
