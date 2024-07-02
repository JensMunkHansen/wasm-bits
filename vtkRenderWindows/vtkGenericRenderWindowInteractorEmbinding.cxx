// JavaScript wrapper for vtkGenericRenderWindowInteractor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingUI.js/vtkRenderingUI.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingUI.js/vtkGenericRenderWindowInteractorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/UI/vtkGenericRenderWindowInteractor.h
*/
#include "vtkEmbindSmartPointerTraits.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericRenderWindowInteractor.h"

template<> void emscripten::internal::raw_destructor<vtkGenericRenderWindowInteractor>(vtkGenericRenderWindowInteractor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericRenderWindowInteractor_class) {
  emscripten::class_<vtkGenericRenderWindowInteractor, emscripten::base<vtkRenderWindowInteractor>>("vtkGenericRenderWindowInteractor")
    .smart_ptr<vtkSmartPointer<vtkGenericRenderWindowInteractor>>("vtkSmartPointer<vtkGenericRenderWindowInteractor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGenericRenderWindowInteractor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericRenderWindowInteractor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericRenderWindowInteractor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericRenderWindowInteractor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericRenderWindowInteractor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericRenderWindowInteractor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericRenderWindowInteractor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("TimerEvent", &vtkGenericRenderWindowInteractor::TimerEvent)
    .function("SetTimerEventResetsTimer", &vtkGenericRenderWindowInteractor::SetTimerEventResetsTimer)
    .function("GetTimerEventResetsTimer", &vtkGenericRenderWindowInteractor::GetTimerEventResetsTimer)
    .function("TimerEventResetsTimerOn", &vtkGenericRenderWindowInteractor::TimerEventResetsTimerOn)
    .function("TimerEventResetsTimerOff", &vtkGenericRenderWindowInteractor::TimerEventResetsTimerOff);
}
