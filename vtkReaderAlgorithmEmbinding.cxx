// JavaScript wrapper for vtkReaderAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkReaderAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkReaderAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkDataObject.h"
#include "vtkReaderAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkReaderAlgorithm>(vtkReaderAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkReaderAlgorithm_class) {
  emscripten::class_<vtkReaderAlgorithm, emscripten::base<vtkAlgorithm>>("vtkReaderAlgorithm")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkReaderAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkReaderAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkReaderAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkReaderAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkReaderAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkReaderAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CreateOutput", &vtkReaderAlgorithm::CreateOutput, emscripten::allow_raw_pointers())
    .function("ReadTimeDependentMetaData", &vtkReaderAlgorithm::ReadTimeDependentMetaData, emscripten::allow_raw_pointers());
}
