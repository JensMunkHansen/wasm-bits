// JavaScript wrapper for vtkGLSLModCamera with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkGLSLModCameraEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkGLSLModCamera.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMatrix4x4.h"
#include "vtkOpenGLRenderer.h"
#include "vtkAbstractMapper.h"
#include "vtkActor.h"
#include "vtkShaderProgram.h"
#include "vtkOpenGLVertexArrayObject.h"
#include "vtkGLSLModCamera.h"

template<> void emscripten::internal::raw_destructor<vtkGLSLModCamera>(vtkGLSLModCamera * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGLSLModCamera_class) {
  emscripten::class_<vtkGLSLModCamera, emscripten::base<vtkGLSLModifierBase>>("vtkGLSLModCamera")
    .smart_ptr<vtkSmartPointer<vtkGLSLModCamera>>("vtkSmartPointer<vtkGLSLModCamera>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGLSLModCamera>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLSLModCamera::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGLSLModCamera& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGLSLModCamera::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGLSLModCamera::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLSLModCamera::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGLSLModCamera& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("EnableShiftScale", &vtkGLSLModCamera::EnableShiftScale, emscripten::allow_raw_pointers())
    .function("DisableShiftScale", &vtkGLSLModCamera::DisableShiftScale)
    .function("SetShaderParameters", &vtkGLSLModCamera::SetShaderParameters, emscripten::allow_raw_pointers())
    .function("IsUpToDate", &vtkGLSLModCamera::IsUpToDate, emscripten::allow_raw_pointers());
}
