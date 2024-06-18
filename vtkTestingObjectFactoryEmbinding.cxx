// JavaScript wrapper for vtkTestingObjectFactory with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkTestingRendering.js/vtkTestingRendering.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkTestingRendering.js/vtkTestingObjectFactoryEmbinding.cxx \
 /home/jmh/github/vtk/Testing/Rendering/vtkTestingObjectFactory.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTestingObjectFactory.h"

template<> void emscripten::internal::raw_destructor<vtkTestingObjectFactory>(vtkTestingObjectFactory * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTestingObjectFactory_class) {
  emscripten::class_<vtkTestingObjectFactory, emscripten::base<vtkObjectFactory>>("vtkTestingObjectFactory")
    .smart_ptr<vtkSmartPointer<vtkTestingObjectFactory>>("vtkSmartPointer<vtkTestingObjectFactory>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTestingObjectFactory>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTestingObjectFactory::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTestingObjectFactory& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTestingObjectFactory::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTestingObjectFactory::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTestingObjectFactory::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTestingObjectFactory& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetVTKSourceVersion", emscripten::optional_override([](vtkTestingObjectFactory& self) -> std::string {  return self.GetVTKSourceVersion();}))
    .function("GetDescription", emscripten::optional_override([](vtkTestingObjectFactory& self) -> std::string {  return self.GetDescription();}));
}
