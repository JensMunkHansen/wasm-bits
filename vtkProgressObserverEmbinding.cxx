// JavaScript wrapper for vtkProgressObserver with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkProgressObserverEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkProgressObserver.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProgressObserver.h"

template<> void emscripten::internal::raw_destructor<vtkProgressObserver>(vtkProgressObserver * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProgressObserver_class) {
  emscripten::class_<vtkProgressObserver, emscripten::base<vtkObject>>("vtkProgressObserver")
    .smart_ptr<vtkSmartPointer<vtkProgressObserver>>("vtkSmartPointer<vtkProgressObserver>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkProgressObserver>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProgressObserver::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProgressObserver& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProgressObserver::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProgressObserver::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProgressObserver::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProgressObserver& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("UpdateProgress", &vtkProgressObserver::UpdateProgress)
    .function("GetProgress", &vtkProgressObserver::GetProgress);
}
