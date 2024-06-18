// JavaScript wrapper for vtkXYPlotWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkXYPlotWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkXYPlotWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXYPlotActor.h"
#include "vtkXYPlotWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkXYPlotWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkXYPlotWidget>(vtkXYPlotWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXYPlotWidget_class) {
  emscripten::class_<vtkXYPlotWidget, emscripten::base<vtkInteractorObserver>>("vtkXYPlotWidget")
    .smart_ptr<vtkSmartPointer<vtkXYPlotWidget>>("vtkSmartPointer<vtkXYPlotWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXYPlotWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXYPlotWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXYPlotWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXYPlotWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXYPlotWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXYPlotWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXYPlotWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetXYPlotActor", &vtkXYPlotWidget::SetXYPlotActor, emscripten::allow_raw_pointers())
    .function("GetXYPlotActor", &vtkXYPlotWidget::GetXYPlotActor, emscripten::allow_raw_pointers())
    .function("SetEnabled", &vtkXYPlotWidget::SetEnabled);
}
