// JavaScript wrapper for vtkCompositeDataPipeline with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCompositeDataPipelineEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkCompositeDataPipeline.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkInformationVector.h"
#include "vtkInformationIntegerKey.h"
#include "vtkInformationObjectBaseKey.h"
#include "vtkInformationIntegerVectorKey.h"
#include "vtkInformationDoubleKey.h"
#include "vtkCompositeDataPipeline.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeDataPipeline>(vtkCompositeDataPipeline * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeDataPipeline_class) {
  emscripten::class_<vtkCompositeDataPipeline, emscripten::base<vtkStreamingDemandDrivenPipeline>>("vtkCompositeDataPipeline")
    .smart_ptr<vtkSmartPointer<vtkCompositeDataPipeline>>("vtkSmartPointer<vtkCompositeDataPipeline>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCompositeDataPipeline>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataPipeline::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeDataPipeline& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeDataPipeline::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeDataPipeline::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataPipeline::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeDataPipeline& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCompositeOutputData", &vtkCompositeDataPipeline::GetCompositeOutputData, emscripten::allow_raw_pointers())
    .class_function("LOAD_REQUESTED_BLOCKS", &vtkCompositeDataPipeline::LOAD_REQUESTED_BLOCKS, emscripten::allow_raw_pointers())
    .class_function("COMPOSITE_DATA_META_DATA", &vtkCompositeDataPipeline::COMPOSITE_DATA_META_DATA, emscripten::allow_raw_pointers())
    .class_function("UPDATE_COMPOSITE_INDICES", &vtkCompositeDataPipeline::UPDATE_COMPOSITE_INDICES, emscripten::allow_raw_pointers())
    .class_function("BLOCK_AMOUNT_OF_DETAIL", &vtkCompositeDataPipeline::BLOCK_AMOUNT_OF_DETAIL, emscripten::allow_raw_pointers());
}
