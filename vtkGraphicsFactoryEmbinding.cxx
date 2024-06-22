// JavaScript wrapper for vtkGraphicsFactory with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkGraphicsFactoryEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkGraphicsFactory.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkObject.h"
#include "vtkGraphicsFactory.h"

template<> void emscripten::internal::raw_destructor<vtkGraphicsFactory>(vtkGraphicsFactory * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGraphicsFactory_class) {
  emscripten::class_<vtkGraphicsFactory, emscripten::base<vtkObject>>("vtkGraphicsFactory")
    .smart_ptr<vtkSmartPointer<vtkGraphicsFactory>>("vtkSmartPointer<vtkGraphicsFactory>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGraphicsFactory>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphicsFactory::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGraphicsFactory& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGraphicsFactory::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGraphicsFactory::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphicsFactory::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGraphicsFactory& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("CreateInstance", emscripten::optional_override([]( const std::string & arg_0) -> vtkObject* {  return vtkGraphicsFactory::CreateInstance( arg_0.c_str());}), emscripten::allow_raw_pointers())
    .class_function("GetRenderLibrary", emscripten::optional_override([]() -> std::string {  return vtkGraphicsFactory::GetRenderLibrary();}))
    .class_function("SetUseMesaClasses", &vtkGraphicsFactory::SetUseMesaClasses)
    .class_function("GetUseMesaClasses", &vtkGraphicsFactory::GetUseMesaClasses)
    .class_function("SetOffScreenOnlyMode", &vtkGraphicsFactory::SetOffScreenOnlyMode)
    .class_function("GetOffScreenOnlyMode", &vtkGraphicsFactory::GetOffScreenOnlyMode);
}
