// JavaScript wrapper for vtkFrustumSelector with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFrustumSelectorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkFrustumSelector.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSelectionNode.h"
#include "vtkPlanes.h"
#include "vtkFrustumSelector.h"

template<> void emscripten::internal::raw_destructor<vtkFrustumSelector>(vtkFrustumSelector * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFrustumSelector_class) {
  emscripten::class_<vtkFrustumSelector, emscripten::base<vtkSelector>>("vtkFrustumSelector")
    .smart_ptr<vtkSmartPointer<vtkFrustumSelector>>("vtkSmartPointer<vtkFrustumSelector>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFrustumSelector>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFrustumSelector::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFrustumSelector& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFrustumSelector::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFrustumSelector::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFrustumSelector::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFrustumSelector& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkFrustumSelector::Initialize, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkFrustumSelector::GetMTime)
    .function("SetFrustum", &vtkFrustumSelector::SetFrustum, emscripten::allow_raw_pointers())
    .function("GetFrustum", &vtkFrustumSelector::GetFrustum, emscripten::allow_raw_pointers());
}
