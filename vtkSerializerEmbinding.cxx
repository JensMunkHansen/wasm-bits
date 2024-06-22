// JavaScript wrapper for vtkSerializer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkSerializerEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkSerializer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMarshalContext.h"
#include "vtkSerializer.h"

template<> void emscripten::internal::raw_destructor<vtkSerializer>(vtkSerializer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSerializer_class) {
  emscripten::class_<vtkSerializer, emscripten::base<vtkObject>>("vtkSerializer")
    .smart_ptr<vtkSmartPointer<vtkSerializer>>("vtkSmartPointer<vtkSerializer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSerializer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSerializer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSerializer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSerializer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSerializer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSerializer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSerializer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetContext", &vtkSerializer::SetContext, emscripten::allow_raw_pointers())
    .function("GetContext", &vtkSerializer::GetContext, emscripten::allow_raw_pointers());
}
