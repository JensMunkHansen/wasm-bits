// JavaScript wrapper for vtkHandleWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkHandleWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkHandleWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHandleRepresentation.h"
#include "vtkHandleWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkHandleWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkHandleWidget>(vtkHandleWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHandleWidget_class) {
  using WidgetStateType=vtkHandleWidget::WidgetStateType;
  emscripten::class_<vtkHandleWidget, emscripten::base<vtkAbstractWidget>>("vtkHandleWidget")
    .smart_ptr<vtkSmartPointer<vtkHandleWidget>>("vtkSmartPointer<vtkHandleWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHandleWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHandleWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHandleWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHandleWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHandleWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHandleWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHandleWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkHandleWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetHandleRepresentation", &vtkHandleWidget::GetHandleRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkHandleWidget::CreateDefaultRepresentation)
    .function("SetEnableAxisConstraint", &vtkHandleWidget::SetEnableAxisConstraint)
    .function("GetEnableAxisConstraint", &vtkHandleWidget::GetEnableAxisConstraint)
    .function("EnableAxisConstraintOn", &vtkHandleWidget::EnableAxisConstraintOn)
    .function("EnableAxisConstraintOff", &vtkHandleWidget::EnableAxisConstraintOff)
    .function("SetEnableTranslation", &vtkHandleWidget::SetEnableTranslation)
    .function("GetEnableTranslation", &vtkHandleWidget::GetEnableTranslation)
    .function("EnableTranslationOn", &vtkHandleWidget::EnableTranslationOn)
    .function("EnableTranslationOff", &vtkHandleWidget::EnableTranslationOff)
    .function("SetAllowHandleResize", &vtkHandleWidget::SetAllowHandleResize)
    .function("GetAllowHandleResize", &vtkHandleWidget::GetAllowHandleResize)
    .function("AllowHandleResizeOn", &vtkHandleWidget::AllowHandleResizeOn)
    .function("AllowHandleResizeOff", &vtkHandleWidget::AllowHandleResizeOff)
    .function("GetWidgetState", &vtkHandleWidget::GetWidgetState)
    .function("SetShowInactive", &vtkHandleWidget::SetShowInactive)
    .function("GetShowInactive", &vtkHandleWidget::GetShowInactive)
    .function("ShowInactiveOn", &vtkHandleWidget::ShowInactiveOn)
    .function("ShowInactiveOff", &vtkHandleWidget::ShowInactiveOff)
    .function("SetEnabled", &vtkHandleWidget::SetEnabled);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkHandleWidget_0_2_constants) {
    typedef vtkHandleWidget::WidgetStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkHandleWidget_WidgetStateType_Start", vtkHandleWidget::Start },
      { "vtkHandleWidget_WidgetStateType_Active", vtkHandleWidget::Active },
      { "vtkHandleWidget_WidgetStateType_Inactive", vtkHandleWidget::Inactive },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
