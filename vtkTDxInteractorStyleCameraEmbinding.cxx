// JavaScript wrapper for vtkTDxInteractorStyleCamera with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkTDxInteractorStyleCameraEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkTDxInteractorStyleCamera.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTDxMotionEventInfo.h"
#include "vtkTDxInteractorStyleCamera.h"

template<> void emscripten::internal::raw_destructor<vtkTDxInteractorStyleCamera>(vtkTDxInteractorStyleCamera * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTDxInteractorStyleCamera_class) {
  emscripten::class_<vtkTDxInteractorStyleCamera, emscripten::base<vtkTDxInteractorStyle>>("vtkTDxInteractorStyleCamera")
    .smart_ptr<vtkSmartPointer<vtkTDxInteractorStyleCamera>>("vtkSmartPointer<vtkTDxInteractorStyleCamera>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTDxInteractorStyleCamera>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTDxInteractorStyleCamera::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTDxInteractorStyleCamera& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTDxInteractorStyleCamera::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTDxInteractorStyleCamera::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTDxInteractorStyleCamera::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTDxInteractorStyleCamera& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
