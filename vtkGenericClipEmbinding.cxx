// JavaScript wrapper for vtkGenericClip with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneric.js/vtkFiltersGeneric.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneric.js/vtkGenericClipEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Generic/vtkGenericClip.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitFunction.h"
#include "vtkUnstructuredGrid.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkGenericClip.h"

template<> void emscripten::internal::raw_destructor<vtkGenericClip>(vtkGenericClip * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericClip_class) {
  emscripten::class_<vtkGenericClip, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkGenericClip")
    .smart_ptr<vtkSmartPointer<vtkGenericClip>>("vtkSmartPointer<vtkGenericClip>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGenericClip>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericClip::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericClip& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericClip::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericClip::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericClip::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericClip& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetValue", &vtkGenericClip::SetValue)
    .function("GetValue", &vtkGenericClip::GetValue)
    .function("SetInsideOut", &vtkGenericClip::SetInsideOut)
    .function("GetInsideOut", &vtkGenericClip::GetInsideOut)
    .function("InsideOutOn", &vtkGenericClip::InsideOutOn)
    .function("InsideOutOff", &vtkGenericClip::InsideOutOff)
    .function("SetClipFunction", &vtkGenericClip::SetClipFunction, emscripten::allow_raw_pointers())
    .function("GetClipFunction", &vtkGenericClip::GetClipFunction, emscripten::allow_raw_pointers())
    .function("SetGenerateClipScalars", &vtkGenericClip::SetGenerateClipScalars)
    .function("GetGenerateClipScalars", &vtkGenericClip::GetGenerateClipScalars)
    .function("GenerateClipScalarsOn", &vtkGenericClip::GenerateClipScalarsOn)
    .function("GenerateClipScalarsOff", &vtkGenericClip::GenerateClipScalarsOff)
    .function("SetGenerateClippedOutput", &vtkGenericClip::SetGenerateClippedOutput)
    .function("GetGenerateClippedOutput", &vtkGenericClip::GetGenerateClippedOutput)
    .function("GenerateClippedOutputOn", &vtkGenericClip::GenerateClippedOutputOn)
    .function("GenerateClippedOutputOff", &vtkGenericClip::GenerateClippedOutputOff)
    .function("SetMergeTolerance", &vtkGenericClip::SetMergeTolerance)
    .function("GetMergeToleranceMinValue", &vtkGenericClip::GetMergeToleranceMinValue)
    .function("GetMergeToleranceMaxValue", &vtkGenericClip::GetMergeToleranceMaxValue)
    .function("GetMergeTolerance", &vtkGenericClip::GetMergeTolerance)
    .function("GetClippedOutput", &vtkGenericClip::GetClippedOutput, emscripten::allow_raw_pointers())
    .function("GetNumberOfOutputs", &vtkGenericClip::GetNumberOfOutputs)
    .function("SetLocator", &vtkGenericClip::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkGenericClip::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkGenericClip::CreateDefaultLocator)
    .function("GetMTime", &vtkGenericClip::GetMTime)
    .function("GetInputScalarsSelection", emscripten::optional_override([](vtkGenericClip& self) -> std::string {  return self.GetInputScalarsSelection();}))
    .function("SelectInputScalars", emscripten::optional_override([](vtkGenericClip& self, const std::string & arg_0) -> void {  return self.SelectInputScalars( arg_0.c_str());}));
}
