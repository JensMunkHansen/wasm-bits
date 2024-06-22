// JavaScript wrapper for vtkProgrammableElectronicData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkDomainsChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkProgrammableElectronicDataEmbinding.cxx \
 /home/jmh/github/vtk/Domains/Chemistry/vtkProgrammableElectronicData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkDataObject.h"
#include "vtkProgrammableElectronicData.h"

template<> void emscripten::internal::raw_destructor<vtkProgrammableElectronicData>(vtkProgrammableElectronicData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProgrammableElectronicData_class) {
  emscripten::class_<vtkProgrammableElectronicData, emscripten::base<vtkAbstractElectronicData>>("vtkProgrammableElectronicData")
    .smart_ptr<vtkSmartPointer<vtkProgrammableElectronicData>>("vtkSmartPointer<vtkProgrammableElectronicData>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkProgrammableElectronicData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProgrammableElectronicData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProgrammableElectronicData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProgrammableElectronicData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProgrammableElectronicData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProgrammableElectronicData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProgrammableElectronicData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfMOs", &vtkProgrammableElectronicData::GetNumberOfMOs)
    .function("SetNumberOfMOs", &vtkProgrammableElectronicData::SetNumberOfMOs)
    .function("GetNumberOfElectrons", &vtkProgrammableElectronicData::GetNumberOfElectrons)
    .function("SetNumberOfElectrons", &vtkProgrammableElectronicData::SetNumberOfElectrons)
    .function("GetMO", &vtkProgrammableElectronicData::GetMO, emscripten::allow_raw_pointers())
    .function("SetMO", &vtkProgrammableElectronicData::SetMO, emscripten::allow_raw_pointers())
    .function("GetElectronDensity", &vtkProgrammableElectronicData::GetElectronDensity, emscripten::allow_raw_pointers())
    .function("SetElectronDensity", &vtkProgrammableElectronicData::SetElectronDensity, emscripten::allow_raw_pointers())
    .function("SetPadding", &vtkProgrammableElectronicData::SetPadding)
    .function("DeepCopy", &vtkProgrammableElectronicData::DeepCopy, emscripten::allow_raw_pointers());
}
