// JavaScript wrapper for vtkInteractiveArea with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkInteractiveAreaEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkInteractiveArea.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkContextMouseEvent.h"
#include "vtkInteractiveArea.h"

template<> void emscripten::internal::raw_destructor<vtkInteractiveArea>(vtkInteractiveArea * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractiveArea_class) {
  emscripten::class_<vtkInteractiveArea, emscripten::base<vtkContextArea>>("vtkInteractiveArea")
    .smart_ptr<vtkSmartPointer<vtkInteractiveArea>>("vtkSmartPointer<vtkInteractiveArea>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkInteractiveArea>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractiveArea::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractiveArea& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractiveArea::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractiveArea::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractiveArea::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractiveArea& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkInteractiveArea::Paint, emscripten::allow_raw_pointers())
    .function("Hit", &vtkInteractiveArea::Hit)
    .function("MouseWheelEvent", &vtkInteractiveArea::MouseWheelEvent)
    .function("MouseMoveEvent", &vtkInteractiveArea::MouseMoveEvent)
    .function("MouseButtonPressEvent", &vtkInteractiveArea::MouseButtonPressEvent);
}