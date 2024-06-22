// JavaScript wrapper for vtkGPUInfo with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkGPUInfoEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkGPUInfo.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGPUInfo.h"

template<> void emscripten::internal::raw_destructor<vtkGPUInfo>(vtkGPUInfo * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGPUInfo_class) {
  emscripten::class_<vtkGPUInfo, emscripten::base<vtkObject>>("vtkGPUInfo")
    .smart_ptr<vtkSmartPointer<vtkGPUInfo>>("vtkSmartPointer<vtkGPUInfo>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGPUInfo>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGPUInfo::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGPUInfo& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGPUInfo::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGPUInfo::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGPUInfo::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGPUInfo& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDedicatedVideoMemory", &vtkGPUInfo::SetDedicatedVideoMemory)
    .function("GetDedicatedVideoMemory", &vtkGPUInfo::GetDedicatedVideoMemory)
    .function("SetDedicatedSystemMemory", &vtkGPUInfo::SetDedicatedSystemMemory)
    .function("GetDedicatedSystemMemory", &vtkGPUInfo::GetDedicatedSystemMemory)
    .function("SetSharedSystemMemory", &vtkGPUInfo::SetSharedSystemMemory)
    .function("GetSharedSystemMemory", &vtkGPUInfo::GetSharedSystemMemory);
}
