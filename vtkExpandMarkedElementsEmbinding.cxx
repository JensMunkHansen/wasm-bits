// JavaScript wrapper for vtkExpandMarkedElements with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExpandMarkedElementsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExpandMarkedElements.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExpandMarkedElements.h"

template<> void emscripten::internal::raw_destructor<vtkExpandMarkedElements>(vtkExpandMarkedElements * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExpandMarkedElements_class) {
  emscripten::class_<vtkExpandMarkedElements, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkExpandMarkedElements")
    .smart_ptr<vtkSmartPointer<vtkExpandMarkedElements>>("vtkSmartPointer<vtkExpandMarkedElements>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExpandMarkedElements>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExpandMarkedElements::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExpandMarkedElements& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExpandMarkedElements::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExpandMarkedElements::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExpandMarkedElements::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExpandMarkedElements& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkExpandMarkedElements::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkExpandMarkedElements::GetController, emscripten::allow_raw_pointers())
    .function("SetNumberOfLayers", &vtkExpandMarkedElements::SetNumberOfLayers)
    .function("GetNumberOfLayersMinValue", &vtkExpandMarkedElements::GetNumberOfLayersMinValue)
    .function("GetNumberOfLayersMaxValue", &vtkExpandMarkedElements::GetNumberOfLayersMaxValue)
    .function("GetNumberOfLayers", &vtkExpandMarkedElements::GetNumberOfLayers)
    .function("SetRemoveSeed", &vtkExpandMarkedElements::SetRemoveSeed)
    .function("GetRemoveSeed", &vtkExpandMarkedElements::GetRemoveSeed)
    .function("RemoveSeedOn", &vtkExpandMarkedElements::RemoveSeedOn)
    .function("RemoveSeedOff", &vtkExpandMarkedElements::RemoveSeedOff)
    .function("SetRemoveIntermediateLayers", &vtkExpandMarkedElements::SetRemoveIntermediateLayers)
    .function("GetRemoveIntermediateLayers", &vtkExpandMarkedElements::GetRemoveIntermediateLayers)
    .function("RemoveIntermediateLayersOn", &vtkExpandMarkedElements::RemoveIntermediateLayersOn)
    .function("RemoveIntermediateLayersOff", &vtkExpandMarkedElements::RemoveIntermediateLayersOff);
}
