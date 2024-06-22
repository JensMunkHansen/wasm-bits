// JavaScript wrapper for vtkAnnotationLink with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkAnnotationLinkEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkAnnotationLink.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAnnotationLayers.h"
#include "vtkSelection.h"
#include "vtkTable.h"
#include "vtkAnnotationLink.h"

template<> void emscripten::internal::raw_destructor<vtkAnnotationLink>(vtkAnnotationLink * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAnnotationLink_class) {
  emscripten::class_<vtkAnnotationLink, emscripten::base<vtkAnnotationLayersAlgorithm>>("vtkAnnotationLink")
    .smart_ptr<vtkSmartPointer<vtkAnnotationLink>>("vtkSmartPointer<vtkAnnotationLink>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAnnotationLink>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAnnotationLink::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAnnotationLink& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAnnotationLink::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAnnotationLink::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAnnotationLink::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAnnotationLink& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetAnnotationLayers", &vtkAnnotationLink::GetAnnotationLayers, emscripten::allow_raw_pointers())
    .function("SetAnnotationLayers", &vtkAnnotationLink::SetAnnotationLayers, emscripten::allow_raw_pointers())
    .function("SetCurrentSelection", &vtkAnnotationLink::SetCurrentSelection, emscripten::allow_raw_pointers())
    .function("GetCurrentSelection", &vtkAnnotationLink::GetCurrentSelection, emscripten::allow_raw_pointers())
    .function("AddDomainMap", &vtkAnnotationLink::AddDomainMap, emscripten::allow_raw_pointers())
    .function("RemoveDomainMap", &vtkAnnotationLink::RemoveDomainMap, emscripten::allow_raw_pointers())
    .function("RemoveAllDomainMaps", &vtkAnnotationLink::RemoveAllDomainMaps)
    .function("GetNumberOfDomainMaps", &vtkAnnotationLink::GetNumberOfDomainMaps)
    .function("GetDomainMap", &vtkAnnotationLink::GetDomainMap, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkAnnotationLink::GetMTime);
}
