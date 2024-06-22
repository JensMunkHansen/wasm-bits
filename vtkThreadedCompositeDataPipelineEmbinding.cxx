// JavaScript wrapper for vtkThreadedCompositeDataPipeline with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkThreadedCompositeDataPipelineEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkThreadedCompositeDataPipeline.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkThreadedCompositeDataPipeline.h"

template<> void emscripten::internal::raw_destructor<vtkThreadedCompositeDataPipeline>(vtkThreadedCompositeDataPipeline * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkThreadedCompositeDataPipeline_class) {
  emscripten::class_<vtkThreadedCompositeDataPipeline, emscripten::base<vtkCompositeDataPipeline>>("vtkThreadedCompositeDataPipeline")
    .smart_ptr<vtkSmartPointer<vtkThreadedCompositeDataPipeline>>("vtkSmartPointer<vtkThreadedCompositeDataPipeline>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkThreadedCompositeDataPipeline>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkThreadedCompositeDataPipeline::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkThreadedCompositeDataPipeline& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkThreadedCompositeDataPipeline::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkThreadedCompositeDataPipeline::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkThreadedCompositeDataPipeline::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkThreadedCompositeDataPipeline& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
