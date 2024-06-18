// JavaScript wrapper for vtkOpenGLCompositePolyDataMapperDelegator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLCompositePolyDataMapperDelegatorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLCompositePolyDataMapperDelegator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCompositePolyDataMapper.h"
#include "vtkOpenGLCompositePolyDataMapperDelegator.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLCompositePolyDataMapperDelegator>(vtkOpenGLCompositePolyDataMapperDelegator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLCompositePolyDataMapperDelegator_class) {
  emscripten::class_<vtkOpenGLCompositePolyDataMapperDelegator, emscripten::base<vtkCompositePolyDataMapperDelegator>>("vtkOpenGLCompositePolyDataMapperDelegator")
    .smart_ptr<vtkSmartPointer<vtkOpenGLCompositePolyDataMapperDelegator>>("vtkSmartPointer<vtkOpenGLCompositePolyDataMapperDelegator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLCompositePolyDataMapperDelegator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLCompositePolyDataMapperDelegator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLCompositePolyDataMapperDelegator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLCompositePolyDataMapperDelegator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLCompositePolyDataMapperDelegator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLCompositePolyDataMapperDelegator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLCompositePolyDataMapperDelegator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ShallowCopy", &vtkOpenGLCompositePolyDataMapperDelegator::ShallowCopy, emscripten::allow_raw_pointers())
    .function("ClearUnmarkedBatchElements", &vtkOpenGLCompositePolyDataMapperDelegator::ClearUnmarkedBatchElements)
    .function("UnmarkBatchElements", &vtkOpenGLCompositePolyDataMapperDelegator::UnmarkBatchElements);
}
