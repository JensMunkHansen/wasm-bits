// JavaScript wrapper for vtkScenePicker with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkScenePickerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkScenePicker.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkProp.h"
#include "vtkScenePicker.h"

template<> void emscripten::internal::raw_destructor<vtkScenePicker>(vtkScenePicker * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkScenePicker_class) {
  emscripten::class_<vtkScenePicker, emscripten::base<vtkObject>>("vtkScenePicker")
    .smart_ptr<vtkSmartPointer<vtkScenePicker>>("vtkSmartPointer<vtkScenePicker>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkScenePicker>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkScenePicker::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkScenePicker& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkScenePicker::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkScenePicker::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkScenePicker::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkScenePicker& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRenderer", &vtkScenePicker::SetRenderer, emscripten::allow_raw_pointers())
    .function("GetRenderer", &vtkScenePicker::GetRenderer, emscripten::allow_raw_pointers())
    .function("SetEnableVertexPicking", &vtkScenePicker::SetEnableVertexPicking)
    .function("GetEnableVertexPicking", &vtkScenePicker::GetEnableVertexPicking)
    .function("EnableVertexPickingOn", &vtkScenePicker::EnableVertexPickingOn)
    .function("EnableVertexPickingOff", &vtkScenePicker::EnableVertexPickingOff);
}
