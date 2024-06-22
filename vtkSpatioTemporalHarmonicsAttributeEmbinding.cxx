// JavaScript wrapper for vtkSpatioTemporalHarmonicsAttribute with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkSpatioTemporalHarmonicsAttributeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkSpatioTemporalHarmonicsAttribute.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSpatioTemporalHarmonicsAttribute.h"

template<> void emscripten::internal::raw_destructor<vtkSpatioTemporalHarmonicsAttribute>(vtkSpatioTemporalHarmonicsAttribute * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSpatioTemporalHarmonicsAttribute_class) {
  emscripten::class_<vtkSpatioTemporalHarmonicsAttribute, emscripten::base<vtkDataSetAlgorithm>>("vtkSpatioTemporalHarmonicsAttribute")
    .smart_ptr<vtkSmartPointer<vtkSpatioTemporalHarmonicsAttribute>>("vtkSmartPointer<vtkSpatioTemporalHarmonicsAttribute>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSpatioTemporalHarmonicsAttribute>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpatioTemporalHarmonicsAttribute::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSpatioTemporalHarmonicsAttribute& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSpatioTemporalHarmonicsAttribute::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSpatioTemporalHarmonicsAttribute::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpatioTemporalHarmonicsAttribute::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSpatioTemporalHarmonicsAttribute& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddHarmonic", &vtkSpatioTemporalHarmonicsAttribute::AddHarmonic)
    .function("ClearHarmonics", &vtkSpatioTemporalHarmonicsAttribute::ClearHarmonics)
    .function("HasHarmonics", &vtkSpatioTemporalHarmonicsAttribute::HasHarmonics);
}
