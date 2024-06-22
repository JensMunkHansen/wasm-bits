// JavaScript wrapper for vtkUTF8TextCodec with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkUTF8TextCodecEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkUTF8TextCodec.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextCodec.h"
#include "vtkUTF8TextCodec.h"

template<> void emscripten::internal::raw_destructor<vtkUTF8TextCodec>(vtkUTF8TextCodec * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUTF8TextCodec_class) {
  emscripten::class_<vtkUTF8TextCodec, emscripten::base<vtkTextCodec>>("vtkUTF8TextCodec")
    .smart_ptr<vtkSmartPointer<vtkUTF8TextCodec>>("vtkSmartPointer<vtkUTF8TextCodec>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkUTF8TextCodec>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUTF8TextCodec::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUTF8TextCodec& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUTF8TextCodec::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUTF8TextCodec::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUTF8TextCodec::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUTF8TextCodec& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Name", emscripten::optional_override([](vtkUTF8TextCodec& self) -> std::string {  return self.Name();}));
}
