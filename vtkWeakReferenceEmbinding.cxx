// JavaScript wrapper for vtkWeakReference with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkWeakReferenceEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkWeakReference.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkObject.h"
#include "vtkWeakReference.h"

template<> void emscripten::internal::raw_destructor<vtkWeakReference>(vtkWeakReference * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWeakReference_class) {
  emscripten::class_<vtkWeakReference, emscripten::base<vtkObject>>("vtkWeakReference")
    .smart_ptr<vtkSmartPointer<vtkWeakReference>>("vtkSmartPointer<vtkWeakReference>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkWeakReference>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWeakReference::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWeakReference& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWeakReference::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWeakReference::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWeakReference::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWeakReference& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Set", &vtkWeakReference::Set, emscripten::allow_raw_pointers())
    .function("Get", &vtkWeakReference::Get, emscripten::allow_raw_pointers());
}
