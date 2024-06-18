// JavaScript wrapper for vtkSpatioTemporalHarmonicsSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkSpatioTemporalHarmonicsSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkSpatioTemporalHarmonicsSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSpatioTemporalHarmonicsSource.h"

template<> void emscripten::internal::raw_destructor<vtkSpatioTemporalHarmonicsSource>(vtkSpatioTemporalHarmonicsSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSpatioTemporalHarmonicsSource_class) {
  emscripten::class_<vtkSpatioTemporalHarmonicsSource, emscripten::base<vtkImageAlgorithm>>("vtkSpatioTemporalHarmonicsSource")
    .smart_ptr<vtkSmartPointer<vtkSpatioTemporalHarmonicsSource>>("vtkSmartPointer<vtkSpatioTemporalHarmonicsSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSpatioTemporalHarmonicsSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpatioTemporalHarmonicsSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSpatioTemporalHarmonicsSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSpatioTemporalHarmonicsSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSpatioTemporalHarmonicsSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpatioTemporalHarmonicsSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSpatioTemporalHarmonicsSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWholeExtent", emscripten::select_overload<void(vtkSpatioTemporalHarmonicsSource&, int, int, int, int, int, int)>([](vtkSpatioTemporalHarmonicsSource& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetWholeExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("AddTimeStepValue", &vtkSpatioTemporalHarmonicsSource::AddTimeStepValue)
    .function("ClearTimeStepValues", &vtkSpatioTemporalHarmonicsSource::ClearTimeStepValues)
    .function("ResetTimeStepValues", &vtkSpatioTemporalHarmonicsSource::ResetTimeStepValues)
    .function("AddHarmonic", &vtkSpatioTemporalHarmonicsSource::AddHarmonic)
    .function("ClearHarmonics", &vtkSpatioTemporalHarmonicsSource::ClearHarmonics)
    .function("ResetHarmonics", &vtkSpatioTemporalHarmonicsSource::ResetHarmonics);
}
