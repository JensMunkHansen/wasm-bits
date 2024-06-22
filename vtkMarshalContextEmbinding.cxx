// JavaScript wrapper for vtkMarshalContext with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkMarshalContextEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkMarshalContext.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkMarshalContext.h"

template<> void emscripten::internal::raw_destructor<vtkMarshalContext>(vtkMarshalContext * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMarshalContext_class) {
  emscripten::class_<vtkMarshalContext, emscripten::base<vtkObject>>("vtkMarshalContext")
    .smart_ptr<vtkSmartPointer<vtkMarshalContext>>("vtkSmartPointer<vtkMarshalContext>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMarshalContext>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMarshalContext::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMarshalContext& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMarshalContext::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMarshalContext::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMarshalContext::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMarshalContext& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("KeepAlive", &vtkMarshalContext::KeepAlive, emscripten::allow_raw_pointers())
    .function("Retire", &vtkMarshalContext::Retire, emscripten::allow_raw_pointers())
    .function("UnRegisterState", &vtkMarshalContext::UnRegisterState)
    .function("UnRegisterObject", &vtkMarshalContext::UnRegisterObject)
    .function("GetObjectAtId", &vtkMarshalContext::GetObjectAtId)
    .function("GetId", &vtkMarshalContext::GetId, emscripten::allow_raw_pointers())
    .function("UnRegisterBlob", &vtkMarshalContext::UnRegisterBlob)
    .function("GetBlob", &vtkMarshalContext::GetBlob)
    .function("GetDirectDependencies", &vtkMarshalContext::GetDirectDependencies)
    .function("ResetDirectDependencies", &vtkMarshalContext::ResetDirectDependencies)
    .function("MakeId", &vtkMarshalContext::MakeId)
    .function("PushParent", &vtkMarshalContext::PushParent)
    .function("PopParent", &vtkMarshalContext::PopParent);
}
