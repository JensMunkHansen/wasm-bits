// JavaScript wrapper for vtkAlgorithmOutput with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkAlgorithmOutputEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkAlgorithmOutput.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithm.h"
#include "vtkAlgorithmOutput.h"

template<> void emscripten::internal::raw_destructor<vtkAlgorithmOutput>(vtkAlgorithmOutput * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAlgorithmOutput_class) {
  emscripten::class_<vtkAlgorithmOutput, emscripten::base<vtkObject>>("vtkAlgorithmOutput")
    .smart_ptr<vtkSmartPointer<vtkAlgorithmOutput>>("vtkSmartPointer<vtkAlgorithmOutput>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAlgorithmOutput>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAlgorithmOutput::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAlgorithmOutput& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAlgorithmOutput::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAlgorithmOutput::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAlgorithmOutput::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAlgorithmOutput& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetIndex", &vtkAlgorithmOutput::SetIndex)
    .function("GetIndex", &vtkAlgorithmOutput::GetIndex)
    .function("GetProducer", &vtkAlgorithmOutput::GetProducer, emscripten::allow_raw_pointers())
    .function("SetProducer", &vtkAlgorithmOutput::SetProducer, emscripten::allow_raw_pointers());
}
