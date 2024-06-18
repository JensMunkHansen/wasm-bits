// JavaScript wrapper for vtkExecutionRange with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkExecutionRangeEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkExecutionRange.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkExecutionRange.h"

template<> void emscripten::internal::raw_destructor<vtkExecutionRange>(vtkExecutionRange * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExecutionRange_class) {
  emscripten::class_<vtkExecutionRange, emscripten::base<vtkObject>>("vtkExecutionRange")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExecutionRange::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExecutionRange& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExecutionRange::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExecutionRange::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExecutionRange::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExecutionRange& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Size", &vtkExecutionRange::Size);
}
