// JavaScript wrapper for vtkCoordinateFrameWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCoordinateFrameWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCoordinateFrameWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCoordinateFrameRepresentation.h"
#include "vtkCoordinateFrameWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkCoordinateFrameWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCoordinateFrameWidget>(vtkCoordinateFrameWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCoordinateFrameWidget_class) {
  emscripten::class_<vtkCoordinateFrameWidget, emscripten::base<vtkAbstractWidget>>("vtkCoordinateFrameWidget")
    .smart_ptr<vtkSmartPointer<vtkCoordinateFrameWidget>>("vtkSmartPointer<vtkCoordinateFrameWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCoordinateFrameWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCoordinateFrameWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCoordinateFrameWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCoordinateFrameWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCoordinateFrameWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCoordinateFrameWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCoordinateFrameWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkCoordinateFrameWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("SetEnabled", &vtkCoordinateFrameWidget::SetEnabled)
    .function("GetCoordinateFrameRepresentation", &vtkCoordinateFrameWidget::GetCoordinateFrameRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkCoordinateFrameWidget::CreateDefaultRepresentation);
}
