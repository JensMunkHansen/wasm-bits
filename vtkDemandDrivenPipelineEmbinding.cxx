// JavaScript wrapper for vtkDemandDrivenPipeline with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkDemandDrivenPipelineEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkDemandDrivenPipeline.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkInformationRequestKey.h"
#include "vtkInformationIntegerKey.h"
#include "vtkDataObject.h"
#include "vtkDemandDrivenPipeline.h"

template<> void emscripten::internal::raw_destructor<vtkDemandDrivenPipeline>(vtkDemandDrivenPipeline * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDemandDrivenPipeline_class) {
  emscripten::class_<vtkDemandDrivenPipeline, emscripten::base<vtkExecutive>>("vtkDemandDrivenPipeline")
    .smart_ptr<vtkSmartPointer<vtkDemandDrivenPipeline>>("vtkSmartPointer<vtkDemandDrivenPipeline>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDemandDrivenPipeline>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDemandDrivenPipeline::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDemandDrivenPipeline& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDemandDrivenPipeline::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDemandDrivenPipeline::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDemandDrivenPipeline::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDemandDrivenPipeline& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Update", emscripten::select_overload<int(vtkDemandDrivenPipeline&)>([](vtkDemandDrivenPipeline& self) -> int { return self.Update(); }))
    .function("Update", emscripten::select_overload<int(vtkDemandDrivenPipeline&, int)>([](vtkDemandDrivenPipeline& self, int arg_0) -> int { return self.Update( arg_0); }))
    .function("GetPipelineMTime", &vtkDemandDrivenPipeline::GetPipelineMTime)
    .function("SetReleaseDataFlag", &vtkDemandDrivenPipeline::SetReleaseDataFlag)
    .function("GetReleaseDataFlag", &vtkDemandDrivenPipeline::GetReleaseDataFlag)
    .function("UpdatePipelineMTime", &vtkDemandDrivenPipeline::UpdatePipelineMTime)
    .function("UpdateDataObject", &vtkDemandDrivenPipeline::UpdateDataObject)
    .function("UpdateInformation", &vtkDemandDrivenPipeline::UpdateInformation)
    .function("UpdateData", &vtkDemandDrivenPipeline::UpdateData)
    .class_function("REQUEST_DATA_OBJECT", &vtkDemandDrivenPipeline::REQUEST_DATA_OBJECT, emscripten::allow_raw_pointers())
    .class_function("REQUEST_INFORMATION", &vtkDemandDrivenPipeline::REQUEST_INFORMATION, emscripten::allow_raw_pointers())
    .class_function("REQUEST_DATA", &vtkDemandDrivenPipeline::REQUEST_DATA, emscripten::allow_raw_pointers())
    .class_function("REQUEST_DATA_NOT_GENERATED", &vtkDemandDrivenPipeline::REQUEST_DATA_NOT_GENERATED, emscripten::allow_raw_pointers())
    .class_function("RELEASE_DATA", &vtkDemandDrivenPipeline::RELEASE_DATA, emscripten::allow_raw_pointers())
    .class_function("DATA_NOT_GENERATED", &vtkDemandDrivenPipeline::DATA_NOT_GENERATED, emscripten::allow_raw_pointers())
    .class_function("NewDataObject", emscripten::optional_override([]( const std::string & arg_0) -> vtkDataObject* {  return vtkDemandDrivenPipeline::NewDataObject( arg_0.c_str());}), emscripten::allow_raw_pointers());
}
