// JavaScript wrapper for vtkHyperTreeGridDepthLimiter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkFiltersHyperTree.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkHyperTreeGridDepthLimiterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/HyperTree/vtkHyperTreeGridDepthLimiter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridDepthLimiter.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridDepthLimiter>(vtkHyperTreeGridDepthLimiter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridDepthLimiter_class) {
  emscripten::class_<vtkHyperTreeGridDepthLimiter, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkHyperTreeGridDepthLimiter")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridDepthLimiter>>("vtkSmartPointer<vtkHyperTreeGridDepthLimiter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHyperTreeGridDepthLimiter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridDepthLimiter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridDepthLimiter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridDepthLimiter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridDepthLimiter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridDepthLimiter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridDepthLimiter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetJustCreateNewMask", &vtkHyperTreeGridDepthLimiter::SetJustCreateNewMask)
    .function("GetJustCreateNewMask", &vtkHyperTreeGridDepthLimiter::GetJustCreateNewMask)
    .function("SetDepth", &vtkHyperTreeGridDepthLimiter::SetDepth)
    .function("GetDepth", &vtkHyperTreeGridDepthLimiter::GetDepth);
}
