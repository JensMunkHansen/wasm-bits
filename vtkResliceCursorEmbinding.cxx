// JavaScript wrapper for vtkResliceCursor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkResliceCursorEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkResliceCursor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkImageData.h"
#include "vtkPolyData.h"
#include "vtkIndent.h"
#include "vtkPlane.h"
#include "vtkResliceCursor.h"

template<> void emscripten::internal::raw_destructor<vtkResliceCursor>(vtkResliceCursor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkResliceCursor_class) {
  emscripten::class_<vtkResliceCursor, emscripten::base<vtkObject>>("vtkResliceCursor")
    .smart_ptr<vtkSmartPointer<vtkResliceCursor>>("vtkSmartPointer<vtkResliceCursor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkResliceCursor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceCursor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkResliceCursor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkResliceCursor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkResliceCursor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceCursor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkResliceCursor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetImage", &vtkResliceCursor::SetImage, emscripten::allow_raw_pointers())
    .function("GetImage", &vtkResliceCursor::GetImage, emscripten::allow_raw_pointers())
    .function("SetCenter", emscripten::select_overload<void(vtkResliceCursor&, double, double, double)>([](vtkResliceCursor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetThickness", emscripten::select_overload<void(vtkResliceCursor&, double, double, double)>([](vtkResliceCursor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetThickness( arg_0, arg_1, arg_2); }))
    .function("SetThickMode", &vtkResliceCursor::SetThickMode)
    .function("GetThickMode", &vtkResliceCursor::GetThickMode)
    .function("ThickModeOn", &vtkResliceCursor::ThickModeOn)
    .function("ThickModeOff", &vtkResliceCursor::ThickModeOff)
    .function("GetPolyData", &vtkResliceCursor::GetPolyData, emscripten::allow_raw_pointers())
    .function("GetCenterlineAxisPolyData", &vtkResliceCursor::GetCenterlineAxisPolyData, emscripten::allow_raw_pointers())
    .function("GetPlane", &vtkResliceCursor::GetPlane, emscripten::allow_raw_pointers())
    .function("Update", &vtkResliceCursor::Update)
    .function("SetXAxis", emscripten::select_overload<void(vtkResliceCursor&, double, double, double)>([](vtkResliceCursor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetXAxis( arg_0, arg_1, arg_2); }))
    .function("SetYAxis", emscripten::select_overload<void(vtkResliceCursor&, double, double, double)>([](vtkResliceCursor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetYAxis( arg_0, arg_1, arg_2); }))
    .function("SetZAxis", emscripten::select_overload<void(vtkResliceCursor&, double, double, double)>([](vtkResliceCursor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetZAxis( arg_0, arg_1, arg_2); }))
    .function("GetAxis", emscripten::optional_override([](vtkResliceCursor& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetAxis( arg_0)) / sizeof(double);}))
    .function("SetXViewUp", emscripten::select_overload<void(vtkResliceCursor&, double, double, double)>([](vtkResliceCursor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetXViewUp( arg_0, arg_1, arg_2); }))
    .function("SetYViewUp", emscripten::select_overload<void(vtkResliceCursor&, double, double, double)>([](vtkResliceCursor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetYViewUp( arg_0, arg_1, arg_2); }))
    .function("SetZViewUp", emscripten::select_overload<void(vtkResliceCursor&, double, double, double)>([](vtkResliceCursor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetZViewUp( arg_0, arg_1, arg_2); }))
    .function("GetViewUp", emscripten::optional_override([](vtkResliceCursor& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetViewUp( arg_0)) / sizeof(double);}))
    .function("SetHole", &vtkResliceCursor::SetHole)
    .function("GetHole", &vtkResliceCursor::GetHole)
    .function("SetHoleWidth", &vtkResliceCursor::SetHoleWidth)
    .function("GetHoleWidth", &vtkResliceCursor::GetHoleWidth)
    .function("SetHoleWidthInPixels", &vtkResliceCursor::SetHoleWidthInPixels)
    .function("GetHoleWidthInPixels", &vtkResliceCursor::GetHoleWidthInPixels)
    .function("GetMTime", &vtkResliceCursor::GetMTime)
    .function("Reset", &vtkResliceCursor::Reset);
}
