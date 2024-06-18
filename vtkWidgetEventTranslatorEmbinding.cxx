// JavaScript wrapper for vtkWidgetEventTranslator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkWidgetEventTranslatorEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkWidgetEventTranslator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkEvent.h"
#include "vtkEventData.h"
#include "vtkAbstractWidget.h"
#include "vtkCallbackCommand.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkWidgetEventTranslator.h"

template<> void emscripten::internal::raw_destructor<vtkWidgetEventTranslator>(vtkWidgetEventTranslator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWidgetEventTranslator_class) {
  emscripten::class_<vtkWidgetEventTranslator, emscripten::base<vtkObject>>("vtkWidgetEventTranslator")
    .smart_ptr<vtkSmartPointer<vtkWidgetEventTranslator>>("vtkSmartPointer<vtkWidgetEventTranslator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkWidgetEventTranslator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWidgetEventTranslator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWidgetEventTranslator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWidgetEventTranslator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWidgetEventTranslator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWidgetEventTranslator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWidgetEventTranslator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTranslation", emscripten::select_overload<void(vtkWidgetEventTranslator&, unsigned long, unsigned long)>([](vtkWidgetEventTranslator& self, unsigned long arg_0, unsigned long arg_1) -> void { return self.SetTranslation( arg_0, arg_1); }))
    .function("SetTranslation", emscripten::select_overload<void(vtkWidgetEventTranslator&, const std::string &, const std::string &)>([](vtkWidgetEventTranslator& self, const std::string & arg_0, const std::string & arg_1) -> void { return self.SetTranslation( arg_0.c_str(), arg_1.c_str()); }))
    .function("SetTranslation", emscripten::select_overload<void(vtkWidgetEventTranslator&, vtkEvent*, unsigned long)>([](vtkWidgetEventTranslator& self, vtkEvent* arg_0, unsigned long arg_1) -> void { return self.SetTranslation( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetTranslation", emscripten::select_overload<void(vtkWidgetEventTranslator&, unsigned long, int, char, int, const std::string &, unsigned long)>([](vtkWidgetEventTranslator& self, unsigned long arg_0, int arg_1, char arg_2, int arg_3, const std::string & arg_4, unsigned long arg_5) -> void { return self.SetTranslation( arg_0, arg_1, arg_2, arg_3, arg_4.c_str(), arg_5); }))
    .function("SetTranslation", emscripten::select_overload<void(vtkWidgetEventTranslator&, unsigned long, vtkEventData*, unsigned long)>([](vtkWidgetEventTranslator& self, unsigned long arg_0, vtkEventData* arg_1, unsigned long arg_2) -> void { return self.SetTranslation( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetTranslation", emscripten::select_overload<unsigned long(vtkWidgetEventTranslator&, unsigned long)>([](vtkWidgetEventTranslator& self, unsigned long arg_0) -> unsigned long { return self.GetTranslation( arg_0); }))
    .function("GetTranslation", emscripten::select_overload<std::string(vtkWidgetEventTranslator&, const std::string &)>([](vtkWidgetEventTranslator& self, const std::string & arg_0) -> std::string { return self.GetTranslation( arg_0.c_str()); }))
    .function("GetTranslation", emscripten::select_overload<unsigned long(vtkWidgetEventTranslator&, vtkEvent*)>([](vtkWidgetEventTranslator& self, vtkEvent* arg_0) -> unsigned long { return self.GetTranslation( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetTranslation", emscripten::select_overload<unsigned long(vtkWidgetEventTranslator&, unsigned long, int, char, int, const std::string &)>([](vtkWidgetEventTranslator& self, unsigned long arg_0, int arg_1, char arg_2, int arg_3, const std::string & arg_4) -> unsigned long { return self.GetTranslation( arg_0, arg_1, arg_2, arg_3, arg_4.c_str()); }))
    .function("GetTranslation", emscripten::select_overload<unsigned long(vtkWidgetEventTranslator&, unsigned long, vtkEventData*)>([](vtkWidgetEventTranslator& self, unsigned long arg_0, vtkEventData* arg_1) -> unsigned long { return self.GetTranslation( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("RemoveTranslation", emscripten::select_overload<int(vtkWidgetEventTranslator&, unsigned long, int, char, int, const std::string &)>([](vtkWidgetEventTranslator& self, unsigned long arg_0, int arg_1, char arg_2, int arg_3, const std::string & arg_4) -> int { return self.RemoveTranslation( arg_0, arg_1, arg_2, arg_3, arg_4.c_str()); }))
    .function("RemoveTranslation", emscripten::select_overload<int(vtkWidgetEventTranslator&, vtkEvent*)>([](vtkWidgetEventTranslator& self, vtkEvent* arg_0) -> int { return self.RemoveTranslation( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveTranslation", emscripten::select_overload<int(vtkWidgetEventTranslator&, vtkEventData*)>([](vtkWidgetEventTranslator& self, vtkEventData* arg_0) -> int { return self.RemoveTranslation( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveTranslation", emscripten::select_overload<int(vtkWidgetEventTranslator&, unsigned long)>([](vtkWidgetEventTranslator& self, unsigned long arg_0) -> int { return self.RemoveTranslation( arg_0); }))
    .function("RemoveTranslation", emscripten::select_overload<int(vtkWidgetEventTranslator&, const std::string &)>([](vtkWidgetEventTranslator& self, const std::string & arg_0) -> int { return self.RemoveTranslation( arg_0.c_str()); }))
    .function("ClearEvents", &vtkWidgetEventTranslator::ClearEvents)
    .function("AddEventsToParent", &vtkWidgetEventTranslator::AddEventsToParent, emscripten::allow_raw_pointers())
    .function("AddEventsToInteractor", &vtkWidgetEventTranslator::AddEventsToInteractor, emscripten::allow_raw_pointers());
}
