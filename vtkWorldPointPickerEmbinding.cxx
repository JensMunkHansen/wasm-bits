// JavaScript wrapper for vtkWorldPointPicker with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkWorldPointPickerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkWorldPointPicker.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkWorldPointPicker.h"

template<> void emscripten::internal::raw_destructor<vtkWorldPointPicker>(vtkWorldPointPicker * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWorldPointPicker_class) {
  emscripten::class_<vtkWorldPointPicker, emscripten::base<vtkAbstractPicker>>("vtkWorldPointPicker")
    .smart_ptr<vtkSmartPointer<vtkWorldPointPicker>>("vtkSmartPointer<vtkWorldPointPicker>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkWorldPointPicker>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWorldPointPicker::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWorldPointPicker& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWorldPointPicker::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWorldPointPicker::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWorldPointPicker::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWorldPointPicker& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Pick", emscripten::select_overload<int(vtkWorldPointPicker&, double, double, double, vtkRenderer*)>([](vtkWorldPointPicker& self, double arg_0, double arg_1, double arg_2, vtkRenderer* arg_3) -> int { return self.Pick( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers());
}
