// JavaScript wrapper for vtkClipVolume with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkClipVolumeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkClipVolume.h
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
#include "vtkClipVolume.h"

template<> void emscripten::internal::raw_destructor<vtkClipVolume>(vtkClipVolume * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkClipVolume_class) {
  emscripten::class_<vtkClipVolume, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkClipVolume")
    .smart_ptr<vtkSmartPointer<vtkClipVolume>>("vtkSmartPointer<vtkClipVolume>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkClipVolume>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClipVolume::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkClipVolume& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkClipVolume::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkClipVolume::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClipVolume::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkClipVolume& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetValue", &vtkClipVolume::SetValue)
    .function("GetValue", &vtkClipVolume::GetValue)
    .function("SetInsideOut", &vtkClipVolume::SetInsideOut)
    .function("GetInsideOut", &vtkClipVolume::GetInsideOut)
    .function("InsideOutOn", &vtkClipVolume::InsideOutOn)
    .function("InsideOutOff", &vtkClipVolume::InsideOutOff)
    .function("SetClipFunction", &vtkClipVolume::SetClipFunction, emscripten::allow_raw_pointers())
    .function("GetClipFunction", &vtkClipVolume::GetClipFunction, emscripten::allow_raw_pointers())
    .function("SetGenerateClipScalars", &vtkClipVolume::SetGenerateClipScalars)
    .function("GetGenerateClipScalars", &vtkClipVolume::GetGenerateClipScalars)
    .function("GenerateClipScalarsOn", &vtkClipVolume::GenerateClipScalarsOn)
    .function("GenerateClipScalarsOff", &vtkClipVolume::GenerateClipScalarsOff)
    .function("SetGenerateClippedOutput", &vtkClipVolume::SetGenerateClippedOutput)
    .function("GetGenerateClippedOutput", &vtkClipVolume::GetGenerateClippedOutput)
    .function("GenerateClippedOutputOn", &vtkClipVolume::GenerateClippedOutputOn)
    .function("GenerateClippedOutputOff", &vtkClipVolume::GenerateClippedOutputOff)
    .function("GetClippedOutput", &vtkClipVolume::GetClippedOutput, emscripten::allow_raw_pointers())
    .function("SetMixed3DCellGeneration", &vtkClipVolume::SetMixed3DCellGeneration)
    .function("GetMixed3DCellGeneration", &vtkClipVolume::GetMixed3DCellGeneration)
    .function("Mixed3DCellGenerationOn", &vtkClipVolume::Mixed3DCellGenerationOn)
    .function("Mixed3DCellGenerationOff", &vtkClipVolume::Mixed3DCellGenerationOff)
    .function("SetMergeTolerance", &vtkClipVolume::SetMergeTolerance)
    .function("GetMergeToleranceMinValue", &vtkClipVolume::GetMergeToleranceMinValue)
    .function("GetMergeToleranceMaxValue", &vtkClipVolume::GetMergeToleranceMaxValue)
    .function("GetMergeTolerance", &vtkClipVolume::GetMergeTolerance)
    .function("SetLocator", &vtkClipVolume::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkClipVolume::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkClipVolume::CreateDefaultLocator)
    .function("GetMTime", &vtkClipVolume::GetMTime);
}
