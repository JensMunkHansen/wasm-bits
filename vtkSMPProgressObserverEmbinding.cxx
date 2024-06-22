// JavaScript wrapper for vtkSMPProgressObserver with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkSMPProgressObserverEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkSMPProgressObserver.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProgressObserver.h"
#include "vtkSMPProgressObserver.h"

template<> void emscripten::internal::raw_destructor<vtkSMPProgressObserver>(vtkSMPProgressObserver * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSMPProgressObserver_class) {
  emscripten::class_<vtkSMPProgressObserver, emscripten::base<vtkProgressObserver>>("vtkSMPProgressObserver")
    .smart_ptr<vtkSmartPointer<vtkSMPProgressObserver>>("vtkSmartPointer<vtkSMPProgressObserver>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSMPProgressObserver>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSMPProgressObserver::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSMPProgressObserver& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSMPProgressObserver::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSMPProgressObserver::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSMPProgressObserver::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSMPProgressObserver& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("UpdateProgress", &vtkSMPProgressObserver::UpdateProgress)
    .function("GetLocalObserver", &vtkSMPProgressObserver::GetLocalObserver, emscripten::allow_raw_pointers());
}
