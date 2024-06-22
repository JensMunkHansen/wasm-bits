// JavaScript wrapper for vtkPExtractDataArraysOverTime with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPExtractDataArraysOverTimeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPExtractDataArraysOverTime.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkPExtractDataArraysOverTime.h"

template<> void emscripten::internal::raw_destructor<vtkPExtractDataArraysOverTime>(vtkPExtractDataArraysOverTime * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPExtractDataArraysOverTime_class) {
  emscripten::class_<vtkPExtractDataArraysOverTime, emscripten::base<vtkExtractDataArraysOverTime>>("vtkPExtractDataArraysOverTime")
    .smart_ptr<vtkSmartPointer<vtkPExtractDataArraysOverTime>>("vtkSmartPointer<vtkPExtractDataArraysOverTime>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPExtractDataArraysOverTime>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPExtractDataArraysOverTime::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPExtractDataArraysOverTime& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPExtractDataArraysOverTime::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPExtractDataArraysOverTime::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPExtractDataArraysOverTime::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPExtractDataArraysOverTime& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkPExtractDataArraysOverTime::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkPExtractDataArraysOverTime::GetController, emscripten::allow_raw_pointers());
}
