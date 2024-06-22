// JavaScript wrapper for vtkRenderbuffer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderbufferEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkRenderbuffer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderWindow.h"
#include "vtkWindow.h"
#include "vtkRenderbuffer.h"

template<> void emscripten::internal::raw_destructor<vtkRenderbuffer>(vtkRenderbuffer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRenderbuffer_class) {
  emscripten::class_<vtkRenderbuffer, emscripten::base<vtkObject>>("vtkRenderbuffer")
    .smart_ptr<vtkSmartPointer<vtkRenderbuffer>>("vtkSmartPointer<vtkRenderbuffer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRenderbuffer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderbuffer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRenderbuffer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRenderbuffer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRenderbuffer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderbuffer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRenderbuffer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("IsSupported", &vtkRenderbuffer::IsSupported, emscripten::allow_raw_pointers())
    .function("GetHandle", &vtkRenderbuffer::GetHandle)
    .function("SetContext", &vtkRenderbuffer::SetContext, emscripten::allow_raw_pointers())
    .function("GetContext", &vtkRenderbuffer::GetContext, emscripten::allow_raw_pointers())
    .function("CreateColorAttachment", &vtkRenderbuffer::CreateColorAttachment)
    .function("CreateDepthAttachment", &vtkRenderbuffer::CreateDepthAttachment)
    .function("Create", emscripten::select_overload<int(vtkRenderbuffer&, unsigned int, unsigned int, unsigned int)>([](vtkRenderbuffer& self, unsigned int arg_0, unsigned int arg_1, unsigned int arg_2) -> int { return self.Create( arg_0, arg_1, arg_2); }))
    .function("Create", emscripten::select_overload<int(vtkRenderbuffer&, unsigned int, unsigned int, unsigned int, unsigned int)>([](vtkRenderbuffer& self, unsigned int arg_0, unsigned int arg_1, unsigned int arg_2, unsigned int arg_3) -> int { return self.Create( arg_0, arg_1, arg_2, arg_3); }))
    .function("ReleaseGraphicsResources", &vtkRenderbuffer::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("Resize", &vtkRenderbuffer::Resize)
    .function("GetWidth", &vtkRenderbuffer::GetWidth)
    .function("GetHeight", &vtkRenderbuffer::GetHeight)
    .function("GetSamples", &vtkRenderbuffer::GetSamples);
}
