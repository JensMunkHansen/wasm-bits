// JavaScript wrapper for vtkContourWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkContourWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkContourWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContourRepresentation.h"
#include "vtkPolyData.h"
#include "vtkIdList.h"
#include "vtkContourWidget.h"

template<> void emscripten::internal::raw_destructor<vtkContourWidget>(vtkContourWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContourWidget_class) {
  emscripten::class_<vtkContourWidget, emscripten::base<vtkAbstractWidget>>("vtkContourWidget")
    .smart_ptr<vtkSmartPointer<vtkContourWidget>>("vtkSmartPointer<vtkContourWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkContourWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContourWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContourWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContourWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContourWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContourWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContourWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkContourWidget::SetEnabled)
    .function("SetRepresentation", &vtkContourWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetContourRepresentation", &vtkContourWidget::GetContourRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkContourWidget::CreateDefaultRepresentation)
    .function("CloseLoop", &vtkContourWidget::CloseLoop)
    .function("SetWidgetState", &vtkContourWidget::SetWidgetState)
    .function("GetWidgetState", &vtkContourWidget::GetWidgetState)
    .function("SetAllowNodePicking", &vtkContourWidget::SetAllowNodePicking)
    .function("GetAllowNodePicking", &vtkContourWidget::GetAllowNodePicking)
    .function("AllowNodePickingOn", &vtkContourWidget::AllowNodePickingOn)
    .function("AllowNodePickingOff", &vtkContourWidget::AllowNodePickingOff)
    .function("SetFollowCursor", &vtkContourWidget::SetFollowCursor)
    .function("GetFollowCursor", &vtkContourWidget::GetFollowCursor)
    .function("FollowCursorOn", &vtkContourWidget::FollowCursorOn)
    .function("FollowCursorOff", &vtkContourWidget::FollowCursorOff)
    .function("SetContinuousDraw", &vtkContourWidget::SetContinuousDraw)
    .function("GetContinuousDraw", &vtkContourWidget::GetContinuousDraw)
    .function("ContinuousDrawOn", &vtkContourWidget::ContinuousDrawOn)
    .function("ContinuousDrawOff", &vtkContourWidget::ContinuousDrawOff)
    .function("Initialize", emscripten::select_overload<void(vtkContourWidget&, vtkPolyData*, int, vtkIdList*)>([](vtkContourWidget& self, vtkPolyData* arg_0, int arg_1, vtkIdList* arg_2) -> void { return self.Initialize( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("Initialize", emscripten::select_overload<void(vtkContourWidget&)>([](vtkContourWidget& self) -> void { return self.Initialize(); }));
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkContourWidget_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkContourWidget_Start", vtkContourWidget::Start },
      { "vtkContourWidget_Define", vtkContourWidget::Define },
      { "vtkContourWidget_Manipulate", vtkContourWidget::Manipulate },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
