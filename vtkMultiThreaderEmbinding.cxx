// JavaScript wrapper for vtkMultiThreader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkMultiThreaderEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkMultiThreader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiThreader.h"

template<> void emscripten::internal::raw_destructor<vtkMultiThreader>(vtkMultiThreader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMultiThreader_class) {
  emscripten::class_<vtkMultiThreader, emscripten::base<vtkObject>>("vtkMultiThreader")
    .smart_ptr<vtkSmartPointer<vtkMultiThreader>>("vtkSmartPointer<vtkMultiThreader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMultiThreader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiThreader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMultiThreader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMultiThreader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMultiThreader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiThreader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMultiThreader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfThreads", &vtkMultiThreader::SetNumberOfThreads)
    .function("GetNumberOfThreadsMinValue", &vtkMultiThreader::GetNumberOfThreadsMinValue)
    .function("GetNumberOfThreadsMaxValue", &vtkMultiThreader::GetNumberOfThreadsMaxValue)
    .function("GetNumberOfThreads", &vtkMultiThreader::GetNumberOfThreads)
    .class_function("GetGlobalStaticMaximumNumberOfThreads", &vtkMultiThreader::GetGlobalStaticMaximumNumberOfThreads)
    .class_function("SetGlobalMaximumNumberOfThreads", &vtkMultiThreader::SetGlobalMaximumNumberOfThreads)
    .class_function("GetGlobalMaximumNumberOfThreads", &vtkMultiThreader::GetGlobalMaximumNumberOfThreads)
    .class_function("SetGlobalDefaultNumberOfThreads", &vtkMultiThreader::SetGlobalDefaultNumberOfThreads)
    .class_function("GetGlobalDefaultNumberOfThreads", &vtkMultiThreader::GetGlobalDefaultNumberOfThreads)
    .function("SingleMethodExecute", &vtkMultiThreader::SingleMethodExecute)
    .function("MultipleMethodExecute", &vtkMultiThreader::MultipleMethodExecute)
    .function("TerminateThread", &vtkMultiThreader::TerminateThread)
    .function("IsThreadActive", &vtkMultiThreader::IsThreadActive);
}
