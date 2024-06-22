// JavaScript wrapper for vtkDummyGPUInfoList with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkDummyGPUInfoListEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkDummyGPUInfoList.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDummyGPUInfoList.h"

template<> void emscripten::internal::raw_destructor<vtkDummyGPUInfoList>(vtkDummyGPUInfoList * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDummyGPUInfoList_class) {
  emscripten::class_<vtkDummyGPUInfoList, emscripten::base<vtkGPUInfoList>>("vtkDummyGPUInfoList")
    .smart_ptr<vtkSmartPointer<vtkDummyGPUInfoList>>("vtkSmartPointer<vtkDummyGPUInfoList>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDummyGPUInfoList>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDummyGPUInfoList::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDummyGPUInfoList& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDummyGPUInfoList::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDummyGPUInfoList::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDummyGPUInfoList::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDummyGPUInfoList& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Probe", &vtkDummyGPUInfoList::Probe);
}
