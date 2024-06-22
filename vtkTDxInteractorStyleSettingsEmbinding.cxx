// JavaScript wrapper for vtkTDxInteractorStyleSettings with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkTDxInteractorStyleSettingsEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkTDxInteractorStyleSettings.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTDxInteractorStyleSettings.h"

template<> void emscripten::internal::raw_destructor<vtkTDxInteractorStyleSettings>(vtkTDxInteractorStyleSettings * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTDxInteractorStyleSettings_class) {
  emscripten::class_<vtkTDxInteractorStyleSettings, emscripten::base<vtkObject>>("vtkTDxInteractorStyleSettings")
    .smart_ptr<vtkSmartPointer<vtkTDxInteractorStyleSettings>>("vtkSmartPointer<vtkTDxInteractorStyleSettings>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTDxInteractorStyleSettings>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTDxInteractorStyleSettings::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTDxInteractorStyleSettings& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTDxInteractorStyleSettings::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTDxInteractorStyleSettings::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTDxInteractorStyleSettings::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTDxInteractorStyleSettings& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetAngleSensitivity", &vtkTDxInteractorStyleSettings::SetAngleSensitivity)
    .function("GetAngleSensitivity", &vtkTDxInteractorStyleSettings::GetAngleSensitivity)
    .function("SetUseRotationX", &vtkTDxInteractorStyleSettings::SetUseRotationX)
    .function("GetUseRotationX", &vtkTDxInteractorStyleSettings::GetUseRotationX)
    .function("SetUseRotationY", &vtkTDxInteractorStyleSettings::SetUseRotationY)
    .function("GetUseRotationY", &vtkTDxInteractorStyleSettings::GetUseRotationY)
    .function("SetUseRotationZ", &vtkTDxInteractorStyleSettings::SetUseRotationZ)
    .function("GetUseRotationZ", &vtkTDxInteractorStyleSettings::GetUseRotationZ)
    .function("SetTranslationXSensitivity", &vtkTDxInteractorStyleSettings::SetTranslationXSensitivity)
    .function("GetTranslationXSensitivity", &vtkTDxInteractorStyleSettings::GetTranslationXSensitivity)
    .function("SetTranslationYSensitivity", &vtkTDxInteractorStyleSettings::SetTranslationYSensitivity)
    .function("GetTranslationYSensitivity", &vtkTDxInteractorStyleSettings::GetTranslationYSensitivity)
    .function("SetTranslationZSensitivity", &vtkTDxInteractorStyleSettings::SetTranslationZSensitivity)
    .function("GetTranslationZSensitivity", &vtkTDxInteractorStyleSettings::GetTranslationZSensitivity);
}
