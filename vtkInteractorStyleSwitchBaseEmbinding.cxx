// JavaScript wrapper for vtkInteractorStyleSwitchBase with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkInteractorStyleSwitchBaseEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkInteractorStyleSwitchBase.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkInteractorStyleSwitchBase.h"

template<> void emscripten::internal::raw_destructor<vtkInteractorStyleSwitchBase>(vtkInteractorStyleSwitchBase * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyleSwitchBase_class) {
  emscripten::class_<vtkInteractorStyleSwitchBase, emscripten::base<vtkInteractorStyle>>("vtkInteractorStyleSwitchBase")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyleSwitchBase>>("vtkSmartPointer<vtkInteractorStyleSwitchBase>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkInteractorStyleSwitchBase>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleSwitchBase::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyleSwitchBase& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyleSwitchBase::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyleSwitchBase::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleSwitchBase::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyleSwitchBase& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInteractor", &vtkInteractorStyleSwitchBase::GetInteractor, emscripten::allow_raw_pointers());
}
