// JavaScript wrapper for vtkRectilinearWipeWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkRectilinearWipeWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkRectilinearWipeWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRectilinearWipeRepresentation.h"
#include "vtkRectilinearWipeWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkRectilinearWipeWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkRectilinearWipeWidget>(vtkRectilinearWipeWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRectilinearWipeWidget_class) {
  emscripten::class_<vtkRectilinearWipeWidget, emscripten::base<vtkAbstractWidget>>("vtkRectilinearWipeWidget")
    .smart_ptr<vtkSmartPointer<vtkRectilinearWipeWidget>>("vtkSmartPointer<vtkRectilinearWipeWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRectilinearWipeWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearWipeWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRectilinearWipeWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRectilinearWipeWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRectilinearWipeWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearWipeWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRectilinearWipeWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkRectilinearWipeWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetRectilinearWipeRepresentation", &vtkRectilinearWipeWidget::GetRectilinearWipeRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkRectilinearWipeWidget::CreateDefaultRepresentation);
}
