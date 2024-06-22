// JavaScript wrapper for vtkBackgroundColorMonitor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkBackgroundColorMonitorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkBackgroundColorMonitor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkBackgroundColorMonitor.h"

template<> void emscripten::internal::raw_destructor<vtkBackgroundColorMonitor>(vtkBackgroundColorMonitor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBackgroundColorMonitor_class) {
  emscripten::class_<vtkBackgroundColorMonitor, emscripten::base<vtkObject>>("vtkBackgroundColorMonitor")
    .smart_ptr<vtkSmartPointer<vtkBackgroundColorMonitor>>("vtkSmartPointer<vtkBackgroundColorMonitor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBackgroundColorMonitor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBackgroundColorMonitor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBackgroundColorMonitor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBackgroundColorMonitor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBackgroundColorMonitor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBackgroundColorMonitor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBackgroundColorMonitor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("StateChanged", &vtkBackgroundColorMonitor::StateChanged, emscripten::allow_raw_pointers())
    .function("Update", &vtkBackgroundColorMonitor::Update, emscripten::allow_raw_pointers());
}
