// JavaScript wrapper for vtkObject with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkObjectEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkObject.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCommand.h"
#include "vtkObject.h"

template<> void emscripten::internal::raw_destructor<vtkObject>(vtkObject * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkObject_class) {
  emscripten::class_<vtkObject, emscripten::base<vtkObjectBase>>("vtkObject")
    .smart_ptr<vtkSmartPointer<vtkObject>>("vtkSmartPointer<vtkObject>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkObject>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkObject::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkObject& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkObject::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkObject::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkObject::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkObject& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("DebugOn", &vtkObject::DebugOn)
    .function("DebugOff", &vtkObject::DebugOff)
    .function("GetDebug", &vtkObject::GetDebug)
    .function("SetDebug", &vtkObject::SetDebug)
    .class_function("BreakOnError", &vtkObject::BreakOnError)
    .function("Modified", &vtkObject::Modified)
    .function("GetMTime", &vtkObject::GetMTime)
    .class_function("SetGlobalWarningDisplay", &vtkObject::SetGlobalWarningDisplay)
    .class_function("GlobalWarningDisplayOn", &vtkObject::GlobalWarningDisplayOn)
    .class_function("GlobalWarningDisplayOff", &vtkObject::GlobalWarningDisplayOff)
    .class_function("GetGlobalWarningDisplay", &vtkObject::GetGlobalWarningDisplay)
    .function("AddObserver", emscripten::select_overload<unsigned long(vtkObject&, unsigned long, vtkCommand*, float)>([](vtkObject& self, unsigned long arg_0, vtkCommand* arg_1, float arg_2) -> unsigned long { return self.AddObserver( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("AddObserver", emscripten::select_overload<unsigned long(vtkObject&, const std::string &, vtkCommand*, float)>([](vtkObject& self, const std::string & arg_0, vtkCommand* arg_1, float arg_2) -> unsigned long { return self.AddObserver( arg_0.c_str(), arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetCommand", &vtkObject::GetCommand, emscripten::allow_raw_pointers())
    .function("RemoveObserver", emscripten::select_overload<void(vtkObject&, vtkCommand*)>([](vtkObject& self, vtkCommand* arg_0) -> void { return self.RemoveObserver( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveObserver", emscripten::select_overload<void(vtkObject&, unsigned long)>([](vtkObject& self, unsigned long arg_0) -> void { return self.RemoveObserver( arg_0); }))
    .function("RemoveObservers", emscripten::select_overload<void(vtkObject&, unsigned long, vtkCommand*)>([](vtkObject& self, unsigned long arg_0, vtkCommand* arg_1) -> void { return self.RemoveObservers( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("RemoveObservers", emscripten::select_overload<void(vtkObject&, const std::string &, vtkCommand*)>([](vtkObject& self, const std::string & arg_0, vtkCommand* arg_1) -> void { return self.RemoveObservers( arg_0.c_str(), arg_1); }), emscripten::allow_raw_pointers())
    .function("RemoveObservers", emscripten::select_overload<void(vtkObject&, unsigned long)>([](vtkObject& self, unsigned long arg_0) -> void { return self.RemoveObservers( arg_0); }))
    .function("RemoveObservers", emscripten::select_overload<void(vtkObject&, const std::string &)>([](vtkObject& self, const std::string & arg_0) -> void { return self.RemoveObservers( arg_0.c_str()); }))
    .function("HasObserver", emscripten::select_overload<int(vtkObject&, unsigned long, vtkCommand*)>([](vtkObject& self, unsigned long arg_0, vtkCommand* arg_1) -> int { return self.HasObserver( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("HasObserver", emscripten::select_overload<int(vtkObject&, const std::string &, vtkCommand*)>([](vtkObject& self, const std::string & arg_0, vtkCommand* arg_1) -> int { return self.HasObserver( arg_0.c_str(), arg_1); }), emscripten::allow_raw_pointers())
    .function("HasObserver", emscripten::select_overload<int(vtkObject&, unsigned long)>([](vtkObject& self, unsigned long arg_0) -> int { return self.HasObserver( arg_0); }))
    .function("HasObserver", emscripten::select_overload<int(vtkObject&, const std::string &)>([](vtkObject& self, const std::string & arg_0) -> int { return self.HasObserver( arg_0.c_str()); }))
    .function("RemoveAllObservers", &vtkObject::RemoveAllObservers)
    .function("InvokeEvent", emscripten::select_overload<int(vtkObject&, unsigned long, std::uintptr_t)>([](vtkObject& self, unsigned long arg_0, std::uintptr_t arg_1) -> int { return self.InvokeEvent( arg_0,reinterpret_cast<void*>(arg_1)); }))
    .function("InvokeEvent", emscripten::select_overload<int(vtkObject&, const std::string &, std::uintptr_t)>([](vtkObject& self, const std::string & arg_0, std::uintptr_t arg_1) -> int { return self.InvokeEvent( arg_0.c_str(),reinterpret_cast<void*>(arg_1)); }))
    .function("InvokeEvent", emscripten::select_overload<int(vtkObject&, unsigned long)>([](vtkObject& self, unsigned long arg_0) -> int { return self.InvokeEvent( arg_0); }))
    .function("InvokeEvent", emscripten::select_overload<int(vtkObject&, const std::string &)>([](vtkObject& self, const std::string & arg_0) -> int { return self.InvokeEvent( arg_0.c_str()); }))
    .function("SetObjectName", &vtkObject::SetObjectName)
    .function("GetObjectName", &vtkObject::GetObjectName)
    .function("GetObjectDescription", &vtkObject::GetObjectDescription);
}
