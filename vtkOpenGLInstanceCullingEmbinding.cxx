// JavaScript wrapper for vtkOpenGLInstanceCulling with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLInstanceCullingEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLInstanceCulling.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkOpenGLShaderCache.h"
#include "vtkOpenGLHelper.h"
#include "vtkOpenGLBufferObject.h"
#include "vtkOpenGLInstanceCulling.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLInstanceCulling>(vtkOpenGLInstanceCulling * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLInstanceCulling_class) {
  emscripten::class_<vtkOpenGLInstanceCulling, emscripten::base<vtkObject>>("vtkOpenGLInstanceCulling")
    .smart_ptr<vtkSmartPointer<vtkOpenGLInstanceCulling>>("vtkSmartPointer<vtkOpenGLInstanceCulling>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLInstanceCulling>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLInstanceCulling::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLInstanceCulling& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLInstanceCulling::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLInstanceCulling::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLInstanceCulling::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLInstanceCulling& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("InitLOD", &vtkOpenGLInstanceCulling::InitLOD, emscripten::allow_raw_pointers())
    .function("AddLOD", &vtkOpenGLInstanceCulling::AddLOD)
    .function("BuildCullingShaders", &vtkOpenGLInstanceCulling::BuildCullingShaders, emscripten::allow_raw_pointers())
    .function("GetNumberOfLOD", &vtkOpenGLInstanceCulling::GetNumberOfLOD)
    .function("GetLODBuffer", &vtkOpenGLInstanceCulling::GetLODBuffer, emscripten::allow_raw_pointers())
    .function("RunCullingShaders", &vtkOpenGLInstanceCulling::RunCullingShaders, emscripten::allow_raw_pointers())
    .function("SetColorLOD", &vtkOpenGLInstanceCulling::SetColorLOD)
    .function("GetColorLOD", &vtkOpenGLInstanceCulling::GetColorLOD);
}
