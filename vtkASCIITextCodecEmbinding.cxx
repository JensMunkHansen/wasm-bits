// JavaScript wrapper for vtkASCIITextCodec with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkASCIITextCodecEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkASCIITextCodec.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkASCIITextCodec.h"

template<> void emscripten::internal::raw_destructor<vtkASCIITextCodec>(vtkASCIITextCodec * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkASCIITextCodec_class) {
  emscripten::class_<vtkASCIITextCodec, emscripten::base<vtkTextCodec>>("vtkASCIITextCodec")
    .smart_ptr<vtkSmartPointer<vtkASCIITextCodec>>("vtkSmartPointer<vtkASCIITextCodec>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkASCIITextCodec>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkASCIITextCodec::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkASCIITextCodec& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkASCIITextCodec::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkASCIITextCodec::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkASCIITextCodec::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkASCIITextCodec& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Name", emscripten::optional_override([](vtkASCIITextCodec& self) -> std::string {  return self.Name();}))
    .function("CanHandle", emscripten::optional_override([](vtkASCIITextCodec& self, const std::string & arg_0) -> bool {  return self.CanHandle( arg_0.c_str());}));
}
