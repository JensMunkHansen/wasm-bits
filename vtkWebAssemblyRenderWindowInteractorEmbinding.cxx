// JavaScript wrapper for vtkWebAssemblyRenderWindowInteractor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingUI.js/vtkRenderingUI.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingUI.js/vtkWebAssemblyRenderWindowInteractorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/UI/vtkWebAssemblyRenderWindowInteractor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWebAssemblyRenderWindowInteractor.h"

template<> void emscripten::internal::raw_destructor<vtkWebAssemblyRenderWindowInteractor>(vtkWebAssemblyRenderWindowInteractor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWebAssemblyRenderWindowInteractor_class) {
  emscripten::class_<vtkWebAssemblyRenderWindowInteractor, emscripten::base<vtkRenderWindowInteractor>>("vtkWebAssemblyRenderWindowInteractor")
    .smart_ptr<vtkSmartPointer<vtkWebAssemblyRenderWindowInteractor>>("vtkSmartPointer<vtkWebAssemblyRenderWindowInteractor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkWebAssemblyRenderWindowInteractor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebAssemblyRenderWindowInteractor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWebAssemblyRenderWindowInteractor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWebAssemblyRenderWindowInteractor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWebAssemblyRenderWindowInteractor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebAssemblyRenderWindowInteractor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWebAssemblyRenderWindowInteractor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkWebAssemblyRenderWindowInteractor::Initialize)
    .function("ProcessEvents", &vtkWebAssemblyRenderWindowInteractor::ProcessEvents)
    .function("TerminateApp", &vtkWebAssemblyRenderWindowInteractor::TerminateApp)
    .function("ExitCallback", &vtkWebAssemblyRenderWindowInteractor::ExitCallback)
    .function("GetCanvasId", emscripten::optional_override([](vtkWebAssemblyRenderWindowInteractor& self) -> std::string {  return self.GetCanvasId();}))
    .function("SetCanvasId", emscripten::optional_override([](vtkWebAssemblyRenderWindowInteractor& self, const std::string & arg_0) -> void {  return self.SetCanvasId( arg_0.c_str());}))
    .function("GetExpandCanvasToContainer", &vtkWebAssemblyRenderWindowInteractor::GetExpandCanvasToContainer)
    .function("SetExpandCanvasToContainer", &vtkWebAssemblyRenderWindowInteractor::SetExpandCanvasToContainer)
    .function("ExpandCanvasToContainerOn", &vtkWebAssemblyRenderWindowInteractor::ExpandCanvasToContainerOn)
    .function("ExpandCanvasToContainerOff", &vtkWebAssemblyRenderWindowInteractor::ExpandCanvasToContainerOff)
    .function("GetInstallHTMLResizeObserver", &vtkWebAssemblyRenderWindowInteractor::GetInstallHTMLResizeObserver)
    .function("SetInstallHTMLResizeObserver", &vtkWebAssemblyRenderWindowInteractor::SetInstallHTMLResizeObserver)
    .function("InstallHTMLResizeObserverOn", &vtkWebAssemblyRenderWindowInteractor::InstallHTMLResizeObserverOn)
    .function("InstallHTMLResizeObserverOff", &vtkWebAssemblyRenderWindowInteractor::InstallHTMLResizeObserverOff);
}
