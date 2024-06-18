// JavaScript wrapper for vtkBlueObeliskData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkDomainsChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkBlueObeliskDataEmbinding.cxx \
 /home/jmh/github/vtk/Domains/Chemistry/vtkBlueObeliskData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStringArray.h"
#include "vtkFloatArray.h"
#include "vtkUnsignedShortArray.h"
#include "vtkBlueObeliskData.h"

template<> void emscripten::internal::raw_destructor<vtkBlueObeliskData>(vtkBlueObeliskData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBlueObeliskData_class) {
  emscripten::class_<vtkBlueObeliskData, emscripten::base<vtkObject>>("vtkBlueObeliskData")
    .smart_ptr<vtkSmartPointer<vtkBlueObeliskData>>("vtkSmartPointer<vtkBlueObeliskData>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBlueObeliskData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBlueObeliskData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBlueObeliskData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBlueObeliskData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBlueObeliskData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBlueObeliskData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBlueObeliskData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkBlueObeliskData::Initialize)
    .function("IsInitialized", &vtkBlueObeliskData::IsInitialized)
    .function("LockWriteMutex", &vtkBlueObeliskData::LockWriteMutex)
    .function("UnlockWriteMutex", &vtkBlueObeliskData::UnlockWriteMutex)
    .function("GetNumberOfElements", &vtkBlueObeliskData::GetNumberOfElements)
    .function("GetSymbols", &vtkBlueObeliskData::GetSymbols, emscripten::allow_raw_pointers())
    .function("GetLowerSymbols", &vtkBlueObeliskData::GetLowerSymbols, emscripten::allow_raw_pointers())
    .function("GetNames", &vtkBlueObeliskData::GetNames, emscripten::allow_raw_pointers())
    .function("GetLowerNames", &vtkBlueObeliskData::GetLowerNames, emscripten::allow_raw_pointers())
    .function("GetPeriodicTableBlocks", &vtkBlueObeliskData::GetPeriodicTableBlocks, emscripten::allow_raw_pointers())
    .function("GetElectronicConfigurations", &vtkBlueObeliskData::GetElectronicConfigurations, emscripten::allow_raw_pointers())
    .function("GetFamilies", &vtkBlueObeliskData::GetFamilies, emscripten::allow_raw_pointers())
    .function("GetMasses", &vtkBlueObeliskData::GetMasses, emscripten::allow_raw_pointers())
    .function("GetExactMasses", &vtkBlueObeliskData::GetExactMasses, emscripten::allow_raw_pointers())
    .function("GetIonizationEnergies", &vtkBlueObeliskData::GetIonizationEnergies, emscripten::allow_raw_pointers())
    .function("GetElectronAffinities", &vtkBlueObeliskData::GetElectronAffinities, emscripten::allow_raw_pointers())
    .function("GetPaulingElectronegativities", &vtkBlueObeliskData::GetPaulingElectronegativities, emscripten::allow_raw_pointers())
    .function("GetCovalentRadii", &vtkBlueObeliskData::GetCovalentRadii, emscripten::allow_raw_pointers())
    .function("GetVDWRadii", &vtkBlueObeliskData::GetVDWRadii, emscripten::allow_raw_pointers())
    .function("GetDefaultColors", &vtkBlueObeliskData::GetDefaultColors, emscripten::allow_raw_pointers())
    .function("GetBoilingPoints", &vtkBlueObeliskData::GetBoilingPoints, emscripten::allow_raw_pointers())
    .function("GetMeltingPoints", &vtkBlueObeliskData::GetMeltingPoints, emscripten::allow_raw_pointers())
    .function("GetPeriods", &vtkBlueObeliskData::GetPeriods, emscripten::allow_raw_pointers())
    .function("GetGroups", &vtkBlueObeliskData::GetGroups, emscripten::allow_raw_pointers());
}
