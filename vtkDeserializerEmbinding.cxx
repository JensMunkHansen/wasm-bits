// JavaScript wrapper for vtkDeserializer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkDeserializerEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkDeserializer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkMarshalContext.h"
#include "vtkDeserializer.h"

template<> void emscripten::internal::raw_destructor<vtkDeserializer>(vtkDeserializer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDeserializer_class) {
  emscripten::class_<vtkDeserializer, emscripten::base<vtkObject>>("vtkDeserializer")
    .smart_ptr<vtkSmartPointer<vtkDeserializer>>("vtkSmartPointer<vtkDeserializer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDeserializer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDeserializer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDeserializer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDeserializer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDeserializer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDeserializer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDeserializer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ConstructObject", &vtkDeserializer::ConstructObject, emscripten::allow_raw_pointers())
    .function("UnRegisterConstructor", &vtkDeserializer::UnRegisterConstructor)
    .function("SetContext", &vtkDeserializer::SetContext, emscripten::allow_raw_pointers())
    .function("GetContext", &vtkDeserializer::GetContext, emscripten::allow_raw_pointers());
}
