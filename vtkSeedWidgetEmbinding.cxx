// JavaScript wrapper for vtkSeedWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkSeedWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkSeedWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkSeedRepresentation.h"
#include "vtkHandleWidget.h"
#include "vtkSeedWidget.h"

template<> void emscripten::internal::raw_destructor<vtkSeedWidget>(vtkSeedWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSeedWidget_class) {
  emscripten::class_<vtkSeedWidget, emscripten::base<vtkAbstractWidget>>("vtkSeedWidget")
    .smart_ptr<vtkSmartPointer<vtkSeedWidget>>("vtkSmartPointer<vtkSeedWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSeedWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSeedWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSeedWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSeedWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSeedWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSeedWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSeedWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkSeedWidget::SetEnabled)
    .function("SetCurrentRenderer", &vtkSeedWidget::SetCurrentRenderer, emscripten::allow_raw_pointers())
    .function("SetInteractor", &vtkSeedWidget::SetInteractor, emscripten::allow_raw_pointers())
    .function("SetRepresentation", &vtkSeedWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetSeedRepresentation", &vtkSeedWidget::GetSeedRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkSeedWidget::CreateDefaultRepresentation)
    .function("SetProcessEvents", &vtkSeedWidget::SetProcessEvents)
    .function("CompleteInteraction", &vtkSeedWidget::CompleteInteraction)
    .function("RestartInteraction", &vtkSeedWidget::RestartInteraction)
    .function("CreateNewHandle", &vtkSeedWidget::CreateNewHandle, emscripten::allow_raw_pointers())
    .function("DeleteSeed", &vtkSeedWidget::DeleteSeed)
    .function("GetSeed", &vtkSeedWidget::GetSeed, emscripten::allow_raw_pointers())
    .function("GetWidgetState", &vtkSeedWidget::GetWidgetState);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkSeedWidget_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkSeedWidget_Start", vtkSeedWidget::Start },
      { "vtkSeedWidget_PlacingSeeds", vtkSeedWidget::PlacingSeeds },
      { "vtkSeedWidget_PlacedSeeds", vtkSeedWidget::PlacedSeeds },
      { "vtkSeedWidget_MovingSeed", vtkSeedWidget::MovingSeed },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
