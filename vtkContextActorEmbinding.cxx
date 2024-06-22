// JavaScript wrapper for vtkContextActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkContextActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkContextActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkViewport.h"
#include "vtkContext2D.h"
#include "vtkContextScene.h"
#include "vtkContextDevice2D.h"
#include "vtkWindow.h"
#include "vtkContextActor.h"

template<> void emscripten::internal::raw_destructor<vtkContextActor>(vtkContextActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContextActor_class) {
  emscripten::class_<vtkContextActor, emscripten::base<vtkProp>>("vtkContextActor")
    .smart_ptr<vtkSmartPointer<vtkContextActor>>("vtkSmartPointer<vtkContextActor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkContextActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContextActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContextActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContextActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContextActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderOverlay", &vtkContextActor::RenderOverlay, emscripten::allow_raw_pointers())
    .function("GetContext", &vtkContextActor::GetContext, emscripten::allow_raw_pointers())
    .function("GetScene", &vtkContextActor::GetScene, emscripten::allow_raw_pointers())
    .function("SetScene", &vtkContextActor::SetScene, emscripten::allow_raw_pointers())
    .function("SetForceDevice", &vtkContextActor::SetForceDevice, emscripten::allow_raw_pointers())
    .function("GetForceDevice", &vtkContextActor::GetForceDevice, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkContextActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
