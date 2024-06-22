// JavaScript wrapper for vtkDebugLeaks with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkDebugLeaksEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkDebugLeaks.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDebugLeaks.h"

template<> void emscripten::internal::raw_destructor<vtkDebugLeaks>(vtkDebugLeaks * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDebugLeaks_class) {
  emscripten::class_<vtkDebugLeaks, emscripten::base<vtkObject>>("vtkDebugLeaks")
    .smart_ptr<vtkSmartPointer<vtkDebugLeaks>>("vtkSmartPointer<vtkDebugLeaks>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDebugLeaks>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDebugLeaks::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDebugLeaks& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDebugLeaks::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDebugLeaks::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDebugLeaks::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDebugLeaks& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ConstructClass", emscripten::select_overload<void( vtkObjectBase*)>([]( vtkObjectBase* arg_0) -> void { return vtkDebugLeaks::ConstructClass( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("ConstructClass", emscripten::select_overload<void( const std::string &)>([]( const std::string & arg_0) -> void { return vtkDebugLeaks::ConstructClass( arg_0.c_str()); }))
    .class_function("DestructClass", emscripten::select_overload<void( vtkObjectBase*)>([]( vtkObjectBase* arg_0) -> void { return vtkDebugLeaks::DestructClass( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("DestructClass", emscripten::select_overload<void( const std::string &)>([]( const std::string & arg_0) -> void { return vtkDebugLeaks::DestructClass( arg_0.c_str()); }))
    .class_function("PrintCurrentLeaks", &vtkDebugLeaks::PrintCurrentLeaks)
    .class_function("GetExitError", &vtkDebugLeaks::GetExitError)
    .class_function("SetExitError", &vtkDebugLeaks::SetExitError);
}

EMSCRIPTEN_BINDINGS(vtkDebugLeaksObserver_class) {
  emscripten::class_<vtkDebugLeaksObserver>("vtkDebugLeaksObserver");
}
