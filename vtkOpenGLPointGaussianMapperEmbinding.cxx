// JavaScript wrapper for vtkOpenGLPointGaussianMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLPointGaussianMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLPointGaussianMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWindow.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkHardwareSelector.h"
#include "vtkProp.h"
#include "vtkOpenGLPointGaussianMapper.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLPointGaussianMapper>(vtkOpenGLPointGaussianMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLPointGaussianMapper_class) {
  emscripten::class_<vtkOpenGLPointGaussianMapper, emscripten::base<vtkPointGaussianMapper>>("vtkOpenGLPointGaussianMapper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLPointGaussianMapper>>("vtkSmartPointer<vtkOpenGLPointGaussianMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLPointGaussianMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLPointGaussianMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLPointGaussianMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLPointGaussianMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLPointGaussianMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLPointGaussianMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLPointGaussianMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkOpenGLPointGaussianMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkOpenGLPointGaussianMapper::HasTranslucentPolygonalGeometry)
    .function("Render", &vtkOpenGLPointGaussianMapper::Render, emscripten::allow_raw_pointers())
    .function("ProcessSelectorPixelBuffers", emscripten::optional_override([](vtkOpenGLPointGaussianMapper& self, vtkHardwareSelector* arg_0, std::vector<unsigned int>& arg_1, vtkProp* arg_2) -> void {  return self.ProcessSelectorPixelBuffers( arg_0, arg_1, arg_2);}), emscripten::allow_raw_pointers());
}
