// JavaScript wrapper for vtkPointFillPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkPointFillPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkPointFillPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkWindow.h"
#include "vtkPointFillPass.h"

template<> void emscripten::internal::raw_destructor<vtkPointFillPass>(vtkPointFillPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointFillPass_class) {
  emscripten::class_<vtkPointFillPass, emscripten::base<vtkDepthImageProcessingPass>>("vtkPointFillPass")
    .smart_ptr<vtkSmartPointer<vtkPointFillPass>>("vtkSmartPointer<vtkPointFillPass>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPointFillPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointFillPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointFillPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointFillPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointFillPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointFillPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointFillPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkPointFillPass::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetCandidatePointRatio", &vtkPointFillPass::SetCandidatePointRatio)
    .function("GetCandidatePointRatio", &vtkPointFillPass::GetCandidatePointRatio)
    .function("SetMinimumCandidateAngle", &vtkPointFillPass::SetMinimumCandidateAngle)
    .function("GetMinimumCandidateAngle", &vtkPointFillPass::GetMinimumCandidateAngle);
}
