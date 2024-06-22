// JavaScript wrapper for vtkAngleWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkAngleWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkAngleWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAngleRepresentation.h"
#include "vtkAngleWidget.h"

template<> void emscripten::internal::raw_destructor<vtkAngleWidget>(vtkAngleWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAngleWidget_class) {
  emscripten::class_<vtkAngleWidget, emscripten::base<vtkAbstractWidget>>("vtkAngleWidget")
    .smart_ptr<vtkSmartPointer<vtkAngleWidget>>("vtkSmartPointer<vtkAngleWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAngleWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAngleWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAngleWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAngleWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAngleWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAngleWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAngleWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkAngleWidget::SetEnabled)
    .function("SetRepresentation", &vtkAngleWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkAngleWidget::CreateDefaultRepresentation)
    .function("GetAngleRepresentation", &vtkAngleWidget::GetAngleRepresentation, emscripten::allow_raw_pointers())
    .function("IsAngleValid", &vtkAngleWidget::IsAngleValid)
    .function("SetProcessEvents", &vtkAngleWidget::SetProcessEvents)
    .function("SetWidgetStateToStart", &vtkAngleWidget::SetWidgetStateToStart)
    .function("SetWidgetStateToManipulate", &vtkAngleWidget::SetWidgetStateToManipulate)
    .function("GetWidgetState", &vtkAngleWidget::GetWidgetState);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkAngleWidget_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkAngleWidget_Start", vtkAngleWidget::Start },
      { "vtkAngleWidget_Define", vtkAngleWidget::Define },
      { "vtkAngleWidget_Manipulate", vtkAngleWidget::Manipulate },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
