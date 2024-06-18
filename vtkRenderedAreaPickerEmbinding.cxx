// JavaScript wrapper for vtkRenderedAreaPicker with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderedAreaPickerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkRenderedAreaPicker.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkRenderedAreaPicker.h"

template<> void emscripten::internal::raw_destructor<vtkRenderedAreaPicker>(vtkRenderedAreaPicker * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRenderedAreaPicker_class) {
  emscripten::class_<vtkRenderedAreaPicker, emscripten::base<vtkAreaPicker>>("vtkRenderedAreaPicker")
    .smart_ptr<vtkSmartPointer<vtkRenderedAreaPicker>>("vtkSmartPointer<vtkRenderedAreaPicker>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRenderedAreaPicker>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderedAreaPicker::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRenderedAreaPicker& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRenderedAreaPicker::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRenderedAreaPicker::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderedAreaPicker::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRenderedAreaPicker& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AreaPick", &vtkRenderedAreaPicker::AreaPick, emscripten::allow_raw_pointers());
}
