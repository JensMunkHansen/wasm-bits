// JavaScript wrapper for vtkClipPolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkClipPolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkClipPolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitFunction.h"
#include "vtkPolyData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkClipPolyData.h"

template<> void emscripten::internal::raw_destructor<vtkClipPolyData>(vtkClipPolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkClipPolyData_class) {
  emscripten::class_<vtkClipPolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkClipPolyData")
    .smart_ptr<vtkSmartPointer<vtkClipPolyData>>("vtkSmartPointer<vtkClipPolyData>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkClipPolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClipPolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkClipPolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkClipPolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkClipPolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClipPolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkClipPolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetValue", &vtkClipPolyData::SetValue)
    .function("GetValue", &vtkClipPolyData::GetValue)
    .function("SetInsideOut", &vtkClipPolyData::SetInsideOut)
    .function("GetInsideOut", &vtkClipPolyData::GetInsideOut)
    .function("InsideOutOn", &vtkClipPolyData::InsideOutOn)
    .function("InsideOutOff", &vtkClipPolyData::InsideOutOff)
    .function("SetClipFunction", &vtkClipPolyData::SetClipFunction, emscripten::allow_raw_pointers())
    .function("GetClipFunction", &vtkClipPolyData::GetClipFunction, emscripten::allow_raw_pointers())
    .function("SetGenerateClipScalars", &vtkClipPolyData::SetGenerateClipScalars)
    .function("GetGenerateClipScalars", &vtkClipPolyData::GetGenerateClipScalars)
    .function("GenerateClipScalarsOn", &vtkClipPolyData::GenerateClipScalarsOn)
    .function("GenerateClipScalarsOff", &vtkClipPolyData::GenerateClipScalarsOff)
    .function("SetGenerateClippedOutput", &vtkClipPolyData::SetGenerateClippedOutput)
    .function("GetGenerateClippedOutput", &vtkClipPolyData::GetGenerateClippedOutput)
    .function("GenerateClippedOutputOn", &vtkClipPolyData::GenerateClippedOutputOn)
    .function("GenerateClippedOutputOff", &vtkClipPolyData::GenerateClippedOutputOff)
    .function("GetClippedOutput", &vtkClipPolyData::GetClippedOutput, emscripten::allow_raw_pointers())
    .function("GetClippedOutputPort", &vtkClipPolyData::GetClippedOutputPort, emscripten::allow_raw_pointers())
    .function("SetLocator", &vtkClipPolyData::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkClipPolyData::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkClipPolyData::CreateDefaultLocator)
    .function("GetMTime", &vtkClipPolyData::GetMTime)
    .function("SetOutputPointsPrecision", &vtkClipPolyData::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkClipPolyData::GetOutputPointsPrecision);
}
