// JavaScript wrapper for vtkTDxInteractorStyle with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkTDxInteractorStyleEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkTDxInteractorStyle.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTDxMotionEventInfo.h"
#include "vtkRenderer.h"
#include "vtkTDxInteractorStyleSettings.h"
#include "vtkTDxInteractorStyle.h"

template<> void emscripten::internal::raw_destructor<vtkTDxInteractorStyle>(vtkTDxInteractorStyle * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTDxInteractorStyle_class) {
  emscripten::class_<vtkTDxInteractorStyle, emscripten::base<vtkObject>>("vtkTDxInteractorStyle")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTDxInteractorStyle::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTDxInteractorStyle& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTDxInteractorStyle::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTDxInteractorStyle::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTDxInteractorStyle::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTDxInteractorStyle& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("OnButtonPressedEvent", &vtkTDxInteractorStyle::OnButtonPressedEvent)
    .function("OnButtonReleasedEvent", &vtkTDxInteractorStyle::OnButtonReleasedEvent)
    .function("ProcessEvent", emscripten::optional_override([](vtkTDxInteractorStyle& self, vtkRenderer* arg_0, unsigned long arg_1, std::uintptr_t arg_2) -> void {  return self.ProcessEvent( arg_0, arg_1,reinterpret_cast<void*>(arg_2));}), emscripten::allow_raw_pointers())
    .function("GetSettings", &vtkTDxInteractorStyle::GetSettings, emscripten::allow_raw_pointers())
    .function("SetSettings", &vtkTDxInteractorStyle::SetSettings, emscripten::allow_raw_pointers());
}
