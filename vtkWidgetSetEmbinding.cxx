// JavaScript wrapper for vtkWidgetSet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkWidgetSetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkWidgetSet.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractWidget.h"
#include "vtkWidgetSet.h"

template<> void emscripten::internal::raw_destructor<vtkWidgetSet>(vtkWidgetSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWidgetSet_class) {
  emscripten::class_<vtkWidgetSet, emscripten::base<vtkObject>>("vtkWidgetSet")
    .smart_ptr<vtkSmartPointer<vtkWidgetSet>>("vtkSmartPointer<vtkWidgetSet>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkWidgetSet>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWidgetSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWidgetSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWidgetSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWidgetSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWidgetSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWidgetSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkWidgetSet::SetEnabled)
    .function("EnabledOn", &vtkWidgetSet::EnabledOn)
    .function("EnabledOff", &vtkWidgetSet::EnabledOff)
    .function("AddWidget", &vtkWidgetSet::AddWidget, emscripten::allow_raw_pointers())
    .function("RemoveWidget", &vtkWidgetSet::RemoveWidget, emscripten::allow_raw_pointers())
    .function("GetNumberOfWidgets", &vtkWidgetSet::GetNumberOfWidgets)
    .function("GetNthWidget", &vtkWidgetSet::GetNthWidget, emscripten::allow_raw_pointers());
}
