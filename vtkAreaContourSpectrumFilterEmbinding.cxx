// JavaScript wrapper for vtkAreaContourSpectrumFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkAreaContourSpectrumFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkAreaContourSpectrumFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTable.h"
#include "vtkAreaContourSpectrumFilter.h"

template<> void emscripten::internal::raw_destructor<vtkAreaContourSpectrumFilter>(vtkAreaContourSpectrumFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAreaContourSpectrumFilter_class) {
  emscripten::class_<vtkAreaContourSpectrumFilter, emscripten::base<vtkDataObjectAlgorithm>>("vtkAreaContourSpectrumFilter")
    .smart_ptr<vtkSmartPointer<vtkAreaContourSpectrumFilter>>("vtkSmartPointer<vtkAreaContourSpectrumFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAreaContourSpectrumFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAreaContourSpectrumFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAreaContourSpectrumFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAreaContourSpectrumFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAreaContourSpectrumFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAreaContourSpectrumFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAreaContourSpectrumFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetArcId", &vtkAreaContourSpectrumFilter::SetArcId)
    .function("GetArcId", &vtkAreaContourSpectrumFilter::GetArcId)
    .function("SetNumberOfSamples", &vtkAreaContourSpectrumFilter::SetNumberOfSamples)
    .function("GetNumberOfSamples", &vtkAreaContourSpectrumFilter::GetNumberOfSamples)
    .function("SetFieldId", &vtkAreaContourSpectrumFilter::SetFieldId)
    .function("GetFieldId", &vtkAreaContourSpectrumFilter::GetFieldId)
    .function("GetOutput", &vtkAreaContourSpectrumFilter::GetOutput, emscripten::allow_raw_pointers());
}
