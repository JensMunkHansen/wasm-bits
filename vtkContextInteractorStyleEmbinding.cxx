// JavaScript wrapper for vtkContextInteractorStyle with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsContext2D.js/vtkViewsContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsContext2D.js/vtkContextInteractorStyleEmbinding.cxx \
 /home/jmh/github/vtk/Views/Context2D/vtkContextInteractorStyle.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContextScene.h"
#include "vtkContextInteractorStyle.h"

template<> void emscripten::internal::raw_destructor<vtkContextInteractorStyle>(vtkContextInteractorStyle * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContextInteractorStyle_class) {
  emscripten::class_<vtkContextInteractorStyle, emscripten::base<vtkInteractorStyle>>("vtkContextInteractorStyle")
    .smart_ptr<vtkSmartPointer<vtkContextInteractorStyle>>("vtkSmartPointer<vtkContextInteractorStyle>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkContextInteractorStyle>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextInteractorStyle::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContextInteractorStyle& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContextInteractorStyle::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContextInteractorStyle::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextInteractorStyle::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContextInteractorStyle& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetScene", &vtkContextInteractorStyle::SetScene, emscripten::allow_raw_pointers())
    .function("GetScene", &vtkContextInteractorStyle::GetScene, emscripten::allow_raw_pointers())
    .function("OnSceneModified", &vtkContextInteractorStyle::OnSceneModified)
    .function("OnMouseMove", &vtkContextInteractorStyle::OnMouseMove)
    .function("OnLeftButtonDown", &vtkContextInteractorStyle::OnLeftButtonDown)
    .function("OnLeftButtonUp", &vtkContextInteractorStyle::OnLeftButtonUp)
    .function("OnLeftButtonDoubleClick", &vtkContextInteractorStyle::OnLeftButtonDoubleClick)
    .function("OnMiddleButtonDown", &vtkContextInteractorStyle::OnMiddleButtonDown)
    .function("OnMiddleButtonUp", &vtkContextInteractorStyle::OnMiddleButtonUp)
    .function("OnMiddleButtonDoubleClick", &vtkContextInteractorStyle::OnMiddleButtonDoubleClick)
    .function("OnRightButtonDown", &vtkContextInteractorStyle::OnRightButtonDown)
    .function("OnRightButtonUp", &vtkContextInteractorStyle::OnRightButtonUp)
    .function("OnRightButtonDoubleClick", &vtkContextInteractorStyle::OnRightButtonDoubleClick)
    .function("OnMouseWheelForward", &vtkContextInteractorStyle::OnMouseWheelForward)
    .function("OnMouseWheelBackward", &vtkContextInteractorStyle::OnMouseWheelBackward)
    .function("OnChar", &vtkContextInteractorStyle::OnChar)
    .function("OnKeyPress", &vtkContextInteractorStyle::OnKeyPress)
    .function("OnKeyRelease", &vtkContextInteractorStyle::OnKeyRelease);
}
