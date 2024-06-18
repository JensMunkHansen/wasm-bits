// JavaScript wrapper for vtkHeap with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMisc.js/vtkCommonMisc.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMisc.js/vtkHeapEmbinding.cxx \
 /home/jmh/github/vtk/Common/Misc/vtkHeap.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHeap.h"

template<> void emscripten::internal::raw_destructor<vtkHeap>(vtkHeap * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHeap_class) {
  emscripten::class_<vtkHeap, emscripten::base<vtkObject>>("vtkHeap")
    .smart_ptr<vtkSmartPointer<vtkHeap>>("vtkSmartPointer<vtkHeap>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHeap>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHeap::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHeap& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHeap::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHeap::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHeap::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHeap& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AllocateMemory", emscripten::optional_override([](vtkHeap& self, size_t arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.AllocateMemory( arg_0));}))
    .function("SetBlockSize", &vtkHeap::SetBlockSize)
    .function("GetBlockSize", &vtkHeap::GetBlockSize)
    .function("GetNumberOfBlocks", &vtkHeap::GetNumberOfBlocks)
    .function("GetNumberOfAllocations", &vtkHeap::GetNumberOfAllocations)
    .function("Reset", &vtkHeap::Reset)
    .function("StringDup", emscripten::optional_override([](vtkHeap& self, const std::string & arg_0) -> std::string {  return self.StringDup( arg_0.c_str());}));
}
