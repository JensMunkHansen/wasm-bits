// JavaScript wrapper for vtkCachedStreamingDemandDrivenPipeline with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCachedStreamingDemandDrivenPipelineEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkCachedStreamingDemandDrivenPipeline.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCachedStreamingDemandDrivenPipeline.h"

template<> void emscripten::internal::raw_destructor<vtkCachedStreamingDemandDrivenPipeline>(vtkCachedStreamingDemandDrivenPipeline * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCachedStreamingDemandDrivenPipeline_class) {
  emscripten::class_<vtkCachedStreamingDemandDrivenPipeline, emscripten::base<vtkStreamingDemandDrivenPipeline>>("vtkCachedStreamingDemandDrivenPipeline")
    .smart_ptr<vtkSmartPointer<vtkCachedStreamingDemandDrivenPipeline>>("vtkSmartPointer<vtkCachedStreamingDemandDrivenPipeline>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCachedStreamingDemandDrivenPipeline>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCachedStreamingDemandDrivenPipeline::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCachedStreamingDemandDrivenPipeline& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCachedStreamingDemandDrivenPipeline::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCachedStreamingDemandDrivenPipeline::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCachedStreamingDemandDrivenPipeline::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCachedStreamingDemandDrivenPipeline& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCacheSize", &vtkCachedStreamingDemandDrivenPipeline::SetCacheSize)
    .function("GetCacheSize", &vtkCachedStreamingDemandDrivenPipeline::GetCacheSize);
}
