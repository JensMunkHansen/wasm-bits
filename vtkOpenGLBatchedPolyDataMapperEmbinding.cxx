// JavaScript wrapper for vtkOpenGLBatchedPolyDataMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLBatchedPolyDataMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLBatchedPolyDataMapper.h
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
#include "vtkOpenGLCompositePolyDataMapperDelegator.h"
#include "vtkOpenGLBatchedPolyDataMapper.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLBatchedPolyDataMapper>(vtkOpenGLBatchedPolyDataMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLBatchedPolyDataMapper_class) {
  emscripten::class_<vtkOpenGLBatchedPolyDataMapper, emscripten::base<vtkOpenGLPolyDataMapper>>("vtkOpenGLBatchedPolyDataMapper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLBatchedPolyDataMapper>>("vtkSmartPointer<vtkOpenGLBatchedPolyDataMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLBatchedPolyDataMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLBatchedPolyDataMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLBatchedPolyDataMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLBatchedPolyDataMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLBatchedPolyDataMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLBatchedPolyDataMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLBatchedPolyDataMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ClearBatchElements", &vtkOpenGLBatchedPolyDataMapper::ClearBatchElements)
    .function("SetParent", &vtkOpenGLBatchedPolyDataMapper::SetParent, emscripten::allow_raw_pointers())
    .function("RenderPiece", &vtkOpenGLBatchedPolyDataMapper::RenderPiece, emscripten::allow_raw_pointers())
    .function("UnmarkBatchElements", &vtkOpenGLBatchedPolyDataMapper::UnmarkBatchElements)
    .function("ClearUnmarkedBatchElements", &vtkOpenGLBatchedPolyDataMapper::ClearUnmarkedBatchElements)
    .function("ProcessSelectorPixelBuffers", emscripten::optional_override([](vtkOpenGLBatchedPolyDataMapper& self, vtkHardwareSelector* arg_0, std::vector<unsigned int>& arg_1, vtkProp* arg_2) -> void {  return self.ProcessSelectorPixelBuffers( arg_0, arg_1, arg_2);}), emscripten::allow_raw_pointers());
}
