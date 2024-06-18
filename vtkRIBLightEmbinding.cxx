// JavaScript wrapper for vtkRIBLight with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkRIBLightEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkRIBLight.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkRIBLight.h"

template<> void emscripten::internal::raw_destructor<vtkRIBLight>(vtkRIBLight * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRIBLight_class) {
  emscripten::class_<vtkRIBLight, emscripten::base<vtkLight>>("vtkRIBLight")
    .smart_ptr<vtkSmartPointer<vtkRIBLight>>("vtkSmartPointer<vtkRIBLight>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRIBLight>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRIBLight::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRIBLight& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRIBLight::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRIBLight::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRIBLight::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRIBLight& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ShadowsOn", &vtkRIBLight::ShadowsOn)
    .function("ShadowsOff", &vtkRIBLight::ShadowsOff)
    .function("SetShadows", &vtkRIBLight::SetShadows)
    .function("GetShadows", &vtkRIBLight::GetShadows)
    .function("Render", &vtkRIBLight::Render, emscripten::allow_raw_pointers());
}
