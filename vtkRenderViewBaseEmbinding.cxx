// JavaScript wrapper for vtkRenderViewBase with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsCore.js/vtkViewsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsCore.js/vtkRenderViewBaseEmbinding.cxx \
 /home/jmh/github/vtk/Views/Core/vtkRenderViewBase.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkRenderWindow.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkRenderViewBase.h"

template<> void emscripten::internal::raw_destructor<vtkRenderViewBase>(vtkRenderViewBase * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRenderViewBase_class) {
  emscripten::class_<vtkRenderViewBase, emscripten::base<vtkView>>("vtkRenderViewBase")
    .smart_ptr<vtkSmartPointer<vtkRenderViewBase>>("vtkSmartPointer<vtkRenderViewBase>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRenderViewBase>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderViewBase::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRenderViewBase& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRenderViewBase::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRenderViewBase::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderViewBase::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRenderViewBase& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetRenderer", &vtkRenderViewBase::GetRenderer, emscripten::allow_raw_pointers())
    .function("SetRenderer", &vtkRenderViewBase::SetRenderer, emscripten::allow_raw_pointers())
    .function("GetRenderWindow", &vtkRenderViewBase::GetRenderWindow, emscripten::allow_raw_pointers())
    .function("SetRenderWindow", &vtkRenderViewBase::SetRenderWindow, emscripten::allow_raw_pointers())
    .function("GetInteractor", &vtkRenderViewBase::GetInteractor, emscripten::allow_raw_pointers())
    .function("SetInteractor", &vtkRenderViewBase::SetInteractor, emscripten::allow_raw_pointers())
    .function("Render", &vtkRenderViewBase::Render)
    .function("ResetCamera", &vtkRenderViewBase::ResetCamera)
    .function("ResetCameraClippingRange", &vtkRenderViewBase::ResetCameraClippingRange);
}
