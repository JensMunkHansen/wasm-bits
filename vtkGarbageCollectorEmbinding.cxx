// JavaScript wrapper for vtkGarbageCollector with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkGarbageCollectorEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkGarbageCollector.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGarbageCollector.h"

template<> void emscripten::internal::raw_destructor<vtkGarbageCollector>(vtkGarbageCollector * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGarbageCollector_class) {
  emscripten::class_<vtkGarbageCollector, emscripten::base<vtkObject>>("vtkGarbageCollector")
    .smart_ptr<vtkSmartPointer<vtkGarbageCollector>>("vtkSmartPointer<vtkGarbageCollector>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGarbageCollector>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGarbageCollector::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGarbageCollector& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGarbageCollector::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGarbageCollector::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGarbageCollector::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGarbageCollector& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("Collect", emscripten::select_overload<void()>([]() -> void { return vtkGarbageCollector::Collect(); }))
    .class_function("Collect", emscripten::select_overload<void( vtkObjectBase*)>([]( vtkObjectBase* arg_0) -> void { return vtkGarbageCollector::Collect( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("DeferredCollectionPush", &vtkGarbageCollector::DeferredCollectionPush)
    .class_function("DeferredCollectionPop", &vtkGarbageCollector::DeferredCollectionPop)
    .class_function("SetGlobalDebugFlag", &vtkGarbageCollector::SetGlobalDebugFlag)
    .class_function("GetGlobalDebugFlag", &vtkGarbageCollector::GetGlobalDebugFlag);
}
