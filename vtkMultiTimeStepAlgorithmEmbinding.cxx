// JavaScript wrapper for vtkMultiTimeStepAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkMultiTimeStepAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkMultiTimeStepAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiTimeStepAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkMultiTimeStepAlgorithm>(vtkMultiTimeStepAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMultiTimeStepAlgorithm_class) {
  emscripten::class_<vtkMultiTimeStepAlgorithm, emscripten::base<vtkAlgorithm>>("vtkMultiTimeStepAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkMultiTimeStepAlgorithm>>("vtkSmartPointer<vtkMultiTimeStepAlgorithm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMultiTimeStepAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiTimeStepAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMultiTimeStepAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMultiTimeStepAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMultiTimeStepAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiTimeStepAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMultiTimeStepAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
