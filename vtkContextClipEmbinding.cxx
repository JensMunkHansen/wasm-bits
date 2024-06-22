// JavaScript wrapper for vtkContextClip with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkContextClipEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkContextClip.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkContextClip.h"

template<> void emscripten::internal::raw_destructor<vtkContextClip>(vtkContextClip * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContextClip_class) {
  emscripten::class_<vtkContextClip, emscripten::base<vtkAbstractContextItem>>("vtkContextClip")
    .smart_ptr<vtkSmartPointer<vtkContextClip>>("vtkSmartPointer<vtkContextClip>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkContextClip>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextClip::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContextClip& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContextClip::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContextClip::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextClip::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContextClip& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Update", &vtkContextClip::Update)
    .function("Paint", &vtkContextClip::Paint, emscripten::allow_raw_pointers())
    .function("SetClip", &vtkContextClip::SetClip)
    .function("GetX", &vtkContextClip::GetX)
    .function("GetY", &vtkContextClip::GetY)
    .function("GetWidth", &vtkContextClip::GetWidth)
    .function("GetHeight", &vtkContextClip::GetHeight);
}
