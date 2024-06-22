// JavaScript wrapper for vtkImageReader2Factory with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkImageReader2FactoryEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkImageReader2Factory.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageReader2.h"
#include "vtkImageReader2Collection.h"
#include "vtkImageReader2Factory.h"

template<> void emscripten::internal::raw_destructor<vtkImageReader2Factory>(vtkImageReader2Factory * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageReader2Factory_class) {
  emscripten::class_<vtkImageReader2Factory, emscripten::base<vtkObject>>("vtkImageReader2Factory")
    .smart_ptr<vtkSmartPointer<vtkImageReader2Factory>>("vtkSmartPointer<vtkImageReader2Factory>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageReader2Factory>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageReader2Factory::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageReader2Factory& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageReader2Factory::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageReader2Factory::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageReader2Factory::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageReader2Factory& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("RegisterReader", &vtkImageReader2Factory::RegisterReader, emscripten::allow_raw_pointers())
    .class_function("CreateImageReader2", emscripten::optional_override([]( const std::string & arg_0) -> vtkImageReader2* {  return vtkImageReader2Factory::CreateImageReader2( arg_0.c_str());}), emscripten::allow_raw_pointers())
    .class_function("CreateImageReader2FromExtension", emscripten::optional_override([]( const std::string & arg_0) -> vtkImageReader2* {  return vtkImageReader2Factory::CreateImageReader2FromExtension( arg_0.c_str());}), emscripten::allow_raw_pointers())
    .class_function("GetRegisteredReaders", &vtkImageReader2Factory::GetRegisteredReaders, emscripten::allow_raw_pointers())
    .class_function("CheckExtensionIsInExtensions", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1) -> bool {  return vtkImageReader2Factory::CheckExtensionIsInExtensions( arg_0.c_str(), arg_1.c_str());}));
}
