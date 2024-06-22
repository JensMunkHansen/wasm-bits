// JavaScript wrapper for vtkGPUInfoList with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkGPUInfoListEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkGPUInfoList.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGPUInfo.h"
#include "vtkGPUInfoList.h"

template<> void emscripten::internal::raw_destructor<vtkGPUInfoList>(vtkGPUInfoList * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGPUInfoList_class) {
  emscripten::class_<vtkGPUInfoList, emscripten::base<vtkObject>>("vtkGPUInfoList")
    .smart_ptr<vtkSmartPointer<vtkGPUInfoList>>("vtkSmartPointer<vtkGPUInfoList>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGPUInfoList>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGPUInfoList::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGPUInfoList& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGPUInfoList::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGPUInfoList::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGPUInfoList::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGPUInfoList& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsProbed", &vtkGPUInfoList::IsProbed)
    .function("GetNumberOfGPUs", &vtkGPUInfoList::GetNumberOfGPUs)
    .function("GetGPUInfo", &vtkGPUInfoList::GetGPUInfo, emscripten::allow_raw_pointers());
}
