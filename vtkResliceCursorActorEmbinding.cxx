// JavaScript wrapper for vtkResliceCursorActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkResliceCursorActorEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkResliceCursorActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkResliceCursorPolyDataAlgorithm.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkProperty.h"
#include "vtkActor.h"
#include "vtkMatrix4x4.h"
#include "vtkResliceCursorActor.h"

template<> void emscripten::internal::raw_destructor<vtkResliceCursorActor>(vtkResliceCursorActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkResliceCursorActor_class) {
  emscripten::class_<vtkResliceCursorActor, emscripten::base<vtkProp3D>>("vtkResliceCursorActor")
    .smart_ptr<vtkSmartPointer<vtkResliceCursorActor>>("vtkSmartPointer<vtkResliceCursorActor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkResliceCursorActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceCursorActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkResliceCursorActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkResliceCursorActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkResliceCursorActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceCursorActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkResliceCursorActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCursorAlgorithm", &vtkResliceCursorActor::GetCursorAlgorithm, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkResliceCursorActor::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkResliceCursorActor::HasTranslucentPolygonalGeometry)
    .function("ReleaseGraphicsResources", &vtkResliceCursorActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkResliceCursorActor::GetMTime)
    .function("GetCenterlineProperty", &vtkResliceCursorActor::GetCenterlineProperty, emscripten::allow_raw_pointers())
    .function("GetThickSlabProperty", &vtkResliceCursorActor::GetThickSlabProperty, emscripten::allow_raw_pointers())
    .function("GetCenterlineActor", &vtkResliceCursorActor::GetCenterlineActor, emscripten::allow_raw_pointers())
    .function("SetUserMatrix", &vtkResliceCursorActor::SetUserMatrix, emscripten::allow_raw_pointers());
}
