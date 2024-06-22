// JavaScript wrapper for vtkCamera3DWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCamera3DWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCamera3DWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkCamera3DRepresentation.h"
#include "vtkCamera3DWidget.h"

template<> void emscripten::internal::raw_destructor<vtkCamera3DWidget>(vtkCamera3DWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCamera3DWidget_class) {
  emscripten::class_<vtkCamera3DWidget, emscripten::base<vtkAbstractWidget>>("vtkCamera3DWidget")
    .smart_ptr<vtkSmartPointer<vtkCamera3DWidget>>("vtkSmartPointer<vtkCamera3DWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCamera3DWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCamera3DWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCamera3DWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCamera3DWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCamera3DWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCamera3DWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCamera3DWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CreateDefaultRepresentation", &vtkCamera3DWidget::CreateDefaultRepresentation)
    .function("SetRepresentation", &vtkCamera3DWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("SetEnabled", &vtkCamera3DWidget::SetEnabled);
}
