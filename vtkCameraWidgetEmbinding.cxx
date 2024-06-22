// JavaScript wrapper for vtkCameraWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCameraWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCameraWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCameraRepresentation.h"
#include "vtkCameraWidget.h"

template<> void emscripten::internal::raw_destructor<vtkCameraWidget>(vtkCameraWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCameraWidget_class) {
  emscripten::class_<vtkCameraWidget, emscripten::base<vtkBorderWidget>>("vtkCameraWidget")
    .smart_ptr<vtkSmartPointer<vtkCameraWidget>>("vtkSmartPointer<vtkCameraWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCameraWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCameraWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCameraWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCameraWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCameraWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkCameraWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkCameraWidget::CreateDefaultRepresentation);
}
