// JavaScript wrapper for vtkAnnotatedCubeActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkAnnotatedCubeActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkAnnotatedCubeActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPropCollection.h"
#include "vtkViewport.h"
#include "vtkProp.h"
#include "vtkWindow.h"
#include "vtkProperty.h"
#include "vtkAssembly.h"
#include "vtkAnnotatedCubeActor.h"

template<> void emscripten::internal::raw_destructor<vtkAnnotatedCubeActor>(vtkAnnotatedCubeActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAnnotatedCubeActor_class) {
  emscripten::class_<vtkAnnotatedCubeActor, emscripten::base<vtkProp3D>>("vtkAnnotatedCubeActor")
    .smart_ptr<vtkSmartPointer<vtkAnnotatedCubeActor>>("vtkSmartPointer<vtkAnnotatedCubeActor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAnnotatedCubeActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAnnotatedCubeActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAnnotatedCubeActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAnnotatedCubeActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAnnotatedCubeActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAnnotatedCubeActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAnnotatedCubeActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetActors", &vtkAnnotatedCubeActor::GetActors, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkAnnotatedCubeActor::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkAnnotatedCubeActor::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkAnnotatedCubeActor::HasTranslucentPolygonalGeometry)
    .function("ShallowCopy", &vtkAnnotatedCubeActor::ShallowCopy, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkAnnotatedCubeActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkAnnotatedCubeActor::GetMTime)
    .function("SetFaceTextScale", &vtkAnnotatedCubeActor::SetFaceTextScale)
    .function("GetFaceTextScale", &vtkAnnotatedCubeActor::GetFaceTextScale)
    .function("GetXPlusFaceProperty", &vtkAnnotatedCubeActor::GetXPlusFaceProperty, emscripten::allow_raw_pointers())
    .function("GetXMinusFaceProperty", &vtkAnnotatedCubeActor::GetXMinusFaceProperty, emscripten::allow_raw_pointers())
    .function("GetYPlusFaceProperty", &vtkAnnotatedCubeActor::GetYPlusFaceProperty, emscripten::allow_raw_pointers())
    .function("GetYMinusFaceProperty", &vtkAnnotatedCubeActor::GetYMinusFaceProperty, emscripten::allow_raw_pointers())
    .function("GetZPlusFaceProperty", &vtkAnnotatedCubeActor::GetZPlusFaceProperty, emscripten::allow_raw_pointers())
    .function("GetZMinusFaceProperty", &vtkAnnotatedCubeActor::GetZMinusFaceProperty, emscripten::allow_raw_pointers())
    .function("GetCubeProperty", &vtkAnnotatedCubeActor::GetCubeProperty, emscripten::allow_raw_pointers())
    .function("GetTextEdgesProperty", &vtkAnnotatedCubeActor::GetTextEdgesProperty, emscripten::allow_raw_pointers())
    .function("SetXPlusFaceText", emscripten::optional_override([](vtkAnnotatedCubeActor& self, const std::string & arg_0) -> void {  return self.SetXPlusFaceText( arg_0.c_str());}))
    .function("GetXPlusFaceText", emscripten::optional_override([](vtkAnnotatedCubeActor& self) -> std::string {  return self.GetXPlusFaceText();}))
    .function("SetXMinusFaceText", emscripten::optional_override([](vtkAnnotatedCubeActor& self, const std::string & arg_0) -> void {  return self.SetXMinusFaceText( arg_0.c_str());}))
    .function("GetXMinusFaceText", emscripten::optional_override([](vtkAnnotatedCubeActor& self) -> std::string {  return self.GetXMinusFaceText();}))
    .function("SetYPlusFaceText", emscripten::optional_override([](vtkAnnotatedCubeActor& self, const std::string & arg_0) -> void {  return self.SetYPlusFaceText( arg_0.c_str());}))
    .function("GetYPlusFaceText", emscripten::optional_override([](vtkAnnotatedCubeActor& self) -> std::string {  return self.GetYPlusFaceText();}))
    .function("SetYMinusFaceText", emscripten::optional_override([](vtkAnnotatedCubeActor& self, const std::string & arg_0) -> void {  return self.SetYMinusFaceText( arg_0.c_str());}))
    .function("GetYMinusFaceText", emscripten::optional_override([](vtkAnnotatedCubeActor& self) -> std::string {  return self.GetYMinusFaceText();}))
    .function("SetZPlusFaceText", emscripten::optional_override([](vtkAnnotatedCubeActor& self, const std::string & arg_0) -> void {  return self.SetZPlusFaceText( arg_0.c_str());}))
    .function("GetZPlusFaceText", emscripten::optional_override([](vtkAnnotatedCubeActor& self) -> std::string {  return self.GetZPlusFaceText();}))
    .function("SetZMinusFaceText", emscripten::optional_override([](vtkAnnotatedCubeActor& self, const std::string & arg_0) -> void {  return self.SetZMinusFaceText( arg_0.c_str());}))
    .function("GetZMinusFaceText", emscripten::optional_override([](vtkAnnotatedCubeActor& self) -> std::string {  return self.GetZMinusFaceText();}))
    .function("SetTextEdgesVisibility", &vtkAnnotatedCubeActor::SetTextEdgesVisibility)
    .function("GetTextEdgesVisibility", &vtkAnnotatedCubeActor::GetTextEdgesVisibility)
    .function("SetCubeVisibility", &vtkAnnotatedCubeActor::SetCubeVisibility)
    .function("GetCubeVisibility", &vtkAnnotatedCubeActor::GetCubeVisibility)
    .function("SetFaceTextVisibility", &vtkAnnotatedCubeActor::SetFaceTextVisibility)
    .function("GetFaceTextVisibility", &vtkAnnotatedCubeActor::GetFaceTextVisibility)
    .function("SetXFaceTextRotation", &vtkAnnotatedCubeActor::SetXFaceTextRotation)
    .function("GetXFaceTextRotation", &vtkAnnotatedCubeActor::GetXFaceTextRotation)
    .function("SetYFaceTextRotation", &vtkAnnotatedCubeActor::SetYFaceTextRotation)
    .function("GetYFaceTextRotation", &vtkAnnotatedCubeActor::GetYFaceTextRotation)
    .function("SetZFaceTextRotation", &vtkAnnotatedCubeActor::SetZFaceTextRotation)
    .function("GetZFaceTextRotation", &vtkAnnotatedCubeActor::GetZFaceTextRotation)
    .function("GetAssembly", &vtkAnnotatedCubeActor::GetAssembly, emscripten::allow_raw_pointers());
}
