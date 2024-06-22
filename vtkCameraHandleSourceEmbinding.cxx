// JavaScript wrapper for vtkCameraHandleSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCameraHandleSourceEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCameraHandleSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCamera.h"
#include "vtkCameraHandleSource.h"

template<> void emscripten::internal::raw_destructor<vtkCameraHandleSource>(vtkCameraHandleSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCameraHandleSource_class) {
  emscripten::class_<vtkCameraHandleSource, emscripten::base<vtkHandleSource>>("vtkCameraHandleSource")
    .smart_ptr<vtkSmartPointer<vtkCameraHandleSource>>("vtkSmartPointer<vtkCameraHandleSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCameraHandleSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraHandleSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCameraHandleSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCameraHandleSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCameraHandleSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraHandleSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCameraHandleSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCamera", &vtkCameraHandleSource::SetCamera, emscripten::allow_raw_pointers())
    .function("SetPosition", emscripten::select_overload<void(vtkCameraHandleSource&, double, double, double)>([](vtkCameraHandleSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPosition( arg_0, arg_1, arg_2); }))
    .function("GetPosition", emscripten::select_overload<std::uintptr_t(vtkCameraHandleSource&)>([](vtkCameraHandleSource& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetPosition()); }))
    .function("SetDirection", emscripten::select_overload<void(vtkCameraHandleSource&, double, double, double)>([](vtkCameraHandleSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDirection( arg_0, arg_1, arg_2); }))
    .function("GetDirection", emscripten::select_overload<std::uintptr_t(vtkCameraHandleSource&)>([](vtkCameraHandleSource& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetDirection()); }));
}
