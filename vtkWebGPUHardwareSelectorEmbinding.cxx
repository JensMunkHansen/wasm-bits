// JavaScript wrapper for vtkWebGPUHardwareSelector with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkRenderingWebGPU.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkWebGPUHardwareSelectorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/WebGPU/vtkWebGPUHardwareSelector.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWebGPUHardwareSelector.h"

template<> void emscripten::internal::raw_destructor<vtkWebGPUHardwareSelector>(vtkWebGPUHardwareSelector * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWebGPUHardwareSelector_class) {
  emscripten::class_<vtkWebGPUHardwareSelector, emscripten::base<vtkHardwareSelector>>("vtkWebGPUHardwareSelector")
    .smart_ptr<vtkSmartPointer<vtkWebGPUHardwareSelector>>("vtkSmartPointer<vtkWebGPUHardwareSelector>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkWebGPUHardwareSelector>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPUHardwareSelector::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWebGPUHardwareSelector& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWebGPUHardwareSelector::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWebGPUHardwareSelector::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPUHardwareSelector::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWebGPUHardwareSelector& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("BeginRenderProp", emscripten::select_overload<void(vtkWebGPUHardwareSelector&)>([](vtkWebGPUHardwareSelector& self) -> void { return self.BeginRenderProp(); }))
    .function("EndRenderProp", emscripten::select_overload<void(vtkWebGPUHardwareSelector&)>([](vtkWebGPUHardwareSelector& self) -> void { return self.EndRenderProp(); }))
    .function("RenderCompositeIndex", &vtkWebGPUHardwareSelector::RenderCompositeIndex)
    .function("RenderProcessId", &vtkWebGPUHardwareSelector::RenderProcessId)
    .function("BeginSelection", &vtkWebGPUHardwareSelector::BeginSelection)
    .function("EndSelection", &vtkWebGPUHardwareSelector::EndSelection);
}
