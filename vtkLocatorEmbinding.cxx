// JavaScript wrapper for vtkLocator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkLocatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkLocator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkPolyData.h"
#include "vtkLocator.h"

template<> void emscripten::internal::raw_destructor<vtkLocator>(vtkLocator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLocator_class) {
  emscripten::class_<vtkLocator, emscripten::base<vtkObject>>("vtkLocator")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLocator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLocator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLocator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLocator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLocator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLocator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDataSet", &vtkLocator::SetDataSet, emscripten::allow_raw_pointers())
    .function("GetDataSet", &vtkLocator::GetDataSet, emscripten::allow_raw_pointers())
    .function("SetMaxLevel", &vtkLocator::SetMaxLevel)
    .function("GetMaxLevelMinValue", &vtkLocator::GetMaxLevelMinValue)
    .function("GetMaxLevelMaxValue", &vtkLocator::GetMaxLevelMaxValue)
    .function("GetMaxLevel", &vtkLocator::GetMaxLevel)
    .function("GetLevel", &vtkLocator::GetLevel)
    .function("SetAutomatic", &vtkLocator::SetAutomatic)
    .function("GetAutomatic", &vtkLocator::GetAutomatic)
    .function("AutomaticOn", &vtkLocator::AutomaticOn)
    .function("AutomaticOff", &vtkLocator::AutomaticOff)
    .function("SetTolerance", &vtkLocator::SetTolerance)
    .function("GetToleranceMinValue", &vtkLocator::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkLocator::GetToleranceMaxValue)
    .function("GetTolerance", &vtkLocator::GetTolerance)
    .function("SetUseExistingSearchStructure", &vtkLocator::SetUseExistingSearchStructure)
    .function("GetUseExistingSearchStructure", &vtkLocator::GetUseExistingSearchStructure)
    .function("UseExistingSearchStructureOn", &vtkLocator::UseExistingSearchStructureOn)
    .function("UseExistingSearchStructureOff", &vtkLocator::UseExistingSearchStructureOff)
    .function("Update", &vtkLocator::Update)
    .function("Initialize", &vtkLocator::Initialize)
    .function("ForceBuildLocator", &vtkLocator::ForceBuildLocator)
    .function("GetBuildTime", &vtkLocator::GetBuildTime)
    .function("UsesGarbageCollector", &vtkLocator::UsesGarbageCollector);
}
