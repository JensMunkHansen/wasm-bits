// JavaScript wrapper for vtkFreeTypeTools with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingFreeType.js/vtkRenderingFreeType.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingFreeType.js/vtkFreeTypeToolsEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/FreeType/vtkFreeTypeTools.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextProperty.h"
#include "vtkStdString.h"
#include "vtkTextRenderer.h"
#include "vtkImageData.h"
#include "vtkPath.h"
#include "vtkFreeTypeTools.h"


EMSCRIPTEN_BINDINGS(vtkFreeTypeToolsCleanup_class) {
  emscripten::class_<vtkFreeTypeToolsCleanup>("vtkFreeTypeToolsCleanup")
    .smart_ptr<std::shared_ptr<vtkFreeTypeToolsCleanup>>("std::shared_ptr<vtkFreeTypeToolsCleanup>")
    .constructor(&std::make_shared<vtkFreeTypeToolsCleanup>);
}
template<> void emscripten::internal::raw_destructor<vtkFreeTypeTools>(vtkFreeTypeTools * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFreeTypeTools_class) {
  emscripten::class_<vtkFreeTypeTools, emscripten::base<vtkObject>>("vtkFreeTypeTools")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFreeTypeTools::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFreeTypeTools& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFreeTypeTools::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFreeTypeTools::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFreeTypeTools::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFreeTypeTools& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("GetInstance", &vtkFreeTypeTools::GetInstance, emscripten::allow_raw_pointers())
    .class_function("SetInstance", &vtkFreeTypeTools::SetInstance, emscripten::allow_raw_pointers())
    .function("SetDebugTextures", &vtkFreeTypeTools::SetDebugTextures)
    .function("GetDebugTextures", &vtkFreeTypeTools::GetDebugTextures)
    .function("DebugTexturesOn", &vtkFreeTypeTools::DebugTexturesOn)
    .function("DebugTexturesOff", &vtkFreeTypeTools::DebugTexturesOff)
    .function("SetMaximumNumberOfFaces", &vtkFreeTypeTools::SetMaximumNumberOfFaces)
    .function("GetMaximumNumberOfFacesMinValue", &vtkFreeTypeTools::GetMaximumNumberOfFacesMinValue)
    .function("GetMaximumNumberOfFacesMaxValue", &vtkFreeTypeTools::GetMaximumNumberOfFacesMaxValue)
    .function("GetMaximumNumberOfFaces", &vtkFreeTypeTools::GetMaximumNumberOfFaces)
    .function("SetMaximumNumberOfSizes", &vtkFreeTypeTools::SetMaximumNumberOfSizes)
    .function("GetMaximumNumberOfSizesMinValue", &vtkFreeTypeTools::GetMaximumNumberOfSizesMinValue)
    .function("GetMaximumNumberOfSizesMaxValue", &vtkFreeTypeTools::GetMaximumNumberOfSizesMaxValue)
    .function("GetMaximumNumberOfSizes", &vtkFreeTypeTools::GetMaximumNumberOfSizes)
    .function("SetMaximumNumberOfBytes", &vtkFreeTypeTools::SetMaximumNumberOfBytes)
    .function("GetMaximumNumberOfBytesMinValue", &vtkFreeTypeTools::GetMaximumNumberOfBytesMinValue)
    .function("GetMaximumNumberOfBytesMaxValue", &vtkFreeTypeTools::GetMaximumNumberOfBytesMaxValue)
    .function("GetMaximumNumberOfBytes", &vtkFreeTypeTools::GetMaximumNumberOfBytes)
    .function("StringToPath", &vtkFreeTypeTools::StringToPath, emscripten::allow_raw_pointers())
    .function("GetConstrainedFontSize", &vtkFreeTypeTools::GetConstrainedFontSize, emscripten::allow_raw_pointers())
    .class_function("HashString", emscripten::optional_override([]( const std::string & arg_0) -> unsigned short {  return vtkFreeTypeTools::HashString( arg_0.c_str());}))
    .class_function("HashBuffer", emscripten::optional_override([]( std::uintptr_t arg_0, size_t arg_1, unsigned int arg_2) -> unsigned int {  return vtkFreeTypeTools::HashBuffer(reinterpret_cast<void*>(arg_0), arg_1, arg_2);}))
    .function("MapTextPropertyToId", emscripten::optional_override([](vtkFreeTypeTools& self, vtkTextProperty* arg_0, std::uintptr_t arg_1) -> void {  return self.MapTextPropertyToId( arg_0,reinterpret_cast<size_t*>(arg_1 * sizeof(size_t)));}), emscripten::allow_raw_pointers())
    .function("MapIdToTextProperty", &vtkFreeTypeTools::MapIdToTextProperty, emscripten::allow_raw_pointers())
    .function("SetScaleToPowerTwo", &vtkFreeTypeTools::SetScaleToPowerTwo)
    .function("GetScaleToPowerTwo", &vtkFreeTypeTools::GetScaleToPowerTwo)
    .function("ScaleToPowerTwoOn", &vtkFreeTypeTools::ScaleToPowerTwoOn)
    .function("ScaleToPowerTwoOff", &vtkFreeTypeTools::ScaleToPowerTwoOff)
    .function("SetForceCompiledFonts", &vtkFreeTypeTools::SetForceCompiledFonts)
    .function("GetForceCompiledFonts", &vtkFreeTypeTools::GetForceCompiledFonts)
    .function("ForceCompiledFontsOn", &vtkFreeTypeTools::ForceCompiledFontsOn)
    .function("ForceCompiledFontsOff", &vtkFreeTypeTools::ForceCompiledFontsOff);
}
