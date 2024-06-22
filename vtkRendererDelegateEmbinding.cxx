// JavaScript wrapper for vtkRendererDelegate with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRendererDelegateEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkRendererDelegate.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkRendererDelegate.h"

template<> void emscripten::internal::raw_destructor<vtkRendererDelegate>(vtkRendererDelegate * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRendererDelegate_class) {
  emscripten::class_<vtkRendererDelegate, emscripten::base<vtkObject>>("vtkRendererDelegate")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRendererDelegate::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRendererDelegate& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRendererDelegate::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRendererDelegate::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRendererDelegate::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRendererDelegate& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetUsed", &vtkRendererDelegate::SetUsed)
    .function("GetUsed", &vtkRendererDelegate::GetUsed)
    .function("UsedOn", &vtkRendererDelegate::UsedOn)
    .function("UsedOff", &vtkRendererDelegate::UsedOff);
}