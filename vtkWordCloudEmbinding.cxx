// JavaScript wrapper for vtkWordCloud with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkWordCloudEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkWordCloud.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWordCloud.h"

template<> void emscripten::internal::raw_destructor<vtkWordCloud>(vtkWordCloud * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWordCloud_class) {
  emscripten::class_<vtkWordCloud, emscripten::base<vtkImageAlgorithm>>("vtkWordCloud")
    .smart_ptr<vtkSmartPointer<vtkWordCloud>>("vtkSmartPointer<vtkWordCloud>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkWordCloud>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWordCloud::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWordCloud& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWordCloud::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWordCloud::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWordCloud::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWordCloud& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetBackgroundColorName", &vtkWordCloud::SetBackgroundColorName)
    .function("GetBackgroundColorName", &vtkWordCloud::GetBackgroundColorName)
    .function("SetBWMask", &vtkWordCloud::SetBWMask)
    .function("GetBWMask", &vtkWordCloud::GetBWMask)
    .function("SetColorSchemeName", &vtkWordCloud::SetColorSchemeName)
    .function("GetColorSchemeName", &vtkWordCloud::GetColorSchemeName)
    .function("SetDPI", &vtkWordCloud::SetDPI)
    .function("GetDPI", &vtkWordCloud::GetDPI)
    .function("SetFileName", &vtkWordCloud::SetFileName)
    .function("GetFileName", &vtkWordCloud::GetFileName)
    .function("SetFontFileName", &vtkWordCloud::SetFontFileName)
    .function("GetFontFileName", &vtkWordCloud::GetFontFileName)
    .function("SetGap", &vtkWordCloud::SetGap)
    .function("GetGap", &vtkWordCloud::GetGap)
    .function("SetMaskColorName", &vtkWordCloud::SetMaskColorName)
    .function("GetMaskColorName", &vtkWordCloud::GetMaskColorName)
    .function("SetMaskFileName", &vtkWordCloud::SetMaskFileName)
    .function("GetMaskFileName", &vtkWordCloud::GetMaskFileName)
    .function("SetMaxFontSize", &vtkWordCloud::SetMaxFontSize)
    .function("GetMaxFontSize", &vtkWordCloud::GetMaxFontSize)
    .function("SetMinFontSize", &vtkWordCloud::SetMinFontSize)
    .function("GetMinFontSize", &vtkWordCloud::GetMinFontSize)
    .function("SetMinFrequency", &vtkWordCloud::SetMinFrequency)
    .function("GetMinFrequency", &vtkWordCloud::GetMinFrequency)
    .function("SetFontMultiplier", &vtkWordCloud::SetFontMultiplier)
    .function("GetFontMultiplier", &vtkWordCloud::GetFontMultiplier)
    .function("SetOrientations", &vtkWordCloud::SetOrientations)
    .function("AddOrientation", &vtkWordCloud::AddOrientation)
    .function("GetOrientations", &vtkWordCloud::GetOrientations)
    .function("AddStopWord", &vtkWordCloud::AddStopWord)
    .function("ClearStopWords", &vtkWordCloud::ClearStopWords)
    .function("SetStopListFileName", &vtkWordCloud::SetStopListFileName)
    .function("GetStopListFileName", &vtkWordCloud::GetStopListFileName)
    .function("SetTitle", &vtkWordCloud::SetTitle)
    .function("GetTitle", &vtkWordCloud::GetTitle)
    .function("SetWordColorName", &vtkWordCloud::SetWordColorName)
    .function("GetWordColorName", &vtkWordCloud::GetWordColorName)
    .function("GetKeptWords", &vtkWordCloud::GetKeptWords)
    .function("GetSkippedWords", &vtkWordCloud::GetSkippedWords)
    .function("GetStoppedWords", &vtkWordCloud::GetStoppedWords);
}
