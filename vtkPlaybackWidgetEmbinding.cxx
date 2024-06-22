// JavaScript wrapper for vtkPlaybackWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkPlaybackWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkPlaybackWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlaybackRepresentation.h"
#include "vtkPlaybackWidget.h"

template<> void emscripten::internal::raw_destructor<vtkPlaybackWidget>(vtkPlaybackWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlaybackWidget_class) {
  emscripten::class_<vtkPlaybackWidget, emscripten::base<vtkBorderWidget>>("vtkPlaybackWidget")
    .smart_ptr<vtkSmartPointer<vtkPlaybackWidget>>("vtkSmartPointer<vtkPlaybackWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPlaybackWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlaybackWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlaybackWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlaybackWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlaybackWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlaybackWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlaybackWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkPlaybackWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkPlaybackWidget::CreateDefaultRepresentation);
}
