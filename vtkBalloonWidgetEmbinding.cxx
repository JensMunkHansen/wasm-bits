// JavaScript wrapper for vtkBalloonWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkBalloonWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkBalloonWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBalloonRepresentation.h"
#include "vtkProp.h"
#include "vtkStdString.h"
#include "vtkImageData.h"
#include "vtkAbstractPropPicker.h"
#include "vtkBalloonWidget.h"

template<> void emscripten::internal::raw_destructor<vtkBalloonWidget>(vtkBalloonWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBalloonWidget_class) {
  emscripten::class_<vtkBalloonWidget, emscripten::base<vtkHoverWidget>>("vtkBalloonWidget")
    .smart_ptr<vtkSmartPointer<vtkBalloonWidget>>("vtkSmartPointer<vtkBalloonWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBalloonWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBalloonWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBalloonWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBalloonWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBalloonWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBalloonWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBalloonWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkBalloonWidget::SetEnabled)
    .function("SetRepresentation", &vtkBalloonWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetBalloonRepresentation", &vtkBalloonWidget::GetBalloonRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkBalloonWidget::CreateDefaultRepresentation)
    .function("AddBalloon", emscripten::select_overload<void(vtkBalloonWidget&, vtkProp*, const std::string &, vtkImageData*)>([](vtkBalloonWidget& self, vtkProp* arg_0, const std::string & arg_1, vtkImageData* arg_2) -> void { return self.AddBalloon( arg_0, arg_1.c_str(), arg_2); }), emscripten::allow_raw_pointers())
    .function("AddBalloon", emscripten::select_overload<void(vtkBalloonWidget&, vtkProp*, const std::string &)>([](vtkBalloonWidget& self, vtkProp* arg_0, const std::string & arg_1) -> void { return self.AddBalloon( arg_0, arg_1.c_str()); }), emscripten::allow_raw_pointers())
    .function("RemoveBalloon", &vtkBalloonWidget::RemoveBalloon, emscripten::allow_raw_pointers())
    .function("GetBalloonString", emscripten::optional_override([](vtkBalloonWidget& self, vtkProp* arg_0) -> std::string {  return self.GetBalloonString( arg_0);}), emscripten::allow_raw_pointers())
    .function("GetBalloonImage", &vtkBalloonWidget::GetBalloonImage, emscripten::allow_raw_pointers())
    .function("UpdateBalloonString", emscripten::optional_override([](vtkBalloonWidget& self, vtkProp* arg_0, const std::string & arg_1) -> void {  return self.UpdateBalloonString( arg_0, arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("UpdateBalloonImage", &vtkBalloonWidget::UpdateBalloonImage, emscripten::allow_raw_pointers())
    .function("GetCurrentProp", &vtkBalloonWidget::GetCurrentProp, emscripten::allow_raw_pointers())
    .function("SetPicker", &vtkBalloonWidget::SetPicker, emscripten::allow_raw_pointers())
    .function("GetPicker", &vtkBalloonWidget::GetPicker, emscripten::allow_raw_pointers())
    .function("RegisterPickers", &vtkBalloonWidget::RegisterPickers);
}
