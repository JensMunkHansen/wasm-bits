// JavaScript wrapper for vtkPropPicker with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkPropPickerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkPropPicker.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkPropCollection.h"
#include "vtkPropPicker.h"

template<> void emscripten::internal::raw_destructor<vtkPropPicker>(vtkPropPicker * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPropPicker_class) {
  emscripten::class_<vtkPropPicker, emscripten::base<vtkAbstractPropPicker>>("vtkPropPicker")
    .smart_ptr<vtkSmartPointer<vtkPropPicker>>("vtkSmartPointer<vtkPropPicker>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPropPicker>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPropPicker::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPropPicker& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPropPicker::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPropPicker::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPropPicker::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPropPicker& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("PickProp", emscripten::select_overload<int(vtkPropPicker&, double, double, vtkRenderer*)>([](vtkPropPicker& self, double arg_0, double arg_1, vtkRenderer* arg_2) -> int { return self.PickProp( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("PickProp", emscripten::select_overload<int(vtkPropPicker&, double, double, vtkRenderer*, vtkPropCollection*)>([](vtkPropPicker& self, double arg_0, double arg_1, vtkRenderer* arg_2, vtkPropCollection* arg_3) -> int { return self.PickProp( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("Pick", emscripten::select_overload<int(vtkPropPicker&, double, double, double, vtkRenderer*)>([](vtkPropPicker& self, double arg_0, double arg_1, double arg_2, vtkRenderer* arg_3) -> int { return self.Pick( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers());
}
