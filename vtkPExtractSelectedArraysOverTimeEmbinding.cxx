// JavaScript wrapper for vtkPExtractSelectedArraysOverTime with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPExtractSelectedArraysOverTimeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPExtractSelectedArraysOverTime.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkPExtractSelectedArraysOverTime.h"

template<> void emscripten::internal::raw_destructor<vtkPExtractSelectedArraysOverTime>(vtkPExtractSelectedArraysOverTime * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPExtractSelectedArraysOverTime_class) {
  emscripten::class_<vtkPExtractSelectedArraysOverTime, emscripten::base<vtkExtractSelectedArraysOverTime>>("vtkPExtractSelectedArraysOverTime")
    .smart_ptr<vtkSmartPointer<vtkPExtractSelectedArraysOverTime>>("vtkSmartPointer<vtkPExtractSelectedArraysOverTime>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPExtractSelectedArraysOverTime>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPExtractSelectedArraysOverTime::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPExtractSelectedArraysOverTime& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPExtractSelectedArraysOverTime::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPExtractSelectedArraysOverTime::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPExtractSelectedArraysOverTime::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPExtractSelectedArraysOverTime& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkPExtractSelectedArraysOverTime::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkPExtractSelectedArraysOverTime::GetController, emscripten::allow_raw_pointers());
}
