// JavaScript wrapper for vtkUTF16TextCodec with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkUTF16TextCodecEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkUTF16TextCodec.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextCodec.h"
#include "vtkUTF16TextCodec.h"

template<> void emscripten::internal::raw_destructor<vtkUTF16TextCodec>(vtkUTF16TextCodec * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUTF16TextCodec_class) {
  emscripten::class_<vtkUTF16TextCodec, emscripten::base<vtkTextCodec>>("vtkUTF16TextCodec")
    .smart_ptr<vtkSmartPointer<vtkUTF16TextCodec>>("vtkSmartPointer<vtkUTF16TextCodec>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkUTF16TextCodec>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUTF16TextCodec::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUTF16TextCodec& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUTF16TextCodec::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUTF16TextCodec::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUTF16TextCodec::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUTF16TextCodec& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Name", emscripten::optional_override([](vtkUTF16TextCodec& self) -> std::string {  return self.Name();}))
    .function("CanHandle", emscripten::optional_override([](vtkUTF16TextCodec& self, const std::string & arg_0) -> bool {  return self.CanHandle( arg_0.c_str());}))
    .function("SetBigEndian", &vtkUTF16TextCodec::SetBigEndian);
}
