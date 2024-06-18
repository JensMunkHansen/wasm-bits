// JavaScript wrapper for vtkAbstractElectronicData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkAbstractElectronicDataEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkAbstractElectronicData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkDataObject.h"
#include "vtkAbstractElectronicData.h"

template<> void emscripten::internal::raw_destructor<vtkAbstractElectronicData>(vtkAbstractElectronicData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractElectronicData_class) {
  emscripten::class_<vtkAbstractElectronicData, emscripten::base<vtkDataObject>>("vtkAbstractElectronicData")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractElectronicData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractElectronicData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractElectronicData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractElectronicData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractElectronicData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractElectronicData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkAbstractElectronicData::GetDataObjectType)
    .function("GetHOMO", &vtkAbstractElectronicData::GetHOMO, emscripten::allow_raw_pointers())
    .function("GetLUMO", &vtkAbstractElectronicData::GetLUMO, emscripten::allow_raw_pointers())
    .function("GetHOMOOrbitalNumber", &vtkAbstractElectronicData::GetHOMOOrbitalNumber)
    .function("GetLUMOOrbitalNumber", &vtkAbstractElectronicData::GetLUMOOrbitalNumber)
    .function("IsHOMO", &vtkAbstractElectronicData::IsHOMO)
    .function("IsLUMO", &vtkAbstractElectronicData::IsLUMO)
    .function("DeepCopy", &vtkAbstractElectronicData::DeepCopy, emscripten::allow_raw_pointers())
    .function("GetPadding", &vtkAbstractElectronicData::GetPadding);
}
