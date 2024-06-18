// JavaScript wrapper for vtkVolumeContourSpectrumFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkVolumeContourSpectrumFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkVolumeContourSpectrumFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTable.h"
#include "vtkVolumeContourSpectrumFilter.h"

template<> void emscripten::internal::raw_destructor<vtkVolumeContourSpectrumFilter>(vtkVolumeContourSpectrumFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVolumeContourSpectrumFilter_class) {
  emscripten::class_<vtkVolumeContourSpectrumFilter, emscripten::base<vtkDataObjectAlgorithm>>("vtkVolumeContourSpectrumFilter")
    .smart_ptr<vtkSmartPointer<vtkVolumeContourSpectrumFilter>>("vtkSmartPointer<vtkVolumeContourSpectrumFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkVolumeContourSpectrumFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeContourSpectrumFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVolumeContourSpectrumFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVolumeContourSpectrumFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVolumeContourSpectrumFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeContourSpectrumFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVolumeContourSpectrumFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetArcId", &vtkVolumeContourSpectrumFilter::SetArcId)
    .function("GetArcId", &vtkVolumeContourSpectrumFilter::GetArcId)
    .function("SetNumberOfSamples", &vtkVolumeContourSpectrumFilter::SetNumberOfSamples)
    .function("GetNumberOfSamples", &vtkVolumeContourSpectrumFilter::GetNumberOfSamples)
    .function("SetFieldId", &vtkVolumeContourSpectrumFilter::SetFieldId)
    .function("GetFieldId", &vtkVolumeContourSpectrumFilter::GetFieldId)
    .function("GetOutput", &vtkVolumeContourSpectrumFilter::GetOutput, emscripten::allow_raw_pointers());
}
