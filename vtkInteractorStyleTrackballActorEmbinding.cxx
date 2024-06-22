// JavaScript wrapper for vtkInteractorStyleTrackballActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractionStyle.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractorStyleTrackballActorEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Style/vtkInteractorStyleTrackballActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleTrackballActor.h"

template<> void emscripten::internal::raw_destructor<vtkInteractorStyleTrackballActor>(vtkInteractorStyleTrackballActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyleTrackballActor_class) {
  emscripten::class_<vtkInteractorStyleTrackballActor, emscripten::base<vtkInteractorStyle>>("vtkInteractorStyleTrackballActor")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyleTrackballActor>>("vtkSmartPointer<vtkInteractorStyleTrackballActor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkInteractorStyleTrackballActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleTrackballActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyleTrackballActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyleTrackballActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyleTrackballActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleTrackballActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyleTrackballActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("OnMouseMove", &vtkInteractorStyleTrackballActor::OnMouseMove)
    .function("OnLeftButtonDown", &vtkInteractorStyleTrackballActor::OnLeftButtonDown)
    .function("OnLeftButtonUp", &vtkInteractorStyleTrackballActor::OnLeftButtonUp)
    .function("OnMiddleButtonDown", &vtkInteractorStyleTrackballActor::OnMiddleButtonDown)
    .function("OnMiddleButtonUp", &vtkInteractorStyleTrackballActor::OnMiddleButtonUp)
    .function("OnRightButtonDown", &vtkInteractorStyleTrackballActor::OnRightButtonDown)
    .function("OnRightButtonUp", &vtkInteractorStyleTrackballActor::OnRightButtonUp)
    .function("Rotate", &vtkInteractorStyleTrackballActor::Rotate)
    .function("Spin", &vtkInteractorStyleTrackballActor::Spin)
    .function("Pan", &vtkInteractorStyleTrackballActor::Pan)
    .function("Dolly", &vtkInteractorStyleTrackballActor::Dolly)
    .function("UniformScale", &vtkInteractorStyleTrackballActor::UniformScale);
}
