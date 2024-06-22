// JavaScript wrapper for vtkBiDimensionalWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkBiDimensionalWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkBiDimensionalWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBiDimensionalRepresentation.h"
#include "vtkBiDimensionalWidget.h"

template<> void emscripten::internal::raw_destructor<vtkBiDimensionalWidget>(vtkBiDimensionalWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBiDimensionalWidget_class) {
  emscripten::class_<vtkBiDimensionalWidget, emscripten::base<vtkAbstractWidget>>("vtkBiDimensionalWidget")
    .smart_ptr<vtkSmartPointer<vtkBiDimensionalWidget>>("vtkSmartPointer<vtkBiDimensionalWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBiDimensionalWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBiDimensionalWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBiDimensionalWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBiDimensionalWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBiDimensionalWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBiDimensionalWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBiDimensionalWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkBiDimensionalWidget::SetEnabled)
    .function("SetRepresentation", &vtkBiDimensionalWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetBiDimensionalRepresentation", &vtkBiDimensionalWidget::GetBiDimensionalRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkBiDimensionalWidget::CreateDefaultRepresentation)
    .function("IsMeasureValid", &vtkBiDimensionalWidget::IsMeasureValid)
    .function("SetProcessEvents", &vtkBiDimensionalWidget::SetProcessEvents)
    .function("SetWidgetStateToStart", &vtkBiDimensionalWidget::SetWidgetStateToStart)
    .function("SetWidgetStateToManipulate", &vtkBiDimensionalWidget::SetWidgetStateToManipulate)
    .function("GetWidgetState", &vtkBiDimensionalWidget::GetWidgetState);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkBiDimensionalWidget_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkBiDimensionalWidget_EndWidgetSelectEvent", vtkBiDimensionalWidget::EndWidgetSelectEvent },
      { "vtkBiDimensionalWidget_Start", vtkBiDimensionalWidget::Start },
      { "vtkBiDimensionalWidget_Define", vtkBiDimensionalWidget::Define },
      { "vtkBiDimensionalWidget_Manipulate", vtkBiDimensionalWidget::Manipulate },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
