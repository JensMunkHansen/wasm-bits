// JavaScript wrapper for vtkOpenGLLowMemoryBatchedPolyDataMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLLowMemoryBatchedPolyDataMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLLowMemoryBatchedPolyDataMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCompositePolyDataMapperDelegator.h"
#include "vtkPolyData.h"
#include "vtkCompositePolyDataMapper.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkHardwareSelector.h"
#include "vtkProp.h"
#include "vtkOpenGLLowMemoryBatchedPolyDataMapper.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLLowMemoryBatchedPolyDataMapper>(vtkOpenGLLowMemoryBatchedPolyDataMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLLowMemoryBatchedPolyDataMapper_class) {
  emscripten::class_<vtkOpenGLLowMemoryBatchedPolyDataMapper, emscripten::base<vtkOpenGLLowMemoryPolyDataMapper>>("vtkOpenGLLowMemoryBatchedPolyDataMapper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLLowMemoryBatchedPolyDataMapper>>("vtkSmartPointer<vtkOpenGLLowMemoryBatchedPolyDataMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLLowMemoryBatchedPolyDataMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLLowMemoryBatchedPolyDataMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLLowMemoryBatchedPolyDataMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLLowMemoryBatchedPolyDataMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLLowMemoryBatchedPolyDataMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLLowMemoryBatchedPolyDataMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLLowMemoryBatchedPolyDataMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ClearBatchElements", &vtkOpenGLLowMemoryBatchedPolyDataMapper::ClearBatchElements)
    .function("SetParent", &vtkOpenGLLowMemoryBatchedPolyDataMapper::SetParent, emscripten::allow_raw_pointers())
    .function("RenderPiece", &vtkOpenGLLowMemoryBatchedPolyDataMapper::RenderPiece, emscripten::allow_raw_pointers())
    .function("UnmarkBatchElements", &vtkOpenGLLowMemoryBatchedPolyDataMapper::UnmarkBatchElements)
    .function("ClearUnmarkedBatchElements", &vtkOpenGLLowMemoryBatchedPolyDataMapper::ClearUnmarkedBatchElements)
    .function("ProcessSelectorPixelBuffers", emscripten::optional_override([](vtkOpenGLLowMemoryBatchedPolyDataMapper& self, vtkHardwareSelector* arg_0, std::vector<unsigned int>& arg_1, vtkProp* arg_2) -> void {  return self.ProcessSelectorPixelBuffers( arg_0, arg_1, arg_2);}), emscripten::allow_raw_pointers());
}
