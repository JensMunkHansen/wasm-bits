// JavaScript wrapper for vtkOpenGLProjectedTetrahedraMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolumeOpenGL2.js/vtkRenderingVolumeOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolumeOpenGL2.js/vtkOpenGLProjectedTetrahedraMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/VolumeOpenGL2/vtkOpenGLProjectedTetrahedraMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWindow.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"
#include "vtkRenderWindow.h"
#include "vtkOpenGLProjectedTetrahedraMapper.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLProjectedTetrahedraMapper>(vtkOpenGLProjectedTetrahedraMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLProjectedTetrahedraMapper_class) {
  emscripten::class_<vtkOpenGLProjectedTetrahedraMapper, emscripten::base<vtkProjectedTetrahedraMapper>>("vtkOpenGLProjectedTetrahedraMapper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLProjectedTetrahedraMapper>>("vtkSmartPointer<vtkOpenGLProjectedTetrahedraMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLProjectedTetrahedraMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLProjectedTetrahedraMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLProjectedTetrahedraMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLProjectedTetrahedraMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLProjectedTetrahedraMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLProjectedTetrahedraMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLProjectedTetrahedraMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkOpenGLProjectedTetrahedraMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("Render", &vtkOpenGLProjectedTetrahedraMapper::Render, emscripten::allow_raw_pointers())
    .function("SetUseFloatingPointFrameBuffer", &vtkOpenGLProjectedTetrahedraMapper::SetUseFloatingPointFrameBuffer)
    .function("GetUseFloatingPointFrameBuffer", &vtkOpenGLProjectedTetrahedraMapper::GetUseFloatingPointFrameBuffer)
    .function("UseFloatingPointFrameBufferOn", &vtkOpenGLProjectedTetrahedraMapper::UseFloatingPointFrameBufferOn)
    .function("UseFloatingPointFrameBufferOff", &vtkOpenGLProjectedTetrahedraMapper::UseFloatingPointFrameBufferOff)
    .function("IsSupported", &vtkOpenGLProjectedTetrahedraMapper::IsSupported, emscripten::allow_raw_pointers());
}
