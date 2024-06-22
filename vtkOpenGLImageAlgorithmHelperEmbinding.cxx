// JavaScript wrapper for vtkOpenGLImageAlgorithmHelper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLImageAlgorithmHelperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLImageAlgorithmHelper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkShaderProgram.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkDataArray.h"
#include "vtkRenderWindow.h"
#include "vtkOpenGLImageAlgorithmHelper.h"


EMSCRIPTEN_BINDINGS(vtkOpenGLImageAlgorithmCallback_class) {
  emscripten::class_<vtkOpenGLImageAlgorithmCallback>("vtkOpenGLImageAlgorithmCallback")
    .smart_ptr<std::shared_ptr<vtkOpenGLImageAlgorithmCallback>>("std::shared_ptr<vtkOpenGLImageAlgorithmCallback>")
    .constructor(&std::make_shared<vtkOpenGLImageAlgorithmCallback>)
    .function("InitializeShaderUniforms", &vtkOpenGLImageAlgorithmCallback::InitializeShaderUniforms, emscripten::allow_raw_pointers())
    .function("UpdateShaderUniforms", &vtkOpenGLImageAlgorithmCallback::UpdateShaderUniforms, emscripten::allow_raw_pointers());
}
template<> void emscripten::internal::raw_destructor<vtkOpenGLImageAlgorithmHelper>(vtkOpenGLImageAlgorithmHelper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLImageAlgorithmHelper_class) {
  emscripten::class_<vtkOpenGLImageAlgorithmHelper, emscripten::base<vtkObject>>("vtkOpenGLImageAlgorithmHelper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLImageAlgorithmHelper>>("vtkSmartPointer<vtkOpenGLImageAlgorithmHelper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLImageAlgorithmHelper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLImageAlgorithmHelper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLImageAlgorithmHelper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLImageAlgorithmHelper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLImageAlgorithmHelper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLImageAlgorithmHelper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLImageAlgorithmHelper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRenderWindow", &vtkOpenGLImageAlgorithmHelper::SetRenderWindow, emscripten::allow_raw_pointers());
}
