// JavaScript wrapper for vtkExtractParticlesOverTime with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractParticlesOverTimeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractParticlesOverTime.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractParticlesOverTime.h"

template<> void emscripten::internal::raw_destructor<vtkExtractParticlesOverTime>(vtkExtractParticlesOverTime * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractParticlesOverTime_class) {
  emscripten::class_<vtkExtractParticlesOverTime, emscripten::base<vtkDataSetAlgorithm>>("vtkExtractParticlesOverTime")
    .smart_ptr<vtkSmartPointer<vtkExtractParticlesOverTime>>("vtkSmartPointer<vtkExtractParticlesOverTime>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractParticlesOverTime>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractParticlesOverTime::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractParticlesOverTime& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractParticlesOverTime::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractParticlesOverTime::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractParticlesOverTime::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractParticlesOverTime& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetIdChannelArray", emscripten::optional_override([](vtkExtractParticlesOverTime& self, const std::string & arg_0) -> void {  return self.SetIdChannelArray( arg_0.c_str());}))
    .function("GetIdChannelArray", emscripten::optional_override([](vtkExtractParticlesOverTime& self) -> std::string {  return self.GetIdChannelArray();}));
}
