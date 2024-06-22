// JavaScript wrapper for vtkEqualizerFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkEqualizerFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkEqualizerFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkEqualizerFilter.h"

template<> void emscripten::internal::raw_destructor<vtkEqualizerFilter>(vtkEqualizerFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEqualizerFilter_class) {
  emscripten::class_<vtkEqualizerFilter, emscripten::base<vtkTableAlgorithm>>("vtkEqualizerFilter")
    .smart_ptr<vtkSmartPointer<vtkEqualizerFilter>>("vtkSmartPointer<vtkEqualizerFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkEqualizerFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEqualizerFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEqualizerFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEqualizerFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEqualizerFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEqualizerFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEqualizerFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSamplingFrequency", &vtkEqualizerFilter::SetSamplingFrequency)
    .function("GetSamplingFrequency", &vtkEqualizerFilter::GetSamplingFrequency)
    .function("SetAllColumns", &vtkEqualizerFilter::SetAllColumns)
    .function("GetAllColumns", &vtkEqualizerFilter::GetAllColumns)
    .function("SetArray", emscripten::optional_override([](vtkEqualizerFilter& self, const std::string & arg_0) -> void {  return self.SetArray( arg_0.c_str());}))
    .function("GetArray", emscripten::optional_override([](vtkEqualizerFilter& self) -> std::string {  return self.GetArray();}))
    .function("SetPoints", &vtkEqualizerFilter::SetPoints)
    .function("GetPoints", &vtkEqualizerFilter::GetPoints)
    .function("SetSpectrumGain", &vtkEqualizerFilter::SetSpectrumGain)
    .function("GetSpectrumGain", &vtkEqualizerFilter::GetSpectrumGain);
}
