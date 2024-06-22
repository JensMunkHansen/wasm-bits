// JavaScript wrapper for vtkOpenGLHardwareSelector with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLHardwareSelectorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLHardwareSelector.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOpenGLHardwareSelector.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLHardwareSelector>(vtkOpenGLHardwareSelector * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLHardwareSelector_class) {
  emscripten::class_<vtkOpenGLHardwareSelector, emscripten::base<vtkHardwareSelector>>("vtkOpenGLHardwareSelector")
    .smart_ptr<vtkSmartPointer<vtkOpenGLHardwareSelector>>("vtkSmartPointer<vtkOpenGLHardwareSelector>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLHardwareSelector>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLHardwareSelector::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLHardwareSelector& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLHardwareSelector::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLHardwareSelector::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLHardwareSelector::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLHardwareSelector& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("BeginRenderProp", emscripten::select_overload<void(vtkOpenGLHardwareSelector&)>([](vtkOpenGLHardwareSelector& self) -> void { return self.BeginRenderProp(); }))
    .function("EndRenderProp", emscripten::select_overload<void(vtkOpenGLHardwareSelector&)>([](vtkOpenGLHardwareSelector& self) -> void { return self.EndRenderProp(); }))
    .function("RenderCompositeIndex", &vtkOpenGLHardwareSelector::RenderCompositeIndex)
    .function("RenderProcessId", &vtkOpenGLHardwareSelector::RenderProcessId)
    .function("BeginSelection", &vtkOpenGLHardwareSelector::BeginSelection)
    .function("EndSelection", &vtkOpenGLHardwareSelector::EndSelection);
}
