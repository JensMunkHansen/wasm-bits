// JavaScript wrapper for vtkResliceCursorPicker with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkResliceCursorPickerEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkResliceCursorPicker.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkResliceCursorPolyDataAlgorithm.h"
#include "vtkMatrix4x4.h"
#include "vtkResliceCursorPicker.h"

template<> void emscripten::internal::raw_destructor<vtkResliceCursorPicker>(vtkResliceCursorPicker * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkResliceCursorPicker_class) {
  emscripten::class_<vtkResliceCursorPicker, emscripten::base<vtkPicker>>("vtkResliceCursorPicker")
    .smart_ptr<vtkSmartPointer<vtkResliceCursorPicker>>("vtkSmartPointer<vtkResliceCursorPicker>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkResliceCursorPicker>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceCursorPicker::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkResliceCursorPicker& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkResliceCursorPicker::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkResliceCursorPicker::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceCursorPicker::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkResliceCursorPicker& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Pick", emscripten::select_overload<int(vtkResliceCursorPicker&, double, double, double, vtkRenderer*)>([](vtkResliceCursorPicker& self, double arg_0, double arg_1, double arg_2, vtkRenderer* arg_3) -> int { return self.Pick( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("GetPickedAxis1", &vtkResliceCursorPicker::GetPickedAxis1)
    .function("GetPickedAxis2", &vtkResliceCursorPicker::GetPickedAxis2)
    .function("GetPickedCenter", &vtkResliceCursorPicker::GetPickedCenter)
    .function("SetResliceCursorAlgorithm", &vtkResliceCursorPicker::SetResliceCursorAlgorithm, emscripten::allow_raw_pointers())
    .function("GetResliceCursorAlgorithm", &vtkResliceCursorPicker::GetResliceCursorAlgorithm, emscripten::allow_raw_pointers())
    .function("SetTransformMatrix", &vtkResliceCursorPicker::SetTransformMatrix, emscripten::allow_raw_pointers());
}
