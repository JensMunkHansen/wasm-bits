// JavaScript wrapper for vtkDistanceWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkDistanceWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkDistanceWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDistanceRepresentation.h"
#include "vtkDistanceWidget.h"

template<> void emscripten::internal::raw_destructor<vtkDistanceWidget>(vtkDistanceWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDistanceWidget_class) {
  emscripten::class_<vtkDistanceWidget, emscripten::base<vtkAbstractWidget>>("vtkDistanceWidget")
    .smart_ptr<vtkSmartPointer<vtkDistanceWidget>>("vtkSmartPointer<vtkDistanceWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDistanceWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDistanceWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDistanceWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDistanceWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDistanceWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDistanceWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDistanceWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkDistanceWidget::SetEnabled)
    .function("SetRepresentation", &vtkDistanceWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetDistanceRepresentation", &vtkDistanceWidget::GetDistanceRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkDistanceWidget::CreateDefaultRepresentation)
    .function("SetProcessEvents", &vtkDistanceWidget::SetProcessEvents)
    .function("SetWidgetStateToStart", &vtkDistanceWidget::SetWidgetStateToStart)
    .function("SetWidgetStateToManipulate", &vtkDistanceWidget::SetWidgetStateToManipulate)
    .function("GetWidgetState", &vtkDistanceWidget::GetWidgetState);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkDistanceWidget_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkDistanceWidget_Start", vtkDistanceWidget::Start },
      { "vtkDistanceWidget_Define", vtkDistanceWidget::Define },
      { "vtkDistanceWidget_Manipulate", vtkDistanceWidget::Manipulate },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
