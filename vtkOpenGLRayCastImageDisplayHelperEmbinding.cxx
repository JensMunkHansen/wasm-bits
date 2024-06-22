// JavaScript wrapper for vtkOpenGLRayCastImageDisplayHelper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolumeOpenGL2.js/vtkRenderingVolumeOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolumeOpenGL2.js/vtkOpenGLRayCastImageDisplayHelperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/VolumeOpenGL2/vtkOpenGLRayCastImageDisplayHelper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVolume.h"
#include "vtkRenderer.h"
#include "vtkFixedPointRayCastImage.h"
#include "vtkWindow.h"
#include "vtkOpenGLRayCastImageDisplayHelper.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLRayCastImageDisplayHelper>(vtkOpenGLRayCastImageDisplayHelper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLRayCastImageDisplayHelper_class) {
  emscripten::class_<vtkOpenGLRayCastImageDisplayHelper, emscripten::base<vtkRayCastImageDisplayHelper>>("vtkOpenGLRayCastImageDisplayHelper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLRayCastImageDisplayHelper>>("vtkSmartPointer<vtkOpenGLRayCastImageDisplayHelper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLRayCastImageDisplayHelper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLRayCastImageDisplayHelper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLRayCastImageDisplayHelper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLRayCastImageDisplayHelper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLRayCastImageDisplayHelper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLRayCastImageDisplayHelper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLRayCastImageDisplayHelper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderTexture", emscripten::select_overload<void(vtkOpenGLRayCastImageDisplayHelper&, vtkVolume*, vtkRenderer*, vtkFixedPointRayCastImage*, float)>([](vtkOpenGLRayCastImageDisplayHelper& self, vtkVolume* arg_0, vtkRenderer* arg_1, vtkFixedPointRayCastImage* arg_2, float arg_3) -> void { return self.RenderTexture( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkOpenGLRayCastImageDisplayHelper::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
