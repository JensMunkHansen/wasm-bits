// JavaScript wrapper for vtkTextCodec with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkTextCodecEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkTextCodec.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextCodec.h"

template<> void emscripten::internal::raw_destructor<vtkTextCodec>(vtkTextCodec * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTextCodec_class) {
  emscripten::class_<vtkTextCodec, emscripten::base<vtkObject>>("vtkTextCodec")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextCodec::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTextCodec& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTextCodec::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTextCodec::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextCodec::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTextCodec& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Name", emscripten::optional_override([](vtkTextCodec& self) -> std::string {  return self.Name();}))
    .function("CanHandle", emscripten::optional_override([](vtkTextCodec& self, const std::string & arg_0) -> bool {  return self.CanHandle( arg_0.c_str());}));
}