// JavaScript wrapper for vtkCompassWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCompassWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCompassWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCompassRepresentation.h"
#include "vtkCompassWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkCompassWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCompassWidget>(vtkCompassWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompassWidget_class) {
  emscripten::class_<vtkCompassWidget, emscripten::base<vtkAbstractWidget>>("vtkCompassWidget")
    .smart_ptr<vtkSmartPointer<vtkCompassWidget>>("vtkSmartPointer<vtkCompassWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCompassWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompassWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompassWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompassWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompassWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompassWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompassWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkCompassWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkCompassWidget::CreateDefaultRepresentation)
    .function("GetHeading", &vtkCompassWidget::GetHeading)
    .function("SetHeading", &vtkCompassWidget::SetHeading)
    .function("GetTilt", &vtkCompassWidget::GetTilt)
    .function("SetTilt", &vtkCompassWidget::SetTilt)
    .function("GetDistance", &vtkCompassWidget::GetDistance)
    .function("SetDistance", &vtkCompassWidget::SetDistance)
    .function("GetTimerDuration", &vtkCompassWidget::GetTimerDuration)
    .function("SetTimerDuration", &vtkCompassWidget::SetTimerDuration)
    .function("GetTiltSpeed", &vtkCompassWidget::GetTiltSpeed)
    .function("SetTiltSpeed", &vtkCompassWidget::SetTiltSpeed)
    .function("GetDistanceSpeed", &vtkCompassWidget::GetDistanceSpeed)
    .function("SetDistanceSpeed", &vtkCompassWidget::SetDistanceSpeed);
}
