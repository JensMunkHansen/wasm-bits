// JavaScript wrapper for vtkExecutionAggregator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkExecutionAggregatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkExecutionAggregator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkDataObject.h"
#include "vtkExecutionAggregator.h"

template<> void emscripten::internal::raw_destructor<vtkExecutionAggregator>(vtkExecutionAggregator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExecutionAggregator_class) {
  emscripten::class_<vtkExecutionAggregator, emscripten::base<vtkObject>>("vtkExecutionAggregator")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExecutionAggregator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExecutionAggregator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExecutionAggregator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExecutionAggregator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExecutionAggregator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExecutionAggregator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RequestDataObject", &vtkExecutionAggregator::RequestDataObject, emscripten::allow_raw_pointers());
}
