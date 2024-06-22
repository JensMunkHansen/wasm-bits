// JavaScript wrapper for vtkTextCodecFactory with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkTextCodecFactoryEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkTextCodecFactory.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextCodec.h"
#include "vtkTextCodecFactory.h"

template<> void emscripten::internal::raw_destructor<vtkTextCodecFactory>(vtkTextCodecFactory * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTextCodecFactory_class) {
  emscripten::class_<vtkTextCodecFactory, emscripten::base<vtkObject>>("vtkTextCodecFactory")
    .smart_ptr<vtkSmartPointer<vtkTextCodecFactory>>("vtkSmartPointer<vtkTextCodecFactory>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTextCodecFactory>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextCodecFactory::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTextCodecFactory& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTextCodecFactory::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTextCodecFactory::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextCodecFactory::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTextCodecFactory& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("UnRegisterAllCreateCallbacks", &vtkTextCodecFactory::UnRegisterAllCreateCallbacks)
    .class_function("CodecForName", emscripten::optional_override([]( const std::string & arg_0) -> vtkTextCodec* {  return vtkTextCodecFactory::CodecForName( arg_0.c_str());}), emscripten::allow_raw_pointers())
    .class_function("Initialize", &vtkTextCodecFactory::Initialize);
}
